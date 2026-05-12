/*
 * XREFs of sub_140010F80 @ 0x140010F80
 * Callers:
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 * Callees:
 *     sub_140002A60 @ 0x140002A60 (sub_140002A60.c)
 *     sub_140011B28 @ 0x140011B28 (sub_140011B28.c)
 */

__int64 __fastcall sub_140010F80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  unsigned __int8 v12; // r11
  char v13; // r10
  _DWORD *v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rdi
  unsigned int v17; // r14d
  unsigned int *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  int v21; // r9d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned int *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  int v27; // r14d
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  unsigned int *QuadPart; // rbx
  unsigned int *v31; // r14
  _DWORD *v32; // rdi
  unsigned __int8 v33; // al
  _BYTE *v34; // rcx
  int v35; // ecx
  __int64 v36; // rdi
  bool v37; // zf
  LARGE_INTEGER v38; // rbx
  __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  _BYTE *v42; // r9
  __int64 v43; // r14
  ULONG CurrentProcessorNumber; // eax
  int v45; // r11d
  ULONG v46; // r9d
  int v47; // r10d
  int v48; // r8d
  unsigned int i; // ecx
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // rcx
  char *v54; // rdx
  unsigned int v55; // edi
  unsigned int *v56; // r10
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // r11
  unsigned __int64 v60; // rcx
  unsigned int v61; // ebx
  __int64 v62; // rax
  unsigned __int64 *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  char v66; // cl
  unsigned __int64 v67; // rcx
  int v68; // r14d
  int v69; // r9d
  int v70; // r9d
  unsigned int j; // ecx
  char v72; // r9
  char v73; // al
  char *v74; // rdx
  char v75; // cl
  BOOL v76; // r8d
  __int64 v77; // rdi
  __int64 v78; // r14
  ULONGLONG UnbiasedInterruptTime; // rax
  union _LARGE_INTEGER v80; // rcx
  char v81; // al
  ULONG64 v82; // rax
  ULONG64 v83; // rax
  int v84; // edx
  __m128i *v85; // rdx
  unsigned int v86; // [rsp+B0h] [rbp-80h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp-78h] BYREF
  unsigned __int64 v88; // [rsp+C0h] [rbp-70h]
  int v89; // [rsp+C8h] [rbp-68h]
  unsigned __int64 QpcTimeStamp; // [rsp+D0h] [rbp-60h] BYREF
  BOOL v91; // [rsp+D8h] [rbp-58h]
  BOOL v92; // [rsp+DCh] [rbp-54h]
  int v93; // [rsp+E0h] [rbp-50h]
  __int64 v94; // [rsp+E8h] [rbp-48h]
  __int64 v95; // [rsp+F0h] [rbp-40h]
  int v96; // [rsp+F8h] [rbp-38h]
  __int64 v97; // [rsp+100h] [rbp-30h] BYREF
  unsigned __int64 v98; // [rsp+108h] [rbp-28h]
  int v100; // [rsp+168h] [rbp+38h]
  int v101; // [rsp+168h] [rbp+38h]
  bool v102; // [rsp+168h] [rbp+38h]

  v5 = 0;
  v98 = 0LL;
  v7 = 0LL;
  v94 = 0LL;
  v8 = a1;
  v88 = 0LL;
  v9 = 0LL;
  v96 = 0;
  v86 = 0;
  if ( !a2 )
  {
    v74 = *(char **)(a4 + 184);
    v93 = 0;
    v75 = *v74;
    v76 = (unsigned __int8)(*v74 - 3) <= 1u;
    v89 = v76;
    v91 = v75 == 3;
    v92 = v75 == 9;
    v102 = *(int *)(a4 + 48) < 0;
    if ( v76 )
    {
      v86 = *((_DWORD *)v74 + 2);
      v94 = *((_QWORD *)v74 + 3);
    }
    v77 = *(unsigned int *)(a4 + 168);
    v78 = *(unsigned int *)(a4 + 172);
    PerformanceFrequency.QuadPart = 0LL;
    QpcTimeStamp = 0LL;
    v97 = 0LL;
    if ( (int)IoGetIoAttributionHandle(a4, &v97) >= 0 )
    {
      v83 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v80.QuadPart = 10000000LL;
      QpcTimeStamp = v83;
      PerformanceFrequency.QuadPart = 10000000LL;
      v7 = v83;
LABEL_181:
      v39 = v7 - (v77 | (v78 << 32));
      if ( byte_140168DAA )
      {
        if ( !byte_140168724 )
          goto LABEL_220;
        if ( !dword_1401684AC )
        {
          if ( !v80.QuadPart )
            return 3221225534LL;
          v39 = 10000000 * v39 / v80.QuadPart;
        }
      }
      if ( byte_140168724 && dword_1401684AC )
      {
        if ( !v80.QuadPart )
          return 3221225534LL;
        v40 = 10000000 * v39 / v80.QuadPart;
LABEL_64:
        v41 = a3;
        v42 = (_BYTE *)(a2 + 2);
        if ( !*(_BYTE *)(a3 + 3368) )
        {
LABEL_65:
          if ( !v9 )
            goto LABEL_66;
          _InterlockedIncrement64((volatile signed __int64 *)(v41 + 2296));
          _InterlockedAdd64((volatile signed __int64 *)(v41 + 2304), v9);
          if ( v9 > *(_QWORD *)(v41 + 2312) )
            *(_QWORD *)(v41 + 2312) = v9;
          v42 = (_BYTE *)(a2 + 2);
          if ( !a2 )
          {
LABEL_69:
            v43 = a3;
            if ( v40 + v9 >= qword_140168428
              && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a3 + 2368)) <= 0x80
              && (byte_1401694F6 & 2) != 0 )
            {
              v43 = a3;
              sub_140002A60(
                a3 + 177,
                a3 + 168,
                a3 + 2104,
                *(const wchar_t **)(*(_QWORD *)(a3 + 24) + 4720LL),
                *(_DWORD *)(*(_QWORD *)(a3 + 24) + 56LL),
                *(_QWORD *)(a3 + 24) + 5064LL,
                *(_BYTE *)(a3 + 104),
                *(_BYTE *)(a3 + 105),
                *(_BYTE *)(a3 + 106),
                a3 + 2104,
                (const char *)(a3 + 168),
                (const char *)(a3 + 177),
                (const char *)(a3 + 242),
                *(_BYTE *)(a3 + 506) & 1,
                qword_140168428 / 0x2710uLL,
                (int)v40 / 10000,
                v98 / 0x2710,
                a5,
                v86,
                v94,
                v96);
              v8 = a1;
            }
            CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
            v45 = v89;
            v46 = CurrentProcessorNumber;
            if ( v89 )
            {
              v47 = 13;
              v48 = !v91;
              for ( i = 0; i < 0xD; ++i )
              {
                if ( v39 <= *((_QWORD *)*(&xmmword_1401690E8 + 1) + i) )
                {
                  v47 = i;
                  break;
                }
              }
              v50 = (unsigned int)dword_14016910C;
              v51 = (unsigned __int16)qword_1401690E0;
            }
            else
            {
              v48 = v93;
              if ( !v93 && !v92 )
                return 3221225473LL;
              v47 = 4;
              for ( j = 0; j < 4; ++j )
              {
                if ( v39 <= *((_QWORD *)xmmword_140169120 + j) )
                {
                  v47 = j;
                  break;
                }
              }
              v50 = *((unsigned int *)&xmmword_140169130 + 3);
              v51 = (unsigned __int16)xmmword_140169110;
            }
            v52 = (_QWORD *)(*(_QWORD *)(v43 + 2376)
                           + (unsigned int)dword_140169178 * v46
                           + 24 * ((unsigned int)(v48 + v47 * v51) + v50));
            if ( v102 )
              ++v52[1];
            else
              ++*v52;
            v52[2] += v40;
            if ( !v45 )
              goto LABEL_79;
            if ( !v102 && (*(_BYTE *)(v43 + 507) & 0x10) != 0 )
            {
              v84 = 8;
              v61 = v86;
              while ( v5 < 8 )
              {
                if ( v86 <= *((__int64 *)xmmword_140169150 + v5) )
                {
                  v84 = v5;
                  break;
                }
                ++v5;
              }
              v85 = (__m128i *)(*(_QWORD *)(v43 + 2384)
                              + (unsigned int)dword_14016917C * v46
                              + 16
                              * (*((unsigned int *)&xmmword_140169160 + 3)
                               + (unsigned __int64)(v48
                                                  + (unsigned __int16)xmmword_140169140
                                                  * (v47 * (unsigned int)WORD1(xmmword_140169140) + v84))));
              *v85 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)v40), _mm_loadu_si128(v85));
            }
            else
            {
              v61 = v86;
            }
            v62 = *(_QWORD *)(v43 + 2416);
            if ( !v62 )
            {
LABEL_79:
              if ( v92 )
              {
                if ( *(_QWORD *)(v43 + 2456) < v40 )
                  *(_QWORD *)(v43 + 2456) = v40;
              }
              else if ( v93 )
              {
                if ( *(_QWORD *)(v43 + 2464) < v40 )
                  *(_QWORD *)(v43 + 2464) = v40;
              }
              return 0LL;
            }
            v63 = (unsigned __int64 *)(v62 + dword_140169190 * v46);
            if ( *v63 < v40 )
              *v63 = v40;
            if ( v91 )
            {
              v63[1] += v61;
              return 0LL;
            }
            v63[2] += v61;
            if ( v8 )
            {
              v64 = v8[96];
              if ( v64 )
                goto LABEL_112;
              v64 = v8[22];
            }
            else if ( a2 )
            {
              v64 = *(_QWORD *)(a2 + 48);
            }
            else
            {
              v64 = a4;
            }
            if ( !v64 )
              return 0LL;
LABEL_112:
            if ( (*(_DWORD *)(v64 + 16) & 8) == 0 || (v64 = *(_QWORD *)(v64 + 24)) != 0 )
            {
              v65 = *(_QWORD *)(v64 + 184);
              if ( v65 )
              {
                if ( (unsigned __int16)*(_DWORD *)(v65 + 16) )
                  v63[3] += v61;
              }
            }
            return 0LL;
          }
          if ( *v42 == 40 )
          {
            if ( v9 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
              _InterlockedIncrement64((volatile signed __int64 *)(v41 + 2320));
            v96 = *(_DWORD *)(a2 + 48);
          }
          else
          {
LABEL_66:
            if ( !a2 )
              goto LABEL_69;
          }
          if ( *v42 == 40 )
            *(_DWORD *)(a2 + 48) = 0;
          goto LABEL_69;
        }
        if ( a2 )
        {
          v81 = sub_140011B28(a2, a3, v23, v42);
          v41 = a3;
          if ( v81 )
            goto LABEL_200;
          v42 = (_BYTE *)(a2 + 2);
        }
        if ( !v89 )
          goto LABEL_65;
LABEL_200:
        if ( v40 + v9 >= *(_QWORD *)(v41 + 3408) )
          _InterlockedIncrement64((volatile signed __int64 *)(v41 + 2240));
        goto LABEL_65;
      }
LABEL_220:
      v40 = v39;
      goto LABEL_64;
    }
    if ( byte_140168DAA )
    {
      if ( !byte_140168724 )
      {
LABEL_178:
        UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
LABEL_179:
        v7 = UnbiasedInterruptTime;
        goto LABEL_180;
      }
    }
    else
    {
      if ( !dword_1401684A8 )
      {
LABEL_180:
        v80 = PerformanceFrequency;
        QpcTimeStamp = v7;
        goto LABEL_181;
      }
      if ( !byte_140168724 || !dword_1401684AC )
        goto LABEL_178;
    }
    UnbiasedInterruptTime = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
    goto LABEL_179;
  }
  v10 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v10 == 40 )
    v11 = *(_DWORD *)(a2 + 20);
  else
    v11 = v10;
  if ( v11 || ((a5 - 8) & 0x5D) != 0 )
  {
    v89 = 0;
    if ( v11 )
    {
LABEL_126:
      v91 = 0;
      if ( v11 )
        goto LABEL_127;
      goto LABEL_9;
    }
  }
  else
  {
    v89 = 1;
  }
  if ( ((a5 - 8) & 0x5F) != 0 )
    goto LABEL_126;
  v91 = 1;
LABEL_9:
  if ( a5 == 66 )
  {
    v93 = 1;
    goto LABEL_11;
  }
LABEL_127:
  v93 = 0;
  if ( !v11 && (a5 == 53 || a5 == -111) )
  {
    v92 = 1;
    goto LABEL_12;
  }
LABEL_11:
  v92 = 0;
LABEL_12:
  v12 = *(_BYTE *)(a2 + 3);
  v13 = 0;
  if ( (_BYTE)v10 != 40 )
  {
    v13 = *(_BYTE *)(a2 + 4);
    QuadPart = (unsigned int *)(a2 + 16);
    v23 = v12;
    QpcTimeStamp = a2 + 16;
    LOBYTE(v23) = v12 & 0x3F;
    v32 = (_DWORD *)(a2 + 20);
    v31 = (unsigned int *)(a2 + 56);
    if ( !(_BYTE)v10 )
    {
      v34 = *(_BYTE **)(a2 + 32);
      v33 = *(_BYTE *)(a2 + 11);
      goto LABEL_39;
    }
LABEL_38:
    v33 = 0;
    v34 = 0LL;
    goto LABEL_39;
  }
  v14 = (_DWORD *)(a2 + 20);
  v15 = (unsigned int *)(a2 + 16);
  v16 = (unsigned int *)(a2 + 56);
  QpcTimeStamp = a2 + 16;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_27;
  v17 = *v16;
  v100 = 0;
  if ( !*v16 )
    goto LABEL_26;
  v18 = (unsigned int *)(a2 + 120);
  while ( 1 )
  {
    v19 = *v18;
    if ( (unsigned int)v19 < 0x80 )
      goto LABEL_22;
    v20 = *v15;
    if ( (unsigned int)v19 >= (unsigned int)v20 )
      goto LABEL_22;
    v21 = *(_DWORD *)(v19 + a2);
    if ( v21 == 64 )
      goto LABEL_19;
    v69 = v21 - 65;
    if ( v69 )
    {
      if ( v69 != 1 )
        goto LABEL_21;
LABEL_19:
      v22 = (unsigned int)v19 + 40LL;
      goto LABEL_20;
    }
    v22 = (unsigned int)v19 + 56LL;
LABEL_20:
    if ( v22 <= v20 )
      break;
LABEL_21:
    v15 = (unsigned int *)(a2 + 16);
LABEL_22:
    ++v18;
    if ( ++v100 >= v17 )
      goto LABEL_25;
  }
  v13 = *(_BYTE *)(v19 + a2 + 8);
LABEL_25:
  v16 = (unsigned int *)(a2 + 56);
  v14 = (_DWORD *)(a2 + 20);
LABEL_26:
  v15 = (unsigned int *)(a2 + 16);
LABEL_27:
  v23 = v12;
  PerformanceFrequency.QuadPart = (LONGLONG)v15;
  LOBYTE(v23) = v12 & 0x3F;
  if ( *v14 || (v101 = 0, LODWORD(v95) = *v16, !(_DWORD)v95) )
  {
LABEL_37:
    QuadPart = (unsigned int *)PerformanceFrequency.QuadPart;
    v31 = (unsigned int *)(a2 + 56);
    v32 = (_DWORD *)(a2 + 20);
    goto LABEL_38;
  }
  v24 = (unsigned int *)(a2 + 120);
  while ( 2 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_36;
    v26 = *v15;
    if ( (unsigned int)v25 >= (unsigned int)v26 )
      goto LABEL_36;
    v27 = *(_DWORD *)(v25 + a2);
    v28 = v25 + a2;
    if ( v27 == 64 )
    {
      v29 = (unsigned int)v25 + 40LL;
LABEL_34:
      if ( v29 <= v26 )
      {
        v34 = *(_BYTE **)(v28 + 16);
        goto LABEL_108;
      }
      goto LABEL_35;
    }
    v68 = v27 - 65;
    if ( !v68 )
    {
      v29 = (unsigned int)v25 + 56LL;
      goto LABEL_34;
    }
    if ( v68 != 1 || (unsigned __int64)(unsigned int)v25 + 40 > v26 )
    {
LABEL_35:
      v15 = (unsigned int *)PerformanceFrequency.QuadPart;
LABEL_36:
      ++v24;
      if ( ++v101 >= (unsigned int)v95 )
        goto LABEL_37;
      continue;
    }
    break;
  }
  v34 = *(_BYTE **)(v28 + 24);
LABEL_108:
  v33 = *(_BYTE *)(v28 + 9);
  v31 = (unsigned int *)(a2 + 56);
  QuadPart = (unsigned int *)PerformanceFrequency.QuadPart;
  v32 = (_DWORD *)(a2 + 20);
LABEL_39:
  if ( (v12 & 0x80u) != 0 )
  {
    if ( v34 && v33 >= 0x12u && (unsigned __int8)((*v34 & 0x7F) - 112) <= 1u )
    {
      v72 = v34[12];
      v73 = v34[2] & 0xF;
    }
    else
    {
      v73 = 0;
      v72 = 0;
    }
    if ( (_BYTE)v23 != 1 || v73 || v72 )
      goto LABEL_164;
    v102 = 0;
  }
  else
  {
    if ( v13 != 2 && (unsigned __int8)v23 <= 0x12u )
    {
      v35 = 262211;
      if ( _bittest(&v35, v23) )
      {
        v102 = 0;
        goto LABEL_44;
      }
    }
LABEL_164:
    v102 = 1;
  }
LABEL_44:
  if ( !v89 )
    goto LABEL_45;
  if ( (_BYTE)v10 != 40 )
  {
    v86 = *QuadPart;
    if ( !(_BYTE)v10 )
    {
      v86 = *QuadPart;
      if ( *(_BYTE *)(a2 + 10) )
      {
        v54 = (char *)(a2 + 72);
        v86 = *QuadPart;
        goto LABEL_120;
      }
    }
    goto LABEL_45;
  }
  v54 = 0LL;
  v86 = *(_DWORD *)(a2 + 60);
  if ( *v32 )
    goto LABEL_120;
  v55 = 0;
  v86 = *(_DWORD *)(a2 + 60);
  if ( !*v31 )
    goto LABEL_120;
  v56 = (unsigned int *)(a2 + 120);
  v86 = *(_DWORD *)(a2 + 60);
  while ( 2 )
  {
    v57 = *v56;
    if ( (unsigned int)v57 < 0x80 )
      goto LABEL_91;
    v23 = *(unsigned int *)QpcTimeStamp;
    if ( (unsigned int)v57 >= (unsigned int)v23 )
      goto LABEL_91;
    v58 = *(_DWORD *)(v57 + a2);
    v59 = v57 + a2;
    if ( v58 == 64 )
    {
      v60 = (unsigned int)v57 + 40LL;
LABEL_90:
      if ( v60 <= v23 )
      {
        if ( *(_BYTE *)(v59 + 10) )
          v54 = (char *)(v59 + 24);
        goto LABEL_120;
      }
      goto LABEL_91;
    }
    v70 = v58 - 65;
    if ( !v70 )
    {
      v60 = (unsigned int)v57 + 56LL;
      goto LABEL_90;
    }
    if ( v70 != 1 || (unsigned __int64)(unsigned int)v57 + 40 > v23 )
    {
LABEL_91:
      ++v55;
      ++v56;
      if ( v55 >= *v31 )
        goto LABEL_120;
      continue;
    }
    break;
  }
  if ( *(_DWORD *)(v59 + 12) )
    v54 = (char *)(v59 + 32);
LABEL_120:
  if ( v54 )
  {
    v66 = *v54;
    if ( ((*v54 - 8) & 0xFD) != 0 )
    {
      if ( ((v66 - 40) & 0xFD) == 0 )
      {
        BYTE3(v88) = v54[2];
        BYTE2(v88) = v54[3];
        BYTE1(v88) = v54[4];
        LOBYTE(v88) = v54[5];
        v67 = v88;
        goto LABEL_124;
      }
      if ( ((v66 + 88) & 0xFD) != 0 )
      {
        if ( ((v66 + 120) & 0xFD) != 0 )
        {
          v94 = -1LL;
        }
        else
        {
          HIBYTE(v88) = v54[2];
          BYTE6(v88) = v54[3];
          BYTE5(v88) = v54[4];
          BYTE4(v88) = v54[5];
          BYTE3(v88) = v54[6];
          BYTE2(v88) = v54[7];
          BYTE1(v88) = v54[8];
          LOBYTE(v88) = v54[9];
          v94 = v88;
        }
      }
      else
      {
        BYTE3(v88) = v54[2];
        BYTE2(v88) = v54[3];
        BYTE1(v88) = v54[4];
        LOBYTE(v88) = v54[5];
        v94 = v88;
      }
    }
    else
    {
      v67 = (unsigned __int8)v54[3] | (((unsigned __int8)v54[2] | ((unsigned __int64)(v54[1] & 0x1F) << 8)) << 8);
LABEL_124:
      v94 = v67;
    }
  }
LABEL_45:
  PerformanceFrequency.QuadPart = 0LL;
  QpcTimeStamp = 0LL;
  v95 = 0LL;
  v97 = 0LL;
  if ( v8 )
  {
    v36 = v8[87];
    goto LABEL_47;
  }
  v95 = MEMORY[0xA8];
  if ( (int)IoGetIoAttributionHandle(0LL, &v97) >= 0 )
  {
    v82 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v36 = v95;
    PerformanceFrequency.QuadPart = 10000000LL;
    v38.QuadPart = v82;
    QpcTimeStamp = v82;
  }
  else
  {
    v36 = v95;
LABEL_47:
    if ( byte_140168DAA )
    {
      v37 = byte_140168724 == 0;
      goto LABEL_49;
    }
    if ( dword_1401684A8 )
    {
      if ( !byte_140168724 )
        goto LABEL_53;
      v37 = dword_1401684AC == 0;
LABEL_49:
      if ( v37 )
LABEL_53:
        v38.QuadPart = KeQueryUnbiasedInterruptTime();
      else
        v38 = KeQueryPerformanceCounter(&PerformanceFrequency);
    }
    else
    {
      v38.QuadPart = 0LL;
    }
    QpcTimeStamp = v38.QuadPart;
  }
  v39 = v38.QuadPart - v36;
  if ( !byte_140168DAA )
  {
LABEL_58:
    if ( byte_140168724 && dword_1401684AC )
    {
      if ( !PerformanceFrequency.QuadPart )
        return 3221225534LL;
      v40 = 10000000 * v39 / PerformanceFrequency.QuadPart;
      goto LABEL_62;
    }
LABEL_167:
    v40 = v39;
LABEL_62:
    if ( v8 )
    {
      v9 = v8[86];
      v98 = v9;
    }
    goto LABEL_64;
  }
  if ( !byte_140168724 )
    goto LABEL_167;
  if ( dword_1401684AC )
    goto LABEL_58;
  if ( PerformanceFrequency.QuadPart )
  {
    v39 = 10000000 * v39 / PerformanceFrequency.QuadPart;
    goto LABEL_58;
  }
  return 3221225534LL;
}
