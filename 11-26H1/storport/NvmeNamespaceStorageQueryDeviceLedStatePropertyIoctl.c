/*
 * XREFs of NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl @ 0x1401AC8C0
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterQueryLedState @ 0x14008F2B8 (NvmeAdapterQueryLedState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // rsi
  unsigned int v5; // r12d
  size_t v6; // r15
  __int64 v7; // r14
  bool v8; // zf
  unsigned int v9; // esi
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
  int v32; // ecx
  unsigned __int64 v33; // rcx
  unsigned __int8 *v34; // rdx
  int v35; // eax
  int *v36; // rax
  const EVENT_DESCRIPTOR *v37; // rdx
  __int64 v38; // rdx
  _BYTE *v39; // r9
  unsigned __int8 v40; // r14
  char v41; // r11
  char v42; // si
  char v43; // r10
  char v44; // r15
  int v45; // eax
  char *v46; // r15
  unsigned int v47; // r13d
  unsigned __int64 v48; // r12
  __int64 v49; // r8
  int v50; // ecx
  char v51; // r12
  char v52; // cl
  char v53; // r8
  char v54; // al
  char *v55; // r10
  unsigned int v56; // eax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned int *v59; // rcx
  __int64 v60; // rcx
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
  int LedState; // eax
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  int *v84; // rax
  const EVENT_DESCRIPTOR *v85; // rdx
  __int64 v86; // rdx
  _BYTE *v87; // r9
  unsigned __int8 v88; // r14
  char v89; // r11
  char v90; // si
  char v91; // r10
  char v92; // r15
  char *v93; // r15
  __int64 v94; // rax
  unsigned __int64 v95; // r13
  __int64 v96; // r8
  int v97; // ecx
  char v98; // r13
  char v99; // cl
  char v100; // al
  char v101; // r8
  char *v102; // r10
  unsigned int v103; // eax
  unsigned int v104; // r13d
  unsigned __int64 v105; // r12
  int v106; // ecx
  int v107; // [rsp+20h] [rbp-49h]
  char v108; // [rsp+60h] [rbp-9h]
  char v109; // [rsp+60h] [rbp-9h]
  char v110; // [rsp+60h] [rbp-9h]
  char v111; // [rsp+60h] [rbp-9h]
  char v112; // [rsp+61h] [rbp-8h]
  char v113; // [rsp+61h] [rbp-8h]
  char v114; // [rsp+61h] [rbp-8h]
  char v115; // [rsp+61h] [rbp-8h]
  char v116; // [rsp+61h] [rbp-8h]
  unsigned int v117; // [rsp+64h] [rbp-5h]
  unsigned int v118; // [rsp+64h] [rbp-5h]
  unsigned int v119; // [rsp+64h] [rbp-5h]
  int v120; // [rsp+64h] [rbp-5h]
  unsigned int v121; // [rsp+68h] [rbp-1h]
  unsigned int v122; // [rsp+68h] [rbp-1h]
  GUID v123; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  v3 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) == 0 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741637;
    if ( v8 )
      goto LABEL_308;
    v123 = 0LL;
    IoGetActivityIdIrp(a2, &v123);
    v34 = *(unsigned __int8 **)(a2 + 184);
    if ( *v34 != 14 )
    {
      v35 = *v34 - 15;
      if ( *v34 != 15 )
        goto LABEL_75;
      if ( byte_140173441 >= 0 )
        goto LABEL_308;
      v38 = *((_QWORD *)v34 + 1);
      v39 = 0LL;
      v109 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = *(unsigned __int8 *)(v38 + 2);
      if ( (_BYTE)v45 == 40 )
      {
        v46 = 0LL;
        v116 = 0;
        if ( *(_DWORD *)(v38 + 20) )
          goto LABEL_308;
        v104 = 0;
        v122 = *(_DWORD *)(v38 + 56);
        if ( !v122 )
          goto LABEL_308;
        do
        {
          v33 = *(unsigned int *)(v38 + 4LL * v104 + 120);
          if ( (unsigned int)v33 >= 0x80 )
          {
            v105 = *(unsigned int *)(v38 + 16);
            if ( (unsigned int)v33 < (unsigned int)v105 )
            {
              v49 = (unsigned int)v33;
              v106 = *(_DWORD *)(v33 + v38) - 64;
              if ( v106 )
              {
                v33 = (unsigned int)(v106 - 1);
                if ( (_DWORD)v33 )
                {
                  if ( (_DWORD)v33 == 1 )
                  {
                    v33 = v49 + 40;
                    if ( v49 + 40 <= v105 )
                    {
LABEL_94:
                      if ( *(_DWORD *)(v49 + v38 + 12) )
                        v46 = (char *)(v49 + v38 + 32);
                      v39 = *(_BYTE **)(v49 + v38 + 24);
LABEL_97:
                      v51 = *(_BYTE *)(v49 + v38 + 8);
                      v40 = *(_BYTE *)(v49 + v38 + 9);
                      goto LABEL_106;
                    }
                  }
                }
                else
                {
                  v33 = v49 + 56;
                  if ( v49 + 56 <= v105 )
                  {
                    v116 = 1;
                    if ( *(_BYTE *)(v49 + v38 + 10) )
                      v46 = (char *)(v49 + v38 + 24);
                    v39 = *(_BYTE **)(v49 + v38 + 16);
                    v40 = *(_BYTE *)(v49 + v38 + 9);
                    v109 = *(_BYTE *)(v49 + v38 + 8);
                  }
                }
              }
              else
              {
                v33 = v49 + 40;
                if ( v49 + 40 <= v105 )
                {
LABEL_108:
                  if ( *(_BYTE *)(v49 + v38 + 10) )
                    v46 = (char *)(v49 + v38 + 24);
                  v39 = *(_BYTE **)(v49 + v38 + 16);
                  goto LABEL_97;
                }
              }
              if ( v116 )
                break;
            }
          }
          ++v104;
        }
        while ( v104 < v122 );
LABEL_105:
        v51 = v109;
LABEL_106:
        if ( !v46 )
          goto LABEL_308;
        v52 = *v46;
        v44 = 0;
        goto LABEL_112;
      }
LABEL_111:
      v51 = *(_BYTE *)(v38 + 4);
      v40 = *(_BYTE *)(v38 + 11);
      v39 = *(_BYTE **)(v38 + 32);
      v52 = *(_BYTE *)(v38 + 72);
      if ( v45 )
        goto LABEL_308;
LABEL_112:
      LOBYTE(v33) = v52 - 8;
      if ( (v33 & 0x5D) != 0 )
        goto LABEL_308;
      v53 = *(_BYTE *)(v38 + 3);
      if ( v53 == 1 || !v39 || !v40 )
      {
LABEL_131:
        if ( byte_140173441 < 0 )
        {
          if ( !v44 )
          {
            v43 = 0;
            v42 = 0;
            v41 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v33, v38, &v123, a2, *(_DWORD *)(a2 + 48), v53, v51, v41, v42, v43, a2);
        }
        goto LABEL_308;
      }
      v54 = *v39 & 0x7F;
      if ( v54 == 114 || v54 == 115 )
      {
        v33 = (unsigned __int64)&v39[v40];
        LOBYTE(v38) = 0;
        if ( (unsigned __int64)(v39 + 8) > v33 )
          goto LABEL_129;
        v43 = v39[3];
        v41 = v39[1] & 0xF;
        v42 = v39[2];
      }
      else
      {
        v33 = (unsigned __int64)&v39[v40];
        LOBYTE(v38) = 0;
        if ( (unsigned __int64)(v39 + 8) > v33 )
          goto LABEL_129;
        v55 = v39 + 13;
        v41 = v39[2] & 0xF;
        v56 = v40;
        if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
          v56 = (unsigned __int8)v39[7] + 8;
        v33 = (unsigned __int64)&v39[v56];
        if ( (unsigned __int64)v55 <= v33 )
          v42 = v39[12];
        if ( (unsigned __int64)(v39 + 14) > v33 )
          v43 = 0;
        else
          v43 = *v55;
      }
      LOBYTE(v38) = 1;
LABEL_129:
      if ( (_BYTE)v38 )
        v44 = 1;
      goto LABEL_131;
    }
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_308;
    v33 = *(unsigned int *)(a2 + 48);
    v107 = *(_DWORD *)(a2 + 48);
LABEL_306:
    v37 = &EventNonReadWriteRequestComplete;
    goto LABEL_307;
  }
  if ( !v3 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    v9 = -1073741811;
    *(_DWORD *)(a2 + 48) = -1073741811;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v8 )
      goto LABEL_205;
    v123 = 0LL;
    IoGetActivityIdIrp(a2, &v123);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_205;
      v13 = &EventNonReadWriteRequestComplete;
      goto LABEL_15;
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
              v2 = *v12;
            McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v123, a2, v2, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_205;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v13 = &EventPnpRequestComplete;
LABEL_15:
          McTemplateK0pd_EtwWriteTransfer(v10, v13, &v123, a2, *(_DWORD *)(a2 + 48));
        }
      }
LABEL_205:
      IofCompleteRequest((PIRP)a2, 0);
      return v9;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_205;
    v14 = *(_QWORD *)(v11 + 8);
    v15 = 0LL;
    v108 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( *(_BYTE *)(v14 + 2) == 40 )
    {
      v21 = 0LL;
      v112 = 0;
      if ( *(_DWORD *)(v14 + 20) )
        goto LABEL_67;
      v22 = 0;
      v117 = *(_DWORD *)(v14 + 56);
      if ( !v117 )
        goto LABEL_67;
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
LABEL_29:
                    v26 = *(_BYTE *)(v24 + v14 + 8);
                    v16 = *(_BYTE *)(v24 + v14 + 9);
                    goto LABEL_38;
                  }
                }
              }
              else
              {
                v10 = v24 + 56;
                if ( v24 + 56 <= v23 )
                {
                  v112 = 1;
                  if ( *(_BYTE *)(v24 + v14 + 10) )
                    v21 = (char *)(v24 + v14 + 24);
                  v15 = *(_BYTE **)(v24 + v14 + 16);
                  v16 = *(_BYTE *)(v24 + v14 + 9);
                  v108 = *(_BYTE *)(v24 + v14 + 8);
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
                goto LABEL_29;
              }
            }
            if ( v112 )
              break;
          }
        }
        ++v22;
      }
      while ( v22 < v117 );
      v26 = v108;
LABEL_38:
      if ( !v21 )
        goto LABEL_67;
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
        goto LABEL_67;
    }
    LOBYTE(v10) = v27 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v15 || !v16 )
      {
LABEL_63:
        if ( byte_140173441 < 0 )
        {
          if ( !v20 )
          {
            v19 = 0;
            v18 = 0;
            v17 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v123, a2, *(_DWORD *)(a2 + 48), v28, v26, v17, v18, v19, a2);
        }
        goto LABEL_67;
      }
      v29 = *v15 & 0x7F;
      if ( v29 == 114 || v29 == 115 )
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_61;
        v18 = v15[2];
        v17 = v15[1] & 0xF;
        v19 = v15[3];
      }
      else
      {
        v10 = (unsigned __int64)&v15[v16];
        LOBYTE(v14) = 0;
        if ( (unsigned __int64)(v15 + 8) > v10 )
          goto LABEL_61;
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
LABEL_61:
      if ( (_BYTE)v14 )
        v20 = 1;
      goto LABEL_63;
    }
LABEL_67:
    v9 = -1073741811;
    goto LABEL_205;
  }
  v32 = v3[1];
  if ( !v32 )
  {
    if ( (unsigned int)v6 >= 0x10 )
    {
      if ( (*(_DWORD *)(v7 + 144) & 0x40000) != 0
        || (LedState = NvmeAdapterQueryLedState(*(_QWORD *)(v7 + 8), (unsigned int *)(*(_QWORD *)(v7 + 592) + 160LL)),
            v5 = LedState,
            LedState >= 0) )
      {
        memset_0(v3, 0, v6);
        *v3 = 16;
        v3[1] = 16;
        *((_QWORD *)v3 + 1) = *(unsigned int *)(*(_QWORD *)(v7 + 592) + 160LL);
        *(_QWORD *)(a2 + 56) = 16LL;
LABEL_215:
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v5;
        if ( v8 )
          goto LABEL_281;
        v123 = 0LL;
        IoGetActivityIdIrp(a2, &v123);
        v83 = *(_QWORD *)(a2 + 184);
        if ( *(_BYTE *)v83 == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
          {
            v85 = &EventNonReadWriteRequestComplete;
            goto LABEL_280;
          }
LABEL_281:
          IofCompleteRequest((PIRP)a2, 0);
          return v5;
        }
        if ( *(_BYTE *)v83 != 15 )
        {
          if ( *(_BYTE *)v83 == 27 )
          {
            if ( *(_BYTE *)(v83 + 1) == 7 && !*(_DWORD *)(v83 + 8) )
            {
              if ( (byte_140173442 & 0x40) != 0 )
              {
                v84 = *(int **)(a2 + 56);
                if ( v84 )
                  v2 = *v84;
                McTemplateK0pqd_EtwWriteTransfer(v82, v83, &v123, a2, v2, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_281;
            }
            if ( (byte_140173442 & 0x20) != 0 )
            {
              v85 = &EventPnpRequestComplete;
LABEL_280:
              McTemplateK0pd_EtwWriteTransfer(v82, v85, &v123, a2, *(_DWORD *)(a2 + 48));
              goto LABEL_281;
            }
          }
          goto LABEL_281;
        }
        if ( byte_140173441 >= 0 )
          goto LABEL_281;
        v86 = *(_QWORD *)(v83 + 8);
        v87 = 0LL;
        v111 = 0;
        v88 = 0;
        v89 = 0;
        v90 = 0;
        v91 = 0;
        v92 = 0;
        if ( *(_BYTE *)(v86 + 2) == 40 )
        {
          v93 = 0LL;
          v115 = 0;
          if ( *(_DWORD *)(v86 + 20) )
            goto LABEL_281;
          v94 = 0LL;
          v120 = 0;
          v121 = *(_DWORD *)(v86 + 56);
          if ( !v121 )
            goto LABEL_281;
          do
          {
            v82 = *(unsigned int *)(v86 + 4 * v94 + 120);
            if ( (unsigned int)v82 >= 0x80 )
            {
              v95 = *(unsigned int *)(v86 + 16);
              if ( (unsigned int)v82 < (unsigned int)v95 )
              {
                v96 = (unsigned int)v82;
                v97 = *(_DWORD *)(v82 + v86) - 64;
                if ( v97 )
                {
                  v82 = (unsigned int)(v97 - 1);
                  if ( (_DWORD)v82 )
                  {
                    if ( (_DWORD)v82 == 1 )
                    {
                      v82 = v96 + 40;
                      if ( v96 + 40 <= v95 )
                      {
                        if ( *(_DWORD *)(v96 + v86 + 12) )
                          v93 = (char *)(v96 + v86 + 32);
                        v87 = *(_BYTE **)(v96 + v86 + 24);
LABEL_240:
                        v98 = *(_BYTE *)(v96 + v86 + 8);
                        v88 = *(_BYTE *)(v96 + v86 + 9);
                        goto LABEL_249;
                      }
                    }
                  }
                  else
                  {
                    v82 = v96 + 56;
                    if ( v96 + 56 <= v95 )
                    {
                      v115 = 1;
                      if ( *(_BYTE *)(v96 + v86 + 10) )
                        v93 = (char *)(v96 + v86 + 24);
                      v87 = *(_BYTE **)(v96 + v86 + 16);
                      v88 = *(_BYTE *)(v96 + v86 + 9);
                      v111 = *(_BYTE *)(v96 + v86 + 8);
                    }
                  }
                }
                else
                {
                  v82 = v96 + 40;
                  if ( v96 + 40 <= v95 )
                  {
                    if ( *(_BYTE *)(v96 + v86 + 10) )
                      v93 = (char *)(v96 + v86 + 24);
                    v87 = *(_BYTE **)(v96 + v86 + 16);
                    goto LABEL_240;
                  }
                }
                if ( v115 )
                  break;
              }
            }
            v94 = (unsigned int)(v120 + 1);
            v120 = v94;
          }
          while ( (unsigned int)v94 < v121 );
          v98 = v111;
LABEL_249:
          if ( !v93 )
            goto LABEL_281;
          v99 = *v93;
          v92 = 0;
        }
        else
        {
          v99 = *(_BYTE *)(v86 + 72);
          v87 = *(_BYTE **)(v86 + 32);
          v88 = *(_BYTE *)(v86 + 11);
          v98 = *(_BYTE *)(v86 + 4);
          if ( *(_BYTE *)(v86 + 2) )
            goto LABEL_281;
        }
        LOBYTE(v82) = v99 - 8;
        if ( (v82 & 0x5D) != 0 )
          goto LABEL_281;
        if ( *(_BYTE *)(v86 + 3) == 1 || !v87 || !v88 )
        {
LABEL_274:
          if ( byte_140173441 < 0 )
          {
            if ( !v92 )
            {
              v91 = 0;
              v90 = 0;
              v89 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v82,
              v86,
              &v123,
              a2,
              *(_DWORD *)(a2 + 48),
              *(_BYTE *)(v86 + 3),
              v98,
              v89,
              v90,
              v91,
              a2);
          }
          goto LABEL_281;
        }
        v100 = *v87 & 0x7F;
        if ( v100 == 114 || v100 == 115 )
        {
          v82 = (unsigned __int64)&v87[v88];
          v101 = 0;
          if ( (unsigned __int64)(v87 + 8) > v82 )
            goto LABEL_272;
          v90 = v87[2];
          v89 = v87[1] & 0xF;
          v91 = v87[3];
        }
        else
        {
          v82 = (unsigned __int64)&v87[v88];
          v101 = 0;
          if ( (unsigned __int64)(v87 + 8) > v82 )
            goto LABEL_272;
          v102 = v87 + 13;
          v89 = v87[2] & 0xF;
          v103 = v88;
          if ( (unsigned int)(unsigned __int8)v87[7] + 8 <= v88 )
            v103 = (unsigned __int8)v87[7] + 8;
          v82 = (unsigned __int64)&v87[v103];
          if ( (unsigned __int64)v102 <= v82 )
            v90 = v87[12];
          if ( (unsigned __int64)(v87 + 14) > v82 )
            v91 = 0;
          else
            v91 = *v102;
        }
        v101 = 1;
LABEL_272:
        if ( v101 )
          v92 = 1;
        goto LABEL_274;
      }
      if ( LedState == -2147483643 )
        goto LABEL_215;
    }
    else
    {
      if ( (unsigned int)v6 >= 8 )
      {
        *v3 = 16;
        v3[1] = 16;
        *(_QWORD *)(a2 + 56) = 8LL;
        goto LABEL_215;
      }
      v5 = -1073741789;
    }
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_215;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v32 == 1 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v8 )
      goto LABEL_204;
    v123 = 0LL;
    IoGetActivityIdIrp(a2, &v123);
    v58 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v58 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v61 = &EventNonReadWriteRequestComplete;
        goto LABEL_203;
      }
LABEL_204:
      v9 = 0;
      goto LABEL_205;
    }
    if ( *(_BYTE *)v58 != 15 )
    {
      if ( *(_BYTE *)v58 == 27 )
      {
        if ( *(_BYTE *)(v58 + 1) == 7 && !*(_DWORD *)(v58 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v59 = *(unsigned int **)(a2 + 56);
            if ( v59 )
              v60 = *v59;
            else
              v60 = 0LL;
            McTemplateK0pqd_EtwWriteTransfer(v60, v58, &v123, a2, v60, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_204;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v61 = &EventPnpRequestComplete;
LABEL_203:
          McTemplateK0pd_EtwWriteTransfer(v57, v61, &v123, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_204;
        }
      }
      goto LABEL_204;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_204;
    v62 = *(_QWORD *)(v58 + 8);
    v63 = 0LL;
    v110 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    if ( *(_BYTE *)(v62 + 2) == 40 )
    {
      v69 = 0LL;
      v114 = 0;
      if ( *(_DWORD *)(v62 + 20) )
        goto LABEL_204;
      v70 = 0;
      v119 = *(_DWORD *)(v62 + 56);
      if ( !v119 )
        goto LABEL_204;
      do
      {
        v57 = *(unsigned int *)(v62 + 4LL * v70 + 120);
        if ( (unsigned int)v57 >= 0x80 )
        {
          v71 = *(unsigned int *)(v62 + 16);
          if ( (unsigned int)v57 < (unsigned int)v71 )
          {
            v72 = (unsigned int)v57;
            v73 = *(_DWORD *)(v57 + v62) - 64;
            if ( v73 )
            {
              v57 = (unsigned int)(v73 - 1);
              if ( (_DWORD)v57 )
              {
                if ( (_DWORD)v57 == 1 )
                {
                  v57 = v72 + 40;
                  if ( v72 + 40 <= v71 )
                  {
                    if ( *(_DWORD *)(v72 + v62 + 12) )
                      v69 = (char *)(v72 + v62 + 32);
                    v63 = *(_BYTE **)(v72 + v62 + 24);
LABEL_163:
                    v74 = *(_BYTE *)(v72 + v62 + 8);
                    v64 = *(_BYTE *)(v72 + v62 + 9);
                    goto LABEL_172;
                  }
                }
              }
              else
              {
                v57 = v72 + 56;
                if ( v72 + 56 <= v71 )
                {
                  v114 = 1;
                  if ( *(_BYTE *)(v72 + v62 + 10) )
                    v69 = (char *)(v72 + v62 + 24);
                  v63 = *(_BYTE **)(v72 + v62 + 16);
                  v64 = *(_BYTE *)(v72 + v62 + 9);
                  v110 = *(_BYTE *)(v72 + v62 + 8);
                }
              }
            }
            else
            {
              v57 = v72 + 40;
              if ( v72 + 40 <= v71 )
              {
                if ( *(_BYTE *)(v72 + v62 + 10) )
                  v69 = (char *)(v72 + v62 + 24);
                v63 = *(_BYTE **)(v72 + v62 + 16);
                goto LABEL_163;
              }
            }
            if ( v114 )
              break;
          }
        }
        ++v70;
      }
      while ( v70 < v119 );
      v74 = v110;
LABEL_172:
      if ( !v69 )
        goto LABEL_204;
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
        goto LABEL_204;
    }
    LOBYTE(v57) = v75 - 8;
    if ( (v57 & 0x5D) != 0 )
      goto LABEL_204;
    v76 = *(_BYTE *)(v62 + 3);
    if ( v76 == 1 || !v63 || !v64 )
    {
LABEL_197:
      if ( byte_140173441 < 0 )
      {
        if ( !v68 )
        {
          v67 = 0;
          v66 = 0;
          v65 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v57, v62, &v123, a2, *(_DWORD *)(a2 + 48), v76, v74, v65, v66, v67, a2);
      }
      goto LABEL_204;
    }
    v77 = *v63 & 0x7F;
    if ( v77 == 114 || v77 == 115 )
    {
      v57 = (unsigned __int64)&v63[v64];
      LOBYTE(v62) = 0;
      if ( (unsigned __int64)(v63 + 8) > v57 )
        goto LABEL_195;
      v66 = v63[2];
      v65 = v63[1] & 0xF;
      v67 = v63[3];
    }
    else
    {
      v57 = (unsigned __int64)&v63[v64];
      LOBYTE(v62) = 0;
      if ( (unsigned __int64)(v63 + 8) > v57 )
        goto LABEL_195;
      v78 = v63 + 13;
      v65 = v63[2] & 0xF;
      v79 = v64;
      if ( (unsigned int)(unsigned __int8)v63[7] + 8 <= v64 )
        v79 = (unsigned __int8)v63[7] + 8;
      v57 = (unsigned __int64)&v63[v79];
      if ( (unsigned __int64)v78 <= v57 )
        v66 = v63[12];
      if ( (unsigned __int64)(v63 + 14) > v57 )
        v67 = 0;
      else
        v67 = *v78;
    }
    LOBYTE(v62) = 1;
LABEL_195:
    if ( (_BYTE)v62 )
      v68 = 1;
    goto LABEL_197;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v8 )
    goto LABEL_308;
  v123 = 0LL;
  IoGetActivityIdIrp(a2, &v123);
  v34 = *(unsigned __int8 **)(a2 + 184);
  if ( *v34 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_308;
    v107 = *(_DWORD *)(a2 + 48);
    goto LABEL_306;
  }
  v35 = *v34 - 15;
  if ( *v34 == 15 )
  {
    if ( byte_140173441 >= 0 )
      goto LABEL_308;
    v38 = *((_QWORD *)v34 + 1);
    v39 = 0LL;
    v109 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = *(unsigned __int8 *)(v38 + 2);
    if ( (_BYTE)v45 == 40 )
    {
      v46 = 0LL;
      v113 = 0;
      if ( !*(_DWORD *)(v38 + 20) )
      {
        v47 = 0;
        v118 = *(_DWORD *)(v38 + 56);
        if ( v118 )
        {
          while ( 1 )
          {
            v33 = *(unsigned int *)(v38 + 4LL * v47 + 120);
            if ( (unsigned int)v33 >= 0x80 )
            {
              v48 = *(unsigned int *)(v38 + 16);
              if ( (unsigned int)v33 < (unsigned int)v48 )
              {
                v49 = (unsigned int)v33;
                v50 = *(_DWORD *)(v33 + v38) - 64;
                if ( v50 )
                {
                  v33 = (unsigned int)(v50 - 1);
                  if ( (_DWORD)v33 )
                  {
                    if ( (_DWORD)v33 == 1 )
                    {
                      v33 = v49 + 40;
                      if ( v49 + 40 <= v48 )
                        goto LABEL_94;
                    }
                  }
                  else
                  {
                    v33 = v49 + 56;
                    if ( v49 + 56 <= v48 )
                    {
                      v113 = 1;
                      if ( *(_BYTE *)(v49 + v38 + 10) )
                        v46 = (char *)(v49 + v38 + 24);
                      v39 = *(_BYTE **)(v49 + v38 + 16);
                      v40 = *(_BYTE *)(v49 + v38 + 9);
                      v109 = *(_BYTE *)(v49 + v38 + 8);
                    }
                  }
                }
                else
                {
                  v33 = v49 + 40;
                  if ( v49 + 40 <= v48 )
                    goto LABEL_108;
                }
                if ( v113 )
                  goto LABEL_105;
              }
            }
            if ( ++v47 >= v118 )
              goto LABEL_105;
          }
        }
      }
      goto LABEL_308;
    }
    goto LABEL_111;
  }
LABEL_75:
  if ( v35 == 12 )
  {
    if ( v34[1] == 7 && !*((_DWORD *)v34 + 2) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v36 = *(int **)(a2 + 56);
        if ( v36 )
          v2 = *v36;
        McTemplateK0pqd_EtwWriteTransfer(v33, (__int64)v34, &v123, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_308;
    }
    if ( (byte_140173442 & 0x20) != 0 )
    {
      v37 = &EventPnpRequestComplete;
      v107 = *(_DWORD *)(a2 + 48);
LABEL_307:
      McTemplateK0pd_EtwWriteTransfer(v33, v37, &v123, a2, v107);
    }
  }
LABEL_308:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225659LL;
}
