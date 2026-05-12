/*
 * XREFs of sub_140099564 @ 0x140099564
 * Callers:
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_140020D90 @ 0x140020D90 (sub_140020D90.c)
 *     sub_14002A7F0 @ 0x14002A7F0 (sub_14002A7F0.c)
 * Callees:
 *     sub_140001CE8 @ 0x140001CE8 (sub_140001CE8.c)
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_14000F4A0 @ 0x14000F4A0 (sub_14000F4A0.c)
 *     sub_140010C40 @ 0x140010C40 (sub_140010C40.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140018B28 @ 0x140018B28 (sub_140018B28.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140027680 @ 0x140027680 (sub_140027680.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056004 @ 0x140056004 (sub_140056004.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     sub_14009DB74 @ 0x14009DB74 (sub_14009DB74.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140099564(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  ULONG v4; // edi
  __int64 v5; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rbx
  int v29; // ebx
  int v30; // eax
  bool v31; // bl
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, _QWORD, __int64); // rax
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  void (__fastcall *v39)(__int64, _QWORD, __int64); // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rsi
  bool v45; // zf
  __int64 v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r12
  __int64 *v50; // rbx
  KSPIN_LOCK *v51; // r12
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v53; // rcx
  int v54; // r9d
  char v55; // al
  __int64 *v56; // rcx
  KSPIN_LOCK v57; // r8
  __int64 **v58; // rax
  __int64 *v59; // rcx
  KSPIN_LOCK v60; // rdx
  __int64 **v61; // rax
  int v62; // r9d
  char v63; // al
  __int64 *v64; // rcx
  KSPIN_LOCK v65; // r8
  __int64 **v66; // rax
  __int64 *v67; // rcx
  KSPIN_LOCK v68; // rdx
  __int64 **v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rbx
  __int64 v74; // rcx
  ULONG_PTR v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r12
  LARGE_INTEGER v78; // rax
  LARGE_INTEGER v79; // rbx
  unsigned int v80; // r8d
  __int64 v81; // rcx
  unsigned __int64 v82; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v84; // rdx
  LARGE_INTEGER v85; // rcx
  unsigned __int64 v86; // r8
  char v87; // r9
  LONGLONG v88; // r9
  __int64 v89; // r12
  unsigned int v90; // ebx
  unsigned int v91; // r8d
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned __int64 v94; // r10
  int v95; // eax
  int v96; // eax
  int v97; // eax
  unsigned __int64 v98; // r8
  signed __int32 v99; // eax
  signed __int32 v100; // ett
  __int64 v101; // rax
  unsigned __int8 v102; // bl
  __int64 v103; // rsi
  unsigned __int64 v104; // rcx
  __int64 v105; // rdx
  ULONG *v106; // rax
  const EVENT_DESCRIPTOR *v107; // rdx
  __int64 v108; // rdx
  char v109; // bl
  char v110; // si
  _BYTE *v111; // r9
  unsigned __int8 v112; // r10
  char v113; // r11
  char v114; // r12
  char *v115; // rbx
  unsigned int v116; // r15d
  unsigned __int64 v117; // r14
  __int64 v118; // r8
  int v119; // ecx
  char v120; // cl
  char v121; // r8
  _BYTE *v122; // rax
  char *v123; // r12
  unsigned int v124; // eax
  char v125; // al
  ULONG v126[2]; // [rsp+20h] [rbp-E0h]
  __int64 v127; // [rsp+28h] [rbp-D8h]
  char v128; // [rsp+60h] [rbp-A0h] BYREF
  char v129; // [rsp+61h] [rbp-9Fh] BYREF
  char v130; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v131; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v132; // [rsp+68h] [rbp-98h]
  __int64 v133; // [rsp+70h] [rbp-90h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  int *v135; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-78h] BYREF
  GUID v137; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v138; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v139; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v140; // [rsp+E0h] [rbp-20h]
  __int64 v141; // [rsp+E8h] [rbp-18h]
  __int64 v142; // [rsp+F0h] [rbp-10h]
  __int64 v143; // [rsp+F8h] [rbp-8h]
  unsigned int *v144; // [rsp+100h] [rbp+0h]
  __int64 v145; // [rsp+108h] [rbp+8h]
  char *v146; // [rsp+110h] [rbp+10h]
  __int64 v147; // [rsp+118h] [rbp+18h]
  char *v148; // [rsp+120h] [rbp+20h]
  __int64 v149; // [rsp+128h] [rbp+28h]
  char *v150; // [rsp+130h] [rbp+30h]
  __int64 v151; // [rsp+138h] [rbp+38h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v137.Data1 = v3;
  LODWORD(v132) = 0;
  v8 = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v5 + 8);
  v133 = v9;
  v11 = sub_140010C40(v3, a2);
  if ( v11 >= 0 )
  {
    v11 = sub_1400066C0(v3, v10, 1);
    if ( v11 >= 0 )
    {
      v11 = sub_140050330(v3, a2, 0LL, a3);
      if ( v11 < 0 )
      {
        v14 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v15 = *(_DWORD *)(v14 + *(_QWORD *)(v3 + 40));
        while ( (v15 & 1) == 0 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + *(_QWORD *)(v3 + 40)), v15 - 2, v15);
          if ( v16 == v15 )
            goto LABEL_183;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
        goto LABEL_183;
      }
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      if ( *(_BYTE *)(v17 + 2) == 40 )
        v18 = *(_QWORD *)(v17 + 96);
      else
        v18 = *(_QWORD *)(v17 + 48);
      v19 = v133;
      v20 = *(unsigned __int8 *)(v133 + 2);
      if ( (_BYTE)v20 == 40 )
        v20 = *(_DWORD *)(v133 + 20);
      if ( v20 == 16 )
      {
LABEL_25:
        v25 = *(unsigned __int8 *)(v19 + 2);
        if ( (_BYTE)v25 == 40 )
          v25 = *(_DWORD *)(v19 + 20);
        if ( v25 == 16 && (unsigned int)dword_140168178 > 5 && sub_14003F840(v12, 0x400000000000LL) )
        {
          v141 = 16LL;
          v140 = v8 + 5064;
          v143 = 16LL;
          v142 = v3 + 2104;
          v131 = *(_DWORD *)(v8 + 56);
          v144 = &v131;
          v129 = *(_BYTE *)(v3 + 104);
          v146 = &v129;
          v128 = *(_BYTE *)(v3 + 105);
          v148 = &v128;
          v130 = *(_BYTE *)(v3 + 106);
          v150 = &v130;
          v145 = 4LL;
          v147 = 1LL;
          v149 = 1LL;
          v151 = 1LL;
          sub_140037A5C(v26, (unsigned __int8 *)dword_1401565A4, v13, v27, 8u, &v139);
        }
        *(_QWORD *)(v18 + 656) = sub_14003EC20;
        if ( *(_BYTE *)(v8 + 4370) )
        {
          v28 = *(_QWORD *)(v18 + 168);
          if ( *(_BYTE *)(v28 + 2) == 40 )
            v29 = *(_DWORD *)(v28 + 24);
          else
            v29 = *(_DWORD *)(v28 + 12);
          if ( (*(_BYTE *)(v8 + 4371) & 4) != 0 )
          {
            v31 = (v29 & 0x40) != 0;
            if ( *(_QWORD *)(v18 + 104) )
            {
              v32 = (__int64 *)(v8 + 880);
              if ( v8 != -880 )
              {
                v33 = *v32;
                if ( *v32 )
                {
                  v34 = *(_QWORD *)(v33 + 8);
                  if ( v34 )
                  {
                    if ( *(int *)(v8 + 908) >= 3
                      && (v35 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v34 + 240)) != 0LL )
                    {
                      LOBYTE(v13) = v31;
                      v35(v33, *(_QWORD *)(v18 + 104), v13);
                    }
                    else
                    {
                      LOBYTE(v13) = 1;
                      LOBYTE(v34) = v31;
                      KeFlushIoBuffers(*(_QWORD *)(v18 + 104), v34, v13);
                    }
                  }
                }
              }
            }
            if ( *(_QWORD *)(v18 + 136) )
            {
              v36 = (__int64 *)(v8 + 880);
              if ( v8 != -880 )
              {
                v37 = *v36;
                if ( *v36 )
                {
                  v38 = *(_QWORD *)(v37 + 8);
                  if ( v38 )
                  {
                    if ( *(int *)(v8 + 908) >= 3
                      && (v39 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v38 + 240)) != 0LL )
                    {
                      LOBYTE(v13) = v31;
                      v39(v37, *(_QWORD *)(v18 + 136), v13);
                    }
                    else
                    {
                      LOBYTE(v13) = 1;
                      LOBYTE(v38) = v31;
                      KeFlushIoBuffers(*(_QWORD *)(v18 + 136), v38, v13);
                    }
                  }
                }
              }
            }
          }
          else
          {
            if ( *(_QWORD *)(v18 + 136) )
            {
              v30 = sub_140018B28(v8, (unsigned int *)v18, v13);
              goto LABEL_57;
            }
            if ( (v29 & 0xC0) != 0 )
            {
              v30 = sub_140027680(v8, v18, v13);
              goto LABEL_57;
            }
          }
        }
        v30 = sub_1400184D0(v8, v18);
LABEL_57:
        if ( v30 >= 0 )
          return;
        v11 = v30;
        if ( (_DWORD)v132 )
        {
          v40 = *(_QWORD *)(v18 + 168);
          if ( *(_BYTE *)(v40 + 2) == 40 )
            v41 = *(_DWORD *)(v40 + 20);
          else
            v41 = *(unsigned __int8 *)(v40 + 2);
          _InterlockedDecrement((volatile signed __int32 *)(v3 + 1396));
          v42 = v41 - 18;
          if ( v42 && (v43 = v42 - 1) != 0 )
          {
            if ( v43 == 13 )
              sub_14009DB74(v3);
          }
          else
          {
            sub_140066768(*(_QWORD *)(v3 + 24));
          }
        }
        v44 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
        v45 = *(_BYTE *)(v44 + 2) == 40;
        if ( *(_BYTE *)(v44 + 2) == 40 )
          v46 = *(_QWORD *)(v44 + 96);
        else
          v46 = *(_QWORD *)(v44 + 48);
        v47 = *(_QWORD *)(v46 + 224);
        v132 = v47;
        if ( v45 )
          v48 = *(_QWORD *)(v44 + 96);
        else
          v48 = *(_QWORD *)(v44 + 48);
        if ( (*(_BYTE *)(v48 + 16) & 2) == 0 )
        {
LABEL_107:
          v73 = v132;
          sub_140027440(v46, *(_QWORD *)(*(_QWORD *)(v132 + 24) + 8LL));
          if ( (unsigned int)sub_1400567A0() )
          {
            v76 = *(_QWORD *)(v73 + 3600);
            if ( v76 && *(_QWORD *)(v76 + 104) )
            {
              v75 = v46;
              goto LABEL_110;
            }
            v74 = *(_QWORD *)(v73 + 24);
            if ( !*(_QWORD *)(v74 + 5616) )
              goto LABEL_119;
            v75 = v46;
          }
          else
          {
            v74 = *(_QWORD *)(v73 + 24);
            if ( !*(_QWORD *)(v74 + 5624) )
            {
LABEL_119:
              if ( *(_BYTE *)(v44 + 2) == 40 )
              {
                if ( (*(_BYTE *)(v46 + 16) & 0x40) != 0 )
                {
                  v77 = *(_QWORD *)(v46 + 752);
                  PerformanceFrequency.QuadPart = 1LL;
                  if ( v77 )
                  {
                    if ( byte_140168724 )
                      v78 = KeQueryPerformanceCounter(&PerformanceFrequency);
                    else
                      v78.QuadPart = KeQueryUnbiasedInterruptTime();
                    v79 = v78;
                    *(_BYTE *)(v77 + 3) = *(_BYTE *)(v44 + 3);
                    *(_DWORD *)(v77 + 12) = *(_DWORD *)(v44 + 24);
                    if ( (*(_DWORD *)(v44 + 24) & 0x40) != 0 )
                      *(_DWORD *)(v77 + 16) = *(_DWORD *)(v44 + 60);
                    if ( *(_BYTE *)(v44 + 3) == 48 )
                      *(_DWORD *)(v77 + 64) = *(_DWORD *)(v44 + 44);
                    if ( !*(_DWORD *)(v44 + 20) )
                    {
                      v80 = 0;
                      if ( *(_DWORD *)(v44 + 56) )
                      {
                        while ( 1 )
                        {
                          v81 = *(unsigned int *)(v44 + 4LL * v80 + 120);
                          if ( (unsigned int)v81 >= 0x80 )
                          {
                            v82 = *(unsigned int *)(v44 + 16);
                            if ( (unsigned int)v81 <= (unsigned int)v82
                              && *(_DWORD *)(v81 + v44) == 64
                              && v81 + 40 <= v82 )
                            {
                              break;
                            }
                          }
                          if ( ++v80 >= *(_DWORD *)(v44 + 56) )
                            goto LABEL_136;
                        }
                        *(_BYTE *)(v77 + 4) = *(_BYTE *)((unsigned int)v81 + v44 + 8);
                        *(_QWORD *)(v77 + 32) = *(_QWORD *)((unsigned int)v81 + v44 + 16);
                        *(_BYTE *)(v77 + 11) = *(_BYTE *)((unsigned int)v81 + v44 + 9);
                      }
                      else
                      {
LABEL_136:
                        *(_BYTE *)(v77 + 3) = 48;
                        *(_DWORD *)(v77 + 64) = -1073741811;
                      }
                    }
                    if ( byte_140168724 )
                      PerformanceCounter = KeQueryPerformanceCounter(0LL);
                    else
                      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
                    if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v79.QuadPart )
                      v86 = PerformanceCounter.QuadPart - v79.QuadPart;
                    else
                      v86 = PerformanceCounter.QuadPart - v79.QuadPart - 1;
                    if ( byte_140168724 )
                    {
                      v85 = PerformanceFrequency;
                      v87 = 0;
                      if ( PerformanceFrequency.QuadPart && v86 )
                      {
                        v88 = v86 / PerformanceFrequency.QuadPart;
                        v86 = 1000 * (v86 % PerformanceFrequency.QuadPart);
                        v84.QuadPart = 10000 * (v86 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
                        v87 = 10000 * (v86 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                            + 16 * (-24 * v88 + v86 / PerformanceFrequency.QuadPart);
                      }
                    }
                    else
                    {
                      v87 = v86;
                    }
                    if ( (byte_1401694F0 & 0x40) != 0 )
                      sub_140053A04(v85.QuadPart, v84.QuadPart, v86, L"Translate STORAGE_REQUEST_BLOCK result", v87);
                    v73 = v132;
                  }
                  *(_QWORD *)(*(_QWORD *)(v46 + 752) + 48LL) = *(_QWORD *)(v46 + 176);
                  *(_QWORD *)(*(_QWORD *)(v46 + 752) + 24LL) = *(_QWORD *)(v46 + 184);
                  *(_QWORD *)(*(_QWORD *)(v46 + 752) + 56LL) = 0LL;
                  *(_QWORD *)(*(_QWORD *)(v46 + 752) + 40LL) = 0LL;
                  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = *(_QWORD *)(v46 + 752);
                  *(_BYTE *)(v46 + 16) &= ~0x40u;
                  *(_QWORD *)(v46 + 752) = 0LL;
                }
                else
                {
                  *(_QWORD *)(v44 + 96) = 0LL;
                  *(_QWORD *)(v44 + 64) = *(_QWORD *)(v46 + 184);
                  *(_QWORD *)(v44 + 104) = 0LL;
                  v89 = *(_QWORD *)(v46 + 192);
                  if ( v89 && (*(_BYTE *)(v44 + 24) & 0xC0) == 0xC0 )
                  {
                    v90 = *(_DWORD *)(v44 + 56);
                    v91 = 0;
                    if ( v90 )
                    {
                      while ( 1 )
                      {
                        v92 = 0LL;
                        v93 = *(unsigned int *)(v44 + 4LL * v91 + 120);
                        if ( (unsigned int)v93 >= 0x80 )
                        {
                          v94 = *(unsigned int *)(v44 + 16);
                          if ( (unsigned int)v93 <= (unsigned int)v94 && *(_DWORD *)(v93 + v44) == 1 && v93 + 24 <= v94 )
                            break;
                        }
                        if ( ++v91 >= v90 )
                          goto LABEL_164;
                      }
                      v92 = v93 + v44;
LABEL_164:
                      v73 = v132;
                      if ( v92 )
                        *(_QWORD *)(v92 + 16) = v89;
                    }
                    else
                    {
                      v73 = v132;
                    }
                  }
                  if ( byte_1401688AC )
                  {
                    v95 = *(_DWORD *)(v44 + 24);
                    if ( (v95 & 0x2000000) != 0 )
                      *(_DWORD *)(v44 + 24) = v95 & 0xFDFFFFFF;
                  }
                }
              }
              else
              {
                v45 = byte_1401688AC == 0;
                *(_QWORD *)(v44 + 48) = *(_QWORD *)(v46 + 176);
                *(_QWORD *)(v44 + 24) = *(_QWORD *)(v46 + 184);
                *(_QWORD *)(v44 + 56) = 0LL;
                *(_QWORD *)(v44 + 40) = 0LL;
                if ( !v45 )
                {
                  v96 = *(_DWORD *)(v44 + 12);
                  if ( (v96 & 0x2000000) != 0 )
                    *(_DWORD *)(v44 + 12) = v96 & 0xFDFFFFFF;
                }
              }
              sub_140017A20(v46, 1);
              if ( *(_BYTE *)(v44 + 2) == 40 )
                v97 = *(_DWORD *)(v44 + 24);
              else
                v97 = *(_DWORD *)(v44 + 12);
              if ( (v97 & 0x4000) == 0 )
              {
                v98 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                v99 = *(_DWORD *)(v98 + *(_QWORD *)(v73 + 40));
                while ( (v99 & 1) == 0 )
                {
                  v100 = v99;
                  v99 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)(v98 + *(_QWORD *)(v73 + 40)),
                          v99 - 2,
                          v99);
                  if ( v100 == v99 )
                    goto LABEL_182;
                }
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 1032), 0xFFFFFFFF) == 1 )
                  KeSetEvent((PRKEVENT)(v73 + 520), 0, 0);
              }
LABEL_182:
              v9 = v133;
              v3 = *(_QWORD *)&v137.Data1;
              goto LABEL_183;
            }
            v75 = v46;
            if ( (*(_BYTE *)(v74 + 112) & 0x10) != 0 )
            {
LABEL_110:
              sub_14006AD74(v73, v75);
              goto LABEL_119;
            }
          }
          sub_140056004(v74, v75);
          goto LABEL_119;
        }
        v49 = *(unsigned int *)(v48 + 84) + 1LL;
        v135 = *(int **)(v47 + 560);
        v50 = (__int64 *)(v48 + 48);
        v51 = (KSPIN_LOCK *)&v135[16 * v49];
        memset(&LockHandle, 0, sizeof(LockHandle));
        CurrentIrql = KeGetCurrentIrql();
        v53 = v51 + 5;
        if ( CurrentIrql == 2 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v53, &LockHandle);
          v54 = *v135;
          v55 = *((_BYTE *)v50 - 32);
          if ( (v55 & 2) == 0 )
          {
LABEL_89:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_104:
            if ( byte_140168DAA )
            {
              v138 = 0LL;
              IoGetActivityIdIrp(a2, &v138);
              if ( byte_1401694F2 < 0 )
                sub_140001CE8(v71, v70, (__int64)&v138, v72, 4);
            }
            goto LABEL_107;
          }
          *((_BYTE *)v50 - 32) = v55 & 0xFD;
          v56 = (__int64 *)*v50;
          v57 = *v51;
          if ( *(__int64 **)(*v50 + 8) == v50 )
          {
            v58 = (__int64 **)v50[1];
            if ( *v58 == v50 )
            {
              *v58 = v56;
              v56[1] = (__int64)v58;
              if ( (v50[6] & 1) == 0 )
              {
LABEL_84:
                if ( (v54 & 4) == 0 && (__int64 *)v57 == v50 )
                {
                  if ( (KSPIN_LOCK *)*v51 == v51 )
                    *((_DWORD *)v51 + 12) = -1;
                  else
                    *((_DWORD *)v51 + 12) = *(_DWORD *)(*v51 + 32);
                }
                goto LABEL_89;
              }
              v59 = v50 + 2;
              if ( (__int64 *)v51[4] == v50 + 2 )
                v51[4] = *v59;
              v60 = *v59;
              if ( *(__int64 **)(*v59 + 8) == v59 )
              {
                v61 = (__int64 **)v50[3];
                if ( *v61 == v59 )
                {
                  *v61 = (__int64 *)v60;
                  *(_QWORD *)(v60 + 8) = v61;
                  *((_DWORD *)v50 + 12) &= ~1u;
                  goto LABEL_84;
                }
              }
            }
          }
LABEL_112:
          __fastfail(3u);
        }
        KeAcquireInStackQueuedSpinLock(v53, &LockHandle);
        v62 = *v135;
        v63 = *((_BYTE *)v50 - 32);
        if ( (v63 & 2) != 0 )
        {
          *((_BYTE *)v50 - 32) = v63 & 0xFD;
          v64 = (__int64 *)*v50;
          v65 = *v51;
          if ( *(__int64 **)(*v50 + 8) != v50 )
            goto LABEL_112;
          v66 = (__int64 **)v50[1];
          if ( *v66 != v50 )
            goto LABEL_112;
          *v66 = v64;
          v64[1] = (__int64)v66;
          if ( (v50[6] & 1) != 0 )
          {
            v67 = v50 + 2;
            if ( (__int64 *)v51[4] == v50 + 2 )
              v51[4] = *v67;
            v68 = *v67;
            if ( *(__int64 **)(*v67 + 8) != v67 )
              goto LABEL_112;
            v69 = (__int64 **)v50[3];
            if ( *v69 != v67 )
              goto LABEL_112;
            *v69 = (__int64 *)v68;
            *(_QWORD *)(v68 + 8) = v69;
            *((_DWORD *)v50 + 12) &= ~1u;
          }
          if ( (v62 & 4) == 0 && (__int64 *)v65 == v50 )
          {
            if ( (KSPIN_LOCK *)*v51 == v51 )
              *((_DWORD *)v51 + 12) = -1;
            else
              *((_DWORD *)v51 + 12) = *(_DWORD *)(*v51 + 32);
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_104;
      }
      v21 = *(_QWORD *)(v18 + 168);
      v12 = *(unsigned __int8 *)(v21 + 2);
      if ( (_BYTE)v12 == 40 )
        v22 = *(_DWORD *)(v21 + 20);
      else
        v22 = *(unsigned __int8 *)(v21 + 2);
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 1396));
      v23 = v22 - 18;
      if ( v23 && (v24 = v23 - 1) != 0 )
      {
        if ( v24 != 13 )
        {
LABEL_24:
          LODWORD(v132) = 1;
          goto LABEL_25;
        }
        sub_14000F4A0(v3);
      }
      else
      {
        sub_1400099A0(*(_QWORD *)(v3 + 24));
      }
      v19 = v133;
      goto LABEL_24;
    }
  }
LABEL_183:
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(v9 + 3) = sub_140007B40(v11);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    LODWORD(v127) = *(_DWORD *)(a2 + 48);
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x17u, (__int64)&unk_14014D880, *(_QWORD *)(v3 + 8), a2, v127);
  }
  v101 = *(_QWORD *)(a2 + 184);
  v102 = *(_BYTE *)(v101 + 16) & 3;
  *(_QWORD *)(v101 + 16) = 0LL;
  v103 = *(_QWORD *)(v3 + 24);
  if ( (v102 & 1) != 0 && sub_140021280(v3) )
  {
    PoFxIdleComponent(**(_QWORD **)(v3 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 1864));
  }
  if ( v102 >= 2u && *(_QWORD *)(v103 + 4960) )
    sub_140021110(v103, 0LL, 0LL);
  v45 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v45 )
    goto LABEL_258;
  v137 = 0LL;
  IoGetActivityIdIrp(a2, &v137);
  v105 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v105 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_258;
    v107 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_257;
  }
  if ( *(_BYTE *)v105 != 15 )
  {
    if ( *(_BYTE *)v105 != 27 )
      goto LABEL_258;
    if ( *(_BYTE *)(v105 + 1) == 7 && !*(_DWORD *)(v105 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v106 = *(ULONG **)(a2 + 56);
        if ( v106 )
          v4 = *v106;
        LODWORD(v127) = *(_DWORD *)(a2 + 48);
        v126[0] = v4;
        sub_140056AB0(v104, v105, &v137, a2, *(_QWORD *)v126, v127);
      }
      goto LABEL_258;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_258;
    v107 = &stru_140149FE8;
LABEL_257:
    v126[0] = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v104, v107, &v137, a2, *(_QWORD *)v126);
    goto LABEL_258;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_258;
  v108 = *(_QWORD *)(v105 + 8);
  v109 = 0;
  v110 = 0;
  v128 = 0;
  v111 = 0LL;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  if ( *(_BYTE *)(v108 + 2) != 40 )
  {
    v120 = *(_BYTE *)(v108 + 72);
    v111 = *(_BYTE **)(v108 + 32);
    v112 = *(_BYTE *)(v108 + 11);
    v110 = *(_BYTE *)(v108 + 4);
    if ( !*(_BYTE *)(v108 + 2) )
      goto LABEL_233;
    goto LABEL_258;
  }
  v115 = 0LL;
  v129 = 0;
  if ( *(_DWORD *)(v108 + 20) )
    goto LABEL_258;
  v116 = 0;
  v131 = *(_DWORD *)(v108 + 56);
  if ( !v131 )
    goto LABEL_230;
  while ( 1 )
  {
    v104 = *(unsigned int *)(v108 + 4LL * v116 + 120);
    if ( (unsigned int)v104 >= 0x80 )
    {
      v117 = *(unsigned int *)(v108 + 16);
      if ( (unsigned int)v104 < (unsigned int)v117 )
        break;
    }
LABEL_224:
    if ( ++v116 >= v131 )
      goto LABEL_230;
  }
  v118 = (unsigned int)v104;
  v119 = *(_DWORD *)(v108 + v104) - 64;
  if ( v119 )
  {
    v104 = (unsigned int)(v119 - 1);
    if ( (_DWORD)v104 )
    {
      if ( (_DWORD)v104 == 1 )
      {
        v104 = v118 + 40;
        if ( v118 + 40 <= v117 )
        {
          if ( *(_DWORD *)(v108 + v118 + 12) )
            v115 = (char *)(v118 + v108 + 32);
          v111 = *(_BYTE **)(v108 + v118 + 24);
          goto LABEL_229;
        }
      }
    }
    else
    {
      v104 = v118 + 56;
      if ( v118 + 56 <= v117 )
      {
        v129 = 1;
        if ( *(_BYTE *)(v108 + v118 + 10) )
          v115 = (char *)(v118 + v108 + 24);
        v110 = *(_BYTE *)(v108 + v118 + 8);
        v111 = *(_BYTE **)(v108 + v118 + 16);
        v112 = *(_BYTE *)(v108 + v118 + 9);
      }
    }
    goto LABEL_223;
  }
  v104 = v118 + 40;
  if ( v118 + 40 > v117 )
  {
LABEL_223:
    if ( v129 )
      goto LABEL_230;
    goto LABEL_224;
  }
  if ( *(_BYTE *)(v108 + v118 + 10) )
    v115 = (char *)(v118 + v108 + 24);
  v111 = *(_BYTE **)(v108 + v118 + 16);
LABEL_229:
  v112 = *(_BYTE *)(v108 + v118 + 9);
  v110 = *(_BYTE *)(v108 + v118 + 8);
LABEL_230:
  if ( v115 )
  {
    v120 = *v115;
    v109 = 0;
LABEL_233:
    LOBYTE(v104) = v120 - 8;
    if ( (v104 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v108 + 3) == 1 || !v111 || !v112 )
        goto LABEL_253;
      v121 = 0;
      v104 = (unsigned __int64)&v111[v112];
      v122 = v111 + 8;
      if ( (unsigned __int8)((*v111 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v122 <= v104 )
        {
          v121 = 1;
          v109 = v111[2];
          v113 = v111[1] & 0xF;
          v114 = v111[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v122 <= v104 )
        {
          v123 = v111 + 13;
          v113 = v111[2] & 0xF;
          v124 = v112;
          if ( (unsigned int)(unsigned __int8)v111[7] + 8 <= v112 )
            v124 = (unsigned __int8)v111[7] + 8;
          v104 = (unsigned __int64)&v111[v124];
          if ( (unsigned __int64)v123 > v104 )
            v128 = 0;
          else
            v128 = v111[12];
          if ( (unsigned __int64)(v111 + 14) > v104 )
            v114 = 0;
          else
            v114 = *v123;
          v121 = 1;
        }
        v109 = v128;
      }
      if ( v121 )
      {
        LOBYTE(v4) = v109;
        v125 = v114;
      }
      else
      {
LABEL_253:
        v113 = 0;
        v125 = 0;
      }
      LOBYTE(v127) = *(_BYTE *)(v108 + 3);
      v126[0] = *(_DWORD *)(a2 + 48);
      sub_140052E64(v104, v108, &v137, a2, *(_QWORD *)v126, v127, v110, v113, v4, v125, a2);
    }
  }
LABEL_258:
  IofCompleteRequest((PIRP)a2, 0);
}
