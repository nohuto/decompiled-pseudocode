/*
 * XREFs of NvmeAdapterStorageQueryProperty @ 0x14018377C
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeCommonGetStorageProtocolSpecificProperty @ 0x14011F36C (NvmeCommonGetStorageProtocolSpecificProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     NvmeAdapterGetStorageAdapterProperty @ 0x14019CD8C (NvmeAdapterGetStorageAdapterProperty.c)
 *     NvmeAdapterGetStorageFruIdProperty @ 0x14019CE78 (NvmeAdapterGetStorageFruIdProperty.c)
 *     NvmeAdapterGetStorageMiniportProperty @ 0x14019CF5C (NvmeAdapterGetStorageMiniportProperty.c)
 *     NvmeAdapterGetStorageSerialNumberProperty @ 0x14019D030 (NvmeAdapterGetStorageSerialNumberProperty.c)
 *     NvmeAdapterGetStorageStackProperty @ 0x14019D290 (NvmeAdapterGetStorageStackProperty.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019D994 (NvmeAdapterGetTemperatureProperty.c)
 */

__int64 __fastcall NvmeAdapterStorageQueryProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  int *v3; // r10
  int v4; // ebx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  unsigned int v18; // esi
  bool v19; // zf
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rax
  unsigned int StorageStackProperty; // eax
  unsigned int StorageProtocolSpecificProperty; // eax
  __int64 result; // rax
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // rdx
  _BYTE *v36; // r9
  unsigned __int8 v37; // r15
  char v38; // r11
  char v39; // r14
  char v40; // r10
  char v41; // r12
  char *v42; // r12
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned __int64 v45; // r13
  __int64 v46; // r8
  int v47; // ecx
  char v48; // r13
  char v49; // cl
  char v50; // al
  char v51; // r8
  char *v52; // r10
  unsigned int v53; // eax
  int v54; // [rsp+20h] [rbp-49h]
  char v55; // [rsp+60h] [rbp-9h]
  unsigned int v56; // [rsp+64h] [rbp-5h] BYREF
  char v57; // [rsp+68h] [rbp-1h]
  unsigned int v58; // [rsp+6Ch] [rbp+3h]
  GUID v59; // [rsp+70h] [rbp+7h] BYREF

  v3 = *(int **)(a2 + 24);
  v4 = 0;
  if ( !v3 )
    goto LABEL_28;
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v8 + 16) < 8u )
    goto LABEL_28;
  v9 = *v3;
  v10 = *v3;
  v56 = *(_DWORD *)(v8 + 8);
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      v13 = v12 - 44;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( !v14 || (v15 = v14 - 6) == 0 || (v16 = v15 - 8) == 0 )
        {
          if ( *(_QWORD *)(a1 + 608) )
            goto LABEL_11;
          v19 = (*(_DWORD *)(a1 + 416) & 0x40) == 0;
          goto LABEL_14;
        }
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_15;
        if ( v17 != 1 )
        {
LABEL_11:
          *(_QWORD *)(a2 + 56) = 0LL;
          v18 = -1073741808;
          goto LABEL_29;
        }
      }
      v19 = *(_QWORD *)(a1 + 608) == 0LL;
LABEL_14:
      if ( !v19 )
        goto LABEL_11;
    }
  }
LABEL_15:
  v20 = v3[1];
  if ( !v20 )
  {
    v21 = v9 - 1;
    if ( v21 )
    {
      v22 = v21 - 4;
      if ( v22 )
      {
        v23 = v22 - 44;
        if ( !v23 )
        {
LABEL_43:
          StorageProtocolSpecificProperty = NvmeCommonGetStorageProtocolSpecificProperty(
                                              *(_QWORD *)(a1 + 8),
                                              (_QWORD *)a2,
                                              a3);
          goto LABEL_44;
        }
        v24 = v23 - 2;
        if ( !v24 )
        {
          StorageProtocolSpecificProperty = NvmeAdapterGetTemperatureProperty(a1, a2);
LABEL_44:
          v18 = StorageProtocolSpecificProperty;
          goto LABEL_48;
        }
        v25 = v24 - 6;
        if ( v25 )
        {
          v26 = v25 - 8;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              if ( v27 != 1 )
              {
                *(_QWORD *)(a2 + 56) = 0LL;
LABEL_28:
                v18 = -1073741811;
                goto LABEL_29;
              }
              goto LABEL_43;
            }
            StorageStackProperty = NvmeAdapterGetStorageStackProperty(a1, v3, &v56);
          }
          else
          {
            StorageStackProperty = NvmeAdapterGetStorageFruIdProperty(a1, v3, &v56);
          }
        }
        else
        {
          StorageStackProperty = NvmeAdapterGetStorageSerialNumberProperty(a1, v3, &v56);
        }
      }
      else
      {
        StorageStackProperty = NvmeAdapterGetStorageMiniportProperty(a1, v3, &v56);
      }
    }
    else
    {
      StorageStackProperty = NvmeAdapterGetStorageAdapterProperty(a1, v3, &v56);
    }
    v18 = StorageStackProperty;
    *(_QWORD *)(a2 + 56) = v56;
LABEL_48:
    result = 259LL;
    if ( v18 == 259 )
    {
      *a3 = 0;
      return result;
    }
    goto LABEL_29;
  }
  if ( v20 != 1 )
    goto LABEL_11;
  v18 = 0;
LABEL_29:
  v19 = StorEtwLoggingEnabled == 0;
  *a3 = 1;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v18;
  if ( v19 )
    goto LABEL_106;
  v59 = 0LL;
  IoGetActivityIdIrp(a2, &v59);
  v29 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v29 != 14 )
  {
    if ( *(_BYTE *)v29 != 15 )
    {
      if ( *(_BYTE *)v29 == 27 )
      {
        if ( *(_BYTE *)(v29 + 1) == 7 && !*(_DWORD *)(v29 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v30 = *(int **)(a2 + 56);
            if ( v30 )
              v4 = *v30;
            McTemplateK0pqd_EtwWriteTransfer(v28, v29, &v59, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_106;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v34 = &EventPnpRequestComplete;
          v54 = *(_DWORD *)(a2 + 48);
LABEL_105:
          McTemplateK0pd_EtwWriteTransfer(v28, v34, &v59, a2, v54);
          goto LABEL_106;
        }
      }
      goto LABEL_106;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_106;
    v35 = *(_QWORD *)(v29 + 8);
    v36 = 0LL;
    v55 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    if ( *(_BYTE *)(v35 + 2) == 40 )
    {
      v42 = 0LL;
      v57 = 0;
      if ( *(_DWORD *)(v35 + 20) )
        goto LABEL_106;
      v43 = *(_DWORD *)(v35 + 56);
      v44 = 0LL;
      v56 = 0;
      v58 = v43;
      if ( !v43 )
        goto LABEL_106;
      do
      {
        v28 = *(unsigned int *)(v35 + 4 * v44 + 120);
        if ( (unsigned int)v28 >= 0x80 )
        {
          v45 = *(unsigned int *)(v35 + 16);
          if ( (unsigned int)v28 < (unsigned int)v45 )
          {
            v46 = (unsigned int)v28;
            v47 = *(_DWORD *)(v28 + v35) - 64;
            if ( v47 )
            {
              v28 = (unsigned int)(v47 - 1);
              if ( (_DWORD)v28 )
              {
                if ( (_DWORD)v28 == 1 )
                {
                  v28 = v46 + 40;
                  if ( v46 + 40 <= v45 )
                  {
                    if ( *(_DWORD *)(v46 + v35 + 12) )
                      v42 = (char *)(v46 + v35 + 32);
                    v36 = *(_BYTE **)(v46 + v35 + 24);
LABEL_65:
                    v48 = *(_BYTE *)(v46 + v35 + 8);
                    v37 = *(_BYTE *)(v46 + v35 + 9);
                    goto LABEL_74;
                  }
                }
              }
              else
              {
                v28 = v46 + 56;
                if ( v46 + 56 <= v45 )
                {
                  v57 = 1;
                  if ( *(_BYTE *)(v46 + v35 + 10) )
                    v42 = (char *)(v46 + v35 + 24);
                  v36 = *(_BYTE **)(v46 + v35 + 16);
                  v37 = *(_BYTE *)(v46 + v35 + 9);
                  v55 = *(_BYTE *)(v46 + v35 + 8);
                }
              }
            }
            else
            {
              v28 = v46 + 40;
              if ( v46 + 40 <= v45 )
              {
                if ( *(_BYTE *)(v46 + v35 + 10) )
                  v42 = (char *)(v46 + v35 + 24);
                v36 = *(_BYTE **)(v46 + v35 + 16);
                goto LABEL_65;
              }
            }
            if ( v57 )
              break;
          }
        }
        v44 = v56 + 1;
        v56 = v44;
      }
      while ( (unsigned int)v44 < v58 );
      v48 = v55;
LABEL_74:
      if ( !v42 )
        goto LABEL_106;
      v49 = *v42;
      v41 = 0;
    }
    else
    {
      v49 = *(_BYTE *)(v35 + 72);
      v36 = *(_BYTE **)(v35 + 32);
      v37 = *(_BYTE *)(v35 + 11);
      v48 = *(_BYTE *)(v35 + 4);
      if ( *(_BYTE *)(v35 + 2) )
        goto LABEL_106;
    }
    LOBYTE(v28) = v49 - 8;
    if ( (v28 & 0x5D) != 0 )
      goto LABEL_106;
    if ( *(_BYTE *)(v35 + 3) == 1 || !v36 || !v37 )
    {
LABEL_99:
      if ( byte_140173441 < 0 )
      {
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v28,
          v35,
          &v59,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v35 + 3),
          v48,
          v38,
          v39,
          v40,
          a2);
      }
      goto LABEL_106;
    }
    v50 = *v36 & 0x7F;
    if ( v50 == 114 || v50 == 115 )
    {
      v28 = (unsigned __int64)&v36[v37];
      v51 = 0;
      if ( (unsigned __int64)(v36 + 8) > v28 )
        goto LABEL_97;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v28 = (unsigned __int64)&v36[v37];
      v51 = 0;
      if ( (unsigned __int64)(v36 + 8) > v28 )
        goto LABEL_97;
      v52 = v36 + 13;
      v38 = v36[2] & 0xF;
      v53 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v53 = (unsigned __int8)v36[7] + 8;
      v28 = (unsigned __int64)&v36[v53];
      if ( (unsigned __int64)v52 <= v28 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v28 )
        v40 = 0;
      else
        v40 = *v52;
    }
    v51 = 1;
LABEL_97:
    if ( v51 )
      v41 = 1;
    goto LABEL_99;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v54 = *(_DWORD *)(a2 + 48);
    v34 = &EventNonReadWriteRequestComplete;
    goto LABEL_105;
  }
LABEL_106:
  IofCompleteRequest((PIRP)a2, 0);
  return v18;
}
