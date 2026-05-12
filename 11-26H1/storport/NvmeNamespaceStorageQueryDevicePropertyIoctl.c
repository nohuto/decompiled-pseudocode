/*
 * XREFs of NvmeNamespaceStorageQueryDevicePropertyIoctl @ 0x1401BDE9C
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeNamespaceGetStorageDeviceProperty @ 0x1401BDC3C (NvmeNamespaceGetStorageDeviceProperty.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDevicePropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // rax
  int StorageDeviceProperty; // r13d
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // bp
  char v17; // si
  char v18; // r11
  char v19; // r10
  char v20; // r14
  char *v21; // r14
  unsigned int v22; // r12d
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r15
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  char v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+61h] [rbp-57h]
  unsigned int v35; // [rsp+64h] [rbp-54h] BYREF
  GUID v36; // [rsp+68h] [rbp-50h] BYREF

  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v35 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = v4[1];
  if ( v6 )
  {
    v7 = 0LL;
    if ( v6 == 1 )
      StorageDeviceProperty = 0;
    else
      StorageDeviceProperty = -1073741637;
  }
  else
  {
    StorageDeviceProperty = NvmeNamespaceGetStorageDeviceProperty(a1, v4, &v35);
    v7 = v35;
    if ( StorageDeviceProperty < 0 )
      v7 = 0LL;
  }
  *(_QWORD *)(a2 + 56) = v7;
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = StorageDeviceProperty;
  if ( !v9 )
  {
    v36 = 0LL;
    IoGetActivityIdIrp(a2, &v36);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_73;
      v13 = &EventNonReadWriteRequestComplete;
      goto LABEL_72;
    }
    if ( *(_BYTE *)v11 != 15 )
    {
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_73;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v12 = *(int **)(a2 + 56);
          if ( v12 )
            v5 = *v12;
          McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v36, a2, v5, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_73;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_73;
      v13 = &EventPnpRequestComplete;
LABEL_72:
      McTemplateK0pd_EtwWriteTransfer(v10, v13, &v36, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_73;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_73;
    v14 = *(_QWORD *)(v11 + 8);
    v15 = 0LL;
    v33 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v14 + 2) != 40 )
    {
      v27 = *(_BYTE *)(v14 + 72);
      v15 = *(_BYTE **)(v14 + 32);
      v16 = *(_BYTE *)(v14 + 11);
      v26 = *(_BYTE *)(v14 + 4);
      if ( *(_BYTE *)(v14 + 2) )
        goto LABEL_73;
LABEL_47:
      LOBYTE(v10) = v27 - 8;
      if ( (v10 & 0x5D) != 0 )
        goto LABEL_73;
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v15 || !v16 )
        goto LABEL_66;
      v29 = *v15 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_64;
        v18 = v15[2];
        v17 = v15[1] & 0xF;
        v19 = v15[3];
      }
      else
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_64;
        v30 = v15 + 13;
        v17 = v15[2] & 0xF;
        v31 = v16;
        if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
          v31 = (unsigned __int8)v15[7] + 8;
        v10 = (unsigned __int64)&v15[v31];
        if ( (unsigned __int64)v30 <= v10 )
          v18 = v15[12];
        if ( (unsigned __int64)(v15 + 14) > v10 )
          v19 = 0;
        else
          v19 = *v30;
      }
      LOBYTE(v14) = 1;
LABEL_64:
      if ( (_BYTE)v14 )
        v20 = 1;
LABEL_66:
      if ( byte_140173441 < 0 )
      {
        if ( !v20 )
        {
          v19 = 0;
          v18 = 0;
          v17 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v36, a2, *(_DWORD *)(a2 + 48), v28, v26, v17, v18, v19, a2);
      }
      goto LABEL_73;
    }
    v21 = 0LL;
    v34 = 0;
    if ( !*(_DWORD *)(v14 + 20) )
    {
      v22 = 0;
      v35 = *(_DWORD *)(v14 + 56);
      if ( v35 )
      {
        do
        {
          v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v23 = *(unsigned int *)(v14 + 16);
            if ( (unsigned int)v10 < (unsigned int)v23 )
            {
              v24 = (unsigned int)v10;
              v25 = *(_DWORD *)(v10 + v14) - 64;
              if ( v25 )
              {
                v10 = (unsigned int)(v25 - 1);
                if ( (_DWORD)v10 )
                {
                  if ( (_DWORD)v10 == 1 )
                  {
                    v10 = v24 + 40;
                    if ( v24 + 40 <= v23 )
                    {
                      if ( *(_DWORD *)(v24 + v14 + 12) )
                        v21 = (char *)(v24 + v14 + 32);
                      v15 = *(_BYTE **)(v24 + v14 + 24);
LABEL_32:
                      v26 = *(_BYTE *)(v24 + v14 + 8);
                      v16 = *(_BYTE *)(v24 + v14 + 9);
                      goto LABEL_41;
                    }
                  }
                }
                else
                {
                  v10 = v24 + 56;
                  if ( v24 + 56 <= v23 )
                  {
                    v34 = 1;
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v15 = *(_BYTE **)(v24 + v14 + 16);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    v33 = *(_BYTE *)(v24 + v14 + 8);
                  }
                }
              }
              else
              {
                v10 = v24 + 40;
                if ( v24 + 40 <= v23 )
                {
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  goto LABEL_32;
                }
              }
              if ( v34 )
                break;
            }
          }
          ++v22;
        }
        while ( v22 < v35 );
        v26 = v33;
LABEL_41:
        if ( v21 )
        {
          v27 = *v21;
          v20 = 0;
          goto LABEL_47;
        }
      }
    }
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)StorageDeviceProperty;
}
