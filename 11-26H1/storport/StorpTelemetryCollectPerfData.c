/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x140021FA0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x140022B44 (RaidQosSupportedCommand.c)
 *     McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer @ 0x14002714C (McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // esi
  union _LARGE_INTEGER v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // r13
  char v10; // r8
  int v11; // ecx
  char v12; // dl
  int v13; // r9d
  unsigned __int8 v14; // bl
  char v15; // r11
  _BYTE *v16; // rdi
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // r10d
  __int64 v22; // r14
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // r10
  int v27; // r14d
  __int64 v28; // r13
  unsigned __int64 v29; // rcx
  _DWORD *v30; // r10
  _DWORD *v31; // r14
  unsigned __int8 v32; // cl
  int v33; // ecx
  union _LARGE_INTEGER v34; // rdi
  bool v35; // zf
  LARGE_INTEGER v36; // rbx
  __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  __int64 v39; // rdx
  _BYTE *v40; // r14
  __int64 v41; // r14
  ULONG CurrentProcessorNumber; // eax
  int v43; // r11d
  ULONG v44; // r9d
  BOOL v45; // r13d
  int v46; // r10d
  int v47; // r8d
  unsigned int i; // ecx
  __int64 v49; // rcx
  int v50; // eax
  _QWORD *v51; // rcx
  __int64 v53; // rax
  char *v54; // rdx
  unsigned int v55; // r9d
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  int v58; // r10d
  __int64 v59; // r11
  unsigned __int64 v60; // rcx
  unsigned int v61; // ebx
  __int64 v62; // rcx
  unsigned __int64 *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  char v66; // cl
  unsigned __int64 v67; // rcx
  int v68; // r14d
  int v69; // r10d
  int v70; // r10d
  unsigned int j; // ecx
  char v72; // al
  char v73; // cl
  char v74; // al
  char *v75; // rcx
  char v76; // al
  int v77; // edx
  __int64 v78; // rdi
  __int64 v79; // r14
  ULONGLONG QuadPart; // rax
  union _LARGE_INTEGER v81; // rcx
  char v82; // al
  ULONG64 v83; // rax
  ULONG64 UnbiasedInterruptTimePrecise; // rax
  int v85; // edx
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  unsigned __int64 QpcTimeStamp; // [rsp+B0h] [rbp-80h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp-78h] BYREF
  union _LARGE_INTEGER v90; // [rsp+C0h] [rbp-70h] BYREF
  unsigned int v91; // [rsp+C8h] [rbp-68h]
  int v92; // [rsp+CCh] [rbp-64h]
  BOOL v93; // [rsp+D0h] [rbp-60h]
  BOOL v94; // [rsp+D4h] [rbp-5Ch]
  int v95; // [rsp+D8h] [rbp-58h]
  unsigned __int64 v96; // [rsp+E0h] [rbp-50h]
  int v97; // [rsp+E8h] [rbp-48h]
  __int64 v98; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int64 v99; // [rsp+F8h] [rbp-38h]
  unsigned int v101; // [rsp+158h] [rbp+28h]
  bool v102; // [rsp+158h] [rbp+28h]

  v5 = 0;
  v99 = 0LL;
  v7.QuadPart = 0LL;
  v96 = 0LL;
  v8 = a1;
  QpcTimeStamp = 0LL;
  v9 = 0LL;
  v97 = 0;
  v91 = 0;
  if ( !a2 )
  {
    v75 = *(char **)(a4 + 184);
    v76 = *v75;
    if ( *v75 == 3 || (v77 = 0, v76 == 4) )
      v77 = 1;
    v92 = v77;
    v95 = 0;
    v93 = v76 == 3;
    v94 = v76 == 9;
    v102 = *(int *)(a4 + 48) < 0;
    if ( v77 )
    {
      v91 = *((_DWORD *)v75 + 2);
      v96 = *((_QWORD *)v75 + 3);
    }
    v78 = *(unsigned int *)(a4 + 168);
    v79 = *(unsigned int *)(a4 + 172);
    v90.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    v98 = 0LL;
    if ( (int)IoGetIoAttributionHandle(a4, &v98) >= 0 )
    {
      UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&PerformanceFrequency.QuadPart);
      v81.QuadPart = 10000000LL;
      PerformanceFrequency.QuadPart = UnbiasedInterruptTimePrecise;
      v90.QuadPart = 10000000LL;
      v7.QuadPart = UnbiasedInterruptTimePrecise;
LABEL_180:
      v37 = v7.QuadPart - (v78 | (v79 << 32));
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_220;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v81.QuadPart )
            return 3221225534LL;
          v37 = 10000000 * v37 / v81.QuadPart;
        }
      }
      if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
        if ( !v81.QuadPart )
          return 3221225534LL;
        v38 = 10000000 * v37 / v81.QuadPart;
LABEL_61:
        v39 = a3;
        v40 = (_BYTE *)(a2 + 2);
        if ( !*(_BYTE *)(a3 + 3368) )
        {
LABEL_62:
          if ( !v9 )
            goto LABEL_63;
          _InterlockedIncrement64((volatile signed __int64 *)(v39 + 2296));
          _InterlockedAdd64((volatile signed __int64 *)(v39 + 2304), v9);
          v40 = (_BYTE *)(a2 + 2);
          if ( v9 > *(_QWORD *)(v39 + 2312) )
            *(_QWORD *)(v39 + 2312) = v9;
          if ( !a2 )
          {
LABEL_66:
            v41 = a3;
            if ( v38 + v9 >= HighLatencyIoThreshold
              && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a3 + 2368)) <= 0x80
              && (byte_140173446 & 2) != 0 )
            {
              v41 = a3;
              McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer(
                a3 + 177,
                a3 + 168,
                a3 + 2104,
                *(_QWORD *)(*(_QWORD *)(a3 + 24) + 4784LL),
                *(_DWORD *)(*(_QWORD *)(a3 + 24) + 56LL),
                *(_QWORD *)(a3 + 24) + 5128LL,
                *(_BYTE *)(a3 + 104),
                *(_BYTE *)(a3 + 105),
                *(_BYTE *)(a3 + 106),
                a3 + 2104,
                a3 + 168,
                a3 + 177,
                a3 + 242,
                *(_BYTE *)(a3 + 506) & 1,
                HighLatencyIoThreshold / 0x2710uLL,
                (int)v38 / 10000,
                v99 / 0x2710,
                a5,
                v91,
                v96,
                v97);
              v8 = a1;
            }
            CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
            v43 = v92;
            v44 = CurrentProcessorNumber;
            if ( v92 )
            {
              v45 = v93;
              v46 = 13;
              v47 = !v93;
              for ( i = 0; i < 0xD; ++i )
              {
                if ( v37 <= *((_QWORD *)qword_140173030 + i) )
                {
                  v46 = i;
                  break;
                }
              }
              v49 = (unsigned int)dword_14017304C;
              v50 = (unsigned __int16)TelemetryPerfContext;
            }
            else
            {
              v47 = v95;
              if ( !v95 && !v94 )
                return 3221225473LL;
              v46 = 4;
              for ( j = 0; j < 4; ++j )
              {
                if ( v37 <= *((_QWORD *)xmmword_140173060 + j) )
                {
                  v46 = j;
                  break;
                }
              }
              v49 = *((unsigned int *)&xmmword_140173070 + 3);
              v50 = (unsigned __int16)xmmword_140173050;
              v45 = v93;
            }
            v51 = (_QWORD *)(*(_QWORD *)(v41 + 2376)
                           + (unsigned int)dword_1401730B8 * v44
                           + 24 * ((unsigned int)(v47 + v46 * v50) + v49));
            if ( v102 )
              ++v51[1];
            else
              ++*v51;
            v51[2] += v38;
            if ( !v43 )
              goto LABEL_76;
            if ( !v102 && (*(_BYTE *)(v41 + 507) & 0x10) != 0 )
            {
              v85 = 8;
              v61 = v91;
              while ( v5 < 8 )
              {
                if ( v91 <= *((__int64 *)xmmword_140173090 + v5) )
                {
                  v85 = v5;
                  break;
                }
                ++v5;
              }
              v86 = *(_QWORD *)(v41 + 2384);
              v87 = (unsigned int)dword_1401730BC * v44
                  + 16
                  * (*((unsigned int *)&xmmword_1401730A0 + 3)
                   + (unsigned __int64)(v47
                                      + (unsigned __int16)xmmword_140173080
                                      * (v46 * (unsigned int)WORD1(xmmword_140173080) + v85)));
              ++*(_QWORD *)(v87 + v86);
              *(_QWORD *)(v87 + v86 + 8) += v38;
            }
            else
            {
              v61 = v91;
            }
            v62 = *(_QWORD *)(v41 + 2416);
            if ( !v62 )
            {
LABEL_76:
              if ( v94 )
              {
                if ( *(_QWORD *)(v41 + 2456) < v38 )
                  *(_QWORD *)(v41 + 2456) = v38;
              }
              else if ( v95 )
              {
                if ( *(_QWORD *)(v41 + 2464) < v38 )
                  *(_QWORD *)(v41 + 2464) = v38;
              }
              return 0LL;
            }
            v63 = (unsigned __int64 *)(v62 + dword_1401730D0 * v44);
            if ( *v63 < v38 )
              *v63 = v38;
            if ( v45 )
            {
              v63[1] += v61;
              return 0LL;
            }
            v63[2] += v61;
            if ( v8 )
            {
              v64 = v8[96];
              if ( v64 )
                goto LABEL_109;
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
LABEL_109:
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
          if ( *v40 == 40 )
          {
            if ( v9 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
              _InterlockedIncrement64((volatile signed __int64 *)(v39 + 2320));
            v97 = *(_DWORD *)(a2 + 48);
          }
          else
          {
LABEL_63:
            if ( !a2 )
              goto LABEL_66;
          }
          if ( *v40 == 40 )
            *(_DWORD *)(a2 + 48) = 0;
          goto LABEL_66;
        }
        if ( a2 )
        {
          v82 = RaidQosSupportedCommand(a2);
          v39 = a3;
          if ( v82 )
            goto LABEL_201;
          v40 = (_BYTE *)(a2 + 2);
        }
        if ( !v92 )
          goto LABEL_62;
LABEL_201:
        if ( v38 + v9 >= *(_QWORD *)(v39 + 3408) )
          _InterlockedIncrement64((volatile signed __int64 *)(v39 + 2240));
        goto LABEL_62;
      }
LABEL_220:
      v38 = v37;
      goto LABEL_61;
    }
    if ( StorEtwLoggingEnabled )
    {
      if ( UseQPCTime )
      {
LABEL_191:
        QuadPart = KeQueryPerformanceCounter(&v90).QuadPart;
        goto LABEL_178;
      }
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
LABEL_179:
        v81 = v90;
        PerformanceFrequency = v7;
        goto LABEL_180;
      }
      if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
        goto LABEL_191;
    }
    QuadPart = KeQueryUnbiasedInterruptTime();
LABEL_178:
    v7.QuadPart = QuadPart;
    goto LABEL_179;
  }
  v10 = *(_BYTE *)(a2 + 2);
  if ( v10 == 40 )
    v11 = *(_DWORD *)(a2 + 20);
  else
    v11 = *(unsigned __int8 *)(a2 + 2);
  if ( v11 || (v12 = a5, ((a5 - 8) & 0x5D) != 0) )
  {
    v12 = a5;
    v13 = 0;
    v92 = 0;
    if ( v11 )
      goto LABEL_124;
  }
  else
  {
    v13 = 1;
    v92 = 1;
  }
  if ( ((v12 - 8) & 0x5F) != 0 )
  {
LABEL_124:
    v93 = 0;
    if ( v11 )
      goto LABEL_125;
    goto LABEL_10;
  }
  v93 = 1;
LABEL_10:
  if ( v12 == 66 )
  {
    v95 = 1;
    goto LABEL_12;
  }
LABEL_125:
  v95 = 0;
  if ( !v11 && (v12 == 53 || v12 == -111) )
  {
    v94 = 1;
    goto LABEL_13;
  }
LABEL_12:
  v94 = 0;
LABEL_13:
  v14 = *(_BYTE *)(a2 + 3);
  v15 = 0;
  v16 = 0LL;
  if ( v10 != 40 )
  {
    v15 = *(_BYTE *)(a2 + 4);
    v30 = (_DWORD *)(a2 + 20);
    v24 = v14;
    v31 = (_DWORD *)(a2 + 56);
    LOBYTE(v24) = v14 & 0x3F;
    if ( !v10 )
    {
      v16 = *(_BYTE **)(a2 + 32);
      v31 = (_DWORD *)(a2 + 56);
      v32 = *(_BYTE *)(a2 + 11);
      goto LABEL_36;
    }
LABEL_35:
    v32 = 0;
    goto LABEL_36;
  }
  v17 = (_DWORD *)(a2 + 20);
  v18 = (_DWORD *)(a2 + 56);
  if ( *(_DWORD *)(a2 + 20) || !*v18 )
    goto LABEL_25;
  while ( 1 )
  {
    v19 = *(unsigned int *)(a2 + 4LL * (unsigned int)v16 + 120);
    if ( (unsigned int)v19 < 0x80 )
      goto LABEL_21;
    v20 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v19 >= (unsigned int)v20 )
      goto LABEL_21;
    v21 = *(_DWORD *)(v19 + a2);
    v22 = v19 + a2;
    if ( v21 == 64 )
      goto LABEL_19;
    v69 = v21 - 65;
    if ( v69 )
    {
      if ( v69 != 1 )
        goto LABEL_21;
LABEL_19:
      v23 = v19 + 40;
      goto LABEL_20;
    }
    v23 = v19 + 56;
LABEL_20:
    if ( v23 <= v20 )
      break;
LABEL_21:
    LODWORD(v16) = (_DWORD)v16 + 1;
    if ( (unsigned int)v16 >= *v18 )
      goto LABEL_24;
  }
  v15 = *(_BYTE *)(v22 + 8);
LABEL_24:
  v18 = (_DWORD *)(a2 + 56);
  v17 = (_DWORD *)(a2 + 20);
LABEL_25:
  v24 = v14;
  LOBYTE(v24) = v14 & 0x3F;
  if ( *v17 )
  {
    v16 = 0LL;
    v30 = (_DWORD *)(a2 + 20);
    v31 = v18;
    goto LABEL_35;
  }
  v16 = 0LL;
  v101 = *v18;
  if ( !*v18 )
  {
    v31 = (_DWORD *)(a2 + 56);
    v30 = (_DWORD *)(a2 + 20);
    goto LABEL_35;
  }
  v90.QuadPart = (__int64)v17;
  PerformanceFrequency.QuadPart = a2 + 56;
  while ( 1 )
  {
    v25 = *(unsigned int *)(a2 + 4LL * (unsigned int)v16 + 120);
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_33;
    v26 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v25 >= (unsigned int)v26 )
      goto LABEL_33;
    v27 = *(_DWORD *)(v25 + a2);
    v28 = v25 + a2;
    if ( v27 == 64 )
    {
      v29 = v25 + 40;
      goto LABEL_32;
    }
    v68 = v27 - 65;
    if ( v68 )
      break;
    v29 = v25 + 56;
LABEL_32:
    if ( v29 <= v26 )
    {
      v16 = *(_BYTE **)(v28 + 16);
      v32 = *(_BYTE *)(v28 + 9);
      v30 = (_DWORD *)v90.QuadPart;
      v31 = (_DWORD *)PerformanceFrequency.QuadPart;
      goto LABEL_36;
    }
LABEL_33:
    LODWORD(v16) = (_DWORD)v16 + 1;
    if ( (unsigned int)v16 >= v101 )
    {
      v30 = (_DWORD *)v90.QuadPart;
      v16 = 0LL;
      v31 = (_DWORD *)PerformanceFrequency.QuadPart;
      goto LABEL_35;
    }
  }
  if ( v68 != 1 || v25 + 40 > v26 )
    goto LABEL_33;
  v16 = *(_BYTE **)(v28 + 24);
  v32 = *(_BYTE *)(v28 + 9);
  v30 = (_DWORD *)v90.QuadPart;
  v31 = (_DWORD *)PerformanceFrequency.QuadPart;
LABEL_36:
  if ( (v14 & 0x80u) != 0 )
  {
    if ( v16 && v32 >= 0x12u && ((v72 = *v16 & 0x7F, v72 == 112) || v72 == 113) )
    {
      v73 = v16[12];
      v74 = v16[2] & 0xF;
    }
    else
    {
      v74 = 0;
      v73 = 0;
    }
    if ( (_BYTE)v24 != 1 || v74 || v73 )
      goto LABEL_159;
    v102 = 0;
  }
  else
  {
    if ( v15 != 2 && (unsigned __int8)v24 <= 0x12u )
    {
      v33 = 262211;
      if ( _bittest(&v33, v24) )
      {
        v102 = 0;
        goto LABEL_41;
      }
    }
LABEL_159:
    v102 = 1;
  }
LABEL_41:
  if ( !v13 )
    goto LABEL_42;
  v53 = 60LL;
  if ( v10 != 40 )
    v53 = 16LL;
  v91 = *(_DWORD *)(v53 + a2);
  if ( v10 != 40 )
  {
    if ( !v10 && *(_BYTE *)(a2 + 10) )
    {
      v54 = (char *)(a2 + 72);
      goto LABEL_117;
    }
    goto LABEL_42;
  }
  v54 = 0LL;
  if ( *v30 )
    goto LABEL_117;
  v55 = 0;
  if ( !*v31 )
    goto LABEL_117;
  while ( 2 )
  {
    v56 = *(unsigned int *)(a2 + 4LL * v55 + 120);
    if ( (unsigned int)v56 < 0x80 )
      goto LABEL_89;
    v57 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v56 >= (unsigned int)v57 )
      goto LABEL_89;
    v58 = *(_DWORD *)(v56 + a2);
    v59 = v56 + a2;
    if ( v58 == 64 )
    {
      v60 = v56 + 40;
LABEL_88:
      if ( v60 <= v57 )
      {
        if ( *(_BYTE *)(v59 + 10) )
          v54 = (char *)(v59 + 24);
        goto LABEL_117;
      }
      goto LABEL_89;
    }
    v70 = v58 - 65;
    if ( !v70 )
    {
      v60 = v56 + 56;
      goto LABEL_88;
    }
    if ( v70 != 1 || v56 + 40 > v57 )
    {
LABEL_89:
      if ( ++v55 >= *v31 )
        goto LABEL_117;
      continue;
    }
    break;
  }
  if ( *(_DWORD *)(v59 + 12) )
    v54 = (char *)(v59 + 32);
LABEL_117:
  if ( v54 )
  {
    v66 = *v54;
    if ( *v54 == 8 || v66 == 10 )
    {
      v67 = (unsigned __int8)v54[3] | (((unsigned __int8)v54[2] | ((unsigned __int64)(v54[1] & 0x1F) << 8)) << 8);
LABEL_122:
      v96 = v67;
    }
    else
    {
      if ( ((v66 - 40) & 0xFD) == 0 )
      {
        BYTE3(QpcTimeStamp) = v54[2];
        BYTE2(QpcTimeStamp) = v54[3];
        BYTE1(QpcTimeStamp) = v54[4];
        LOBYTE(QpcTimeStamp) = v54[5];
        v67 = QpcTimeStamp;
        goto LABEL_122;
      }
      if ( ((v66 + 88) & 0xFD) != 0 )
      {
        if ( ((v66 + 120) & 0xFD) != 0 )
        {
          v96 = -1LL;
        }
        else
        {
          HIBYTE(QpcTimeStamp) = v54[2];
          BYTE6(QpcTimeStamp) = v54[3];
          BYTE5(QpcTimeStamp) = v54[4];
          BYTE4(QpcTimeStamp) = v54[5];
          BYTE3(QpcTimeStamp) = v54[6];
          BYTE2(QpcTimeStamp) = v54[7];
          BYTE1(QpcTimeStamp) = v54[8];
          LOBYTE(QpcTimeStamp) = v54[9];
          v96 = QpcTimeStamp;
        }
      }
      else
      {
        BYTE3(QpcTimeStamp) = v54[2];
        BYTE2(QpcTimeStamp) = v54[3];
        BYTE1(QpcTimeStamp) = v54[4];
        LOBYTE(QpcTimeStamp) = v54[5];
        v96 = QpcTimeStamp;
      }
    }
  }
LABEL_42:
  PerformanceFrequency.QuadPart = 0LL;
  QpcTimeStamp = 0LL;
  v90.QuadPart = 0LL;
  v98 = 0LL;
  if ( v8 )
  {
    v34 = (union _LARGE_INTEGER)v8[87];
    goto LABEL_44;
  }
  v90.QuadPart = MEMORY[0xA8];
  if ( (int)IoGetIoAttributionHandle(0LL, &v98) >= 0 )
  {
    v83 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v34 = v90;
    PerformanceFrequency.QuadPart = 10000000LL;
    v36.QuadPart = v83;
    QpcTimeStamp = v83;
  }
  else
  {
    v34 = v90;
LABEL_44:
    if ( StorEtwLoggingEnabled )
    {
      v35 = UseQPCTime == 0;
      goto LABEL_46;
    }
    if ( g_StorpTraceLoggingPerformanceEnabled )
    {
      if ( !UseQPCTime )
        goto LABEL_50;
      v35 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_46:
      if ( v35 )
LABEL_50:
        v36.QuadPart = KeQueryUnbiasedInterruptTime();
      else
        v36 = KeQueryPerformanceCounter(&PerformanceFrequency);
    }
    else
    {
      v36.QuadPart = 0LL;
    }
    QpcTimeStamp = v36.QuadPart;
  }
  v37 = v36.QuadPart - v34.QuadPart;
  if ( !StorEtwLoggingEnabled )
  {
LABEL_55:
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !PerformanceFrequency.QuadPart )
        return 3221225534LL;
      v38 = 10000000 * v37 / PerformanceFrequency.QuadPart;
      goto LABEL_59;
    }
LABEL_164:
    v38 = v37;
LABEL_59:
    if ( v8 )
    {
      v9 = v8[86];
      v99 = v9;
    }
    else
    {
      v9 = 0LL;
    }
    goto LABEL_61;
  }
  if ( !UseQPCTime )
    goto LABEL_164;
  if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_55;
  if ( PerformanceFrequency.QuadPart )
  {
    v37 = 10000000 * v37 / PerformanceFrequency.QuadPart;
    goto LABEL_55;
  }
  return 3221225534LL;
}
