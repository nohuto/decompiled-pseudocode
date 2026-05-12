/*
 * XREFs of RaUnitHwFirmwareGetInfoIoctl @ 0x140007B84
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1400080B4 (RaTranslateMiniportFirmwareInfoToHwFirmwareInfo.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

NTSTATUS __fastcall RaUnitHwFirmwareGetInfoIoctl(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 Pool2; // rax
  _DWORD *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // ebp
  void *v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // rdx
  _DWORD *v26; // rax
  __int64 v27; // rax
  void *v28; // rdx
  int *v29; // rax
  char v30; // al
  __int64 v31; // rdx
  char *v32; // r10
  char v33; // r11
  unsigned int v34; // eax
  char v35; // si
  char v36; // r10
  char v37; // r15
  _BYTE *v38; // r9
  unsigned __int8 v39; // r14
  char *v40; // r15
  unsigned int v41; // r13d
  unsigned __int64 v42; // r12
  __int64 v43; // r8
  int v44; // ecx
  char v45; // r12
  char v46; // cl
  char v47; // r8
  char v48; // [rsp+60h] [rbp-58h]
  char v49; // [rsp+61h] [rbp-57h]
  unsigned int v50; // [rsp+64h] [rbp-54h]
  __int128 v51; // [rsp+68h] [rbp-50h] BYREF

  v2 = a1[14];
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v51 = v4;
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v4 + 16) < 0x10u )
  {
    v17 = -1073741820;
LABEL_63:
    LOBYTE(v8) = 0;
    goto LABEL_65;
  }
  v7 = *(_DWORD *)(v4 + 8);
  if ( v7 < 0x38 )
  {
    v17 = -1073741789;
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(v6 + 8) & 1) != 0 )
  {
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) = v4 + 72;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a1[3] + 8LL), (PIRP)a2);
  }
  memset_0(*(void **)(a2 + 24), 0, v7);
  *(_BYTE *)(v6 + 8) |= 1u;
  *(_DWORD *)(v6 + 4) = 56;
  *(_BYTE *)(v6 + 33) &= ~1u;
  *(_DWORD *)v6 = 56;
  LOBYTE(v8) = 0;
  *(_BYTE *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 9) = 16711681;
  *(_DWORD *)(v6 + 16) = 4096;
  *(_DWORD *)(v6 + 20) = 0x10000;
  *(_DWORD *)(v6 + 24) = 32;
  *(_DWORD *)(v6 + 28) = 32;
  v9 = a1[20];
  if ( v9 )
  {
    *(_OWORD *)(v6 + 40) = *(_OWORD *)(v9 + 90);
  }
  else
  {
    v25 = a1[19];
    if ( v25
      && ((v26 = (_DWORD *)a1[3], *v26 != 1094997074)
        ? (*v26 != 1314275652
         ? (v27 = 232LL)
         : (v27 = (__int64)(v26 + 100)))
        : (v27 = (__int64)(v26 + 152)),
          (*(_DWORD *)(*(_QWORD *)v27 + 184LL) & 0x40) != 0) )
    {
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(v25 + 41);
    }
    else
    {
      *(_DWORD *)(v6 + 40) = *(_DWORD *)(v2 + 32);
    }
  }
  v10 = a1[1];
  v11 = *(_QWORD *)(v10 + 64);
  if ( *(_DWORD *)v11 == 1431193940 )
    v12 = *(_QWORD *)(v11 + 24);
  else
    v12 = *(_QWORD *)(v10 + 64);
  if ( *(_DWORD *)v11 != 1431193940 )
    v11 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 272LL, 1918067026LL);
  v14 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 28;
    *(_DWORD *)(Pool2 + 16) = 1771392;
    *(_QWORD *)(Pool2 + 4) = 0x455241574D524946LL;
    if ( v11 )
      v15 = *(_DWORD *)(v11 + 1392);
    else
      v15 = *(_DWORD *)(v12 + 4188);
    v14[3] = v15;
    v14[6] = 244;
    v14[8] = 24;
    v14[7] = 1;
    v14[9] = 1;
    v14[10] = v11 == 0;
    v14[11] = 56;
    v14[12] = 216;
    v14[15] = 24;
    v14[14] = 2;
    v16 = RaidUnitSendSrbIoControlSynchronously(
            (_DWORD)a1,
            a2,
            (_DWORD)v14,
            272,
            (__int64)PortSrbTranslateFirmwareIoctlStatusToNtStatus,
            0,
            64);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = v14;
      if ( v16 == -1073741801 )
        goto LABEL_19;
      if ( v16 != -1073741670 )
      {
        v17 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v17 = RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(a2, v14);
      v18 = v14;
      if ( v17 == -1073741801 )
        goto LABEL_19;
    }
    v18 = v14;
    if ( v17 != -1073741670 )
    {
LABEL_16:
      v19 = *(_DWORD *)(v6 + 4);
      v20 = *(unsigned int *)(v51 + 8);
      if ( (unsigned int)v20 >= v19 )
        v20 = v19;
      v18 = v14;
      *(_QWORD *)(a2 + 56) = v20;
    }
LABEL_19:
    ExFreePoolWithTag(v18, 0x72536152u);
    goto LABEL_20;
  }
  RaidLogAllocationFailure(v10, 64, 272, 1918067026, 0x80000000);
  v17 = -1073741670;
LABEL_65:
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_20:
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v17;
  if ( v21 )
    goto LABEL_24;
  v51 = 0LL;
  IoGetActivityIdIrp(a2, &v51);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_24;
    v28 = &EventNonReadWriteRequestComplete;
    goto LABEL_35;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_24;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v8 = *v29;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, (unsigned int)&v51, a2, v8, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_24;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_24;
    v28 = &EventPnpRequestComplete;
LABEL_35:
    McTemplateK0pd_EtwWriteTransfer(v22, v28, &v51, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_24;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_24;
  v31 = *(_QWORD *)(v23 + 8);
  v38 = 0LL;
  v48 = 0;
  v39 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( *(_BYTE *)(v31 + 2) == 40 )
  {
    v40 = 0LL;
    v49 = 0;
    if ( *(_DWORD *)(v31 + 20) )
      goto LABEL_24;
    v41 = 0;
    v50 = *(_DWORD *)(v31 + 56);
    if ( !v50 )
      goto LABEL_24;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v31 + 4LL * v41 + 120);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v42 = *(unsigned int *)(v31 + 16);
        if ( (unsigned int)v22 < (unsigned int)v42 )
        {
          v43 = (unsigned int)v22;
          v44 = *(_DWORD *)(v22 + v31) - 64;
          if ( v44 )
          {
            LODWORD(v22) = v44 - 1;
            if ( (_DWORD)v22 )
            {
              if ( (_DWORD)v22 == 1 )
              {
                LODWORD(v22) = v43 + 40;
                if ( v43 + 40 <= v42 )
                {
                  if ( *(_DWORD *)(v43 + v31 + 12) )
                    v40 = (char *)(v43 + v31 + 32);
                  v38 = *(_BYTE **)(v43 + v31 + 24);
                  goto LABEL_103;
                }
              }
            }
            else
            {
              LODWORD(v22) = v43 + 56;
              if ( v43 + 56 <= v42 )
              {
                v49 = 1;
                if ( *(_BYTE *)(v43 + v31 + 10) )
                  v40 = (char *)(v43 + v31 + 24);
                v38 = *(_BYTE **)(v43 + v31 + 16);
                v39 = *(_BYTE *)(v43 + v31 + 9);
                v48 = *(_BYTE *)(v43 + v31 + 8);
              }
            }
          }
          else
          {
            LODWORD(v22) = v43 + 40;
            if ( v43 + 40 <= v42 )
            {
              if ( *(_BYTE *)(v43 + v31 + 10) )
                v40 = (char *)(v43 + v31 + 24);
              v38 = *(_BYTE **)(v43 + v31 + 16);
LABEL_103:
              v45 = *(_BYTE *)(v43 + v31 + 8);
              v39 = *(_BYTE *)(v43 + v31 + 9);
LABEL_97:
              if ( v40 )
              {
                v46 = *v40;
                v37 = 0;
                goto LABEL_105;
              }
              goto LABEL_24;
            }
          }
          if ( v49 )
            goto LABEL_96;
        }
      }
      if ( ++v41 >= v50 )
      {
LABEL_96:
        v45 = v48;
        goto LABEL_97;
      }
    }
  }
  v46 = *(_BYTE *)(v31 + 72);
  v38 = *(_BYTE **)(v31 + 32);
  v39 = *(_BYTE *)(v31 + 11);
  v45 = *(_BYTE *)(v31 + 4);
  if ( *(_BYTE *)(v31 + 2) )
    goto LABEL_24;
LABEL_105:
  LOBYTE(v22) = v46 - 8;
  if ( (v22 & 0x5D) == 0 )
  {
    v47 = *(_BYTE *)(v31 + 3);
    if ( v47 == 1 || !v38 || !v39 )
    {
LABEL_58:
      if ( byte_140173441 < 0 )
      {
        if ( !v37 )
        {
          v36 = 0;
          v35 = 0;
          v33 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v22,
          v31,
          (unsigned int)&v51,
          a2,
          *(_DWORD *)(a2 + 48),
          v47,
          v45,
          v33,
          v35,
          v36,
          a2);
      }
      goto LABEL_24;
    }
    v30 = *v38 & 0x7F;
    if ( v30 == 114 || v30 == 115 )
    {
      v22 = (unsigned __int64)&v38[v39];
      LOBYTE(v31) = 0;
      if ( (unsigned __int64)(v38 + 8) > v22 )
      {
LABEL_56:
        if ( (_BYTE)v31 )
          v37 = 1;
        goto LABEL_58;
      }
      v35 = v38[2];
      v33 = v38[1] & 0xF;
      v36 = v38[3];
    }
    else
    {
      v22 = (unsigned __int64)&v38[v39];
      LOBYTE(v31) = 0;
      if ( (unsigned __int64)(v38 + 8) > v22 )
        goto LABEL_56;
      v32 = v38 + 13;
      v33 = v38[2] & 0xF;
      v34 = v39;
      if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
        v34 = (unsigned __int8)v38[7] + 8;
      v22 = (unsigned __int64)&v38[v34];
      if ( (unsigned __int64)v32 <= v22 )
        v35 = v38[12];
      if ( (unsigned __int64)(v38 + 14) > v22 )
        v36 = 0;
      else
        v36 = *v32;
    }
    LOBYTE(v31) = 1;
    goto LABEL_56;
  }
LABEL_24:
  IofCompleteRequest((PIRP)a2, 0);
  return v17;
}
