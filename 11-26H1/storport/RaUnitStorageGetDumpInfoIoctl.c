/*
 * XREFs of RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterFreeDumpInfo @ 0x1400494BC (RaidAdapterFreeDumpInfo.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterFreeDriverInfo @ 0x140061244 (RaidAdapterFreeDriverInfo.c)
 *     NvmeIceInterfaceHasDumpSupport @ 0x140070ECC (NvmeIceInterfaceHasDumpSupport.c)
 *     RaidUnitFreeDumpInfo @ 0x1400A7134 (RaidUnitFreeDumpInfo.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaidAdapterCreateDumpInfo @ 0x1401842F0 (RaidAdapterCreateDumpInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1401B9A8C (RaidUnitCreateDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageGetDumpInfoIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  int v6; // r12d
  __int64 v7; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  char *v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // r9
  _QWORD *v12; // rax
  PVOID v13; // rcx
  _QWORD *v14; // r10
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  PVOID v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  _BYTE *v26; // r9
  unsigned __int8 v27; // r14
  char v28; // si
  char v29; // r11
  char v30; // r10
  char v31; // r15
  char *v32; // r15
  int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  __int64 v36; // r8
  int v37; // ecx
  char v38; // r13
  char v39; // cl
  char v40; // r8
  char v41; // al
  char *v42; // r10
  unsigned int v43; // eax
  __int64 v45; // [rsp+20h] [rbp-49h]
  __int64 v46; // [rsp+28h] [rbp-41h]
  char v47; // [rsp+60h] [rbp-9h] BYREF
  char v48[7]; // [rsp+61h] [rbp-8h] BYREF
  PVOID v49; // [rsp+68h] [rbp-1h] BYREF
  char *v50; // [rsp+70h] [rbp+7h] BYREF
  GUID v51; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v47 = 0;
  v49 = 0LL;
  *(_QWORD *)&v51.Data1 = 0LL;
  v48[0] = 0;
  v50 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v6 = -1073741790;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v2 + 16) < 0x48u )
  {
    v6 = -1073741789;
    goto LABEL_30;
  }
  v7 = *(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)v7 != 72 )
  {
    v6 = -1073741811;
    goto LABEL_30;
  }
  v6 = RaidUnitCreateDumpInfo(a1, a2, &v51);
  if ( v6 >= 0 )
  {
    v6 = RaidAdapterCreateDumpInfo(*(_QWORD *)(a1 + 24), v7, &v49, &v47, &v50, v48);
    if ( v6 < 0 )
    {
      v19 = v49;
      v13 = v50;
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
      v9 = v50;
      v10 = *(_QWORD **)&v51.Data1;
      if ( IsEnabledDeviceUsageNoInline
        && NvmeIceInterfaceHasDumpSupport(*(_QWORD **)(*(_QWORD *)(*(_QWORD *)&v51.Data1 + 48LL) + 64LL)) )
      {
        *((_DWORD *)v9 + 16) |= 4u;
      }
      if ( !v48[0] )
      {
        v11 = *(_QWORD **)(v7 + 64);
        v12 = v9 + 8;
        if ( *v11 != v7 + 56 )
          goto LABEL_19;
        *v12 = v7 + 56;
        *((_QWORD *)v9 + 2) = v11;
        *v11 = v12;
        *(_QWORD *)(v7 + 64) = v12;
      }
      v13 = 0LL;
      v14 = v49;
      v10[8] = v9;
      v50 = 0LL;
      if ( !v47 )
      {
        v15 = *(_QWORD **)(v7 + 48);
        v16 = v14 + 1;
        if ( *v15 != v7 + 40 )
          goto LABEL_19;
        *v16 = v7 + 40;
        v14[2] = v15;
        *v15 = v16;
        *(_QWORD *)(v7 + 48) = v16;
      }
      v10[7] = v14;
      v17 = *(_QWORD **)(v7 + 32);
      v18 = v10 + 1;
      v19 = 0LL;
      v49 = 0LL;
      if ( *v17 != v7 + 24 )
LABEL_19:
        __fastfail(3u);
      *v18 = v7 + 24;
      v10[2] = v17;
      *v17 = v18;
      *(_QWORD *)(v7 + 32) = v18;
      *(_QWORD *)(v7 + 16) = v10;
      *(_QWORD *)&v51.Data1 = 0LL;
    }
    if ( !v48[0] && v13 )
      RaidAdapterFreeDriverInfo((PVOID *)&v50);
    if ( !v47 && v19 )
      RaidAdapterFreeDumpInfo(&v49);
  }
  if ( *(_QWORD *)&v51.Data1 )
    RaidUnitFreeDumpInfo((PVOID *)&v51);
LABEL_30:
  v20 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v20 )
    goto LABEL_96;
  v51 = 0LL;
  IoGetActivityIdIrp(a2, &v51);
  v22 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_96;
    v24 = &EventNonReadWriteRequestComplete;
    goto LABEL_95;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v3 = *v23;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v21, v22, &v51, a2, v45, v46);
      }
      goto LABEL_96;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_96;
    v24 = &EventPnpRequestComplete;
LABEL_95:
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v51, a2, v45);
    goto LABEL_96;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_96;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0LL;
  v47 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v25 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v25 + 72);
    v26 = *(_BYTE **)(v25 + 32);
    v27 = *(_BYTE *)(v25 + 11);
    v38 = *(_BYTE *)(v25 + 4);
    if ( *(_BYTE *)(v25 + 2) )
      goto LABEL_96;
LABEL_70:
    LOBYTE(v21) = v39 - 8;
    if ( (v21 & 0x5D) != 0 )
      goto LABEL_96;
    v40 = *(_BYTE *)(v25 + 3);
    if ( v40 == 1 || !v26 || !v27 )
      goto LABEL_89;
    v41 = *v26 & 0x7F;
    if ( v41 == 114 || v41 == 115 )
    {
      v21 = (unsigned __int64)&v26[v27];
      LOBYTE(v25) = 0;
      if ( (unsigned __int64)(v26 + 8) > v21 )
        goto LABEL_87;
      v29 = v26[2];
      v28 = v26[1] & 0xF;
      v30 = v26[3];
    }
    else
    {
      v21 = (unsigned __int64)&v26[v27];
      LOBYTE(v25) = 0;
      if ( (unsigned __int64)(v26 + 8) > v21 )
        goto LABEL_87;
      v42 = v26 + 13;
      v28 = v26[2] & 0xF;
      v43 = v27;
      if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
        v43 = (unsigned __int8)v26[7] + 8;
      v21 = (unsigned __int64)&v26[v43];
      if ( (unsigned __int64)v42 <= v21 )
        v29 = v26[12];
      if ( (unsigned __int64)(v26 + 14) > v21 )
        v30 = 0;
      else
        v30 = *v42;
    }
    LOBYTE(v25) = 1;
LABEL_87:
    if ( (_BYTE)v25 )
      v31 = 1;
LABEL_89:
    if ( byte_140173441 < 0 )
    {
      if ( !v31 )
      {
        v30 = 0;
        v29 = 0;
        v28 = 0;
      }
      LOBYTE(v46) = v40;
      LODWORD(v45) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v21, v25, &v51, a2, v45, v46, v38, v28, v29, v30, a2);
    }
    goto LABEL_96;
  }
  v32 = 0LL;
  v48[0] = 0;
  if ( !*(_DWORD *)(v25 + 20) )
  {
    v33 = *(_DWORD *)(v25 + 56);
    v34 = 0LL;
    LODWORD(v49) = 0;
    LODWORD(v50) = v33;
    if ( v33 )
    {
      do
      {
        v21 = *(unsigned int *)(v25 + 4 * v34 + 120);
        if ( (unsigned int)v21 >= 0x80 )
        {
          v35 = *(unsigned int *)(v25 + 16);
          if ( (unsigned int)v21 < (unsigned int)v35 )
          {
            v36 = (unsigned int)v21;
            v37 = *(_DWORD *)(v21 + v25) - 64;
            if ( v37 )
            {
              v21 = (unsigned int)(v37 - 1);
              if ( (_DWORD)v21 )
              {
                if ( (_DWORD)v21 == 1 )
                {
                  v21 = v36 + 40;
                  if ( v36 + 40 <= v35 )
                  {
                    if ( *(_DWORD *)(v36 + v25 + 12) )
                      v32 = (char *)(v36 + v25 + 32);
                    v26 = *(_BYTE **)(v36 + v25 + 24);
LABEL_55:
                    v38 = *(_BYTE *)(v36 + v25 + 8);
                    v27 = *(_BYTE *)(v36 + v25 + 9);
                    goto LABEL_64;
                  }
                }
              }
              else
              {
                v21 = v36 + 56;
                if ( v36 + 56 <= v35 )
                {
                  v48[0] = 1;
                  if ( *(_BYTE *)(v36 + v25 + 10) )
                    v32 = (char *)(v36 + v25 + 24);
                  v26 = *(_BYTE **)(v36 + v25 + 16);
                  v27 = *(_BYTE *)(v36 + v25 + 9);
                  v47 = *(_BYTE *)(v36 + v25 + 8);
                }
              }
            }
            else
            {
              v21 = v36 + 40;
              if ( v36 + 40 <= v35 )
              {
                if ( *(_BYTE *)(v36 + v25 + 10) )
                  v32 = (char *)(v36 + v25 + 24);
                v26 = *(_BYTE **)(v36 + v25 + 16);
                goto LABEL_55;
              }
            }
            if ( v48[0] )
              break;
          }
        }
        v34 = (unsigned int)((_DWORD)v49 + 1);
        LODWORD(v49) = v34;
      }
      while ( (unsigned int)v34 < (unsigned int)v50 );
      v38 = v47;
LABEL_64:
      if ( v32 )
      {
        v39 = *v32;
        v31 = 0;
        goto LABEL_70;
      }
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
