/*
 * XREFs of NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A3730
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeNativeDumpFreeDumpDiskInfo @ 0x1401A225C (NvmeNativeDumpFreeDumpDiskInfo.c)
 *     NvmeNativeDumpFreeDumpDriverInfo @ 0x1401A22A0 (NvmeNativeDumpFreeDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpAdapterInfo @ 0x1401A2C88 (NvmeNativeDumpCreateDumpAdapterInfo.c)
 *     NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A3180 (NvmeNativeDumpCreateDumpDiskInfo.c)
 *     NvmeNativeDumpFreeDumpAdapterInfo @ 0x1401A3548 (NvmeNativeDumpFreeDumpAdapterInfo.c)
 */

__int64 __fastcall NvmeNativeDumpStorageGetDumpInfoIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v5; // rsi
  int v6; // r15d
  _BYTE *v7; // rsi
  __int64 v8; // rsi
  char *v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  char *v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // r10
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  PVOID v19; // r12
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
  char v31; // r12
  char *v32; // r12
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
  __int64 v47; // [rsp+30h] [rbp-39h]
  char v48; // [rsp+60h] [rbp-9h] BYREF
  char v49[7]; // [rsp+61h] [rbp-8h] BYREF
  PVOID v50; // [rsp+68h] [rbp-1h] BYREF
  char *v51; // [rsp+70h] [rbp+7h] BYREF
  GUID v52; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v50 = 0LL;
  *(_QWORD *)&v52.Data1 = 0LL;
  v51 = 0LL;
  v48 = 0;
  v49[0] = 0;
  DbgPrintEx(0x59u, 2u, "\n*\n* NvmeNativeDumpStorageGetDumpInfoIoctl\n*\n\n");
  v5 = (__int64 *)(a2 + 184);
  if ( g_Bailout )
  {
    v6 = -1073741637;
    goto LABEL_30;
  }
  v7 = (_BYTE *)*v5;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v6 = -1073741790;
LABEL_5:
    v5 = (__int64 *)(a2 + 184);
    goto LABEL_30;
  }
  if ( *((_DWORD *)v7 + 4) < 0x48u )
  {
    v6 = -1073741789;
    goto LABEL_5;
  }
  v8 = *((_QWORD *)v7 + 4);
  if ( *(_DWORD *)v8 != 72 )
  {
    v6 = -1073741811;
    goto LABEL_5;
  }
  v6 = NvmeNativeDumpCreateDumpDiskInfo(a1, &v52);
  if ( v6 >= 0 )
  {
    v6 = NvmeNativeDumpCreateDumpAdapterInfo(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL), a1, v8, &v50, &v48, &v51, v49);
    if ( v6 < 0 )
    {
      v19 = v50;
      v12 = v51;
    }
    else
    {
      v9 = v51;
      if ( !v49[0] )
      {
        v10 = *(_QWORD **)(v8 + 64);
        v11 = v51 + 8;
        if ( *v10 != v8 + 56 )
          goto LABEL_19;
        *v11 = v8 + 56;
        *((_QWORD *)v9 + 2) = v10;
        *v10 = v11;
        *(_QWORD *)(v8 + 64) = v11;
      }
      v12 = 0LL;
      v13 = *(_QWORD **)&v52.Data1;
      v14 = v50;
      v51 = 0LL;
      *(_QWORD *)(*(_QWORD *)&v52.Data1 + 64LL) = v9;
      if ( !v48 )
      {
        v15 = *(_QWORD **)(v8 + 48);
        v16 = v14 + 1;
        if ( *v15 != v8 + 40 )
          goto LABEL_19;
        *v16 = v8 + 40;
        v14[2] = v15;
        *v15 = v16;
        *(_QWORD *)(v8 + 48) = v16;
      }
      v13[7] = v14;
      v17 = *(_QWORD **)(v8 + 32);
      v18 = v13 + 1;
      v19 = 0LL;
      v50 = 0LL;
      if ( *v17 != v8 + 24 )
LABEL_19:
        __fastfail(3u);
      *v18 = v8 + 24;
      v13[2] = v17;
      *v17 = v18;
      *(_QWORD *)(v8 + 32) = v18;
      *(_QWORD *)(v8 + 16) = v13;
      *(_QWORD *)&v52.Data1 = 0LL;
    }
    if ( !v49[0] && v12 )
      NvmeNativeDumpFreeDumpDriverInfo((PVOID *)&v51);
    if ( !v48 && v19 )
      NvmeNativeDumpFreeDumpAdapterInfo(&v50);
  }
  v5 = (__int64 *)(a2 + 184);
  if ( *(_QWORD *)&v52.Data1 )
    NvmeNativeDumpFreeDumpDiskInfo((PVOID *)&v52);
LABEL_30:
  v20 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v20 )
    goto LABEL_96;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v22 = *v5;
  if ( *(_BYTE *)*v5 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_96;
    v24 = &EventNonReadWriteRequestComplete;
    goto LABEL_95;
  }
  if ( *(_BYTE *)*v5 != 15 )
  {
    if ( *(_BYTE *)*v5 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v2 = *v23;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v21, v22, &v52, a2, v45, v46);
      }
      goto LABEL_96;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_96;
    v24 = &EventPnpRequestComplete;
LABEL_95:
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v52, a2, v45);
    goto LABEL_96;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_96;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0LL;
  v48 = 0;
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
      LOBYTE(v47) = v38;
      LOBYTE(v46) = v40;
      LODWORD(v45) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v21, v25, &v52, a2, v45, v46, v47, v28, v29, v30, a2);
    }
    goto LABEL_96;
  }
  v32 = 0LL;
  v49[0] = 0;
  if ( !*(_DWORD *)(v25 + 20) )
  {
    v33 = *(_DWORD *)(v25 + 56);
    v34 = 0LL;
    LODWORD(v50) = 0;
    LODWORD(v51) = v33;
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
                  v49[0] = 1;
                  if ( *(_BYTE *)(v36 + v25 + 10) )
                    v32 = (char *)(v36 + v25 + 24);
                  v26 = *(_BYTE **)(v36 + v25 + 16);
                  v27 = *(_BYTE *)(v36 + v25 + 9);
                  v48 = *(_BYTE *)(v36 + v25 + 8);
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
            if ( v49[0] )
              break;
          }
        }
        v34 = (unsigned int)((_DWORD)v50 + 1);
        LODWORD(v50) = v34;
      }
      while ( (unsigned int)v34 < (unsigned int)v51 );
      v38 = v48;
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
