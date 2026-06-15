/*
 * XREFs of sub_140097700 @ 0x140097700
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140025810 @ 0x140025810 (sub_140025810.c)
 *     sub_14002C6C0 @ 0x14002C6C0 (sub_14002C6C0.c)
 *     sub_14002C774 @ 0x14002C774 (sub_14002C774.c)
 *     sub_14002EE68 @ 0x14002EE68 (sub_14002EE68.c)
 *     sub_140030154 @ 0x140030154 (sub_140030154.c)
 *     sub_14003943C @ 0x14003943C (sub_14003943C.c)
 *     sub_14003E7F4 @ 0x14003E7F4 (sub_14003E7F4.c)
 *     sub_14003F04C @ 0x14003F04C (sub_14003F04C.c)
 *     sub_14003F1DC @ 0x14003F1DC (sub_14003F1DC.c)
 *     sub_140046E54 @ 0x140046E54 (sub_140046E54.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400976B4 @ 0x1400976B4 (sub_1400976B4.c)
 *     sub_140098B6C @ 0x140098B6C (sub_140098B6C.c)
 *     sub_14009D298 @ 0x14009D298 (sub_14009D298.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140097700(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int16 **v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int32 v6; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // eax
  bool v13; // zf
  void *v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned int v23; // r11d
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rbp
  __int16 *v30; // rbx
  int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // r9d
  __int64 v34; // r15
  float v35; // xmm2_4
  unsigned int v36; // edi
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  float v40; // xmm0_4
  unsigned int v41; // r9d
  __int64 v42; // r15
  float v43; // xmm2_4
  unsigned int v44; // edi
  float v45; // xmm6_4
  float v46; // xmm1_4
  float v47; // xmm6_4
  float v48; // xmm0_4
  unsigned __int64 v49; // r14
  unsigned int v50; // r9d
  unsigned __int64 v51; // r14
  unsigned int v52; // edi
  unsigned int v53; // r9d
  __int64 v54; // r15
  float v55; // xmm2_4
  unsigned int v56; // edi
  float v57; // xmm6_4
  float v58; // xmm1_4
  float v59; // xmm6_4
  double v60; // xmm0_8
  unsigned int v61; // r9d
  __int64 v62; // r15
  float v63; // xmm2_4
  unsigned int v64; // edi
  float v65; // xmm6_4
  float v66; // xmm1_4
  float v67; // xmm6_4
  float v68; // xmm0_4
  unsigned int v69; // r9d
  __int64 v70; // r15
  float v71; // xmm2_4
  unsigned int v72; // edi
  float v73; // xmm6_4
  float v74; // xmm1_4
  float v75; // xmm6_4
  double v76; // xmm0_8
  unsigned int v77; // r10d
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // r15
  __int64 v82; // rbp
  signed __int32 v83; // eax
  signed __int32 v84; // ett
  signed __int32 v85; // r9d
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  int v88; // r8d
  unsigned int v89; // ebx
  __int64 v90; // rcx
  unsigned int v91; // r8d
  _QWORD *v92; // r8
  const void *v93; // rdx
  void *v94; // rcx
  unsigned int v95; // ebp
  _QWORD *v96; // rcx
  size_t v97; // r8
  __int64 v98; // r9
  int v99; // edx
  unsigned int v100; // ebp
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  unsigned int v103; // r8d
  __int16 *v104; // rdx
  unsigned int v105; // r9d
  __int64 result; // rax
  int v107; // ecx
  int v108; // ecx
  unsigned int *v109; // rax
  float *v110; // rbx
  __int16 *v111; // rbp
  unsigned int v112; // ecx
  unsigned __int64 v113; // r12
  __int64 v114; // r15
  __int64 v115; // rcx
  __int64 v116; // r13
  float v117; // xmm1_4
  float v118; // xmm2_4
  float v119; // xmm0_4
  float v120; // xmm1_4
  float v121; // xmm6_4
  __int64 v122; // rbx
  float v123; // xmm0_4
  __int64 v124; // r13
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm0_4
  float v128; // xmm1_4
  float v129; // xmm6_4
  __int64 v130; // rbx
  float v131; // xmm0_4
  __int64 v132; // rdx
  __int64 v133; // r14
  __int64 v134; // r13
  float v135; // xmm1_4
  float v136; // xmm2_4
  float v137; // xmm0_4
  float v138; // xmm1_4
  float v139; // xmm6_4
  __int64 v140; // rbx
  double v141; // xmm0_8
  __int64 v142; // r13
  float v143; // xmm1_4
  float v144; // xmm2_4
  float v145; // xmm0_4
  float v146; // xmm1_4
  float v147; // xmm6_4
  __int64 v148; // rbx
  float v149; // xmm0_4
  __int64 v150; // r13
  float v151; // xmm1_4
  float v152; // xmm2_4
  float v153; // xmm0_4
  float v154; // xmm1_4
  float v155; // xmm6_4
  __int64 v156; // rbx
  double v157; // xmm0_8
  unsigned int Size; // [rsp+40h] [rbp-78h]
  unsigned int Size_4; // [rsp+44h] [rbp-74h]
  __int64 v160; // [rsp+48h] [rbp-70h]
  __int64 v161; // [rsp+50h] [rbp-68h]
  int v162; // [rsp+58h] [rbp-60h]
  unsigned int v163; // [rsp+C0h] [rbp+8h]
  __int64 v165; // [rsp+C8h] [rbp+10h]
  int v166; // [rsp+D8h] [rbp+20h]
  unsigned int v167; // [rsp+D8h] [rbp+20h]

  v2 = a1 + 80;
  v160 = a1 + 80;
  v3 = (__int16 **)a2;
  LOBYTE(Size) = 0;
  v4 = (__int64 *)(a1 + 248);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(*(unsigned int *)(a2 + 8), a2, *v4, 5, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 0);
  v5 = *((unsigned int *)v3 + 2);
  *(_DWORD *)(*v4 + 504) = 2;
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*v4 + 88) + 164LL), 0, 0);
  v7 = *(_DWORD *)(v2 + 8);
  v8 = 1;
  v9 = v6 & 1;
  v166 = v7;
  Size_4 = v9;
  if ( ((v6 & 1) != 0 || (*(_BYTE *)(*v4 + 192) & 1) != 0) && (_DWORD)v5 )
  {
    v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(*v4 + 88) + 16LL), 0LL, 0LL);
    v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(*v4 + 88) + 24LL), 0LL, 0LL);
    v80 = *v4;
    v81 = v79;
    v82 = *(_QWORD *)(*v4 + 88);
    if ( v78 < 0 || v79 < 0 )
    {
      if ( (byte_1400E8401 & 4) != 0 )
        sub_14009D41C(v80, a2, *v4);
      sub_140048108();
      _InterlockedAnd((volatile signed __int32 *)(v82 + 164), 0xFFFFFFFE);
    }
    else if ( v78 >= (unsigned __int64)v79 )
    {
      v86 = *(_QWORD *)(v80 + 96);
      v87 = *(unsigned int *)(v80 + 168);
      v88 = *(_DWORD *)(v86 + 160);
      v162 = v88 + v78 % v87;
      v89 = v88 + v81 % v87;
      Size = v78 - v81;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v82 + 176), 0, 0) )
      {
        LODWORD(v5) = (unsigned int)(v78 - v81) / *(_DWORD *)(*(_QWORD *)(v2 + 168) + 104LL);
        if ( (unsigned int)v5 >= *((_DWORD *)v3 + 2) )
          LODWORD(v5) = *((_DWORD *)v3 + 2);
        *((_DWORD *)v3 + 2) = v5;
        *(_DWORD *)(*(_QWORD *)(v2 + 168) + 508LL) = v5;
      }
      sub_1400B6010(*(_QWORD *)(v2 + 168));
      v90 = *(_QWORD *)(v2 + 168);
      v91 = *(_DWORD *)(v90 + 104) * v5;
      *(_DWORD *)v2 = 0;
      v163 = v91;
      if ( v91 <= Size )
      {
        v100 = *(_DWORD *)(*(_QWORD *)(v90 + 96) + 164LL) - v89;
        if ( v91 <= v100 )
        {
          *v3 = (__int16 *)(v89 + *(_QWORD *)(v90 + 80));
          *(_DWORD *)(*(_QWORD *)(v2 + 168) + 504LL) = 0;
          goto LABEL_96;
        }
        memcpy(*(void **)(v90 + 128), (const void *)(*(_QWORD *)(v90 + 80) + v89), v100);
        memcpy(
          (void *)(v100 + *(_QWORD *)(*(_QWORD *)(v2 + 168) + 128LL)),
          (const void *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 80LL)
                       + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 96LL) + 160LL)),
          v163 - v100);
      }
      else
      {
        if ( !*(_BYTE *)(v2 + 4) )
        {
          if ( (byte_1400E8401 & 1) != 0 )
            sub_14003F04C(v90, (const EVENT_DESCRIPTOR *)"!", v90, v162, v89, *(_DWORD *)(v90 + 168), v91 - Size);
          if ( v78 )
            sub_140025810(*(_QWORD *)(v2 + 168) + 216LL, 5, "CpGlitchEvent::SERVER_INPUT_STARVATION");
        }
        if ( !Size )
        {
          v77 = v163;
          *(_DWORD *)v2 = v163;
          goto LABEL_68;
        }
        v92 = *(_QWORD **)(v2 + 168);
        v93 = (const void *)(v92[10] + v89);
        v94 = (void *)v92[16];
        v95 = *(_DWORD *)(v92[12] + 164LL) - v89;
        if ( Size <= v95 )
        {
          v97 = Size;
        }
        else
        {
          memcpy(v94, v93, v95);
          v96 = *(_QWORD **)(v2 + 168);
          v97 = Size - v95;
          v93 = (const void *)(v96[10] + *(unsigned int *)(v96[12] + 160LL));
          v94 = (void *)(v95 + v96[16]);
        }
        memcpy(v94, v93, v97);
        v98 = *(_QWORD *)(v2 + 168);
        v99 = 128;
        if ( *(_DWORD *)(v98 + 120) != 8 )
          v99 = 0;
        memset((void *)(*(_QWORD *)(v98 + 128) + Size), v99, v163 - Size);
        *(_DWORD *)v2 = v163 - Size;
      }
      *v3 = *(__int16 **)(*(_QWORD *)(v2 + 168) + 128LL);
      *(_DWORD *)(*(_QWORD *)(v2 + 168) + 504LL) = 1;
LABEL_96:
      *((_DWORD *)v3 + 3) = 1;
      v101 = *(_QWORD *)(v2 + 168);
      if ( (*(_BYTE *)(v101 + 192) & 1) == 0 && v166 != Size_4 && Size_4 )
      {
        v102 = *(unsigned int *)(v101 + 120);
        v103 = *(_DWORD *)(v101 + 108);
        v104 = *v3;
        if ( (_DWORD)v102 == 8 )
        {
          v108 = 0;
          if ( v103 )
          {
            while ( fabs((float)((float)(char)(*(_BYTE *)v104 + 0x80) * 0.0078125)) <= 0.004999999888241291 )
            {
              v104 = (__int16 *)((char *)v104 + 1);
              if ( ++v108 >= v103 )
                goto LABEL_106;
            }
            goto LABEL_126;
          }
        }
        else if ( (_DWORD)v102 == 16 )
        {
          v107 = 0;
          if ( v103 )
          {
            while ( fabs((float)((float)*v104 * 0.000030517578)) < 0.004999999888241291 )
            {
              ++v104;
              if ( ++v107 >= v103 )
                goto LABEL_106;
            }
            goto LABEL_126;
          }
        }
        else
        {
          v105 = 0;
          if ( (_DWORD)v102 == 24 )
          {
            if ( v103 )
            {
              while ( fabs((float)((float)((*(unsigned __int8 *)v104 | (*(unsigned __int16 *)((char *)v104 + 1) << 8)) << 8 >> 8)
                                 * 0.00000011920929)) < 0.004999999888241291 )
              {
                v104 = (__int16 *)((char *)v104 + 3);
                if ( ++v105 >= v103 )
                  goto LABEL_106;
              }
              goto LABEL_126;
            }
          }
          else if ( *(_DWORD *)(v101 + 124) == 3 )
          {
            if ( v103 )
            {
              while ( fabs(*(float *)v104) < 0.004999999888241291 )
              {
                ++v105;
                v104 = (__int16 *)((char *)v104 + (v102 >> 3));
                if ( v105 >= v103 )
                  goto LABEL_106;
              }
LABEL_126:
              v109 = *(unsigned int **)(v2 + 168);
              v110 = (float *)(v2 + 12);
              v111 = *v3;
              v112 = v109[30];
              v113 = v109[29];
              v114 = v109[27];
              switch ( v112 )
              {
                case 8u:
                  sub_14003943C(v2 + 12, v5, 0);
                  if ( (_DWORD)v5 )
                  {
                    v150 = (unsigned int)v5;
                    do
                    {
                      v151 = v110[34];
                      v152 = v151 + v110[35];
                      v153 = v110[v151];
                      v154 = (float)(v151 - (float)(int)v151) * v110[(int)v151 + 17];
                      v110[34] = v152;
                      v155 = 1.0 - (float)((float)((float)(v153 - v154) * v110[38]) + v110[37]);
                      if ( (_DWORD)v114 )
                      {
                        v156 = v114;
                        do
                        {
                          v157 = sub_14009D298(v111);
                          sub_140046E54(v111, *(float *)&v157 * v155);
                          v111 = (__int16 *)((char *)v111 + (v113 >> 3));
                          --v156;
                        }
                        while ( v156 );
                        v110 = (float *)(v2 + 12);
                      }
                      --v150;
                    }
                    while ( v150 );
                  }
                  break;
                case 0x10u:
                  sub_14003943C(v2 + 12, v5, 0);
                  if ( (_DWORD)v5 )
                  {
                    v142 = (unsigned int)v5;
                    do
                    {
                      v143 = v110[34];
                      v144 = v143 + v110[35];
                      v145 = v110[v143];
                      v146 = (float)(v143 - (float)(int)v143) * v110[(int)v143 + 17];
                      v110[34] = v144;
                      v147 = 1.0 - (float)((float)((float)(v145 - v146) * v110[38]) + v110[37]);
                      if ( (_DWORD)v114 )
                      {
                        v148 = v114;
                        do
                        {
                          v149 = sub_140030154(v111);
                          sub_14002EE68(v111, v149 * v147);
                          v111 = (__int16 *)((char *)v111 + (v113 >> 3));
                          --v148;
                        }
                        while ( v148 );
                        v110 = (float *)(v2 + 12);
                      }
                      --v142;
                    }
                    while ( v142 );
                  }
                  break;
                case 0x14u:
                  sub_14003943C(v2 + 12, v5, 0);
                  if ( (_DWORD)v5 )
                  {
                    v134 = (unsigned int)v5;
                    do
                    {
                      v135 = v110[34];
                      v136 = v135 + v110[35];
                      v137 = v110[v135];
                      v138 = (float)(v135 - (float)(int)v135) * v110[(int)v135 + 17];
                      v110[34] = v136;
                      v139 = 1.0 - (float)((float)((float)(v137 - v138) * v110[38]) + v110[37]);
                      if ( (_DWORD)v114 )
                      {
                        v140 = v114;
                        do
                        {
                          v141 = sub_140098B6C(v111);
                          sub_1400976B4(v111, *(float *)&v141 * v139);
                          v111 = (__int16 *)((char *)v111 + (v113 >> 3));
                          --v140;
                        }
                        while ( v140 );
                        v110 = (float *)(v2 + 12);
                      }
                      --v134;
                    }
                    while ( v134 );
                  }
                  break;
                case 0x18u:
                  sub_14003943C(v2 + 12, v5, 0);
                  if ( (_DWORD)v5 )
                  {
                    v132 = (unsigned int)v5;
                    v165 = (unsigned int)v5;
                    do
                    {
                      v110[34] = v110[34] + v110[35];
                      if ( (_DWORD)v114 )
                      {
                        v133 = v114;
                        do
                        {
                          sub_1400B6010(v111);
                          sub_1400B6010(v111);
                          v111 = (__int16 *)((char *)v111 + (v113 >> 3));
                          --v133;
                        }
                        while ( v133 );
                        v2 = v160;
                        v132 = v165;
                        v110 = (float *)(v160 + 12);
                      }
                      v165 = --v132;
                    }
                    while ( v132 );
                  }
                  break;
                default:
                  v115 = v2 + 12;
                  if ( v109[31] == 3 )
                  {
                    sub_14003943C(v115, v5, 0);
                    if ( (_DWORD)v5 )
                    {
                      v116 = (unsigned int)v5;
                      do
                      {
                        v117 = v110[34];
                        v118 = v117 + v110[35];
                        v119 = v110[v117];
                        v120 = (float)(v117 - (float)(int)v117) * v110[(int)v117 + 17];
                        v110[34] = v118;
                        v121 = 1.0 - (float)((float)((float)(v119 - v120) * v110[38]) + v110[37]);
                        if ( (_DWORD)v114 )
                        {
                          v122 = v114;
                          do
                          {
                            v123 = sub_14002C774((__int64)v111);
                            sub_14002C6C0((float *)v111, v123 * v121);
                            v111 = (__int16 *)((char *)v111 + (v113 >> 3));
                            --v122;
                          }
                          while ( v122 );
                          v110 = (float *)(v2 + 12);
                        }
                        --v116;
                      }
                      while ( v116 );
                    }
                  }
                  else
                  {
                    sub_14003943C(v115, v5, 0);
                    if ( (_DWORD)v5 )
                    {
                      v124 = (unsigned int)v5;
                      do
                      {
                        v125 = v110[34];
                        v126 = v125 + v110[35];
                        v127 = v110[v125];
                        v128 = (float)(v125 - (float)(int)v125) * v110[(int)v125 + 17];
                        v110[34] = v126;
                        v129 = 1.0 - (float)((float)((float)(v127 - v128) * v110[38]) + v110[37]);
                        if ( (_DWORD)v114 )
                        {
                          v130 = v114;
                          do
                          {
                            v131 = sub_14003F1DC((int *)v111);
                            sub_14003E7F4(v111, v131 * v129);
                            v111 = (__int16 *)((char *)v111 + (v113 >> 3));
                            --v130;
                          }
                          while ( v130 );
                          v110 = (float *)(v2 + 12);
                        }
                        --v124;
                      }
                      while ( v124 );
                    }
                  }
                  break;
              }
            }
          }
          else if ( v103 )
          {
            while ( fabs((float)((float)*(int *)v104 * 4.6566129e-10)) < 0.004999999888241291 )
            {
              ++v105;
              v104 = (__int16 *)((char *)v104 + (v102 >> 3));
              if ( v105 >= v103 )
                goto LABEL_106;
            }
            goto LABEL_126;
          }
        }
      }
LABEL_106:
      v77 = v163;
      goto LABEL_107;
    }
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14000F5B0(v80, a2, *(_QWORD *)(v2 + 168), 23, v78, v81, 102);
    v77 = 0;
    goto LABEL_68;
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v6, a2, *v4, 23, v6, v5, 101);
  if ( v7 != v9 && !v9 )
  {
    v10 = *(_QWORD *)(v2 + 168);
    v11 = 128;
    v12 = *(_DWORD *)(v10 + 104) * v5;
    v13 = *(_DWORD *)(v10 + 120) == 8;
    v14 = *(void **)(v10 + 128);
    if ( !v13 )
      v11 = 0;
    v15 = v12;
    memset(v14, v11, v12);
    v17 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 88LL) + 16LL),
            0LL,
            0LL);
    v18 = *(_QWORD *)(*(_QWORD *)(v2 + 168) + 88LL);
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), 0LL, 0LL);
    v20 = *(_QWORD *)(v2 + 168);
    v21 = *(_QWORD *)(v20 + 88);
    if ( v17 < 0 || v19 < 0 )
    {
      if ( (byte_1400E8401 & 4) != 0 )
        sub_14009D41C(v18, v16, *(_QWORD *)(v2 + 168));
      sub_140048108();
      _InterlockedAnd((volatile signed __int32 *)(v21 + 164), 0xFFFFFFFE);
    }
    else if ( v17 >= (unsigned __int64)v19 )
    {
      v22 = *(_QWORD *)(v20 + 96);
      v23 = v17 - v19;
      v24 = *(_DWORD *)(v22 + 160) + (unsigned int)(v19 % (unsigned __int64)*(unsigned int *)(v20 + 168));
      if ( v23 < v15 )
        v15 = v23;
      v25 = v15;
      if ( v15 >= *(_DWORD *)(v22 + 164) - (int)v24 )
        v25 = *(_DWORD *)(v22 + 164) - v24;
      v26 = v25;
      memcpy(*(void **)(v20 + 128), (const void *)(*(_QWORD *)(v20 + 80) + v24), v25);
      memcpy(
        (void *)(v26 + *(_QWORD *)(*(_QWORD *)(v2 + 168) + 128LL)),
        (const void *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 80LL)
                     + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 96LL) + 160LL)),
        v15 - (unsigned int)v26);
    }
    if ( (_DWORD)v5 )
    {
      v27 = *(_QWORD *)(v2 + 168);
      v28 = *(_DWORD *)(v27 + 108);
      if ( v28 )
      {
        v29 = v2 + 12;
        v30 = *(__int16 **)(v27 + 128);
        v167 = *(_DWORD *)(v27 + 116);
        v31 = *(_DWORD *)(v27 + 120);
        switch ( v31 )
        {
          case 8:
            sub_14003943C(v2 + 12, v5, 1);
            v70 = v5;
            do
            {
              v71 = *(float *)(v2 + 148);
              v72 = v69;
              v73 = *(float *)(v29 + 4LL * (unsigned int)(int)v71);
              v74 = (float)(v71 - (float)(int)v71) * *(float *)(v2 + 12 + 4LL * (unsigned int)(int)v71 + 68);
              *(float *)(v2 + 148) = v71 + *(float *)(v2 + 152);
              v75 = (float)((float)(v73 - v74) * *(float *)(v2 + 164)) + *(float *)(v2 + 160);
              do
              {
                v76 = sub_14009D298(v30);
                sub_140046E54(v30, *(float *)&v76 * v75);
                v30 = (__int16 *)((char *)v30 + ((unsigned __int64)v167 >> 3));
                ++v72;
              }
              while ( v72 < v28 );
              v69 = 0;
              --v70;
            }
            while ( v70 );
            break;
          case 16:
            sub_14003943C(v2 + 12, v5, 1);
            v62 = v5;
            do
            {
              v63 = *(float *)(v2 + 148);
              v64 = v61;
              v65 = *(float *)(v29 + 4LL * (unsigned int)(int)v63);
              v66 = (float)(v63 - (float)(int)v63) * *(float *)(v2 + 12 + 4LL * (unsigned int)(int)v63 + 68);
              *(float *)(v2 + 148) = v63 + *(float *)(v2 + 152);
              v67 = (float)((float)(v65 - v66) * *(float *)(v2 + 164)) + *(float *)(v2 + 160);
              do
              {
                v68 = sub_140030154(v30);
                sub_14002EE68(v30, v68 * v67);
                v30 = (__int16 *)((char *)v30 + ((unsigned __int64)v167 >> 3));
                ++v64;
              }
              while ( v64 < v28 );
              v61 = 0;
              --v62;
            }
            while ( v62 );
            break;
          case 20:
            sub_14003943C(v2 + 12, v5, 1);
            v54 = v5;
            do
            {
              v55 = *(float *)(v2 + 148);
              v56 = v53;
              v57 = *(float *)(v29 + 4LL * (unsigned int)(int)v55);
              v58 = (float)(v55 - (float)(int)v55) * *(float *)(v2 + 12 + 4LL * (unsigned int)(int)v55 + 68);
              *(float *)(v2 + 148) = v55 + *(float *)(v2 + 152);
              v59 = (float)((float)(v57 - v58) * *(float *)(v2 + 164)) + *(float *)(v2 + 160);
              do
              {
                v60 = sub_140098B6C(v30);
                sub_1400976B4(v30, *(float *)&v60 * v59);
                v30 = (__int16 *)((char *)v30 + ((unsigned __int64)v167 >> 3));
                ++v56;
              }
              while ( v56 < v28 );
              v53 = 0;
              --v54;
            }
            while ( v54 );
            break;
          case 24:
            v49 = v167;
            sub_14003943C(v29, v5, 1);
            v161 = v5;
            do
            {
              v51 = v49 >> 3;
              v52 = v50;
              *(float *)(v29 + 136) = *(float *)(v29 + 136) + *(float *)(v29 + 140);
              do
              {
                sub_1400B6010(v30);
                sub_1400B6010(v30);
                v30 = (__int16 *)((char *)v30 + v51);
                ++v52;
              }
              while ( v52 < v28 );
              v13 = v161-- == 1;
              v50 = 0;
              v49 = v167;
            }
            while ( !v13 );
            break;
          default:
            v32 = v2 + 12;
            if ( *(_DWORD *)(v27 + 124) == 3 )
            {
              sub_14003943C(v32, v5, 1);
              v34 = v5;
              do
              {
                v35 = *(float *)(v2 + 148);
                v36 = v33;
                v37 = *(float *)(v29 + 4LL * (unsigned int)(int)v35);
                v38 = (float)(v35 - (float)(int)v35) * *(float *)(v2 + 12 + 4LL * (unsigned int)(int)v35 + 68);
                *(float *)(v2 + 148) = v35 + *(float *)(v2 + 152);
                v39 = (float)((float)(v37 - v38) * *(float *)(v2 + 164)) + *(float *)(v2 + 160);
                do
                {
                  v40 = sub_14002C774((__int64)v30);
                  sub_14002C6C0((float *)v30, v40 * v39);
                  v30 = (__int16 *)((char *)v30 + ((unsigned __int64)v167 >> 3));
                  ++v36;
                }
                while ( v36 < v28 );
                v33 = 0;
                --v34;
              }
              while ( v34 );
            }
            else
            {
              sub_14003943C(v32, v5, 1);
              v42 = v5;
              do
              {
                v43 = *(float *)(v2 + 148);
                v44 = v41;
                v45 = *(float *)(v29 + 4LL * (unsigned int)(int)v43);
                v46 = (float)(v43 - (float)(int)v43) * *(float *)(v2 + 12 + 4LL * (unsigned int)(int)v43 + 68);
                *(float *)(v2 + 148) = v43 + *(float *)(v2 + 152);
                v47 = (float)((float)(v45 - v46) * *(float *)(v2 + 164)) + *(float *)(v2 + 160);
                do
                {
                  v48 = sub_14003F1DC((int *)v30);
                  sub_14003E7F4(v30, v48 * v47);
                  v30 = (__int16 *)((char *)v30 + ((unsigned __int64)v167 >> 3));
                  ++v44;
                }
                while ( v44 < v28 );
                v41 = 0;
                --v42;
              }
              while ( v42 );
            }
            break;
        }
        v3 = (__int16 **)a2;
        v2 = v160;
      }
    }
    v77 = 0;
    goto LABEL_69;
  }
  v77 = 0;
LABEL_68:
  v8 = 2;
LABEL_69:
  *((_DWORD *)v3 + 3) = v8;
  *v3 = *(__int16 **)(*(_QWORD *)(v2 + 168) + 128LL);
  v84 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 88LL) + 164LL);
  v83 = _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 88LL) + 164LL),
          v84 & 0xFFFFFFFD,
          v84);
  if ( v84 != v83 )
  {
    do
    {
      v85 = v83;
      v83 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 168) + 88LL) + 164LL),
              v83 & 0xFFFFFFFD,
              v83);
    }
    while ( v83 != v85 );
  }
LABEL_107:
  result = Size_4;
  *(_DWORD *)(v2 + 8) = Size_4;
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000F5B0(
             *(int *)(*(_QWORD *)(v2 + 168) + 504LL),
             v77,
             v2,
             6,
             v77,
             Size,
             *(_DWORD *)(*(_QWORD *)(v2 + 168) + 504LL));
  return result;
}
