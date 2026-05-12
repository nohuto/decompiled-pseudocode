/*
 * XREFs of RaUnitAsyncError @ 0x140016430
 * Callers:
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     RaidLogRequestComplete @ 0x14002A288 (RaidLogRequestComplete.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1400593D0 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x14005C9E0 (RaidAdapterReleaseCryptoKeyResources.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x140071CF8 (RaidReleaseNvmeIceKeyResources.c)
 *     RaidFreezeUnitQueue @ 0x1400A6784 (RaidFreezeUnitQueue.c)
 *     WPP_SF_qdq @ 0x1400AC9B0 (WPP_SF_qdq.c)
 *     WPP_SF_qqDDD @ 0x1400ACA1C (WPP_SF_qqDDD.c)
 *     McTemplateK0zquuujqx_EtwWriteTransfer @ 0x1400B0968 (McTemplateK0zquuujqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // r15
  char v4; // di
  union _LARGE_INTEGER v5; // rdx
  __int64 v6; // r9
  char *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned int v10; // r10d
  int v11; // r12d
  int v12; // ecx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rax
  ULONG_PTR v15; // r9
  __int64 v16; // r8
  __int64 v17; // r8
  ULONG_PTR v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned int v21; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  struct _MDL *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  __int64 v35; // rbx
  bool v36; // zf
  int v37; // edx
  char *v38; // rcx
  char v39; // al
  __int64 v40; // rax
  int v41; // ebx
  bool v42; // bl
  struct _MDL *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  void (__fastcall *v46)(__int64, _QWORD, bool); // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  void (__fastcall *v50)(__int64, __int64, _QWORD); // rax
  int v51; // eax
  unsigned int v52; // r11d
  unsigned int v53; // r9d
  __int64 v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // rbx
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v61; // rbx
  unsigned int v62; // r9d
  unsigned int v63; // r8d
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  LARGE_INTEGER v67; // rax
  LARGE_INTEGER v68; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // r9
  unsigned int v73; // eax
  unsigned int v74; // r8d
  __int64 v75; // rax
  ULONG_PTR v76; // rcx
  _DWORD *v77; // rax
  __int64 v78; // r8
  unsigned __int8 v79; // r9
  unsigned __int8 v80; // bl
  unsigned __int8 v81; // r12
  unsigned __int8 v82; // si
  _BYTE *v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rbp
  __int64 *v90; // rbx
  union _LARGE_INTEGER v91; // rax
  KSPIN_LOCK *v92; // r12
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v94; // rcx
  int v95; // r8d
  char v96; // al
  __int64 *v97; // rcx
  KSPIN_LOCK v98; // rdx
  __int64 **v99; // rax
  unsigned int v100; // r11d
  __int64 v101; // rcx
  unsigned __int64 v102; // rax
  int v103; // ecx
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  char v106; // al
  char v107; // r11
  unsigned __int8 *v108; // rsi
  unsigned int v109; // eax
  unsigned __int64 v110; // rcx
  char *i; // rax
  int v112; // ecx
  int v113; // r8d
  char v114; // al
  __int64 *v115; // rcx
  KSPIN_LOCK v116; // rdx
  __int64 **v117; // rax
  KSPIN_LOCK *v118; // rcx
  KSPIN_LOCK v119; // r9
  KSPIN_LOCK *v120; // rax
  KSPIN_LOCK *v121; // rcx
  KSPIN_LOCK v122; // r9
  KSPIN_LOCK *v123; // rax
  char v124; // cl
  int v125; // eax
  unsigned int v126; // r10d
  unsigned int v127; // r8d
  __int64 v128; // rdx
  char v129; // di
  unsigned __int8 v130; // r8
  char v131; // r9
  char v132; // bl
  char v133; // r11
  bool v134; // si
  unsigned __int8 *v135; // r10
  unsigned int v136; // r12d
  char *v137; // r11
  __int64 v138; // rax
  __int64 v139; // rcx
  unsigned __int64 v140; // r9
  __int64 v141; // rbx
  int v142; // ecx
  int v143; // ecx
  char *v144; // r9
  __int64 v145; // rax
  __int64 v146; // rcx
  unsigned __int64 v147; // rbx
  __int64 v148; // r11
  int v149; // ecx
  int v150; // ecx
  char v151; // al
  __int64 v152; // rax
  __int64 v153; // rcx
  unsigned __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // rcx
  unsigned __int64 v157; // rbp
  __int64 v158; // r13
  int v159; // ecx
  int v160; // ecx
  unsigned __int64 v161; // rcx
  char v162; // al
  char v163; // r10
  char *v164; // r11
  unsigned int v165; // eax
  __int64 v166; // [rsp+28h] [rbp-D0h]
  char v167; // [rsp+60h] [rbp-98h]
  int v169; // [rsp+70h] [rbp-88h]
  int v170; // [rsp+70h] [rbp-88h]
  unsigned int v171; // [rsp+74h] [rbp-84h]
  unsigned int v172; // [rsp+74h] [rbp-84h]
  unsigned int v173; // [rsp+74h] [rbp-84h]
  unsigned int v174; // [rsp+74h] [rbp-84h]
  ULONG_PTR v175; // [rsp+78h] [rbp-80h]
  __int64 v176; // [rsp+78h] [rbp-80h]
  int *v177; // [rsp+78h] [rbp-80h]
  __int64 v178; // [rsp+78h] [rbp-80h]
  unsigned int v179; // [rsp+80h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-70h] BYREF
  union _LARGE_INTEGER PerformanceFrequency[2]; // [rsp+A0h] [rbp-58h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5.QuadPart = 0LL;
  v6 = a1;
  PerformanceFrequency[0].QuadPart = 0LL;
  v7 = 0LL;
  v8 = a2[21];
  v9 = a2[20];
  if ( *(_BYTE *)(v8 + 2) != 40 )
  {
    v10 = *(_DWORD *)(v8 + 16);
    v7 = (char *)(v8 + 4);
    v4 = *(_BYTE *)(v8 + 4);
    v11 = *(_DWORD *)(v8 + 12);
    v179 = v10;
    goto LABEL_3;
  }
  v5 = (union _LARGE_INTEGER)a2[21];
  v10 = *(_DWORD *)(v8 + 60);
  v11 = *(_DWORD *)(v8 + 24);
  PerformanceFrequency[0] = v5;
  v179 = v10;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_3;
  v52 = *(_DWORD *)(v8 + 56);
  v53 = 0;
  if ( !v52 )
  {
    v6 = a1;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v54 = *(unsigned int *)(v8 + 4LL * v53 + 120);
    if ( (unsigned int)v54 < 0x80 )
      goto LABEL_236;
    v55 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v54 > (unsigned int)v55 )
      goto LABEL_236;
    v56 = (unsigned int)v54;
    v57 = *(_DWORD *)(v54 + v8) - 64;
    if ( v57 )
      break;
    if ( v56 + 40 <= v55 )
      goto LABEL_271;
LABEL_236:
    if ( ++v53 >= v52 )
      goto LABEL_272;
  }
  v58 = v57 - 1;
  if ( !v58 )
  {
    if ( v56 + 56 <= v55 )
      goto LABEL_271;
    goto LABEL_236;
  }
  if ( v58 != 1 || v56 + 40 > v55 )
    goto LABEL_236;
LABEL_271:
  v7 = (char *)(v56 + v8 + 8);
  v4 = *v7;
LABEL_272:
  v6 = a1;
LABEL_3:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      v6,
      v8,
      *(_BYTE *)(v8 + 3) & 0x3F);
    v5 = PerformanceFrequency[0];
    v10 = v179;
    v6 = a1;
  }
  v12 = *(_BYTE *)(v8 + 3) & 0x3F;
  if ( v12 == 5 || ((v4 - 8) & 0xDF) == 0 || v12 == 37 )
  {
    v13 = a2[20];
    if ( v13 && v6 && (*(_BYTE *)(v6 + 136) & 2) != 0 )
    {
      v14 = *(unsigned __int8 **)(v13 + 184);
      v15 = *v14;
      if ( (_BYTE)v15 == 15 )
      {
        v16 = *((_QWORD *)v14 + 1);
        if ( v16 )
        {
          v124 = *(_BYTE *)(v16 + 2);
          v167 = v124;
          if ( v124 == 40 )
            v125 = *(_DWORD *)(v16 + 20);
          else
            v125 = *(unsigned __int8 *)(v16 + 2);
          if ( v125 )
            goto LABEL_319;
          if ( v124 == 40 )
          {
            v137 = 0LL;
            if ( !*(_DWORD *)(v16 + 20) )
            {
              v138 = 0LL;
              v169 = 0;
              v173 = *(_DWORD *)(v16 + 56);
              if ( v173 )
              {
                do
                {
                  v139 = *(unsigned int *)(v16 + 4 * v138 + 120);
                  if ( (unsigned int)v139 >= 0x80 )
                  {
                    v140 = *(unsigned int *)(v16 + 16);
                    if ( (unsigned int)v139 < (unsigned int)v140 )
                    {
                      v141 = (unsigned int)v139;
                      v142 = *(_DWORD *)(v139 + v16);
                      if ( v142 == 64 )
                      {
                        if ( v141 + 40 <= v140 )
                        {
LABEL_288:
                          v124 = v167;
                          if ( *(_BYTE *)(v141 + v16 + 10) )
                            v137 = (char *)(v141 + v16 + 24);
                          goto LABEL_293;
                        }
                      }
                      else
                      {
                        v143 = v142 - 65;
                        if ( v143 )
                        {
                          if ( v143 == 1 && v141 + 40 <= v140 )
                          {
                            v124 = v167;
                            if ( *(_DWORD *)(v141 + v16 + 12) )
                              v137 = (char *)(v141 + v16 + 32);
                            goto LABEL_293;
                          }
                        }
                        else if ( v141 + 56 <= v140 )
                        {
                          goto LABEL_288;
                        }
                      }
                    }
                  }
                  v138 = (unsigned int)(v169 + 1);
                  v169 = v138;
                }
                while ( (unsigned int)v138 < v173 );
              }
              v124 = v167;
            }
LABEL_293:
            v144 = v137;
            if ( !*(_DWORD *)(v16 + 20) )
            {
              v145 = 0LL;
              v170 = 0;
              v174 = *(_DWORD *)(v16 + 56);
              if ( v174 )
              {
                do
                {
                  v146 = *(unsigned int *)(v16 + 4 * v145 + 120);
                  if ( (unsigned int)v146 >= 0x80 )
                  {
                    v147 = *(unsigned int *)(v16 + 16);
                    if ( (unsigned int)v146 < (unsigned int)v147 )
                    {
                      v148 = (unsigned int)v146;
                      v149 = *(_DWORD *)(v146 + v16);
                      if ( v149 == 64 )
                      {
                        if ( v148 + 40 <= v147 )
                          break;
                      }
                      else
                      {
                        v150 = v149 - 65;
                        if ( v150 )
                        {
                          if ( v150 == 1 && v148 + 40 <= v147 )
                            break;
                        }
                        else if ( v148 + 56 <= v147 )
                        {
                          break;
                        }
                      }
                    }
                  }
                  v145 = (unsigned int)(v170 + 1);
                  v170 = v145;
                }
                while ( (unsigned int)v145 < v174 );
              }
              v124 = v167;
            }
          }
          else
          {
            v144 = (char *)(v16 + 72);
          }
          if ( v144 && ((v151 = *v144, *v144 == 10) || v151 == 42 || v151 == -86 || v151 == -118) )
          {
            v6 = a1;
            if ( *(_DWORD *)(a1 + 932) )
            {
              v152 = 24LL;
              if ( v124 != 40 )
                v152 = 12LL;
              if ( (*(_DWORD *)(v152 + v16) & 0x1000) != 0 && *(_QWORD *)(a1 + 3440) )
                goto LABEL_151;
            }
          }
          else
          {
LABEL_319:
            v6 = a1;
          }
        }
        else
        {
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
          v18 = *(_QWORD *)(v17 + 48);
          v175 = v18;
          if ( v18 )
          {
            v73 = *(unsigned __int16 *)(v17 + 40);
            if ( (_WORD)v73 )
            {
              v74 = v73 >> 1;
              while ( v74 )
              {
                v75 = v74 - 1;
                v36 = *(_WORD *)(v18 + 2 * v75) == 92;
                v76 = v18 + 2 * v75;
                --v74;
                if ( v36 )
                {
                  if ( v76 )
                  {
                    v18 = v76 + 2;
                    LODWORD(v175) = v18;
                  }
                  else
                  {
                    v18 = v175;
                  }
                  break;
                }
                v18 = v175;
              }
            }
          }
          if ( MiniportBugActionPolicy == 1 )
          {
            if ( (byte_140173444 & 0x10) != 0 )
            {
              v19 = a2[28];
              McTemplateK0zquuujqx_EtwWriteTransfer(
                a2[21],
                *(_DWORD *)(v19 + 104) >> 8,
                (_DWORD)a2 + 728,
                v175,
                *(_DWORD *)(*(_QWORD *)(v19 + 24) + 56LL),
                *(_DWORD *)(v19 + 104),
                BYTE1(*(_DWORD *)(v19 + 104)),
                BYTE2(*(_DWORD *)(v19 + 104)),
                v19 + 2104,
                15,
                a2[21]);
              v5 = PerformanceFrequency[0];
              v10 = v179;
            }
          }
          else if ( MiniportBugActionPolicy == 2 )
          {
            KeBugCheckEx(0xF0u, 7uLL, v18, v15, a2[21]);
          }
          v6 = a1;
          ++*(_DWORD *)(a1 + 3484);
        }
      }
      else
      {
        v6 = a1;
      }
    }
    if ( (*(_BYTE *)(v8 + 3) & 0x3F) == 5 || ((v4 - 8) & 0xDF) == 0 )
      ++*(_DWORD *)(v6 + 2280);
    v176 = *(_QWORD *)(v9 + 184);
    v20 = *(_QWORD *)(v176 + 24);
    if ( *(_BYTE *)(v6 + 3368) && (g_QosFlags & 1) == 0
      || (v21 = *(_DWORD *)(v6 + 1928), (unsigned int)v20 >= v21) && v21 && (*(_BYTE *)(v8 + 3) & 0x3F) != 0x25 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        HIDWORD(v166) = HIDWORD(v8);
        WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 58LL);
        v5 = PerformanceFrequency[0];
        v10 = v179;
        v6 = a1;
      }
      *(_BYTE *)(v8 + 3) = 4;
      if ( v4 == 8 )
        *v7 = 40;
      goto LABEL_151;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 57LL);
      v6 = a1;
    }
    *(_QWORD *)(v176 + 24) = v20 + 1;
    RaidUnitProcessBusyRequest(v6, (__int64)a2, (__int64)v7);
    return 0;
  }
LABEL_151:
  if ( v5.QuadPart )
  {
    v105 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)v105 == 1094997074 && (*(_BYTE *)(v105 + 111) & 4) != 0 )
      *(_DWORD *)(v5.QuadPart + 44) = 0;
  }
  if ( (v11 & 0x100) == 0 && !*(_BYTE *)(v6 + 756) )
  {
    RaidFreezeUnitQueue(v6);
    *(_BYTE *)(v8 + 3) |= 0x40u;
    v10 = v179;
  }
  v78 = a2[21];
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0LL;
  if ( *(_BYTE *)(v78 + 2) != 40 )
  {
    v83 = *(_BYTE **)(v78 + 32);
    v79 = *(_BYTE *)(v78 + 11);
    goto LABEL_155;
  }
  if ( !*(_DWORD *)(v78 + 20) )
  {
    v100 = 0;
    v171 = *(_DWORD *)(v78 + 56);
    if ( v171 )
    {
      while ( 2 )
      {
        v101 = *(unsigned int *)(v78 + 4LL * v100 + 120);
        if ( (unsigned int)v101 >= 0x80 )
        {
          v102 = *(unsigned int *)(v78 + 16);
          if ( (unsigned int)v101 < (unsigned int)v102 )
          {
            v178 = *(unsigned int *)(v78 + 4LL * v100 + 120);
            v103 = *(_DWORD *)(v101 + v78);
            if ( v103 == 64 )
            {
              v104 = v178 + 40;
LABEL_179:
              if ( v104 <= v102 )
              {
                v83 = *(_BYTE **)(v178 + v78 + 16);
                v79 = *(_BYTE *)(v178 + v78 + 9);
                break;
              }
            }
            else
            {
              v112 = v103 - 65;
              if ( !v112 )
              {
                v104 = v178 + 56;
                goto LABEL_179;
              }
              if ( v112 == 1 && v178 + 40 <= v102 )
              {
                v83 = *(_BYTE **)(v178 + v78 + 24);
                v79 = *(_BYTE *)(v178 + v78 + 9);
                break;
              }
            }
          }
        }
        if ( ++v100 >= v171 )
          break;
        continue;
      }
    }
  }
LABEL_155:
  if ( *(char *)(v78 + 3) < 0 && v83 && v79 )
  {
    v106 = *v83 & 0x7F;
    if ( v106 == 114 || v106 == 115 )
    {
      v107 = 0;
      if ( v83 + 8 <= &v83[v79] )
      {
        v81 = v83[2];
        v80 = v83[1] & 0xF;
        v82 = v83[3];
        goto LABEL_196;
      }
    }
    else
    {
      v107 = 0;
      if ( v83 + 8 <= &v83[v79] )
      {
        v108 = v83 + 13;
        v80 = v83[2] & 0xF;
        v109 = v79;
        if ( (unsigned int)(unsigned __int8)v83[7] + 8 <= v79 )
          v109 = (unsigned __int8)v83[7] + 8;
        v110 = (unsigned __int64)&v83[v109];
        if ( (unsigned __int64)v108 <= v110 )
          v81 = v83[12];
        if ( (unsigned __int64)(v83 + 14) > v110 )
          v82 = 0;
        else
          v82 = *v108;
LABEL_196:
        v107 = 1;
      }
    }
    if ( v107 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        LODWORD(v166) = v80;
        WPP_SF_qqDDD(WPP_GLOBAL_Control->AttachedDevice, v80, v78, a1, v78, v166, v81, v82);
        v10 = v179;
      }
      for ( i = (char *)&unk_140152001; *(_QWORD *)(i + 7); i += 16 )
      {
        if ( *(i - 1) == v80 && *i == v81 && i[1] == v82 )
        {
          (*(void (__fastcall **)(__int64, _QWORD *))(i + 7))(a1, a2);
          v10 = v179;
          break;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v8 + 3) & 0x3F) != 5 && ((v4 - 8) & 0xDF) != 0 )
  {
    if ( (*(_BYTE *)(v8 + 3) & 0x3F) == 6 )
    {
LABEL_232:
      v84 = -1073741808;
    }
    else
    {
      switch ( *(_BYTE *)(v8 + 3) & 0x3F )
      {
        case 1:
          v84 = 0;
          break;
        case 5:
          v84 = -2147483631;
          break;
        case 8:
        case 0x11:
        case 0x20:
        case 0x21:
          v84 = -1073741632;
          break;
        case 9:
        case 0xB:
          v84 = -1073741643;
          break;
        case 0xA:
          v84 = -1073741667;
          break;
        case 0x12:
          v84 = -2147483643;
          break;
        case 0x15:
        case 0x22:
          goto LABEL_232;
        case 0x16:
        case 0x27:
          v84 = -1073741823;
          break;
        case 0x17:
          v84 = -1073741790;
          break;
        case 0x18:
          v84 = -1073740682;
          break;
        case 0x25:
          v84 = -1073741300;
          break;
        case 0x26:
          v84 = -1073741670;
          break;
        case 0x28:
          v84 = -1073741811;
          break;
        case 0x38:
          v84 = -1073740534;
          break;
        default:
          v84 = -1073741435;
          break;
      }
    }
  }
  else
  {
    v84 = -1073741661;
  }
  *(_DWORD *)(v9 + 48) = v84;
  v85 = v10;
  if ( (*(_BYTE *)(v8 + 3) & 0x3F) != 0x12 )
    v85 = 0LL;
  *(_QWORD *)(v9 + 56) = v85;
  v86 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL);
  v87 = 96LL;
  if ( *(_BYTE *)(v86 + 2) != 40 )
    v87 = 48LL;
  v88 = *(_QWORD *)(v87 + v86);
  v89 = *(_QWORD *)(v88 + 224);
  if ( (*(_BYTE *)(v88 + 16) & 2) == 0 )
    goto LABEL_29;
  v90 = (__int64 *)(v88 + 48);
  v177 = *(int **)(v89 + 560);
  v91.QuadPart = (__int64)&v177[16 * (unsigned __int64)*(unsigned int *)(v88 + 84)];
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceFrequency[0] = v91;
  v92 = (KSPIN_LOCK *)(v91.QuadPart + 64);
  CurrentIrql = KeGetCurrentIrql();
  v94 = v92 + 5;
  if ( CurrentIrql != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v94, &LockHandle);
    v113 = *v177;
    v114 = *(_BYTE *)(v88 + 16);
    if ( (v114 & 2) != 0 )
    {
      *(_BYTE *)(v88 + 16) = v114 & 0xFD;
      v115 = (__int64 *)*v90;
      v116 = *v92;
      if ( *(__int64 **)(*v90 + 8) != v90 )
        goto LABEL_223;
      v117 = *(__int64 ***)(v88 + 56);
      if ( *v117 != v90 )
        goto LABEL_223;
      *v117 = v115;
      v115[1] = (__int64)v117;
      if ( (*(_DWORD *)(v88 + 96) & 1) != 0 )
      {
        v121 = (KSPIN_LOCK *)(v88 + 64);
        if ( v92[4] == v88 + 64 )
          v92[4] = *v121;
        v122 = *v121;
        if ( *(KSPIN_LOCK **)(*v121 + 8) != v121 )
          goto LABEL_223;
        v123 = *(KSPIN_LOCK **)(v88 + 72);
        if ( (KSPIN_LOCK *)*v123 != v121 )
          goto LABEL_223;
        *v123 = v122;
        *(_QWORD *)(v122 + 8) = v123;
        *(_DWORD *)(v88 + 96) &= ~1u;
      }
      if ( (v113 & 4) == 0 && (__int64 *)v116 == v90 )
      {
        if ( (KSPIN_LOCK *)*v92 == v92 )
          *(_DWORD *)(PerformanceFrequency[0].QuadPart + 112) = -1;
        else
          *(_DWORD *)(PerformanceFrequency[0].QuadPart + 112) = *(_DWORD *)(*v92 + 32);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v94, &LockHandle);
  v95 = *v177;
  v96 = *(_BYTE *)(v88 + 16);
  if ( (v96 & 2) == 0 )
    goto LABEL_25;
  *(_BYTE *)(v88 + 16) = v96 & 0xFD;
  v97 = (__int64 *)*v90;
  v98 = *v92;
  if ( *(__int64 **)(*v90 + 8) != v90 )
    goto LABEL_223;
  v99 = *(__int64 ***)(v88 + 56);
  if ( *v99 != v90 )
    goto LABEL_223;
  *v99 = v97;
  v97[1] = (__int64)v99;
  if ( (*(_DWORD *)(v88 + 96) & 1) == 0 )
    goto LABEL_169;
  v118 = (KSPIN_LOCK *)(v88 + 64);
  if ( v92[4] == v88 + 64 )
    v92[4] = *v118;
  v119 = *v118;
  if ( *(KSPIN_LOCK **)(*v118 + 8) != v118 || (v120 = *(KSPIN_LOCK **)(v88 + 72), (KSPIN_LOCK *)*v120 != v118) )
LABEL_223:
    __fastfail(3u);
  *v120 = v119;
  *(_QWORD *)(v119 + 8) = v120;
  *(_DWORD *)(v88 + 96) &= ~1u;
LABEL_169:
  if ( (v95 & 4) == 0 && (__int64 *)v98 == v90 )
  {
    if ( (KSPIN_LOCK *)*v92 == v92 )
      *(_DWORD *)(PerformanceFrequency[0].QuadPart + 112) = -1;
    else
      *(_DWORD *)(PerformanceFrequency[0].QuadPart + 112) = *(_DWORD *)(*v92 + 32);
  }
LABEL_25:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_26:
  if ( StorEtwLoggingEnabled )
  {
    *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
    IoGetActivityIdIrp(v9, PerformanceFrequency);
    if ( byte_140173442 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v24, v23, (unsigned int)PerformanceFrequency, v25, 4);
  }
LABEL_29:
  StorUnmapSenseInfo(v88, *(_QWORD *)(*(_QWORD *)(v89 + 24) + 8LL));
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v27 = *(_QWORD *)(v89 + 24);
    if ( !*(_QWORD *)(v27 + 5688) )
      goto LABEL_32;
    if ( (*(_BYTE *)(v27 + 112) & 0x10) == 0 )
      goto LABEL_79;
    goto LABEL_341;
  }
  v26 = *(_QWORD *)(v89 + 3608);
  if ( v26 && *(_QWORD *)(v26 + 104) )
  {
LABEL_341:
    RaidReleaseNvmeIceKeyResources(v89, v88);
    goto LABEL_32;
  }
  v27 = *(_QWORD *)(v89 + 24);
  if ( !*(_QWORD *)(v27 + 5680) )
    goto LABEL_32;
LABEL_79:
  RaidAdapterReleaseCryptoKeyResources(v27, v88);
LABEL_32:
  if ( *(_BYTE *)(v86 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v88 + 16) & 0x40) != 0 )
    {
      v59 = *(_QWORD *)(v88 + 752);
      PerformanceFrequency[0].QuadPart = 1LL;
      if ( v86 && v59 )
      {
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(PerformanceFrequency);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        v61 = PerformanceCounter;
        *(_BYTE *)(v59 + 3) = *(_BYTE *)(v86 + 3);
        *(_DWORD *)(v59 + 12) = *(_DWORD *)(v86 + 24);
        if ( (*(_DWORD *)(v86 + 24) & 0x40) != 0 )
          *(_DWORD *)(v59 + 16) = *(_DWORD *)(v86 + 60);
        if ( *(_BYTE *)(v86 + 3) == 48 )
          *(_DWORD *)(v59 + 64) = *(_DWORD *)(v86 + 44);
        if ( !*(_DWORD *)(v86 + 20) )
        {
          v62 = *(_DWORD *)(v86 + 56);
          v63 = 0;
          if ( v62 )
          {
            while ( 1 )
            {
              v64 = *(unsigned int *)(v86 + 4LL * v63 + 120);
              if ( (unsigned int)v64 >= 0x80 )
              {
                v65 = *(unsigned int *)(v86 + 16);
                if ( (unsigned int)v64 <= (unsigned int)v65 )
                {
                  v66 = v64 + v86;
                  if ( *(_DWORD *)(v64 + v86) == 64 && v64 + 40 <= v65 )
                    break;
                }
              }
              if ( ++v63 >= v62 )
                goto LABEL_107;
            }
            *(_BYTE *)(v59 + 4) = *(_BYTE *)(v66 + 8);
            *(_QWORD *)(v59 + 32) = *(_QWORD *)(v66 + 16);
            *(_BYTE *)(v59 + 11) = *(_BYTE *)(v66 + 9);
          }
          else
          {
LABEL_107:
            *(_BYTE *)(v59 + 3) = 48;
            *(_DWORD *)(v59 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          v67 = KeQueryPerformanceCounter(0LL);
        else
          v67.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( v67.QuadPart > 0 && v67.QuadPart < v61.QuadPart )
          v70 = v67.QuadPart - v61.QuadPart - 1;
        else
          v70 = v67.QuadPart - v61.QuadPart;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency[0].LowPart;
          LOBYTE(v71) = 0;
          if ( PerformanceFrequency[0].QuadPart && v70 )
          {
            v72 = 1000 * (v70 % PerformanceFrequency[0].QuadPart);
            v70 = v72 / PerformanceFrequency[0].QuadPart + 1000 * (v70 / PerformanceFrequency[0].QuadPart);
            v68.QuadPart = 10000 * (v72 % PerformanceFrequency[0].QuadPart) % PerformanceFrequency[0].QuadPart;
            v71 = 10000 * (v72 % PerformanceFrequency[0].QuadPart) / PerformanceFrequency[0].QuadPart + 10000 * v70;
          }
        }
        else
        {
          LOBYTE(v71) = v70;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v68.LowPart,
            v70,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v71);
      }
      *(_QWORD *)(*(_QWORD *)(v88 + 752) + 48LL) = *(_QWORD *)(v88 + 176);
      *(_QWORD *)(*(_QWORD *)(v88 + 752) + 24LL) = *(_QWORD *)(v88 + 184);
      *(_QWORD *)(*(_QWORD *)(v88 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v88 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL) = *(_QWORD *)(v88 + 752);
      *(_BYTE *)(v88 + 16) &= ~0x40u;
      *(_QWORD *)(v88 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v86 + 96) = 0LL;
      *(_QWORD *)(v86 + 64) = *(_QWORD *)(v88 + 184);
      *(_QWORD *)(v86 + 104) = 0LL;
      if ( *(_QWORD *)(v88 + 192) )
      {
        if ( (*(_BYTE *)(v86 + 24) & 0xC0) == 0xC0 )
        {
          v126 = *(_DWORD *)(v86 + 56);
          v127 = 0;
          if ( v126 )
          {
            while ( 1 )
            {
              v153 = *(unsigned int *)(v86 + 4LL * v127 + 120);
              if ( (unsigned int)v153 >= 0x80 )
              {
                v154 = *(unsigned int *)(v86 + 16);
                if ( (unsigned int)v153 <= (unsigned int)v154 )
                {
                  v155 = v153 + v86;
                  if ( *(_DWORD *)(v153 + v86) == 1 && v153 + 24 <= v154 )
                    break;
                }
              }
              if ( ++v127 >= v126 )
                goto LABEL_74;
            }
            if ( v155 )
              *(_QWORD *)(v155 + 16) = *(_QWORD *)(v88 + 192);
          }
        }
      }
LABEL_74:
      v51 = *(_DWORD *)(v86 + 24);
      if ( (v51 & 0x2000000) != 0 )
        *(_DWORD *)(v86 + 24) = v51 & 0xFDFFFFFF;
    }
  }
  else
  {
    *(_QWORD *)(v86 + 48) = *(_QWORD *)(v88 + 176);
    *(_QWORD *)(v86 + 24) = *(_QWORD *)(v88 + 184);
    v28 = *(_DWORD *)(v86 + 12);
    *(_QWORD *)(v86 + 56) = 0LL;
    *(_QWORD *)(v86 + 40) = 0LL;
    if ( (v28 & 0x2000000) != 0 )
      *(_DWORD *)(v86 + 12) = v28 & 0xFDFFFFFF;
  }
  if ( *(_QWORD *)(v88 + 112) )
  {
    v40 = *(_QWORD *)(v88 + 168);
    if ( *(_BYTE *)(v40 + 2) == 40 )
      v41 = *(_DWORD *)(v40 + 24) >> 6;
    else
      LOBYTE(v41) = *(_BYTE *)(v40 + 12) >> 6;
    v42 = (v41 & 1) == 0;
    if ( RaidVerifierEnabled )
    {
      v43 = *(struct _MDL **)(v88 + 120);
      if ( v43 )
      {
        MmProtectMdlSystemAddress(v43, 4u);
        MmUnlockPages(*(PMDL *)(v88 + 120));
        IoFreeMdl(*(PMDL *)(v88 + 120));
        *(_QWORD *)(v88 + 120) = 0LL;
      }
    }
    if ( *(_QWORD *)(v88 + 216) != -896LL )
    {
      v44 = *(_QWORD *)(*(_QWORD *)(v88 + 216) + 896LL);
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 8);
        if ( v45 )
        {
          v46 = *(void (__fastcall **)(__int64, _QWORD, bool))(v45 + 96);
          if ( v46 )
            v46(v44, *(_QWORD *)(v88 + 112), v42);
        }
      }
    }
    v47 = *(_QWORD *)(v88 + 152);
    *(_QWORD *)(v88 + 112) = 0LL;
    *(_QWORD *)(v88 + 144) = 0LL;
    if ( v47 )
    {
      if ( *(_QWORD *)(v88 + 216) != -896LL )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(v88 + 216) + 896LL);
        if ( v48 )
        {
          v49 = *(_QWORD *)(v48 + 8);
          if ( v49 )
          {
            v50 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v49 + 96);
            if ( v50 )
              v50(v48, v47, 0LL);
          }
        }
      }
      *(_QWORD *)(v88 + 152) = 0LL;
    }
  }
  v29 = *(_QWORD *)(v88 + 104);
  if ( v29 && (*(_BYTE *)(v88 + 16) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v29 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v29);
    IoFreeMdl(*(PMDL *)(v88 + 104));
    *(_BYTE *)(v88 + 16) &= ~1u;
    *(_QWORD *)(v88 + 104) = 0LL;
  }
  v30 = *(struct _MDL **)(v88 + 136);
  if ( v30 )
  {
    MmUnlockPages(v30);
    IoFreeMdl(*(PMDL *)(v88 + 136));
    *(_QWORD *)(v88 + 136) = 0LL;
  }
  v31 = 24LL;
  if ( *(_BYTE *)(v86 + 2) != 40 )
    v31 = 12LL;
  if ( (*(_DWORD *)(v31 + v86) & 0x4000) == 0 )
  {
    v32 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v33 = *(_DWORD *)(v32 + *(_QWORD *)(v89 + 40));
    while ( (v33 & 1) == 0 )
    {
      v34 = v33;
      v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v32 + *(_QWORD *)(v89 + 40)), v33 - 2, v33);
      if ( v34 == v33 )
        goto LABEL_46;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v89 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v89 + 520), 0, 0);
  }
LABEL_46:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 )
  {
    v35 = a1;
    if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        59LL,
        &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
        a1,
        v9,
        *(_DWORD *)(v9 + 48));
  }
  else
  {
    v35 = a1;
  }
  if ( (qword_140172448 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v35 + 24), v9, v8);
  v36 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v9 + 141) = -84;
  if ( v36 )
    goto LABEL_54;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  IoGetActivityIdIrp(v9, PerformanceFrequency);
  v38 = *(char **)(v9 + 184);
  v39 = *v38;
  if ( *v38 != 15 )
  {
    if ( v39 == 14 )
    {
      if ( (byte_140173442 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(
          v38,
          &EventNonReadWriteRequestComplete,
          PerformanceFrequency,
          v9,
          *(_DWORD *)(v9 + 48));
    }
    else if ( v39 == 27 )
    {
      if ( v38[1] != 7 || *((_DWORD *)v38 + 2) )
      {
        if ( (byte_140173442 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v38, &EventPnpRequestComplete, PerformanceFrequency, v9, *(_DWORD *)(v9 + 48));
      }
      else if ( (byte_140173442 & 0x40) != 0 )
      {
        v77 = *(_DWORD **)(v9 + 56);
        if ( v77 )
          LODWORD(v3) = *v77;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)v38,
          v37,
          (unsigned int)PerformanceFrequency,
          v9,
          (char)v3,
          *(_DWORD *)(v9 + 48));
      }
    }
    goto LABEL_54;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_54;
  v128 = *((_QWORD *)v38 + 1);
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  if ( *(_BYTE *)(v128 + 2) == 40 )
  {
    v135 = 0LL;
    if ( *(_DWORD *)(v128 + 20) )
      goto LABEL_54;
    v136 = 0;
    v172 = *(_DWORD *)(v128 + 56);
    if ( !v172 )
      goto LABEL_54;
    while ( 1 )
    {
      v156 = *(unsigned int *)(v128 + 4LL * v136 + 120);
      if ( (unsigned int)v156 >= 0x80 )
      {
        v157 = *(unsigned int *)(v128 + 16);
        if ( (unsigned int)v156 < (unsigned int)v157 )
        {
          v158 = (unsigned int)v156;
          v159 = *(_DWORD *)(v128 + v156);
          if ( v159 == 64 )
          {
            if ( v158 + 40 <= v157 )
            {
              if ( !*(_BYTE *)(v128 + v158 + 10) )
                goto LABEL_363;
LABEL_362:
              v135 = (unsigned __int8 *)(v158 + v128 + 24);
LABEL_363:
              v3 = *(_BYTE **)(v128 + v158 + 16);
              goto LABEL_364;
            }
          }
          else
          {
            v160 = v159 - 65;
            if ( v160 )
            {
              if ( v160 == 1 && v158 + 40 <= v157 )
              {
                if ( *(_DWORD *)(v128 + v158 + 12) )
                  v135 = (unsigned __int8 *)(v158 + v128 + 32);
                v3 = *(_BYTE **)(v128 + v158 + 24);
LABEL_364:
                v129 = *(_BYTE *)(v128 + v158 + 8);
                v130 = *(_BYTE *)(v128 + v158 + 9);
LABEL_365:
                if ( v135 )
                {
                  LODWORD(v161) = *v135;
                  goto LABEL_373;
                }
                goto LABEL_54;
              }
            }
            else if ( v158 + 56 <= v157 )
            {
              if ( *(_BYTE *)(v128 + v158 + 10) )
                goto LABEL_362;
              goto LABEL_363;
            }
          }
        }
      }
      if ( ++v136 >= v172 )
        goto LABEL_365;
    }
  }
  LODWORD(v161) = *(unsigned __int8 *)(v128 + 72);
  v3 = *(_BYTE **)(v128 + 32);
  v130 = *(_BYTE *)(v128 + 11);
  v129 = *(_BYTE *)(v128 + 4);
  if ( *(_BYTE *)(v128 + 2) )
    goto LABEL_54;
LABEL_373:
  LOBYTE(v161) = v161 - 8;
  if ( (v161 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v128 + 3) != 1 && v3 && v130 )
    {
      v162 = *v3 & 0x7F;
      if ( v162 == 114 || v162 == 115 )
      {
        v161 = (unsigned __int64)&v3[v130];
        v163 = 0;
        if ( (unsigned __int64)(v3 + 8) <= v161 )
        {
          v132 = v3[2];
          v131 = v3[1] & 0xF;
          v133 = v3[3];
          goto LABEL_389;
        }
      }
      else
      {
        v161 = (unsigned __int64)&v3[v130];
        v163 = 0;
        if ( (unsigned __int64)(v3 + 8) <= v161 )
        {
          v164 = v3 + 13;
          v131 = v3[2] & 0xF;
          v165 = v130;
          if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v130 )
            v165 = (unsigned __int8)v3[7] + 8;
          v161 = (unsigned __int64)&v3[v165];
          if ( (unsigned __int64)v164 <= v161 )
            v132 = v3[12];
          if ( (unsigned __int64)(v3 + 14) > v161 )
            v133 = 0;
          else
            v133 = *v164;
LABEL_389:
          v163 = 1;
        }
      }
      v134 = v163 != 0;
    }
    if ( byte_140173441 < 0 )
    {
      if ( !v134 )
      {
        v133 = 0;
        v132 = 0;
        v131 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v161,
        v128,
        (unsigned int)PerformanceFrequency,
        v9,
        *(_DWORD *)(v9 + 48),
        *(_BYTE *)(v128 + 3),
        v129,
        v131,
        v132,
        v133,
        v9);
    }
  }
LABEL_54:
  IofCompleteRequest((PIRP)v9, 0);
  return 1;
}
