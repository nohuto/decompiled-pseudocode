/*
 * XREFs of NvmeNamespaceStorageSetPropertyIoctl @ 0x1401AE840
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeCommonSetStorageProtocolSpecificProperty @ 0x14011F4C4 (NvmeCommonSetStorageProtocolSpecificProperty.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeNamespaceStorageSetPropertyIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  _DWORD *v6; // r8
  __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // r9
  unsigned __int8 v16; // r14
  char v17; // r11
  char v18; // si
  char v19; // r10
  char v20; // r15
  char *v21; // r15
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  __int64 v24; // r8
  int v25; // ecx
  char v26; // r12
  char v27; // cl
  char v28; // r8
  char v29; // al
  char *v30; // r10
  unsigned int v31; // eax
  NTSTATUS result; // eax
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  __int64 v37; // rdx
  _BYTE *v38; // r9
  unsigned __int8 v39; // r14
  char v40; // r11
  char v41; // si
  char v42; // r10
  char v43; // r15
  char *v44; // r15
  unsigned int v45; // r13d
  unsigned __int64 v46; // r12
  __int64 v47; // r8
  int v48; // ecx
  char v49; // r12
  char v50; // cl
  char v51; // r8
  char v52; // al
  char *v53; // r10
  unsigned int v54; // eax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  int *v57; // rax
  const EVENT_DESCRIPTOR *v58; // rdx
  __int64 v59; // rdx
  _BYTE *v60; // r9
  unsigned __int8 v61; // r14
  char v62; // r11
  char v63; // si
  char v64; // r10
  char v65; // r15
  char *v66; // r15
  unsigned int v67; // r13d
  unsigned __int64 v68; // r12
  __int64 v69; // r8
  int v70; // ecx
  char v71; // r12
  char v72; // cl
  char v73; // r8
  char v74; // al
  char *v75; // r10
  unsigned int v76; // eax
  int v77; // [rsp+20h] [rbp-49h]
  int v78; // [rsp+20h] [rbp-49h]
  char v79; // [rsp+60h] [rbp-9h]
  char v80; // [rsp+60h] [rbp-9h]
  char v81; // [rsp+60h] [rbp-9h]
  char v82; // [rsp+61h] [rbp-8h]
  char v83; // [rsp+61h] [rbp-8h]
  char v84; // [rsp+61h] [rbp-8h]
  unsigned int v85; // [rsp+64h] [rbp-5h]
  unsigned int v86; // [rsp+64h] [rbp-5h]
  NTSTATUS v87; // [rsp+68h] [rbp-1h]
  unsigned int v88; // [rsp+68h] [rbp-1h]
  GUID v89; // [rsp+70h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  *a3 = 1;
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  if ( v6 && *(_DWORD *)(v3 + 16) >= 8u )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v8 + 136) & 2) != 0 && *(_DWORD *)(v8 + 568) != 2 )
    {
      v9 = StorEtwLoggingEnabled == 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741300;
      if ( v9 )
        goto LABEL_71;
      v89 = 0LL;
      IoGetActivityIdIrp(a2, &v89);
      v11 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v11 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
        {
          v10 = *(unsigned int *)(a2 + 48);
          v13 = &EventNonReadWriteRequestComplete;
          v77 = *(_DWORD *)(a2 + 48);
          goto LABEL_70;
        }
LABEL_71:
        IofCompleteRequest((PIRP)a2, 0);
        return -1073741300;
      }
      if ( *(_BYTE *)v11 != 15 )
      {
        if ( *(_BYTE *)v11 == 27 )
        {
          if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v12 = *(int **)(a2 + 56);
              if ( v12 )
                v5 = *v12;
              McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v89, a2, v5, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_71;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v13 = &EventPnpRequestComplete;
            v77 = *(_DWORD *)(a2 + 48);
LABEL_70:
            McTemplateK0pd_EtwWriteTransfer(v10, v13, &v89, a2, v77);
            goto LABEL_71;
          }
        }
        goto LABEL_71;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_71;
      v14 = *(_QWORD *)(v11 + 8);
      v15 = 0LL;
      v79 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      if ( *(_BYTE *)(v14 + 2) == 40 )
      {
        v21 = 0LL;
        v82 = 0;
        if ( *(_DWORD *)(v14 + 20) )
          goto LABEL_71;
        v22 = 0;
        v85 = *(_DWORD *)(v14 + 56);
        if ( !v85 )
          goto LABEL_71;
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
LABEL_30:
                      v26 = *(_BYTE *)(v24 + v14 + 8);
                      v16 = *(_BYTE *)(v24 + v14 + 9);
                      goto LABEL_39;
                    }
                  }
                }
                else
                {
                  v10 = v24 + 56;
                  if ( v24 + 56 <= v23 )
                  {
                    v82 = 1;
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v15 = *(_BYTE **)(v24 + v14 + 16);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    v79 = *(_BYTE *)(v24 + v14 + 8);
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
                  goto LABEL_30;
                }
              }
              if ( v82 )
                break;
            }
          }
          ++v22;
        }
        while ( v22 < v85 );
        v26 = v79;
LABEL_39:
        if ( !v21 )
          goto LABEL_71;
        v27 = *v21;
        v20 = 0;
      }
      else
      {
        v27 = *(_BYTE *)(v14 + 72);
        v15 = *(_BYTE **)(v14 + 32);
        v16 = *(_BYTE *)(v14 + 11);
        v26 = *(_BYTE *)(v14 + 4);
        if ( *(_BYTE *)(v14 + 2) )
          goto LABEL_71;
      }
      LOBYTE(v10) = v27 - 8;
      if ( (v10 & 0x5D) != 0 )
        goto LABEL_71;
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v15 || !v16 )
      {
LABEL_64:
        if ( byte_140173441 < 0 )
        {
          if ( !v20 )
          {
            v19 = 0;
            v18 = 0;
            v17 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v89, a2, *(_DWORD *)(a2 + 48), v28, v26, v17, v18, v19, a2);
        }
        goto LABEL_71;
      }
      v29 = *v15 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_62;
        v18 = v15[2];
        v17 = v15[1] & 0xF;
        v19 = v15[3];
      }
      else
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_62;
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
LABEL_62:
      if ( (_BYTE)v14 )
        v20 = 1;
      goto LABEL_64;
    }
    if ( *v6 != 50 && *v6 != 68 )
    {
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
    }
    result = NvmeCommonSetStorageProtocolSpecificProperty(*(_QWORD *)(a1 + 8), (_QWORD *)a2, a3);
    v87 = result;
    if ( result == 259 )
    {
      *a3 = 0;
      return result;
    }
    v9 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = result;
    if ( v9 )
      goto LABEL_143;
    v89 = 0LL;
    IoGetActivityIdIrp(a2, &v89);
    v34 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v34 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v36 = &EventNonReadWriteRequestComplete;
        goto LABEL_142;
      }
LABEL_143:
      IofCompleteRequest((PIRP)a2, 0);
      return v87;
    }
    if ( *(_BYTE *)v34 != 15 )
    {
      if ( *(_BYTE *)v34 == 27 )
      {
        if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v35 = *(int **)(a2 + 56);
            if ( v35 )
              v5 = *v35;
            McTemplateK0pqd_EtwWriteTransfer(v33, v34, &v89, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_143;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v36 = &EventPnpRequestComplete;
LABEL_142:
          McTemplateK0pd_EtwWriteTransfer(v33, v36, &v89, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_143;
        }
      }
      goto LABEL_143;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_143;
    v37 = *(_QWORD *)(v34 + 8);
    v38 = 0LL;
    v80 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    if ( *(_BYTE *)(v37 + 2) == 40 )
    {
      v44 = 0LL;
      v83 = 0;
      if ( *(_DWORD *)(v37 + 20) )
        goto LABEL_143;
      v45 = 0;
      v86 = *(_DWORD *)(v37 + 56);
      if ( !v86 )
        goto LABEL_143;
      do
      {
        v33 = *(unsigned int *)(v37 + 4LL * v45 + 120);
        if ( (unsigned int)v33 >= 0x80 )
        {
          v46 = *(unsigned int *)(v37 + 16);
          if ( (unsigned int)v33 < (unsigned int)v46 )
          {
            v47 = (unsigned int)v33;
            v48 = *(_DWORD *)(v33 + v37) - 64;
            if ( v48 )
            {
              v33 = (unsigned int)(v48 - 1);
              if ( (_DWORD)v33 )
              {
                if ( (_DWORD)v33 == 1 )
                {
                  v33 = v47 + 40;
                  if ( v47 + 40 <= v46 )
                  {
                    if ( *(_DWORD *)(v47 + v37 + 12) )
                      v44 = (char *)(v47 + v37 + 32);
                    v38 = *(_BYTE **)(v47 + v37 + 24);
LABEL_102:
                    v49 = *(_BYTE *)(v47 + v37 + 8);
                    v39 = *(_BYTE *)(v47 + v37 + 9);
                    goto LABEL_111;
                  }
                }
              }
              else
              {
                v33 = v47 + 56;
                if ( v47 + 56 <= v46 )
                {
                  v83 = 1;
                  if ( *(_BYTE *)(v47 + v37 + 10) )
                    v44 = (char *)(v47 + v37 + 24);
                  v38 = *(_BYTE **)(v47 + v37 + 16);
                  v39 = *(_BYTE *)(v47 + v37 + 9);
                  v80 = *(_BYTE *)(v47 + v37 + 8);
                }
              }
            }
            else
            {
              v33 = v47 + 40;
              if ( v47 + 40 <= v46 )
              {
                if ( *(_BYTE *)(v47 + v37 + 10) )
                  v44 = (char *)(v47 + v37 + 24);
                v38 = *(_BYTE **)(v47 + v37 + 16);
                goto LABEL_102;
              }
            }
            if ( v83 )
              break;
          }
        }
        ++v45;
      }
      while ( v45 < v86 );
      v49 = v80;
LABEL_111:
      if ( !v44 )
        goto LABEL_143;
      v50 = *v44;
      v43 = 0;
    }
    else
    {
      v50 = *(_BYTE *)(v37 + 72);
      v38 = *(_BYTE **)(v37 + 32);
      v39 = *(_BYTE *)(v37 + 11);
      v49 = *(_BYTE *)(v37 + 4);
      if ( *(_BYTE *)(v37 + 2) )
        goto LABEL_143;
    }
    LOBYTE(v33) = v50 - 8;
    if ( (v33 & 0x5D) != 0 )
      goto LABEL_143;
    v51 = *(_BYTE *)(v37 + 3);
    if ( v51 == 1 || !v38 || !v39 )
    {
LABEL_136:
      if ( byte_140173441 < 0 )
      {
        if ( !v43 )
        {
          v42 = 0;
          v41 = 0;
          v40 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v33, v37, &v89, a2, *(_DWORD *)(a2 + 48), v51, v49, v40, v41, v42, a2);
      }
      goto LABEL_143;
    }
    v52 = *v38 & 0x7F;
    if ( v52 == 114 || v52 == 115 )
    {
      v33 = (unsigned __int64)&v38[v39];
      LOBYTE(v37) = 0;
      if ( (unsigned __int64)(v38 + 8) > v33 )
        goto LABEL_134;
      v41 = v38[2];
      v40 = v38[1] & 0xF;
      v42 = v38[3];
    }
    else
    {
      v33 = (unsigned __int64)&v38[v39];
      LOBYTE(v37) = 0;
      if ( (unsigned __int64)(v38 + 8) > v33 )
        goto LABEL_134;
      v53 = v38 + 13;
      v40 = v38[2] & 0xF;
      v54 = v39;
      if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
        v54 = (unsigned __int8)v38[7] + 8;
      v33 = (unsigned __int64)&v38[v54];
      if ( (unsigned __int64)v53 <= v33 )
        v41 = v38[12];
      if ( (unsigned __int64)(v38 + 14) > v33 )
        v42 = 0;
      else
        v42 = *v53;
    }
    LOBYTE(v37) = 1;
LABEL_134:
    if ( (_BYTE)v37 )
      v43 = 1;
    goto LABEL_136;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v9 )
    goto LABEL_210;
  v89 = 0LL;
  IoGetActivityIdIrp(a2, &v89);
  v56 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v56 != 14 )
  {
    if ( *(_BYTE *)v56 != 15 )
    {
      if ( *(_BYTE *)v56 == 27 )
      {
        if ( *(_BYTE *)(v56 + 1) == 7 && !*(_DWORD *)(v56 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v57 = *(int **)(a2 + 56);
            if ( v57 )
              v5 = *v57;
            McTemplateK0pqd_EtwWriteTransfer(v55, v56, &v89, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_210;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v58 = &EventPnpRequestComplete;
          v78 = *(_DWORD *)(a2 + 48);
LABEL_209:
          McTemplateK0pd_EtwWriteTransfer(v55, v58, &v89, a2, v78);
          goto LABEL_210;
        }
      }
      goto LABEL_210;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_210;
    v59 = *(_QWORD *)(v56 + 8);
    v60 = 0LL;
    v81 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    if ( *(_BYTE *)(v59 + 2) == 40 )
    {
      v66 = 0LL;
      v84 = 0;
      if ( *(_DWORD *)(v59 + 20) )
        goto LABEL_210;
      v67 = 0;
      v88 = *(_DWORD *)(v59 + 56);
      if ( !v88 )
        goto LABEL_210;
      do
      {
        v55 = *(unsigned int *)(v59 + 4LL * v67 + 120);
        if ( (unsigned int)v55 >= 0x80 )
        {
          v68 = *(unsigned int *)(v59 + 16);
          if ( (unsigned int)v55 < (unsigned int)v68 )
          {
            v69 = (unsigned int)v55;
            v70 = *(_DWORD *)(v55 + v59) - 64;
            if ( v70 )
            {
              v55 = (unsigned int)(v70 - 1);
              if ( (_DWORD)v55 )
              {
                if ( (_DWORD)v55 == 1 )
                {
                  v55 = v69 + 40;
                  if ( v69 + 40 <= v68 )
                  {
                    if ( *(_DWORD *)(v69 + v59 + 12) )
                      v66 = (char *)(v69 + v59 + 32);
                    v60 = *(_BYTE **)(v69 + v59 + 24);
LABEL_169:
                    v71 = *(_BYTE *)(v69 + v59 + 8);
                    v61 = *(_BYTE *)(v69 + v59 + 9);
                    goto LABEL_178;
                  }
                }
              }
              else
              {
                v55 = v69 + 56;
                if ( v69 + 56 <= v68 )
                {
                  v84 = 1;
                  if ( *(_BYTE *)(v69 + v59 + 10) )
                    v66 = (char *)(v69 + v59 + 24);
                  v60 = *(_BYTE **)(v69 + v59 + 16);
                  v61 = *(_BYTE *)(v69 + v59 + 9);
                  v81 = *(_BYTE *)(v69 + v59 + 8);
                }
              }
            }
            else
            {
              v55 = v69 + 40;
              if ( v69 + 40 <= v68 )
              {
                if ( *(_BYTE *)(v69 + v59 + 10) )
                  v66 = (char *)(v69 + v59 + 24);
                v60 = *(_BYTE **)(v69 + v59 + 16);
                goto LABEL_169;
              }
            }
            if ( v84 )
              break;
          }
        }
        ++v67;
      }
      while ( v67 < v88 );
      v71 = v81;
LABEL_178:
      if ( !v66 )
        goto LABEL_210;
      v72 = *v66;
      v65 = 0;
    }
    else
    {
      v72 = *(_BYTE *)(v59 + 72);
      v60 = *(_BYTE **)(v59 + 32);
      v61 = *(_BYTE *)(v59 + 11);
      v71 = *(_BYTE *)(v59 + 4);
      if ( *(_BYTE *)(v59 + 2) )
        goto LABEL_210;
    }
    LOBYTE(v55) = v72 - 8;
    if ( (v55 & 0x5D) != 0 )
      goto LABEL_210;
    v73 = *(_BYTE *)(v59 + 3);
    if ( v73 == 1 || !v60 || !v61 )
    {
LABEL_203:
      if ( byte_140173441 < 0 )
      {
        if ( !v65 )
        {
          v64 = 0;
          v63 = 0;
          v62 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v55, v59, &v89, a2, *(_DWORD *)(a2 + 48), v73, v71, v62, v63, v64, a2);
      }
      goto LABEL_210;
    }
    v74 = *v60 & 0x7F;
    if ( v74 == 114 || v74 == 115 )
    {
      v55 = (unsigned __int64)&v60[v61];
      LOBYTE(v59) = 0;
      if ( (unsigned __int64)(v60 + 8) > v55 )
        goto LABEL_201;
      v63 = v60[2];
      v62 = v60[1] & 0xF;
      v64 = v60[3];
    }
    else
    {
      v55 = (unsigned __int64)&v60[v61];
      LOBYTE(v59) = 0;
      if ( (unsigned __int64)(v60 + 8) > v55 )
        goto LABEL_201;
      v75 = v60 + 13;
      v62 = v60[2] & 0xF;
      v76 = v61;
      if ( (unsigned int)(unsigned __int8)v60[7] + 8 <= v61 )
        v76 = (unsigned __int8)v60[7] + 8;
      v55 = (unsigned __int64)&v60[v76];
      if ( (unsigned __int64)v75 <= v55 )
        v63 = v60[12];
      if ( (unsigned __int64)(v60 + 14) > v55 )
        v64 = 0;
      else
        v64 = *v75;
    }
    LOBYTE(v59) = 1;
LABEL_201:
    if ( (_BYTE)v59 )
      v65 = 1;
    goto LABEL_203;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v55 = *(unsigned int *)(a2 + 48);
    v58 = &EventNonReadWriteRequestComplete;
    v78 = *(_DWORD *)(a2 + 48);
    goto LABEL_209;
  }
LABEL_210:
  IofCompleteRequest((PIRP)a2, 0);
  return -1073741811;
}
