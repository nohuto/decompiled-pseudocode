/*
 * XREFs of NvmeNamespaceDataSetManagementIoctl @ 0x1401A3FCC
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeNamespaceDsmDeallocate @ 0x140044400 (NvmeNamespaceDsmDeallocate.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x140103E38 (NvmeNamespaceDsmWriteZeroes.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceDataSetManagementIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
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
  int v33; // eax
  unsigned int v34; // r12d
  unsigned int v35; // eax
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  int *v38; // rax
  const EVENT_DESCRIPTOR *v39; // rdx
  __int64 v40; // rdx
  _BYTE *v41; // r9
  unsigned __int8 v42; // r14
  char v43; // r11
  char v44; // si
  char v45; // r10
  char v46; // r15
  char *v47; // r15
  __int64 v48; // rax
  unsigned __int64 v49; // r13
  __int64 v50; // r8
  int v51; // ecx
  char v52; // r13
  char v53; // cl
  char v54; // r8
  char v55; // al
  char *v56; // r10
  unsigned int v57; // eax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  int *v60; // rax
  const EVENT_DESCRIPTOR *v61; // rdx
  __int64 v62; // rdx
  _BYTE *v63; // r9
  unsigned __int8 v64; // r14
  char v65; // r11
  char v66; // si
  char v67; // r10
  char v68; // r15
  char *v69; // r15
  unsigned int v70; // r13d
  unsigned __int64 v71; // r12
  __int64 v72; // r8
  int v73; // ecx
  char v74; // r12
  char v75; // cl
  char v76; // r8
  char v77; // al
  char *v78; // r10
  unsigned int v79; // eax
  int v80; // [rsp+20h] [rbp-49h]
  int v81; // [rsp+20h] [rbp-49h]
  char v82; // [rsp+60h] [rbp-9h]
  char v83; // [rsp+60h] [rbp-9h]
  char v84; // [rsp+60h] [rbp-9h]
  char v85; // [rsp+61h] [rbp-8h]
  char v86; // [rsp+61h] [rbp-8h]
  char v87; // [rsp+61h] [rbp-8h]
  unsigned int v88; // [rsp+64h] [rbp-5h]
  int v89; // [rsp+64h] [rbp-5h]
  unsigned int v90; // [rsp+68h] [rbp-1h]
  unsigned int v91; // [rsp+68h] [rbp-1h]
  GUID v92; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  if ( v4 )
  {
    v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 16LL);
    if ( (unsigned int)v6 >= 0x1C )
    {
      v7 = (unsigned int)v4[4];
      if ( v6 >= v7 + (unsigned __int64)(unsigned int)v4[3] )
      {
        v8 = (unsigned int)v4[6];
        if ( v6 >= v8 + (unsigned __int64)(unsigned int)v4[5] && v6 >= v8 + v7 + 28 )
        {
          if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
          {
            v9 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = -1073741637;
            if ( v9 )
              goto LABEL_73;
            v92 = 0LL;
            IoGetActivityIdIrp(a2, &v92);
            v11 = *(_QWORD *)(a2 + 184);
            if ( *(_BYTE *)v11 == 14 )
            {
              if ( (byte_140173442 & 8) != 0 )
              {
                v10 = *(unsigned int *)(a2 + 48);
                v13 = &EventNonReadWriteRequestComplete;
                v80 = *(_DWORD *)(a2 + 48);
                goto LABEL_72;
              }
LABEL_73:
              IofCompleteRequest((PIRP)a2, 0);
              return 3221225659LL;
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
                      v3 = *v12;
                    McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v92, a2, v3, *(_DWORD *)(a2 + 48));
                  }
                  goto LABEL_73;
                }
                if ( (byte_140173442 & 0x20) != 0 )
                {
                  v13 = &EventPnpRequestComplete;
                  v80 = *(_DWORD *)(a2 + 48);
LABEL_72:
                  McTemplateK0pd_EtwWriteTransfer(v10, v13, &v92, a2, v80);
                  goto LABEL_73;
                }
              }
              goto LABEL_73;
            }
            if ( byte_140173441 >= 0 )
              goto LABEL_73;
            v14 = *(_QWORD *)(v11 + 8);
            v15 = 0LL;
            v82 = 0;
            v16 = 0;
            v17 = 0;
            v18 = 0;
            v19 = 0;
            v20 = 0;
            if ( *(_BYTE *)(v14 + 2) == 40 )
            {
              v21 = 0LL;
              v85 = 0;
              if ( *(_DWORD *)(v14 + 20) )
                goto LABEL_73;
              v22 = 0;
              v88 = *(_DWORD *)(v14 + 56);
              if ( !v88 )
                goto LABEL_73;
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
                          v85 = 1;
                          if ( *(_BYTE *)(v24 + v14 + 10) )
                            v21 = (char *)(v24 + v14 + 24);
                          v15 = *(_BYTE **)(v24 + v14 + 16);
                          v16 = *(_BYTE *)(v24 + v14 + 9);
                          v82 = *(_BYTE *)(v24 + v14 + 8);
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
                    if ( v85 )
                      break;
                  }
                }
                ++v22;
              }
              while ( v22 < v88 );
              v26 = v82;
LABEL_41:
              if ( !v21 )
                goto LABEL_73;
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
                goto LABEL_73;
            }
            LOBYTE(v10) = v27 - 8;
            if ( (v10 & 0x5D) != 0 )
              goto LABEL_73;
            v28 = *(_BYTE *)(v14 + 3);
            if ( v28 == 1 || !v15 || !v16 )
            {
LABEL_66:
              if ( byte_140173441 < 0 )
              {
                if ( !v20 )
                {
                  v19 = 0;
                  v18 = 0;
                  v17 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  v10,
                  v14,
                  &v92,
                  a2,
                  *(_DWORD *)(a2 + 48),
                  v28,
                  v26,
                  v17,
                  v18,
                  v19,
                  a2);
              }
              goto LABEL_73;
            }
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
            goto LABEL_66;
          }
          v33 = v4[1];
          if ( v33 == 1 )
          {
            v35 = NvmeNamespaceDsmDeallocate(a1, (__int64)v4);
          }
          else
          {
            if ( v33 != 25 )
            {
              v34 = -1073741822;
              if ( v33 != -2147483646 )
                v34 = -1073741637;
LABEL_82:
              v9 = StorEtwLoggingEnabled == 0;
              *(_BYTE *)(a2 + 141) = -84;
              *(_DWORD *)(a2 + 48) = v34;
              if ( v9 )
                goto LABEL_148;
              v92 = 0LL;
              IoGetActivityIdIrp(a2, &v92);
              v37 = *(_QWORD *)(a2 + 184);
              if ( *(_BYTE *)v37 == 14 )
              {
                if ( (byte_140173442 & 8) != 0 )
                {
                  v39 = &EventNonReadWriteRequestComplete;
                  goto LABEL_147;
                }
LABEL_148:
                IofCompleteRequest((PIRP)a2, 0);
                return v34;
              }
              if ( *(_BYTE *)v37 != 15 )
              {
                if ( *(_BYTE *)v37 == 27 )
                {
                  if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
                  {
                    if ( (byte_140173442 & 0x40) != 0 )
                    {
                      v38 = *(int **)(a2 + 56);
                      if ( v38 )
                        v3 = *v38;
                      McTemplateK0pqd_EtwWriteTransfer(v36, v37, &v92, a2, v3, *(_DWORD *)(a2 + 48));
                    }
                    goto LABEL_148;
                  }
                  if ( (byte_140173442 & 0x20) != 0 )
                  {
                    v39 = &EventPnpRequestComplete;
LABEL_147:
                    McTemplateK0pd_EtwWriteTransfer(v36, v39, &v92, a2, *(_DWORD *)(a2 + 48));
                    goto LABEL_148;
                  }
                }
                goto LABEL_148;
              }
              if ( byte_140173441 >= 0 )
                goto LABEL_148;
              v40 = *(_QWORD *)(v37 + 8);
              v41 = 0LL;
              v83 = 0;
              v42 = 0;
              v43 = 0;
              v44 = 0;
              v45 = 0;
              v46 = 0;
              if ( *(_BYTE *)(v40 + 2) == 40 )
              {
                v47 = 0LL;
                v86 = 0;
                if ( *(_DWORD *)(v40 + 20) )
                  goto LABEL_148;
                v48 = 0LL;
                v89 = 0;
                v90 = *(_DWORD *)(v40 + 56);
                if ( !v90 )
                  goto LABEL_148;
                do
                {
                  v36 = *(unsigned int *)(v40 + 4 * v48 + 120);
                  if ( (unsigned int)v36 >= 0x80 )
                  {
                    v49 = *(unsigned int *)(v40 + 16);
                    if ( (unsigned int)v36 < (unsigned int)v49 )
                    {
                      v50 = (unsigned int)v36;
                      v51 = *(_DWORD *)(v36 + v40) - 64;
                      if ( v51 )
                      {
                        v36 = (unsigned int)(v51 - 1);
                        if ( (_DWORD)v36 )
                        {
                          if ( (_DWORD)v36 == 1 )
                          {
                            v36 = v50 + 40;
                            if ( v50 + 40 <= v49 )
                            {
                              if ( *(_DWORD *)(v50 + v40 + 12) )
                                v47 = (char *)(v50 + v40 + 32);
                              v41 = *(_BYTE **)(v50 + v40 + 24);
LABEL_107:
                              v52 = *(_BYTE *)(v50 + v40 + 8);
                              v42 = *(_BYTE *)(v50 + v40 + 9);
                              goto LABEL_116;
                            }
                          }
                        }
                        else
                        {
                          v36 = v50 + 56;
                          if ( v50 + 56 <= v49 )
                          {
                            v86 = 1;
                            if ( *(_BYTE *)(v50 + v40 + 10) )
                              v47 = (char *)(v50 + v40 + 24);
                            v41 = *(_BYTE **)(v50 + v40 + 16);
                            v42 = *(_BYTE *)(v50 + v40 + 9);
                            v83 = *(_BYTE *)(v50 + v40 + 8);
                          }
                        }
                      }
                      else
                      {
                        v36 = v50 + 40;
                        if ( v50 + 40 <= v49 )
                        {
                          if ( *(_BYTE *)(v50 + v40 + 10) )
                            v47 = (char *)(v50 + v40 + 24);
                          v41 = *(_BYTE **)(v50 + v40 + 16);
                          goto LABEL_107;
                        }
                      }
                      if ( v86 )
                        break;
                    }
                  }
                  v48 = (unsigned int)(v89 + 1);
                  v89 = v48;
                }
                while ( (unsigned int)v48 < v90 );
                v52 = v83;
LABEL_116:
                if ( !v47 )
                  goto LABEL_148;
                v53 = *v47;
                v46 = 0;
              }
              else
              {
                v53 = *(_BYTE *)(v40 + 72);
                v41 = *(_BYTE **)(v40 + 32);
                v42 = *(_BYTE *)(v40 + 11);
                v52 = *(_BYTE *)(v40 + 4);
                if ( *(_BYTE *)(v40 + 2) )
                  goto LABEL_148;
              }
              LOBYTE(v36) = v53 - 8;
              if ( (v36 & 0x5D) != 0 )
                goto LABEL_148;
              v54 = *(_BYTE *)(v40 + 3);
              if ( v54 == 1 || !v41 || !v42 )
              {
LABEL_141:
                if ( byte_140173441 < 0 )
                {
                  if ( !v46 )
                  {
                    v45 = 0;
                    v44 = 0;
                    v43 = 0;
                  }
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    v36,
                    v40,
                    &v92,
                    a2,
                    *(_DWORD *)(a2 + 48),
                    v54,
                    v52,
                    v43,
                    v44,
                    v45,
                    a2);
                }
                goto LABEL_148;
              }
              v55 = *v41 & 0x7F;
              if ( v55 == 114 || v55 == 115 )
              {
                v36 = (unsigned __int64)&v41[v42];
                LOBYTE(v40) = 0;
                if ( (unsigned __int64)(v41 + 8) > v36 )
                  goto LABEL_139;
                v44 = v41[2];
                v43 = v41[1] & 0xF;
                v45 = v41[3];
              }
              else
              {
                v36 = (unsigned __int64)&v41[v42];
                LOBYTE(v40) = 0;
                if ( (unsigned __int64)(v41 + 8) > v36 )
                  goto LABEL_139;
                v56 = v41 + 13;
                v43 = v41[2] & 0xF;
                v57 = v42;
                if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v42 )
                  v57 = (unsigned __int8)v41[7] + 8;
                v36 = (unsigned __int64)&v41[v57];
                if ( (unsigned __int64)v56 <= v36 )
                  v44 = v41[12];
                if ( (unsigned __int64)(v41 + 14) > v36 )
                  v45 = 0;
                else
                  v45 = *v56;
              }
              LOBYTE(v40) = 1;
LABEL_139:
              if ( (_BYTE)v40 )
                v46 = 1;
              goto LABEL_141;
            }
            v35 = NvmeNamespaceDsmWriteZeroes(a1, (__int64)v4);
          }
          v34 = v35;
          goto LABEL_82;
        }
      }
    }
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v9 )
    goto LABEL_215;
  v92 = 0LL;
  IoGetActivityIdIrp(a2, &v92);
  v59 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v59 != 14 )
  {
    if ( *(_BYTE *)v59 != 15 )
    {
      if ( *(_BYTE *)v59 == 27 )
      {
        if ( *(_BYTE *)(v59 + 1) == 7 && !*(_DWORD *)(v59 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v60 = *(int **)(a2 + 56);
            if ( v60 )
              v3 = *v60;
            McTemplateK0pqd_EtwWriteTransfer(v58, v59, &v92, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_215;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v61 = &EventPnpRequestComplete;
          v81 = *(_DWORD *)(a2 + 48);
LABEL_214:
          McTemplateK0pd_EtwWriteTransfer(v58, v61, &v92, a2, v81);
          goto LABEL_215;
        }
      }
      goto LABEL_215;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_215;
    v62 = *(_QWORD *)(v59 + 8);
    v63 = 0LL;
    v84 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    if ( *(_BYTE *)(v62 + 2) == 40 )
    {
      v69 = 0LL;
      v87 = 0;
      if ( *(_DWORD *)(v62 + 20) )
        goto LABEL_215;
      v70 = 0;
      v91 = *(_DWORD *)(v62 + 56);
      if ( !v91 )
        goto LABEL_215;
      do
      {
        v58 = *(unsigned int *)(v62 + 4LL * v70 + 120);
        if ( (unsigned int)v58 >= 0x80 )
        {
          v71 = *(unsigned int *)(v62 + 16);
          if ( (unsigned int)v58 < (unsigned int)v71 )
          {
            v72 = (unsigned int)v58;
            v73 = *(_DWORD *)(v58 + v62) - 64;
            if ( v73 )
            {
              v58 = (unsigned int)(v73 - 1);
              if ( (_DWORD)v58 )
              {
                if ( (_DWORD)v58 == 1 )
                {
                  v58 = v72 + 40;
                  if ( v72 + 40 <= v71 )
                  {
                    if ( *(_DWORD *)(v72 + v62 + 12) )
                      v69 = (char *)(v72 + v62 + 32);
                    v63 = *(_BYTE **)(v72 + v62 + 24);
LABEL_174:
                    v74 = *(_BYTE *)(v72 + v62 + 8);
                    v64 = *(_BYTE *)(v72 + v62 + 9);
                    goto LABEL_183;
                  }
                }
              }
              else
              {
                v58 = v72 + 56;
                if ( v72 + 56 <= v71 )
                {
                  v87 = 1;
                  if ( *(_BYTE *)(v72 + v62 + 10) )
                    v69 = (char *)(v72 + v62 + 24);
                  v63 = *(_BYTE **)(v72 + v62 + 16);
                  v64 = *(_BYTE *)(v72 + v62 + 9);
                  v84 = *(_BYTE *)(v72 + v62 + 8);
                }
              }
            }
            else
            {
              v58 = v72 + 40;
              if ( v72 + 40 <= v71 )
              {
                if ( *(_BYTE *)(v72 + v62 + 10) )
                  v69 = (char *)(v72 + v62 + 24);
                v63 = *(_BYTE **)(v72 + v62 + 16);
                goto LABEL_174;
              }
            }
            if ( v87 )
              break;
          }
        }
        ++v70;
      }
      while ( v70 < v91 );
      v74 = v84;
LABEL_183:
      if ( !v69 )
        goto LABEL_215;
      v75 = *v69;
      v68 = 0;
    }
    else
    {
      v75 = *(_BYTE *)(v62 + 72);
      v63 = *(_BYTE **)(v62 + 32);
      v64 = *(_BYTE *)(v62 + 11);
      v74 = *(_BYTE *)(v62 + 4);
      if ( *(_BYTE *)(v62 + 2) )
        goto LABEL_215;
    }
    LOBYTE(v58) = v75 - 8;
    if ( (v58 & 0x5D) != 0 )
      goto LABEL_215;
    v76 = *(_BYTE *)(v62 + 3);
    if ( v76 == 1 || !v63 || !v64 )
    {
LABEL_208:
      if ( byte_140173441 < 0 )
      {
        if ( !v68 )
        {
          v67 = 0;
          v66 = 0;
          v65 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v58, v62, &v92, a2, *(_DWORD *)(a2 + 48), v76, v74, v65, v66, v67, a2);
      }
      goto LABEL_215;
    }
    v77 = *v63 & 0x7F;
    if ( v77 == 114 || v77 == 115 )
    {
      v58 = (unsigned __int64)&v63[v64];
      LOBYTE(v62) = 0;
      if ( (unsigned __int64)(v63 + 8) > v58 )
        goto LABEL_206;
      v66 = v63[2];
      v65 = v63[1] & 0xF;
      v67 = v63[3];
    }
    else
    {
      v58 = (unsigned __int64)&v63[v64];
      LOBYTE(v62) = 0;
      if ( (unsigned __int64)(v63 + 8) > v58 )
        goto LABEL_206;
      v78 = v63 + 13;
      v65 = v63[2] & 0xF;
      v79 = v64;
      if ( (unsigned int)(unsigned __int8)v63[7] + 8 <= v64 )
        v79 = (unsigned __int8)v63[7] + 8;
      v58 = (unsigned __int64)&v63[v79];
      if ( (unsigned __int64)v78 <= v58 )
        v66 = v63[12];
      if ( (unsigned __int64)(v63 + 14) > v58 )
        v67 = 0;
      else
        v67 = *v78;
    }
    LOBYTE(v62) = 1;
LABEL_206:
    if ( (_BYTE)v62 )
      v68 = 1;
    goto LABEL_208;
  }
  if ( (byte_140173442 & 8) != 0 )
  {
    v58 = *(unsigned int *)(a2 + 48);
    v61 = &EventNonReadWriteRequestComplete;
    v81 = *(_DWORD *)(a2 + 48);
    goto LABEL_214;
  }
LABEL_215:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225485LL;
}
