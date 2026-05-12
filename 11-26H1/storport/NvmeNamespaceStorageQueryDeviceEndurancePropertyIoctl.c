/*
 * XREFs of NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401B9BD8 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  char v12; // r12
  _BYTE *v13; // r9
  unsigned __int8 v14; // r14
  char v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r15
  char *v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // r8
  int v23; // ecx
  char v24; // cl
  char v25; // r8
  char v26; // al
  char *v27; // r11
  unsigned int v28; // eax
  int v29; // ecx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r12
  _BYTE *v36; // r9
  unsigned __int8 v37; // r14
  char v38; // r10
  char v39; // si
  char v40; // r11
  char v41; // r15
  char *v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  char v49; // al
  char *v50; // r11
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int *v54; // rcx
  __int64 v55; // rcx
  const EVENT_DESCRIPTOR *v56; // rdx
  __int64 v57; // rdx
  char v58; // r12
  _BYTE *v59; // r9
  unsigned __int8 v60; // r14
  char v61; // r10
  char v62; // si
  char v63; // r11
  char v64; // r15
  char *v65; // r15
  __int64 v66; // rax
  unsigned __int64 v67; // r13
  __int64 v68; // r8
  int v69; // ecx
  char v70; // cl
  char v71; // r8
  char v72; // al
  char *v73; // r11
  unsigned int v74; // eax
  unsigned int v75; // ecx
  __int64 v76; // rax
  int v77; // ecx
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  unsigned int *v80; // rax
  const EVENT_DESCRIPTOR *v81; // rdx
  __int64 v82; // rdx
  char v83; // r12
  _BYTE *v84; // r9
  unsigned __int8 v85; // r14
  char v86; // r10
  char v87; // si
  char v88; // r11
  char v89; // r15
  char *v90; // r15
  __int64 v91; // rax
  unsigned __int64 v92; // r13
  __int64 v93; // r8
  int v94; // ecx
  char v95; // cl
  char v96; // r8
  char v97; // al
  char *v98; // r11
  unsigned int v99; // eax
  __int64 v101; // r8
  __int64 *ExtendedCommand; // r14
  int v103; // r13d
  __int64 v104; // r8
  unsigned __int64 v105; // rcx
  __int64 v106; // rdx
  unsigned int *v107; // rax
  const EVENT_DESCRIPTOR *v108; // rdx
  __int64 v109; // rdx
  char v110; // r12
  _BYTE *v111; // r9
  unsigned __int8 v112; // r14
  char v113; // r10
  char v114; // si
  char v115; // r11
  char v116; // r15
  char *v117; // r15
  __int64 v118; // rax
  unsigned __int64 v119; // r13
  __int64 v120; // r8
  int v121; // ecx
  char v122; // cl
  char v123; // r8
  char v124; // al
  char *v125; // r11
  unsigned int v126; // eax
  __int64 v127; // [rsp+20h] [rbp-59h]
  int v128; // [rsp+20h] [rbp-59h]
  __int64 v129; // [rsp+28h] [rbp-51h]
  __int64 v130; // [rsp+30h] [rbp-49h]
  __int64 v131; // [rsp+38h] [rbp-41h]
  __int64 v132; // [rsp+40h] [rbp-39h]
  __int64 v133; // [rsp+48h] [rbp-31h]
  char v134; // [rsp+60h] [rbp-19h]
  char v135; // [rsp+60h] [rbp-19h]
  char v136; // [rsp+60h] [rbp-19h]
  char v137; // [rsp+60h] [rbp-19h]
  char v138; // [rsp+60h] [rbp-19h]
  int v139; // [rsp+64h] [rbp-15h]
  int v140; // [rsp+64h] [rbp-15h]
  int v141; // [rsp+64h] [rbp-15h]
  int v142; // [rsp+64h] [rbp-15h]
  int DmaBuffer; // [rsp+64h] [rbp-15h]
  unsigned int v144; // [rsp+68h] [rbp-11h]
  unsigned int v145; // [rsp+68h] [rbp-11h]
  unsigned int v146; // [rsp+68h] [rbp-11h]
  unsigned int v147; // [rsp+68h] [rbp-11h]
  int v148; // [rsp+68h] [rbp-11h]
  unsigned int v149; // [rsp+6Ch] [rbp-Dh]
  unsigned int v150; // [rsp+6Ch] [rbp-Dh]
  __int128 v151; // [rsp+70h] [rbp-9h] BYREF
  GUID v152; // [rsp+80h] [rbp+7h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v151 = 0LL;
  if ( !v4 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v6 )
      goto LABEL_68;
    v152 = 0LL;
    IoGetActivityIdIrp(a2, &v152);
    v8 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v8 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_68;
      v10 = &EventNonReadWriteRequestComplete;
      goto LABEL_67;
    }
    if ( *(_BYTE *)v8 != 15 )
    {
      if ( *(_BYTE *)v8 != 27 )
        goto LABEL_68;
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v9 = *(unsigned int **)(a2 + 56);
          if ( v9 )
            v3 = *v9;
          McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v152, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_68;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_68;
      v10 = &EventPnpRequestComplete;
LABEL_67:
      McTemplateK0pd_EtwWriteTransfer(v7, v10, &v152, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_68;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_68;
    v11 = *(_QWORD *)(v8 + 8);
    v12 = 0;
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v19 = 0LL;
      v134 = 0;
      if ( *(_DWORD *)(v11 + 20) )
        goto LABEL_68;
      v20 = 0LL;
      v139 = 0;
      v144 = *(_DWORD *)(v11 + 56);
      if ( !v144 )
        goto LABEL_68;
      while ( 1 )
      {
        v7 = *(unsigned int *)(v11 + 4 * v20 + 120);
        if ( (unsigned int)v7 >= 0x80 )
        {
          v21 = *(unsigned int *)(v11 + 16);
          if ( (unsigned int)v7 < (unsigned int)v21 )
          {
            v22 = (unsigned int)v7;
            v23 = *(_DWORD *)(v7 + v11) - 64;
            if ( v23 )
            {
              v7 = (unsigned int)(v23 - 1);
              if ( (_DWORD)v7 )
              {
                if ( (_DWORD)v7 == 1 )
                {
                  v7 = v22 + 40;
                  if ( v22 + 40 <= v21 )
                  {
                    if ( *(_DWORD *)(v22 + v11 + 12) )
                      v19 = (char *)(v22 + v11 + 32);
                    v13 = *(_BYTE **)(v22 + v11 + 24);
                    goto LABEL_38;
                  }
                }
              }
              else
              {
                v7 = v22 + 56;
                if ( v22 + 56 <= v21 )
                {
                  v134 = 1;
                  if ( *(_BYTE *)(v22 + v11 + 10) )
                    v19 = (char *)(v22 + v11 + 24);
                  v12 = *(_BYTE *)(v22 + v11 + 8);
                  v13 = *(_BYTE **)(v22 + v11 + 16);
                  v14 = *(_BYTE *)(v22 + v11 + 9);
                }
              }
            }
            else
            {
              v7 = v22 + 40;
              if ( v22 + 40 <= v21 )
              {
                if ( *(_BYTE *)(v22 + v11 + 10) )
                  v19 = (char *)(v22 + v11 + 24);
                v13 = *(_BYTE **)(v22 + v11 + 16);
LABEL_38:
                v14 = *(_BYTE *)(v22 + v11 + 9);
                v12 = *(_BYTE *)(v22 + v11 + 8);
LABEL_39:
                if ( v19 )
                {
                  v24 = *v19;
                  v18 = 0;
                  goto LABEL_42;
                }
                goto LABEL_68;
              }
            }
            if ( v134 )
              goto LABEL_39;
          }
        }
        v20 = (unsigned int)(v139 + 1);
        v139 = v20;
        if ( (unsigned int)v20 >= v144 )
          goto LABEL_39;
      }
    }
    v24 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( *(_BYTE *)(v11 + 2) )
      goto LABEL_68;
LABEL_42:
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) != 0 )
    {
LABEL_68:
      v3 = -1073741811;
      goto LABEL_276;
    }
    v25 = *(_BYTE *)(v11 + 3);
    if ( v25 == 1 || !v13 || !v14 )
    {
LABEL_61:
      if ( byte_140173441 < 0 )
      {
        if ( !v18 )
        {
          v17 = 0;
          v16 = 0;
          v15 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v152, a2, *(_DWORD *)(a2 + 48), v25, v12, v15, v16, v17, a2);
      }
      goto LABEL_68;
    }
    v26 = *v13 & 0x7F;
    if ( v26 == 114 || v26 == 115 )
    {
      v7 = (unsigned __int64)&v13[v14];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v13 + 8) > v7 )
        goto LABEL_59;
      v16 = v13[2];
      v15 = v13[1] & 0xF;
      v17 = v13[3];
    }
    else
    {
      v7 = (unsigned __int64)&v13[v14];
      LOBYTE(v11) = 0;
      if ( (unsigned __int64)(v13 + 8) > v7 )
        goto LABEL_59;
      v27 = v13 + 13;
      v15 = v13[2] & 0xF;
      v28 = v14;
      if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
        v28 = (unsigned __int8)v13[7] + 8;
      v7 = (unsigned __int64)&v13[v28];
      if ( (unsigned __int64)v27 <= v7 )
        v16 = v13[12];
      if ( (unsigned __int64)(v13 + 14) > v7 )
        v17 = 0;
      else
        v17 = *v27;
    }
    LOBYTE(v11) = 1;
LABEL_59:
    if ( (_BYTE)v11 )
      v18 = 1;
    goto LABEL_61;
  }
  v29 = v4[1];
  if ( !v29 )
  {
    v75 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( v75 < 0x38 )
    {
      if ( v75 < 8 )
      {
        v77 = -1073741789;
        v76 = 0LL;
      }
      else
      {
        *v4 = 56;
        v76 = 8LL;
        v4[1] = 56;
        v77 = 0;
      }
      *(_QWORD *)(a2 + 56) = v76;
      v6 = StorEtwLoggingEnabled == 0;
      v147 = v77;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v77;
      if ( v6 )
        goto LABEL_275;
      v152 = 0LL;
      IoGetActivityIdIrp(a2, &v152);
      v79 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v79 == 14 )
      {
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_275;
        v128 = *(_DWORD *)(a2 + 48);
        v81 = &EventNonReadWriteRequestComplete;
        goto LABEL_274;
      }
      if ( *(_BYTE *)v79 != 15 )
      {
        if ( *(_BYTE *)v79 != 27 )
          goto LABEL_275;
        if ( *(_BYTE *)(v79 + 1) == 7 && !*(_DWORD *)(v79 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v80 = *(unsigned int **)(a2 + 56);
            if ( v80 )
              v3 = *v80;
            McTemplateK0pqd_EtwWriteTransfer(v78, v79, &v152, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_275;
        }
        if ( (byte_140173442 & 0x20) == 0 )
        {
LABEL_275:
          v3 = v147;
          goto LABEL_276;
        }
        v81 = &EventPnpRequestComplete;
        v128 = *(_DWORD *)(a2 + 48);
LABEL_274:
        McTemplateK0pd_EtwWriteTransfer(v78, v81, &v152, a2, v128);
        goto LABEL_275;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_275;
      v82 = *(_QWORD *)(v79 + 8);
      v83 = 0;
      v84 = 0LL;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      if ( *(_BYTE *)(v82 + 2) == 40 )
      {
        v90 = 0LL;
        v137 = 0;
        if ( *(_DWORD *)(v82 + 20) )
          goto LABEL_275;
        v91 = 0LL;
        v142 = 0;
        v149 = *(_DWORD *)(v82 + 56);
        if ( !v149 )
          goto LABEL_275;
        while ( 1 )
        {
          v78 = *(unsigned int *)(v82 + 4 * v91 + 120);
          if ( (unsigned int)v78 >= 0x80 )
          {
            v92 = *(unsigned int *)(v82 + 16);
            if ( (unsigned int)v78 < (unsigned int)v92 )
            {
              v93 = (unsigned int)v78;
              v94 = *(_DWORD *)(v78 + v82) - 64;
              if ( v94 )
              {
                v78 = (unsigned int)(v94 - 1);
                if ( (_DWORD)v78 )
                {
                  if ( (_DWORD)v78 == 1 )
                  {
                    v78 = v93 + 40;
                    if ( v93 + 40 <= v92 )
                    {
                      if ( *(_DWORD *)(v93 + v82 + 12) )
                        v90 = (char *)(v93 + v82 + 32);
                      v84 = *(_BYTE **)(v93 + v82 + 24);
LABEL_245:
                      v85 = *(_BYTE *)(v93 + v82 + 9);
                      v83 = *(_BYTE *)(v93 + v82 + 8);
LABEL_246:
                      if ( v90 )
                      {
                        v95 = *v90;
                        v89 = 0;
                        goto LABEL_249;
                      }
                      goto LABEL_275;
                    }
                  }
                }
                else
                {
                  v78 = v93 + 56;
                  if ( v93 + 56 <= v92 )
                  {
                    v137 = 1;
                    if ( *(_BYTE *)(v93 + v82 + 10) )
                      v90 = (char *)(v93 + v82 + 24);
                    v83 = *(_BYTE *)(v93 + v82 + 8);
                    v84 = *(_BYTE **)(v93 + v82 + 16);
                    v85 = *(_BYTE *)(v93 + v82 + 9);
                  }
                }
              }
              else
              {
                v78 = v93 + 40;
                if ( v93 + 40 <= v92 )
                {
                  if ( *(_BYTE *)(v93 + v82 + 10) )
                    v90 = (char *)(v93 + v82 + 24);
                  v84 = *(_BYTE **)(v93 + v82 + 16);
                  goto LABEL_245;
                }
              }
              if ( v137 )
                goto LABEL_246;
            }
          }
          v91 = (unsigned int)(v142 + 1);
          v142 = v91;
          if ( (unsigned int)v91 >= v149 )
            goto LABEL_246;
        }
      }
      v95 = *(_BYTE *)(v82 + 72);
      v84 = *(_BYTE **)(v82 + 32);
      v85 = *(_BYTE *)(v82 + 11);
      v83 = *(_BYTE *)(v82 + 4);
      if ( *(_BYTE *)(v82 + 2) )
        goto LABEL_275;
LABEL_249:
      LOBYTE(v78) = v95 - 8;
      if ( (v78 & 0x5D) != 0 )
        goto LABEL_275;
      v96 = *(_BYTE *)(v82 + 3);
      if ( v96 == 1 || !v84 || !v85 )
      {
LABEL_268:
        if ( byte_140173441 < 0 )
        {
          if ( !v89 )
          {
            v88 = 0;
            v87 = 0;
            v86 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v78, v82, &v152, a2, *(_DWORD *)(a2 + 48), v96, v83, v86, v87, v88, a2);
        }
        goto LABEL_275;
      }
      v97 = *v84 & 0x7F;
      if ( v97 == 114 || v97 == 115 )
      {
        v78 = (unsigned __int64)&v84[v85];
        LOBYTE(v82) = 0;
        if ( (unsigned __int64)(v84 + 8) > v78 )
          goto LABEL_266;
        v87 = v84[2];
        v86 = v84[1] & 0xF;
        v88 = v84[3];
      }
      else
      {
        v78 = (unsigned __int64)&v84[v85];
        LOBYTE(v82) = 0;
        if ( (unsigned __int64)(v84 + 8) > v78 )
          goto LABEL_266;
        v98 = v84 + 13;
        v86 = v84[2] & 0xF;
        v99 = v85;
        if ( (unsigned int)(unsigned __int8)v84[7] + 8 <= v85 )
          v99 = (unsigned __int8)v84[7] + 8;
        v78 = (unsigned __int64)&v84[v99];
        if ( (unsigned __int64)v98 <= v78 )
          v87 = v84[12];
        if ( (unsigned __int64)(v84 + 14) > v78 )
          v88 = 0;
        else
          v88 = *v98;
      }
      LOBYTE(v82) = 1;
LABEL_266:
      if ( (_BYTE)v82 )
        v89 = 1;
      goto LABEL_268;
    }
    ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16));
    if ( ExtendedCommand )
    {
      DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 0x200u, v101, (void **)&v151, (_QWORD *)&v151 + 1, 0);
      v103 = DmaBuffer;
      if ( DmaBuffer >= 0 )
      {
        *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
        *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
        *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
        *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
        *(_WORD *)(*ExtendedCommand + 4252) = 0;
        *(_QWORD *)(*ExtendedCommand + 4184) = a2;
        *(_QWORD *)(*ExtendedCommand + 4216) = a1;
        *(_QWORD *)(*ExtendedCommand + 4192) = NvmeNamespaceQueryDeviceEndurancePropertyCompletion;
        *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
        *(_OWORD *)(*ExtendedCommand + 4160) = v151;
        *(_DWORD *)(*ExtendedCommand + 4248) = 512;
        v104 = *ExtendedCommand;
        LOBYTE(v104) = 9;
        BuildGetLogPageCommand(
          *(_QWORD *)(a1 + 16),
          *ExtendedCommand + 4096,
          v104,
          0x200u,
          *((__int64 *)&v151 + 1),
          *(_DWORD *)(a1 + 56),
          0LL,
          *(_WORD *)(*(_QWORD *)(a1 + 176) + 102LL),
          *ExtendedCommand,
          ExtendedCommand[1]);
        DmaBuffer = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
        v103 = DmaBuffer;
        if ( DmaBuffer >= 0 )
          return 259LL;
      }
      *(_QWORD *)(a2 + 56) = 0LL;
      _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
      NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), (__int64)ExtendedCommand);
    }
    else
    {
      v103 = -1073741670;
      *(_QWORD *)(a2 + 56) = 0LL;
      DmaBuffer = -1073741670;
    }
    if ( (_QWORD)v151 )
      NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), 0x200u, v101, v151, *((__int64 *)&v151 + 1));
    v6 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v103;
    if ( v6 )
      goto LABEL_350;
    v152 = 0LL;
    IoGetActivityIdIrp(a2, &v152);
    v106 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v106 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_350;
      v108 = &EventNonReadWriteRequestComplete;
      goto LABEL_349;
    }
    if ( *(_BYTE *)v106 != 15 )
    {
      if ( *(_BYTE *)v106 != 27 )
        goto LABEL_350;
      if ( *(_BYTE *)(v106 + 1) == 7 && !*(_DWORD *)(v106 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v107 = *(unsigned int **)(a2 + 56);
          if ( v107 )
            v3 = *v107;
          LODWORD(v129) = *(_DWORD *)(a2 + 48);
          LODWORD(v127) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v105, v106, &v152, a2, v127, v129);
        }
        goto LABEL_350;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_350;
      v108 = &EventPnpRequestComplete;
LABEL_349:
      LODWORD(v127) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v105, v108, &v152, a2, v127);
      goto LABEL_350;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_350;
    v109 = *(_QWORD *)(v106 + 8);
    v110 = 0;
    v111 = 0LL;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    if ( *(_BYTE *)(v109 + 2) == 40 )
    {
      v117 = 0LL;
      v138 = 0;
      if ( *(_DWORD *)(v109 + 20) )
        goto LABEL_350;
      v118 = 0LL;
      v148 = 0;
      v150 = *(_DWORD *)(v109 + 56);
      if ( !v150 )
        goto LABEL_350;
      while ( 1 )
      {
        v105 = *(unsigned int *)(v109 + 4 * v118 + 120);
        if ( (unsigned int)v105 >= 0x80 )
        {
          v119 = *(unsigned int *)(v109 + 16);
          if ( (unsigned int)v105 < (unsigned int)v119 )
          {
            v120 = (unsigned int)v105;
            v121 = *(_DWORD *)(v109 + v105) - 64;
            if ( v121 )
            {
              v105 = (unsigned int)(v121 - 1);
              if ( (_DWORD)v105 )
              {
                if ( (_DWORD)v105 == 1 )
                {
                  v105 = v120 + 40;
                  if ( v120 + 40 <= v119 )
                  {
                    if ( *(_DWORD *)(v109 + v120 + 12) )
                      v117 = (char *)(v120 + v109 + 32);
                    v111 = *(_BYTE **)(v109 + v120 + 24);
                    goto LABEL_320;
                  }
                }
              }
              else
              {
                v105 = v120 + 56;
                if ( v120 + 56 <= v119 )
                {
                  v138 = 1;
                  if ( *(_BYTE *)(v109 + v120 + 10) )
                    v117 = (char *)(v120 + v109 + 24);
                  v110 = *(_BYTE *)(v109 + v120 + 8);
                  v111 = *(_BYTE **)(v109 + v120 + 16);
                  v112 = *(_BYTE *)(v109 + v120 + 9);
                }
              }
            }
            else
            {
              v105 = v120 + 40;
              if ( v120 + 40 <= v119 )
              {
                if ( *(_BYTE *)(v109 + v120 + 10) )
                  v117 = (char *)(v120 + v109 + 24);
                v111 = *(_BYTE **)(v109 + v120 + 16);
LABEL_320:
                v112 = *(_BYTE *)(v109 + v120 + 9);
                v110 = *(_BYTE *)(v109 + v120 + 8);
LABEL_321:
                if ( v117 )
                {
                  v122 = *v117;
                  v116 = 0;
                  goto LABEL_324;
                }
                goto LABEL_350;
              }
            }
            if ( v138 )
              goto LABEL_321;
          }
        }
        v118 = (unsigned int)(v148 + 1);
        v148 = v118;
        if ( (unsigned int)v118 >= v150 )
          goto LABEL_321;
      }
    }
    v122 = *(_BYTE *)(v109 + 72);
    v111 = *(_BYTE **)(v109 + 32);
    v112 = *(_BYTE *)(v109 + 11);
    v110 = *(_BYTE *)(v109 + 4);
    if ( *(_BYTE *)(v109 + 2) )
      goto LABEL_350;
LABEL_324:
    LOBYTE(v105) = v122 - 8;
    if ( (v105 & 0x5D) != 0 )
    {
LABEL_350:
      IofCompleteRequest((PIRP)a2, 0);
      return (unsigned int)DmaBuffer;
    }
    v123 = *(_BYTE *)(v109 + 3);
    if ( v123 == 1 || !v111 || !v112 )
    {
LABEL_343:
      if ( byte_140173441 < 0 )
      {
        if ( !v116 )
        {
          v115 = 0;
          v114 = 0;
          v113 = 0;
        }
        LOBYTE(v133) = v115;
        LOBYTE(v132) = v114;
        LOBYTE(v131) = v113;
        LOBYTE(v130) = v110;
        LOBYTE(v129) = v123;
        LODWORD(v127) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v105, v109, &v152, a2, v127, v129, v130, v131, v132, v133, a2);
      }
      goto LABEL_350;
    }
    v124 = *v111 & 0x7F;
    if ( v124 == 114 || v124 == 115 )
    {
      v105 = (unsigned __int64)&v111[v112];
      LOBYTE(v109) = 0;
      if ( (unsigned __int64)(v111 + 8) > v105 )
        goto LABEL_341;
      v114 = v111[2];
      v113 = v111[1] & 0xF;
      v115 = v111[3];
    }
    else
    {
      v105 = (unsigned __int64)&v111[v112];
      LOBYTE(v109) = 0;
      if ( (unsigned __int64)(v111 + 8) > v105 )
        goto LABEL_341;
      v125 = v111 + 13;
      v113 = v111[2] & 0xF;
      v126 = v112;
      if ( (unsigned int)(unsigned __int8)v111[7] + 8 <= v112 )
        v126 = (unsigned __int8)v111[7] + 8;
      v105 = (unsigned __int64)&v111[v126];
      if ( (unsigned __int64)v125 <= v105 )
        v114 = v111[12];
      if ( (unsigned __int64)(v111 + 14) > v105 )
        v115 = 0;
      else
        v115 = *v125;
    }
    LOBYTE(v109) = 1;
LABEL_341:
    if ( (_BYTE)v109 )
      v116 = 1;
    goto LABEL_343;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v29 != 1 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(a2 + 48) = -1073741637;
    if ( v6 )
      goto LABEL_137;
    v152 = 0LL;
    IoGetActivityIdIrp(a2, &v152);
    v31 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v31 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_137;
      v33 = &EventNonReadWriteRequestComplete;
      goto LABEL_136;
    }
    if ( *(_BYTE *)v31 != 15 )
    {
      if ( *(_BYTE *)v31 != 27 )
        goto LABEL_137;
      if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v32 = *(unsigned int **)(a2 + 56);
          if ( v32 )
            v3 = *v32;
          McTemplateK0pqd_EtwWriteTransfer(v30, v31, &v152, a2, v3, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_137;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_137;
      v33 = &EventPnpRequestComplete;
LABEL_136:
      McTemplateK0pd_EtwWriteTransfer(v30, v33, &v152, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_137;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_137;
    v34 = *(_QWORD *)(v31 + 8);
    v35 = 0;
    v36 = 0LL;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    if ( *(_BYTE *)(v34 + 2) == 40 )
    {
      v42 = 0LL;
      v135 = 0;
      if ( *(_DWORD *)(v34 + 20) )
        goto LABEL_137;
      v43 = 0LL;
      v140 = 0;
      v145 = *(_DWORD *)(v34 + 56);
      if ( !v145 )
        goto LABEL_137;
      while ( 1 )
      {
        v30 = *(unsigned int *)(v34 + 4 * v43 + 120);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v44 = *(unsigned int *)(v34 + 16);
          if ( (unsigned int)v30 < (unsigned int)v44 )
          {
            v45 = (unsigned int)v30;
            v46 = *(_DWORD *)(v30 + v34) - 64;
            if ( v46 )
            {
              v30 = (unsigned int)(v46 - 1);
              if ( (_DWORD)v30 )
              {
                if ( (_DWORD)v30 == 1 )
                {
                  v30 = v45 + 40;
                  if ( v45 + 40 <= v44 )
                  {
                    if ( *(_DWORD *)(v45 + v34 + 12) )
                      v42 = (char *)(v45 + v34 + 32);
                    v36 = *(_BYTE **)(v45 + v34 + 24);
                    goto LABEL_107;
                  }
                }
              }
              else
              {
                v30 = v45 + 56;
                if ( v45 + 56 <= v44 )
                {
                  v135 = 1;
                  if ( *(_BYTE *)(v45 + v34 + 10) )
                    v42 = (char *)(v45 + v34 + 24);
                  v35 = *(_BYTE *)(v45 + v34 + 8);
                  v36 = *(_BYTE **)(v45 + v34 + 16);
                  v37 = *(_BYTE *)(v45 + v34 + 9);
                }
              }
            }
            else
            {
              v30 = v45 + 40;
              if ( v45 + 40 <= v44 )
              {
                if ( *(_BYTE *)(v45 + v34 + 10) )
                  v42 = (char *)(v45 + v34 + 24);
                v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_107:
                v37 = *(_BYTE *)(v45 + v34 + 9);
                v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_108:
                if ( v42 )
                {
                  v47 = *v42;
                  v41 = 0;
                  goto LABEL_111;
                }
                goto LABEL_137;
              }
            }
            if ( v135 )
              goto LABEL_108;
          }
        }
        v43 = (unsigned int)(v140 + 1);
        v140 = v43;
        if ( (unsigned int)v43 >= v145 )
          goto LABEL_108;
      }
    }
    v47 = *(_BYTE *)(v34 + 72);
    v36 = *(_BYTE **)(v34 + 32);
    v37 = *(_BYTE *)(v34 + 11);
    v35 = *(_BYTE *)(v34 + 4);
    if ( *(_BYTE *)(v34 + 2) )
      goto LABEL_137;
LABEL_111:
    LOBYTE(v30) = v47 - 8;
    if ( (v30 & 0x5D) != 0 )
    {
LABEL_137:
      v3 = -1073741637;
      goto LABEL_276;
    }
    v48 = *(_BYTE *)(v34 + 3);
    if ( v48 == 1 || !v36 || !v37 )
    {
LABEL_130:
      if ( byte_140173441 < 0 )
      {
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v30, v34, &v152, a2, *(_DWORD *)(a2 + 48), v48, v35, v38, v39, v40, a2);
      }
      goto LABEL_137;
    }
    v49 = *v36 & 0x7F;
    if ( v49 == 114 || v49 == 115 )
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v34) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_128;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v30 = (unsigned __int64)&v36[v37];
      LOBYTE(v34) = 0;
      if ( (unsigned __int64)(v36 + 8) > v30 )
        goto LABEL_128;
      v50 = v36 + 13;
      v38 = v36[2] & 0xF;
      v51 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v51 = (unsigned __int8)v36[7] + 8;
      v30 = (unsigned __int64)&v36[v51];
      if ( (unsigned __int64)v50 <= v30 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v30 )
        v40 = 0;
      else
        v40 = *v50;
    }
    LOBYTE(v34) = 1;
LABEL_128:
    if ( (_BYTE)v34 )
      v41 = 1;
    goto LABEL_130;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v6 )
    goto LABEL_276;
  v152 = 0LL;
  IoGetActivityIdIrp(a2, &v152);
  v53 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v53 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_276;
    v56 = &EventNonReadWriteRequestComplete;
    goto LABEL_204;
  }
  if ( *(_BYTE *)v53 != 15 )
  {
    if ( *(_BYTE *)v53 != 27 )
      goto LABEL_276;
    if ( *(_BYTE *)(v53 + 1) == 7 && !*(_DWORD *)(v53 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v54 = *(unsigned int **)(a2 + 56);
        if ( v54 )
          v55 = *v54;
        else
          v55 = 0LL;
        McTemplateK0pqd_EtwWriteTransfer(v55, v53, &v152, a2, v55, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_276;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_276;
    v56 = &EventPnpRequestComplete;
LABEL_204:
    McTemplateK0pd_EtwWriteTransfer(v52, v56, &v152, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_276;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_276;
  v57 = *(_QWORD *)(v53 + 8);
  v58 = 0;
  v59 = 0LL;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  if ( *(_BYTE *)(v57 + 2) == 40 )
  {
    v65 = 0LL;
    v136 = 0;
    if ( *(_DWORD *)(v57 + 20) )
      goto LABEL_276;
    v66 = 0LL;
    v141 = 0;
    v146 = *(_DWORD *)(v57 + 56);
    if ( !v146 )
      goto LABEL_276;
    while ( 1 )
    {
      v52 = *(unsigned int *)(v57 + 4 * v66 + 120);
      if ( (unsigned int)v52 >= 0x80 )
      {
        v67 = *(unsigned int *)(v57 + 16);
        if ( (unsigned int)v52 < (unsigned int)v67 )
        {
          v68 = (unsigned int)v52;
          v69 = *(_DWORD *)(v52 + v57) - 64;
          if ( v69 )
          {
            v52 = (unsigned int)(v69 - 1);
            if ( (_DWORD)v52 )
            {
              if ( (_DWORD)v52 == 1 )
              {
                v52 = v68 + 40;
                if ( v68 + 40 <= v67 )
                {
                  if ( *(_DWORD *)(v68 + v57 + 12) )
                    v65 = (char *)(v68 + v57 + 32);
                  v59 = *(_BYTE **)(v68 + v57 + 24);
                  goto LABEL_175;
                }
              }
            }
            else
            {
              v52 = v68 + 56;
              if ( v68 + 56 <= v67 )
              {
                v136 = 1;
                if ( *(_BYTE *)(v68 + v57 + 10) )
                  v65 = (char *)(v68 + v57 + 24);
                v58 = *(_BYTE *)(v68 + v57 + 8);
                v59 = *(_BYTE **)(v68 + v57 + 16);
                v60 = *(_BYTE *)(v68 + v57 + 9);
              }
            }
          }
          else
          {
            v52 = v68 + 40;
            if ( v68 + 40 <= v67 )
            {
              if ( *(_BYTE *)(v68 + v57 + 10) )
                v65 = (char *)(v68 + v57 + 24);
              v59 = *(_BYTE **)(v68 + v57 + 16);
LABEL_175:
              v60 = *(_BYTE *)(v68 + v57 + 9);
              v58 = *(_BYTE *)(v68 + v57 + 8);
LABEL_176:
              if ( v65 )
              {
                v70 = *v65;
                v64 = 0;
                goto LABEL_179;
              }
              goto LABEL_276;
            }
          }
          if ( v136 )
            goto LABEL_176;
        }
      }
      v66 = (unsigned int)(v141 + 1);
      v141 = v66;
      if ( (unsigned int)v66 >= v146 )
        goto LABEL_176;
    }
  }
  v70 = *(_BYTE *)(v57 + 72);
  v59 = *(_BYTE **)(v57 + 32);
  v60 = *(_BYTE *)(v57 + 11);
  v58 = *(_BYTE *)(v57 + 4);
  if ( *(_BYTE *)(v57 + 2) )
    goto LABEL_276;
LABEL_179:
  LOBYTE(v52) = v70 - 8;
  if ( (v52 & 0x5D) == 0 )
  {
    v71 = *(_BYTE *)(v57 + 3);
    if ( v71 == 1 || !v59 || !v60 )
    {
LABEL_198:
      if ( byte_140173441 < 0 )
      {
        if ( !v64 )
        {
          v63 = 0;
          v62 = 0;
          v61 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(v52, v57, &v152, a2, *(_DWORD *)(a2 + 48), v71, v58, v61, v62, v63, a2);
      }
      goto LABEL_276;
    }
    v72 = *v59 & 0x7F;
    if ( v72 == 114 || v72 == 115 )
    {
      v52 = (unsigned __int64)&v59[v60];
      LOBYTE(v57) = 0;
      if ( (unsigned __int64)(v59 + 8) > v52 )
        goto LABEL_196;
      v62 = v59[2];
      v61 = v59[1] & 0xF;
      v63 = v59[3];
    }
    else
    {
      v52 = (unsigned __int64)&v59[v60];
      LOBYTE(v57) = 0;
      if ( (unsigned __int64)(v59 + 8) > v52 )
        goto LABEL_196;
      v73 = v59 + 13;
      v61 = v59[2] & 0xF;
      v74 = v60;
      if ( (unsigned int)(unsigned __int8)v59[7] + 8 <= v60 )
        v74 = (unsigned __int8)v59[7] + 8;
      v52 = (unsigned __int64)&v59[v74];
      if ( (unsigned __int64)v73 <= v52 )
        v62 = v59[12];
      if ( (unsigned __int64)(v59 + 14) > v52 )
        v63 = 0;
      else
        v63 = *v73;
    }
    LOBYTE(v57) = 1;
LABEL_196:
    if ( (_BYTE)v57 )
      v64 = 1;
    goto LABEL_198;
  }
LABEL_276:
  IofCompleteRequest((PIRP)a2, 0);
  return v3;
}
