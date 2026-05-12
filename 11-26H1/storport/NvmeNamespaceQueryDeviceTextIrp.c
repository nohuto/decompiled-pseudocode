/*
 * XREFs of NvmeNamespaceQueryDeviceTextIrp @ 0x1401A7B78
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140040B50 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidRemoveTrailingBlanks @ 0x14003C21C (RaidRemoveTrailingBlanks.c)
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorBuildNVMeIdentifier @ 0x1400969B4 (StorBuildNVMeIdentifier.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceQueryDeviceTextIrp(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r14d
  bool v6; // zf
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  int v10; // eax
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r14
  char v16; // r11
  char v17; // si
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  wchar_t *Pool; // rsi
  __int64 v32; // rdx
  _BYTE *v33; // r9
  unsigned __int8 v34; // r14
  char v35; // r11
  char v36; // si
  char v37; // r10
  char v38; // r15
  char *v39; // r15
  unsigned int v40; // r13d
  unsigned __int64 v41; // r12
  __int64 v42; // r8
  int v43; // ecx
  char v44; // r12
  char v45; // cl
  char v46; // r8
  char v47; // al
  char *v48; // r10
  unsigned int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rax
  int v55; // edx
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int *v58; // rcx
  __int64 v59; // rcx
  const EVENT_DESCRIPTOR *v60; // rdx
  __int64 v61; // rdx
  _BYTE *v62; // r9
  unsigned __int8 v63; // r14
  char v64; // r11
  char v65; // si
  char v66; // r10
  char v67; // r15
  char *v68; // r15
  unsigned int v69; // r13d
  unsigned __int64 v70; // r12
  __int64 v71; // r8
  int v72; // ecx
  char v73; // r12
  char v74; // cl
  char v75; // r8
  char v76; // al
  char *v77; // r10
  unsigned int v78; // eax
  __int64 v80; // [rsp+20h] [rbp-E0h]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+30h] [rbp-D0h]
  char v83; // [rsp+60h] [rbp-A0h]
  char v84; // [rsp+60h] [rbp-A0h]
  char v85; // [rsp+60h] [rbp-A0h]
  char v86; // [rsp+61h] [rbp-9Fh]
  char v87; // [rsp+61h] [rbp-9Fh]
  char v88; // [rsp+61h] [rbp-9Fh]
  unsigned int v89; // [rsp+64h] [rbp-9Ch]
  unsigned int v90; // [rsp+64h] [rbp-9Ch]
  unsigned int v91; // [rsp+64h] [rbp-9Ch]
  GUID v92; // [rsp+68h] [rbp-98h] BYREF
  __int128 v93; // [rsp+78h] [rbp-88h] BYREF
  int v94; // [rsp+88h] [rbp-78h]
  _OWORD v95[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-50h]
  _BYTE v97[128]; // [rsp+C0h] [rbp-40h] BYREF

  memset_0(v97, 0, sizeof(v97));
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 >= 2 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    v7 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v6 )
      goto LABEL_199;
    v92 = 0LL;
    IoGetActivityIdIrp(a2, &v92);
    v9 = *(unsigned __int8 **)(a2 + 184);
    if ( *v9 != 14 )
    {
      v10 = *v9 - 15;
      if ( *v9 != 15 )
        goto LABEL_5;
      if ( byte_140173441 >= 0 )
        goto LABEL_199;
      v13 = *((_QWORD *)v9 + 1);
      v14 = 0LL;
      v83 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      if ( *(_BYTE *)(v13 + 2) == 40 )
      {
        v20 = 0LL;
        v86 = 0;
        if ( *(_DWORD *)(v13 + 20) )
          goto LABEL_66;
        v21 = 0;
        v89 = *(_DWORD *)(v13 + 56);
        if ( !v89 )
          goto LABEL_66;
        do
        {
          v8 = *(unsigned int *)(v13 + 4LL * v21 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v22 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v8 < (unsigned int)v22 )
            {
              v23 = (unsigned int)v8;
              v24 = *(_DWORD *)(v8 + v13) - 64;
              if ( v24 )
              {
                v8 = (unsigned int)(v24 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v23 + 40;
                    if ( v23 + 40 <= v22 )
                    {
                      if ( *(_DWORD *)(v23 + v13 + 12) )
                        v20 = (char *)(v23 + v13 + 32);
                      v14 = *(_BYTE **)(v23 + v13 + 24);
LABEL_28:
                      v25 = *(_BYTE *)(v23 + v13 + 8);
                      v15 = *(_BYTE *)(v23 + v13 + 9);
                      goto LABEL_37;
                    }
                  }
                }
                else
                {
                  v8 = v23 + 56;
                  if ( v23 + 56 <= v22 )
                  {
                    v86 = 1;
                    if ( *(_BYTE *)(v23 + v13 + 10) )
                      v20 = (char *)(v23 + v13 + 24);
                    v14 = *(_BYTE **)(v23 + v13 + 16);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    v83 = *(_BYTE *)(v23 + v13 + 8);
                  }
                }
              }
              else
              {
                v8 = v23 + 40;
                if ( v23 + 40 <= v22 )
                {
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
                  goto LABEL_28;
                }
              }
              if ( v86 )
                break;
            }
          }
          ++v21;
        }
        while ( v21 < v89 );
        v25 = v83;
LABEL_37:
        if ( !v20 )
          goto LABEL_66;
        v26 = *v20;
        v19 = 0;
      }
      else
      {
        v26 = *(_BYTE *)(v13 + 72);
        v14 = *(_BYTE **)(v13 + 32);
        v15 = *(_BYTE *)(v13 + 11);
        v25 = *(_BYTE *)(v13 + 4);
        if ( *(_BYTE *)(v13 + 2) )
          goto LABEL_66;
      }
      LOBYTE(v8) = v26 - 8;
      if ( (v8 & 0x5D) == 0 )
      {
        v27 = *(_BYTE *)(v13 + 3);
        if ( v27 == 1 || !v14 || !v15 )
        {
LABEL_62:
          if ( byte_140173441 < 0 )
          {
            if ( !v19 )
            {
              v18 = 0;
              v17 = 0;
              v16 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(v8, v13, &v92, a2, *(_DWORD *)(a2 + 48), v27, v25, v16, v17, v18, a2);
          }
          goto LABEL_66;
        }
        v28 = *v14 & 0x7F;
        if ( v28 == 114 || v28 == 115 )
        {
          v8 = (unsigned __int64)&v14[v15];
          LOBYTE(v13) = 0;
          if ( (unsigned __int64)(v14 + 8) > v8 )
            goto LABEL_60;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
        else
        {
          v8 = (unsigned __int64)&v14[v15];
          LOBYTE(v13) = 0;
          if ( (unsigned __int64)(v14 + 8) > v8 )
            goto LABEL_60;
          v29 = v14 + 13;
          v16 = v14[2] & 0xF;
          v30 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v30 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)&v14[v30];
          if ( (unsigned __int64)v29 <= v8 )
            v17 = v14[12];
          if ( (unsigned __int64)(v14 + 14) > v8 )
            v18 = 0;
          else
            v18 = *v29;
        }
        LOBYTE(v13) = 1;
LABEL_60:
        if ( (_BYTE)v13 )
          v19 = 1;
        goto LABEL_62;
      }
LABEL_66:
      v7 = -1073741637;
      goto LABEL_199;
    }
LABEL_67:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_199;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_14;
  }
  Pool = (wchar_t *)RaidAllocatePool(256LL, 512LL, 1414619474LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    v50 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      if ( (*(_BYTE *)(v50 + 136) & 2) != 0 || *(_BYTE *)(v50 + 1728) == 1 )
      {
        v54 = *(_QWORD *)(v50 + 592);
        v93 = *(_OWORD *)(v54 + 4);
        v94 = *(_DWORD *)(v54 + 20);
        RaidRemoveTrailingBlanks((__int64)&v93, 21);
        StorBuildNVMeIdentifier(a1, v55, (__int64)v97);
        RtlStringCchPrintfW(
          Pool,
          0x100uLL,
          L"NVM Subsystem SN: %hs, NSID: %hs, CtrlID: %04d",
          &v93,
          v97,
          *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 4LL));
      }
      else
      {
        v52 = *(_QWORD *)(v50 + 592);
        v93 = *(_OWORD *)(v52 + 4);
        v94 = *(_DWORD *)(v52 + 20);
        RaidRemoveTrailingBlanks((__int64)&v93, 21);
        RtlStringCchPrintfW(
          Pool,
          0x100uLL,
          L"NVM Subsystem SN: %hs, PCI bus %d, device %d, function %d",
          &v93,
          (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v53 + 128) + 584LL),
          **(unsigned __int16 **)(*(_QWORD *)(v53 + 128) + 592LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v53 + 128) + 592LL) + 2LL));
      }
    }
    else
    {
      v51 = *(_QWORD *)(v50 + 592);
      v95[0] = *(_OWORD *)(v51 + 24);
      v95[1] = *(_OWORD *)(v51 + 40);
      v96 = *(_QWORD *)(v51 + 56);
      RaidRemoveTrailingBlanks((__int64)v95, 41);
      RtlStringCchPrintfW(Pool, 0x100uLL, L"%hs", v95);
    }
    v6 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = Pool;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v6 )
      goto LABEL_198;
    v92 = 0LL;
    IoGetActivityIdIrp(a2, &v92);
    v57 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v57 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
      {
        v60 = &EventNonReadWriteRequestComplete;
        goto LABEL_197;
      }
LABEL_198:
      v7 = 0;
      goto LABEL_199;
    }
    if ( *(_BYTE *)v57 != 15 )
    {
      if ( *(_BYTE *)v57 == 27 )
      {
        if ( *(_BYTE *)(v57 + 1) == 7 && !*(_DWORD *)(v57 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v58 = *(unsigned int **)(a2 + 56);
            if ( v58 )
              v59 = *v58;
            else
              v59 = 0LL;
            LODWORD(v81) = *(_DWORD *)(a2 + 48);
            LODWORD(v80) = v59;
            McTemplateK0pqd_EtwWriteTransfer(v59, v57, &v92, a2, v80, v81);
          }
          goto LABEL_198;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v60 = &EventPnpRequestComplete;
LABEL_197:
          LODWORD(v80) = *(_DWORD *)(a2 + 48);
          McTemplateK0pd_EtwWriteTransfer(v56, v60, &v92, a2, v80);
          goto LABEL_198;
        }
      }
      goto LABEL_198;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_198;
    v61 = *(_QWORD *)(v57 + 8);
    v62 = 0LL;
    v85 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    if ( *(_BYTE *)(v61 + 2) == 40 )
    {
      v68 = 0LL;
      v88 = 0;
      if ( *(_DWORD *)(v61 + 20) )
        goto LABEL_198;
      v69 = 0;
      v91 = *(_DWORD *)(v61 + 56);
      if ( !v91 )
        goto LABEL_198;
      do
      {
        v56 = *(unsigned int *)(v61 + 4LL * v69 + 120);
        if ( (unsigned int)v56 >= 0x80 )
        {
          v70 = *(unsigned int *)(v61 + 16);
          if ( (unsigned int)v56 < (unsigned int)v70 )
          {
            v71 = (unsigned int)v56;
            v72 = *(_DWORD *)(v61 + v56) - 64;
            if ( v72 )
            {
              v56 = (unsigned int)(v72 - 1);
              if ( (_DWORD)v56 )
              {
                if ( (_DWORD)v56 == 1 )
                {
                  v56 = v71 + 40;
                  if ( v71 + 40 <= v70 )
                  {
                    if ( *(_DWORD *)(v61 + v71 + 12) )
                      v68 = (char *)(v71 + v61 + 32);
                    v62 = *(_BYTE **)(v61 + v71 + 24);
LABEL_157:
                    v73 = *(_BYTE *)(v61 + v71 + 8);
                    v63 = *(_BYTE *)(v61 + v71 + 9);
                    goto LABEL_166;
                  }
                }
              }
              else
              {
                v56 = v71 + 56;
                if ( v71 + 56 <= v70 )
                {
                  v88 = 1;
                  if ( *(_BYTE *)(v61 + v71 + 10) )
                    v68 = (char *)(v71 + v61 + 24);
                  v62 = *(_BYTE **)(v61 + v71 + 16);
                  v63 = *(_BYTE *)(v61 + v71 + 9);
                  v85 = *(_BYTE *)(v61 + v71 + 8);
                }
              }
            }
            else
            {
              v56 = v71 + 40;
              if ( v71 + 40 <= v70 )
              {
                if ( *(_BYTE *)(v61 + v71 + 10) )
                  v68 = (char *)(v71 + v61 + 24);
                v62 = *(_BYTE **)(v61 + v71 + 16);
                goto LABEL_157;
              }
            }
            if ( v88 )
              break;
          }
        }
        ++v69;
      }
      while ( v69 < v91 );
      v73 = v85;
LABEL_166:
      if ( !v68 )
        goto LABEL_198;
      v74 = *v68;
      v67 = 0;
    }
    else
    {
      v74 = *(_BYTE *)(v61 + 72);
      v62 = *(_BYTE **)(v61 + 32);
      v63 = *(_BYTE *)(v61 + 11);
      v73 = *(_BYTE *)(v61 + 4);
      if ( *(_BYTE *)(v61 + 2) )
        goto LABEL_198;
    }
    LOBYTE(v56) = v74 - 8;
    if ( (v56 & 0x5D) != 0 )
      goto LABEL_198;
    v75 = *(_BYTE *)(v61 + 3);
    if ( v75 == 1 || !v62 || !v63 )
    {
LABEL_191:
      if ( byte_140173441 < 0 )
      {
        if ( !v67 )
        {
          v66 = 0;
          v65 = 0;
          v64 = 0;
        }
        LOBYTE(v82) = v73;
        LOBYTE(v81) = v75;
        LODWORD(v80) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v56, v61, &v92, a2, v80, v81, v82, v64, v65, v66, a2);
      }
      goto LABEL_198;
    }
    v76 = *v62 & 0x7F;
    if ( v76 == 114 || v76 == 115 )
    {
      v56 = (unsigned __int64)&v62[v63];
      LOBYTE(v61) = 0;
      if ( (unsigned __int64)(v62 + 8) > v56 )
        goto LABEL_189;
      v65 = v62[2];
      v64 = v62[1] & 0xF;
      v66 = v62[3];
    }
    else
    {
      v56 = (unsigned __int64)&v62[v63];
      LOBYTE(v61) = 0;
      if ( (unsigned __int64)(v62 + 8) > v56 )
        goto LABEL_189;
      v77 = v62 + 13;
      v64 = v62[2] & 0xF;
      v78 = v63;
      if ( (unsigned int)(unsigned __int8)v62[7] + 8 <= v63 )
        v78 = (unsigned __int8)v62[7] + 8;
      v56 = (unsigned __int64)&v62[v78];
      if ( (unsigned __int64)v77 <= v56 )
        v65 = v62[12];
      if ( (unsigned __int64)(v62 + 14) > v56 )
        v66 = 0;
      else
        v66 = *v77;
    }
    LOBYTE(v61) = 1;
LABEL_189:
    if ( (_BYTE)v61 )
      v67 = 1;
    goto LABEL_191;
  }
  v6 = StorEtwLoggingEnabled == 0;
  v7 = -1073741801;
  *(_DWORD *)(a2 + 48) = -1073741801;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v6 )
    goto LABEL_199;
  v92 = 0LL;
  IoGetActivityIdIrp(a2, &v92);
  v9 = *(unsigned __int8 **)(a2 + 184);
  if ( *v9 == 14 )
    goto LABEL_67;
  v10 = *v9 - 15;
  if ( *v9 == 15 )
  {
    if ( byte_140173441 >= 0 )
      goto LABEL_199;
    v32 = *((_QWORD *)v9 + 1);
    v33 = 0LL;
    v84 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    if ( *(_BYTE *)(v32 + 2) == 40 )
    {
      v39 = 0LL;
      v87 = 0;
      if ( *(_DWORD *)(v32 + 20) )
        goto LABEL_124;
      v40 = 0;
      v90 = *(_DWORD *)(v32 + 56);
      if ( !v90 )
        goto LABEL_124;
      do
      {
        v8 = *(unsigned int *)(v32 + 4LL * v40 + 120);
        if ( (unsigned int)v8 >= 0x80 )
        {
          v41 = *(unsigned int *)(v32 + 16);
          if ( (unsigned int)v8 < (unsigned int)v41 )
          {
            v42 = (unsigned int)v8;
            v43 = *(_DWORD *)(v8 + v32) - 64;
            if ( v43 )
            {
              v8 = (unsigned int)(v43 - 1);
              if ( (_DWORD)v8 )
              {
                if ( (_DWORD)v8 == 1 )
                {
                  v8 = v42 + 40;
                  if ( v42 + 40 <= v41 )
                  {
                    if ( *(_DWORD *)(v42 + v32 + 12) )
                      v39 = (char *)(v42 + v32 + 32);
                    v33 = *(_BYTE **)(v42 + v32 + 24);
LABEL_86:
                    v44 = *(_BYTE *)(v42 + v32 + 8);
                    v34 = *(_BYTE *)(v42 + v32 + 9);
                    goto LABEL_95;
                  }
                }
              }
              else
              {
                v8 = v42 + 56;
                if ( v42 + 56 <= v41 )
                {
                  v87 = 1;
                  if ( *(_BYTE *)(v42 + v32 + 10) )
                    v39 = (char *)(v42 + v32 + 24);
                  v33 = *(_BYTE **)(v42 + v32 + 16);
                  v34 = *(_BYTE *)(v42 + v32 + 9);
                  v84 = *(_BYTE *)(v42 + v32 + 8);
                }
              }
            }
            else
            {
              v8 = v42 + 40;
              if ( v42 + 40 <= v41 )
              {
                if ( *(_BYTE *)(v42 + v32 + 10) )
                  v39 = (char *)(v42 + v32 + 24);
                v33 = *(_BYTE **)(v42 + v32 + 16);
                goto LABEL_86;
              }
            }
            if ( v87 )
              break;
          }
        }
        ++v40;
      }
      while ( v40 < v90 );
      v44 = v84;
LABEL_95:
      if ( !v39 )
        goto LABEL_124;
      v45 = *v39;
      v38 = 0;
    }
    else
    {
      v45 = *(_BYTE *)(v32 + 72);
      v33 = *(_BYTE **)(v32 + 32);
      v34 = *(_BYTE *)(v32 + 11);
      v44 = *(_BYTE *)(v32 + 4);
      if ( *(_BYTE *)(v32 + 2) )
        goto LABEL_124;
    }
    LOBYTE(v8) = v45 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v46 = *(_BYTE *)(v32 + 3);
      if ( v46 == 1 || !v33 || !v34 )
      {
LABEL_120:
        if ( byte_140173441 < 0 )
        {
          if ( !v38 )
          {
            v37 = 0;
            v36 = 0;
            v35 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v8, v32, &v92, a2, *(_DWORD *)(a2 + 48), v46, v44, v35, v36, v37, a2);
        }
        goto LABEL_124;
      }
      v47 = *v33 & 0x7F;
      if ( v47 == 114 || v47 == 115 )
      {
        v8 = (unsigned __int64)&v33[v34];
        LOBYTE(v32) = 0;
        if ( (unsigned __int64)(v33 + 8) > v8 )
          goto LABEL_118;
        v36 = v33[2];
        v35 = v33[1] & 0xF;
        v37 = v33[3];
      }
      else
      {
        v8 = (unsigned __int64)&v33[v34];
        LOBYTE(v32) = 0;
        if ( (unsigned __int64)(v33 + 8) > v8 )
          goto LABEL_118;
        v48 = v33 + 13;
        v35 = v33[2] & 0xF;
        v49 = v34;
        if ( (unsigned int)(unsigned __int8)v33[7] + 8 <= v34 )
          v49 = (unsigned __int8)v33[7] + 8;
        v8 = (unsigned __int64)&v33[v49];
        if ( (unsigned __int64)v48 <= v8 )
          v36 = v33[12];
        if ( (unsigned __int64)(v33 + 14) > v8 )
          v37 = 0;
        else
          v37 = *v48;
      }
      LOBYTE(v32) = 1;
LABEL_118:
      if ( (_BYTE)v32 )
        v38 = 1;
      goto LABEL_120;
    }
LABEL_124:
    v7 = -1073741801;
    goto LABEL_199;
  }
LABEL_5:
  if ( v10 != 12 )
    goto LABEL_199;
  if ( v9[1] != 7 || *((_DWORD *)v9 + 2) )
  {
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_199;
    v12 = &EventPnpRequestComplete;
LABEL_14:
    McTemplateK0pd_EtwWriteTransfer(v8, v12, &v92, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_199;
  }
  if ( (byte_140173442 & 0x40) != 0 )
  {
    v11 = *(int **)(a2 + 56);
    if ( v11 )
      v4 = *v11;
    McTemplateK0pqd_EtwWriteTransfer(v8, (__int64)v9, &v92, a2, v4, *(_DWORD *)(a2 + 48));
  }
LABEL_199:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
