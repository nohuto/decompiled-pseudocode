/*
 * XREFs of RaUnitGetContiguousPhysicalAddressIoctl @ 0x14009BD04
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     RaidCallerIsAdmin @ 0x1400931F8 (RaidCallerIsAdmin.c)
 *     RaidLockContiguousPhysicalPages @ 0x1400952B0 (RaidLockContiguousPhysicalPages.c)
 *     WPP_SF_iD @ 0x1400AC954 (WPP_SF_iD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitGetContiguousPhysicalAddressIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  int v6; // ebp
  PVOID v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r14
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // r11
  char v21; // bl
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // r8
  char v32; // al
  char *v33; // r10
  unsigned int v34; // eax
  __int64 v36; // [rsp+20h] [rbp-C8h]
  char v37; // [rsp+60h] [rbp-88h]
  char v38; // [rsp+61h] [rbp-87h]
  unsigned int v39; // [rsp+64h] [rbp-84h]
  GUID v40[4]; // [rsp+68h] [rbp-80h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  memset((void *)&v40[1], 0, 32);
  v6 = 0;
  v7 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v40[3] = 0LL;
  if ( !RaidCallerIsAdmin() || *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v6 = -1073741790;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v2 + 16) < 0x18u )
  {
    v6 = -1073741820;
LABEL_21:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_iD(WPP_GLOBAL_Control->AttachedDevice, v8, v9, v7, v6);
    }
    goto LABEL_25;
  }
  if ( *(_DWORD *)(v2 + 8) < 8u )
  {
    v6 = -1073741789;
    goto LABEL_21;
  }
  v10 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v10 != 24 || *(_DWORD *)(v10 + 4) < 0x18u || (v7 = *(PVOID *)(v10 + 8), v7 > MmHighestUserAddress) )
  {
    v6 = -1073741811;
    goto LABEL_21;
  }
  if ( !MmIsAddressValid(*(PVOID *)(v10 + 8)) )
  {
    v6 = -1073741503;
    goto LABEL_21;
  }
  PhysicalAddress = MmGetPhysicalAddress(v7);
  if ( (*(_DWORD *)(v10 + 20) & 1) != 0 )
    v6 = RaidLockContiguousPhysicalPages(a1, PhysicalAddress, *(_DWORD *)(v10 + 16));
  if ( v6 < 0 )
    goto LABEL_21;
  **(PHYSICAL_ADDRESS **)(a2 + 24) = PhysicalAddress;
  *(_QWORD *)(a2 + 56) = 8LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Bu,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      v7,
      PhysicalAddress.QuadPart);
  }
LABEL_25:
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v12 )
    goto LABEL_91;
  v40[0] = 0LL;
  IoGetActivityIdIrp(a2, v40);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_91;
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_90;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_91;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        LODWORD(v36) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, v40, a2, v36, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_91;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_91;
    v16 = &EventPnpRequestComplete;
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
LABEL_90:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, v40, a2, v36);
    goto LABEL_91;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_91;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0LL;
  v37 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v17 + 72);
    v18 = *(_BYTE **)(v17 + 32);
    v19 = *(_BYTE *)(v17 + 11);
    v29 = *(_BYTE *)(v17 + 4);
    if ( *(_BYTE *)(v17 + 2) )
      goto LABEL_91;
LABEL_65:
    LOBYTE(v13) = v30 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_91;
    v31 = *(_BYTE *)(v17 + 3);
    if ( v31 == 1 || !v18 || !v19 )
      goto LABEL_84;
    v32 = *v18 & 0x7F;
    if ( v32 == 114 || v32 == 115 )
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_82;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v13 = (unsigned __int64)&v18[v19];
      LOBYTE(v17) = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_82;
      v33 = v18 + 13;
      v20 = v18[2] & 0xF;
      v34 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v34 = (unsigned __int8)v18[7] + 8;
      v13 = (unsigned __int64)&v18[v34];
      if ( (unsigned __int64)v33 <= v13 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) > v13 )
        v22 = 0;
      else
        v22 = *v33;
    }
    LOBYTE(v17) = 1;
LABEL_82:
    if ( (_BYTE)v17 )
      v23 = 1;
LABEL_84:
    if ( byte_140173441 < 0 )
    {
      if ( !v23 )
      {
        v22 = 0;
        v21 = 0;
        v20 = 0;
      }
      LODWORD(v36) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, v40, a2, v36, v31, v29, v20, v21, v22, a2);
    }
    goto LABEL_91;
  }
  v24 = 0LL;
  v38 = 0;
  if ( !*(_DWORD *)(v17 + 20) )
  {
    v25 = 0;
    v39 = *(_DWORD *)(v17 + 56);
    if ( v39 )
    {
      do
      {
        v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v26 = *(unsigned int *)(v17 + 16);
          if ( (unsigned int)v13 < (unsigned int)v26 )
          {
            v27 = (unsigned int)v13;
            v28 = *(_DWORD *)(v13 + v17) - 64;
            if ( v28 )
            {
              v13 = (unsigned int)(v28 - 1);
              if ( (_DWORD)v13 )
              {
                if ( (_DWORD)v13 == 1 )
                {
                  v13 = v27 + 40;
                  if ( v27 + 40 <= v26 )
                  {
                    if ( *(_DWORD *)(v27 + v17 + 12) )
                      v24 = (char *)(v27 + v17 + 32);
                    v18 = *(_BYTE **)(v27 + v17 + 24);
LABEL_50:
                    v29 = *(_BYTE *)(v27 + v17 + 8);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    goto LABEL_59;
                  }
                }
              }
              else
              {
                v13 = v27 + 56;
                if ( v27 + 56 <= v26 )
                {
                  v38 = 1;
                  if ( *(_BYTE *)(v27 + v17 + 10) )
                    v24 = (char *)(v27 + v17 + 24);
                  v18 = *(_BYTE **)(v27 + v17 + 16);
                  v19 = *(_BYTE *)(v27 + v17 + 9);
                  v37 = *(_BYTE *)(v27 + v17 + 8);
                }
              }
            }
            else
            {
              v13 = v27 + 40;
              if ( v27 + 40 <= v26 )
              {
                if ( *(_BYTE *)(v27 + v17 + 10) )
                  v24 = (char *)(v27 + v17 + 24);
                v18 = *(_BYTE **)(v27 + v17 + 16);
                goto LABEL_50;
              }
            }
            if ( v38 )
              break;
          }
        }
        ++v25;
      }
      while ( v25 < v39 );
      v29 = v37;
LABEL_59:
      if ( v24 )
      {
        v30 = *v24;
        v23 = 0;
        goto LABEL_65;
      }
    }
  }
LABEL_91:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
