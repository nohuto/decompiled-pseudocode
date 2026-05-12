/*
 * XREFs of NvmeAdapterStorageSetProperty @ 0x1400E07EC
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeCommonSetStorageProtocolSpecificProperty @ 0x14011F4C4 (NvmeCommonSetStorageProtocolSpecificProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterStorageSetProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  int *v5; // rdx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // edx
  __int64 result; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  _BYTE *v18; // r9
  unsigned __int8 v19; // r14
  char v20; // r11
  char v21; // bp
  char v22; // r10
  char v23; // r15
  char *v24; // r15
  unsigned int v25; // r13d
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // ecx
  char v29; // r12
  char v30; // cl
  char v31; // al
  char v32; // r8
  char *v33; // r10
  unsigned int v34; // eax
  int v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *(int **)(a2 + 24);
  v8 = 0;
  if ( v5 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 8u )
  {
    v9 = *v5;
    if ( *v5 != 49 && v9 != 67 )
      goto LABEL_5;
    v10 = v5[1];
    if ( v10 )
    {
      if ( v10 != 1 )
      {
LABEL_5:
        *(_QWORD *)(a2 + 56) = 0LL;
        v8 = -1073741808;
      }
    }
    else if ( v9 == 49 || v9 == 67 )
    {
      v8 = NvmeCommonSetStorageProtocolSpecificProperty(*(_QWORD *)(a1 + 8), a2);
      result = 259LL;
      if ( v8 == 259 )
      {
        *a3 = 0;
        return result;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v12 = StorEtwLoggingEnabled == 0;
  *a3 = 1;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v12 )
    goto LABEL_80;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 != 14 )
  {
    if ( *(_BYTE *)v14 != 15 )
    {
      if ( *(_BYTE *)v14 == 27 )
      {
        if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v15 = *(int **)(a2 + 56);
            if ( v15 )
              v3 = *v15;
            McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v39, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_80;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v16 = &EventPnpRequestComplete;
          v35 = *(_DWORD *)(a2 + 48);
LABEL_79:
          McTemplateK0pd_EtwWriteTransfer(v13, v16, &v39, a2, v35);
          goto LABEL_80;
        }
      }
      goto LABEL_80;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_80;
    v17 = *(_QWORD *)(v14 + 8);
    v18 = 0LL;
    v36 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( *(_BYTE *)(v17 + 2) == 40 )
    {
      v24 = 0LL;
      v37 = 0;
      if ( *(_DWORD *)(v17 + 20) )
        goto LABEL_80;
      v25 = 0;
      v38 = *(_DWORD *)(v17 + 56);
      if ( !v38 )
        goto LABEL_80;
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
LABEL_39:
                    v29 = *(_BYTE *)(v27 + v17 + 8);
                    v19 = *(_BYTE *)(v27 + v17 + 9);
                    goto LABEL_48;
                  }
                }
              }
              else
              {
                v13 = v27 + 56;
                if ( v27 + 56 <= v26 )
                {
                  v37 = 1;
                  if ( *(_BYTE *)(v27 + v17 + 10) )
                    v24 = (char *)(v27 + v17 + 24);
                  v18 = *(_BYTE **)(v27 + v17 + 16);
                  v19 = *(_BYTE *)(v27 + v17 + 9);
                  v36 = *(_BYTE *)(v27 + v17 + 8);
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
                goto LABEL_39;
              }
            }
            if ( v37 )
              break;
          }
        }
        ++v25;
      }
      while ( v25 < v38 );
      v29 = v36;
LABEL_48:
      if ( !v24 )
        goto LABEL_80;
      v30 = *v24;
      v23 = 0;
    }
    else
    {
      v30 = *(_BYTE *)(v17 + 72);
      v18 = *(_BYTE **)(v17 + 32);
      v19 = *(_BYTE *)(v17 + 11);
      v29 = *(_BYTE *)(v17 + 4);
      if ( *(_BYTE *)(v17 + 2) )
        goto LABEL_80;
    }
    LOBYTE(v13) = v30 - 8;
    if ( (v13 & 0x5D) != 0 )
      goto LABEL_80;
    if ( *(_BYTE *)(v17 + 3) == 1 || !v18 || !v19 )
    {
LABEL_73:
      if ( byte_140173441 < 0 )
      {
        if ( !v23 )
        {
          v22 = 0;
          v21 = 0;
          v20 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v13,
          v17,
          &v39,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v17 + 3),
          v29,
          v20,
          v21,
          v22,
          a2);
      }
      goto LABEL_80;
    }
    v31 = *v18 & 0x7F;
    if ( v31 == 114 || v31 == 115 )
    {
      v13 = (unsigned __int64)&v18[v19];
      v32 = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_71;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      v13 = (unsigned __int64)&v18[v19];
      v32 = 0;
      if ( (unsigned __int64)(v18 + 8) > v13 )
        goto LABEL_71;
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
    v32 = 1;
LABEL_71:
    if ( v32 )
      v23 = 1;
    goto LABEL_73;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v35 = *(_DWORD *)(a2 + 48);
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_79;
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
