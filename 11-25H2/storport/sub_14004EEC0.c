/*
 * XREFs of sub_14004EEC0 @ 0x14004EEC0
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 * Callees:
 *     sub_140001CE8 @ 0x140001CE8 (sub_140001CE8.c)
 *     sub_140001D70 @ 0x140001D70 (sub_140001D70.c)
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140018B28 @ 0x140018B28 (sub_140018B28.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140027680 @ 0x140027680 (sub_140027680.c)
 *     sub_14002796C @ 0x14002796C (sub_14002796C.c)
 *     sub_140028C24 @ 0x140028C24 (sub_140028C24.c)
 *     sub_140028FC0 @ 0x140028FC0 (sub_140028FC0.c)
 *     sub_14002A5E0 @ 0x14002A5E0 (sub_14002A5E0.c)
 *     sub_140036524 @ 0x140036524 (sub_140036524.c)
 *     sub_140045FE8 @ 0x140045FE8 (sub_140045FE8.c)
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 *     sub_140051260 @ 0x140051260 (sub_140051260.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056004 @ 0x140056004 (sub_140056004.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14004EEC0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  _BYTE *v5; // r12
  __int64 v6; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rsi
  char v11; // bl
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  char *v20; // r9
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rbx
  unsigned __int64 v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  char v26; // cl
  char v27; // cl
  char v28; // al
  int v29; // esi
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v31; // rax
  int v32; // r14d
  unsigned int v33; // esi
  unsigned int v34; // ebx
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // r14
  bool v45; // zf
  LARGE_INTEGER v46; // r13
  __int64 v47; // rsi
  const char *v48; // r14
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // eax
  char v52; // cl
  char v53; // al
  __int64 v54; // rax
  char v55; // r14
  __int64 v56; // rcx
  __int64 v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rdi
  int v60; // edi
  bool v61; // di
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  void (__fastcall *v65)(__int64, _QWORD, bool); // rax
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  void (__fastcall *v69)(__int64, _QWORD, bool); // rax
  __int64 v70; // rbx
  __int64 v71; // rbx
  unsigned __int64 v72; // rdx
  int v73; // ecx
  __int64 v74; // rcx
  unsigned int v75; // edi
  __int64 v76; // r14
  __int64 v77; // rax
  unsigned int HighestNodeNumber; // r8d
  char v79; // al
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // r14
  int *v83; // r13
  __int64 v84; // rbx
  int *v85; // r12
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v87; // rcx
  char v88; // al
  int v89; // r9d
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  _QWORD *v95; // rax
  char v96; // al
  int v97; // r9d
  __int64 v98; // rcx
  __int64 v99; // r8
  _QWORD *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // r13
  LARGE_INTEGER v113; // rax
  LARGE_INTEGER v114; // rbx
  unsigned int v115; // r8d
  unsigned int v116; // edx
  __int64 v117; // rcx
  unsigned __int64 v118; // rax
  __int64 v119; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v121; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v123; // r8
  char v124; // r9
  LONGLONG v125; // r9
  unsigned int v126; // r11d
  unsigned int v127; // edx
  __int64 v128; // rcx
  unsigned __int64 v129; // r9
  __int64 v130; // r8
  int v131; // eax
  int v132; // eax
  int v133; // eax
  unsigned __int64 v134; // r8
  signed __int32 v135; // eax
  signed __int32 v136; // ett
  __int64 v137; // rax
  unsigned __int8 v138; // bl
  __int64 v139; // rdi
  _QWORD *v140; // rcx
  __int64 v141; // rdi
  __int64 v142; // rcx
  __int64 v143; // rdx
  _DWORD *v144; // rax
  void *v145; // rdx
  __int64 v146; // rdx
  unsigned __int8 v147; // r11
  char v148; // bl
  char v149; // r13
  char v150; // r14
  unsigned __int8 *v151; // rdi
  unsigned int v152; // esi
  unsigned int v153; // r10d
  __int64 v154; // rcx
  unsigned __int64 v155; // r8
  __int64 v156; // r9
  int v157; // ecx
  int v158; // ecx
  char v159; // r10
  unsigned __int64 v160; // rcx
  char *v161; // rcx
  char v162; // r8
  char *v163; // rax
  unsigned int v164; // eax
  unsigned __int64 v165; // r8
  struct _KDPC *v166; // rcx
  int v168; // [rsp+78h] [rbp-98h]
  char v169; // [rsp+90h] [rbp-80h]
  char v171; // [rsp+91h] [rbp-7Fh]
  __int64 v172; // [rsp+98h] [rbp-78h]
  int v173; // [rsp+98h] [rbp-78h]
  int v175; // [rsp+A8h] [rbp-68h]
  int v176; // [rsp+ACh] [rbp-64h]
  __int64 v177; // [rsp+B0h] [rbp-60h]
  int v178; // [rsp+B8h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v180; // [rsp+C8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-40h] BYREF
  __int128 v182; // [rsp+E8h] [rbp-28h] BYREF
  __int128 v183; // [rsp+F8h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 8);
  v10 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)&v182 = a3;
  *(_BYTE *)(v9 + 3) = 0;
  v176 = 0;
  v178 = 0;
  v177 = 0LL;
  v169 = 0;
  if ( *(int *)(v10 + 4120) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v10 + 1104)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 4120)) == 1 )
      sub_14002796C(v10 + 1008, *(_QWORD *)(v10 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4120));
  }
  v11 = *(_BYTE *)(v9 + 2);
  if ( v11 != 40 )
  {
    v175 = *(_DWORD *)(v9 + 12);
    v169 = *(_BYTE *)(v9 + 72);
    v172 = *(_QWORD *)(v9 + 40);
    if ( v172 )
      *(_QWORD *)(v9 + 40) = 0LL;
    goto LABEL_28;
  }
  v172 = *(_QWORD *)(v9 + 104);
  v177 = v9;
  v175 = *(_DWORD *)(v9 + 24);
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_28;
  v12 = *(_DWORD *)(v9 + 56);
  v13 = 0;
  if ( !v12 )
    goto LABEL_28;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v9 + 4LL * v13 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_20;
    v15 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v14 >= (unsigned int)v15 )
      goto LABEL_20;
    v16 = v14 + v9;
    v17 = (unsigned int)v14;
    v18 = *(_DWORD *)(v14 + v9) - 64;
    if ( !v18 )
      break;
    v19 = v18 - 1;
    if ( !v19 )
    {
      v21 = v17 + 56;
      goto LABEL_19;
    }
    if ( v19 == 1 && v17 + 40 <= v15 )
    {
      if ( !*(_DWORD *)(v16 + 12) )
        goto LABEL_28;
      v20 = (char *)(v16 + 32);
      goto LABEL_24;
    }
LABEL_20:
    if ( ++v13 >= v12 )
      goto LABEL_28;
  }
  v21 = v17 + 40;
LABEL_19:
  if ( v21 > v15 )
    goto LABEL_20;
  if ( !*(_BYTE *)(v16 + 10) )
    goto LABEL_28;
  v20 = (char *)(v16 + 24);
LABEL_24:
  if ( v20 )
    v169 = *v20;
LABEL_28:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v11 == 40 )
    {
      v22 = *(_QWORD **)(v9 + 96);
      v177 = v9;
      *(_QWORD *)(v9 + 96) = v22[2];
    }
    else
    {
      v22 = *(_QWORD **)(v9 + 48);
      *(_QWORD *)(v9 + 48) = v22[2];
    }
    if ( v22[1] != -1LL )
      v8 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v6 + 3392)) - v22[1];
    ExFreePoolWithTag(v22, 0x54436152u);
  }
  if ( (*(_BYTE *)(v6 + 506) & 2) != 0 && sub_140036524(v9) )
  {
    v23 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v24 = *(_DWORD *)(v23 + *(_QWORD *)(v6 + 40));
    if ( (v24 & 1) != 0 )
    {
LABEL_40:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + *(_QWORD *)(v6 + 40)), v24 - 2, v24);
        if ( v25 == v24 )
          break;
        if ( (v24 & 1) != 0 )
          goto LABEL_40;
      }
    }
    v26 = *(_BYTE *)(v9 + 3);
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      v27 = ((v26 >> 7) & 0x80) + 56;
    }
    else
    {
      v28 = 56;
      if ( v26 < 0 )
        v28 = -72;
      v27 = v28;
    }
    v29 = -1073740534;
    *(_BYTE *)(v9 + 3) = v27;
    v173 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2232));
    goto LABEL_129;
  }
  if ( *(_DWORD *)v10 != 1094997074 || (*(_BYTE *)(v10 + 111) & 4) == 0 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v31 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v31 )
    {
      v32 = 0;
      v33 = KeQueryHighestNodeNumber() + 1;
      while ( 1 )
      {
        v34 = 0;
        if ( v33 )
          break;
LABEL_55:
        if ( ++v32 == 10 )
        {
          v178 = 1;
          *(_DWORD *)v182 = -1;
          goto LABEL_58;
        }
      }
      while ( 1 )
      {
        v31 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)v34 << 6)));
        if ( v31 )
          break;
        if ( ++v34 >= v33 )
          goto LABEL_55;
      }
    }
    v178 = 1;
    *(_DWORD *)v182 = *((_DWORD *)&v31->Next + 2);
  }
LABEL_58:
  v35 = v172;
  v173 = sub_140050330(v6, a2, v172);
  v29 = v173;
  if ( v173 >= 0 )
  {
    v176 = 1;
    if ( !*(_DWORD *)(*(_QWORD *)(v6 + 24) + 2076LL) && v169 != 18 && v169 != -96 )
    {
      *(_BYTE *)(v9 + 3) = 37;
      v29 = sub_1400229C8(37);
      v173 = v29;
      goto LABEL_129;
    }
    if ( *(char *)(v6 + 505) < 0 && *(_DWORD *)(v6 + 548) != 1 && sub_140028FC0(v6, v9) && (v175 & 0x100000) != 0 )
    {
      v29 = -1073741823;
      *(_BYTE *)(v9 + 3) = 36;
      v173 = -1073741823;
      goto LABEL_129;
    }
    v41 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v41 + 2) == 40 )
      v42 = *(_QWORD *)(v41 + 96);
    else
      v42 = *(_QWORD *)(v41 + 48);
    *(_QWORD *)(v42 + 768) = v35;
    *(_QWORD *)(v42 + 656) = sub_140022EC0;
    if ( v8
      || *(_BYTE *)(v9 + 2) != 40
      || (v43 = *(unsigned int *)(v9 + 4), v177 = v9, !(_DWORD)v43) && !*(_DWORD *)(v9 + 28) )
    {
LABEL_93:
      *(_QWORD *)(v42 + 688) = v8;
      if ( v8 < qword_140168430 )
      {
        v47 = _InterlockedExchange64((volatile __int64 *)(v6 + 2360), 0LL);
        if ( !v47 )
          goto LABEL_100;
        v48 = "End";
      }
      else
      {
        v47 = _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2360));
        if ( v47 != 1 )
          goto LABEL_100;
        v48 = "Start";
      }
      if ( (byte_1401694F6 & 2) != 0 )
        sub_140001D70(
          v6 + 177,
          v6 + 168,
          v6 + 2104,
          *(const wchar_t **)(*(_QWORD *)(v6 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
          *(_QWORD *)(v6 + 24) + 5064LL,
          *(_BYTE *)(v6 + 104),
          *(_BYTE *)(v6 + 105),
          *(_BYTE *)(v6 + 106),
          v6 + 2104,
          (const char *)(v6 + 168),
          (const char *)(v6 + 177),
          (const char *)(v6 + 242),
          *(_BYTE *)(v6 + 506) & 1,
          v48,
          v168,
          v47);
LABEL_100:
      if ( (unsigned int)sub_1400567A0(v37, v36) )
      {
        v54 = *(_QWORD *)(v6 + 3600);
        v55 = 0;
        if ( v54 && *(_QWORD *)(v54 + 104) )
        {
          v51 = sub_1400699FC(v6, v42);
          v55 = 1;
        }
        else
        {
          v56 = *(_QWORD *)(v6 + 24);
          if ( !*(_QWORD *)(v56 + 5616) )
            goto LABEL_130;
          v51 = sub_140045FE8(v56, v42);
        }
        v173 = v51;
        v29 = v51;
        if ( v51 == 259 )
          return v51;
        if ( v51 < 0 )
        {
          if ( *(_BYTE *)(v9 + 2) == 40 )
          {
            if ( v55 )
              *(_BYTE *)(v177 + 3) = sub_140007B40(v51);
            else
              *(_BYTE *)(v177 + 3) = 48;
            *(_DWORD *)(v177 + 44) = v29;
            goto LABEL_129;
          }
          if ( v55 )
            goto LABEL_113;
          goto LABEL_127;
        }
      }
      else
      {
        v50 = *(_QWORD *)(v6 + 24);
        if ( *(_QWORD *)(v50 + 5624) )
        {
          if ( (*(_BYTE *)(v50 + 112) & 0x10) != 0 )
            v51 = sub_1400699FC(v6, v42);
          else
            v51 = sub_140045FE8(v50, v42);
          v173 = v51;
          v29 = v51;
          if ( v51 == 259 )
            return v51;
          if ( v51 < 0 )
          {
            v52 = *(_BYTE *)(*(_QWORD *)(v6 + 24) + 112LL);
            if ( *(_BYTE *)(v9 + 2) == 40 )
            {
              if ( (v52 & 0x10) != 0 )
                *(_BYTE *)(v177 + 3) = sub_140007B40(v51);
              else
                *(_BYTE *)(v177 + 3) = 48;
              *(_DWORD *)(v177 + 44) = v29;
              goto LABEL_129;
            }
            if ( (v52 & 0x10) != 0 )
            {
LABEL_113:
              v53 = sub_140007B40(v51);
LABEL_128:
              *(_DWORD *)(v9 + 64) = v29;
              *(_BYTE *)(v9 + 3) = v53;
              goto LABEL_129;
            }
LABEL_127:
            v53 = 48;
            goto LABEL_128;
          }
        }
      }
LABEL_130:
      v58 = *(_QWORD *)(v6 + 24);
      if ( *(_BYTE *)(v58 + 4370) )
      {
        v59 = *(_QWORD *)(v42 + 168);
        if ( *(_BYTE *)(v59 + 2) == 40 )
          v60 = *(_DWORD *)(v59 + 24);
        else
          v60 = *(_DWORD *)(v59 + 12);
        if ( (*(_BYTE *)(v58 + 4371) & 4) != 0 )
        {
          v61 = (v60 & 0x40) != 0;
          if ( *(_QWORD *)(v42 + 104) )
          {
            v62 = (__int64 *)(v58 + 880);
            if ( v58 != -880 )
            {
              v63 = *v62;
              if ( *v62 )
              {
                v64 = *(_QWORD *)(v63 + 8);
                if ( v64 )
                {
                  if ( *(int *)(v58 + 908) >= 3
                    && (v65 = *(void (__fastcall **)(__int64, _QWORD, bool))(v64 + 240)) != 0LL )
                  {
                    v65(v63, *(_QWORD *)(v42 + 104), v61);
                  }
                  else
                  {
                    LOBYTE(v49) = 1;
                    KeFlushIoBuffers(*(_QWORD *)(v42 + 104), v61, v49);
                  }
                }
              }
            }
          }
          if ( *(_QWORD *)(v42 + 136) )
          {
            v66 = (__int64 *)(v58 + 880);
            if ( v58 != -880 )
            {
              v67 = *v66;
              if ( *v66 )
              {
                v68 = *(_QWORD *)(v67 + 8);
                if ( v68 )
                {
                  if ( *(int *)(v58 + 908) >= 3
                    && (v69 = *(void (__fastcall **)(__int64, _QWORD, bool))(v68 + 240)) != 0LL )
                  {
                    v69(v67, *(_QWORD *)(v42 + 136), v61);
                  }
                  else
                  {
                    LOBYTE(v49) = 1;
                    KeFlushIoBuffers(*(_QWORD *)(v42 + 136), v61, v49);
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( *(_QWORD *)(v42 + 136) )
          {
            v51 = sub_140018B28(*(_QWORD *)(v6 + 24), (unsigned int *)v42, v49);
LABEL_156:
            v173 = v51;
            v29 = v51;
            if ( v51 < 0 )
            {
              v57 = a2;
              goto LABEL_163;
            }
            v70 = *(_QWORD *)(v6 + 24);
            if ( *(int *)(v70 + 4120) <= 0 )
            {
              LOWORD(v51) = ExQueryDepthSList((PSLIST_HEADER)(v70 + 1104));
              if ( (_WORD)v51 )
              {
                v51 = _InterlockedIncrement((volatile signed __int32 *)(v70 + 4120));
                if ( v51 == 1 )
                  LOBYTE(v51) = sub_14002796C(v70 + 1008, *(_QWORD *)(v70 + 8), a4);
                _InterlockedDecrement((volatile signed __int32 *)(v70 + 4120));
              }
            }
            return v51;
          }
          if ( (v60 & 0xC0) != 0 )
          {
            v51 = sub_140027680(*(_QWORD *)(v6 + 24), v42, v49);
            goto LABEL_156;
          }
        }
      }
      v51 = sub_1400184D0(v58, v42);
      goto LABEL_156;
    }
    v45 = byte_140168DAA == 0;
    v44 = *(unsigned int *)(v9 + 28);
    *(_DWORD *)(v9 + 28) = 0;
    *(_DWORD *)(v9 + 4) = 0;
    if ( v45 )
    {
      if ( !dword_1401684A8 )
      {
        v46.QuadPart = 0LL;
        goto LABEL_89;
      }
      if ( !byte_140168724 )
        goto LABEL_87;
      v45 = dword_1401684AC == 0;
    }
    else
    {
      v45 = byte_140168724 == 0;
    }
    if ( !v45 )
    {
      v46 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_89:
      v37 = v43 | (v44 << 32);
      v8 = v46.QuadPart - v37;
      if ( byte_140168724 && (dword_1401684AC || byte_140168DAA) )
      {
        v36 = 10000000 * v8 % PerformanceFrequency.QuadPart;
        v8 = 10000000 * v8 / PerformanceFrequency.QuadPart;
      }
      goto LABEL_93;
    }
LABEL_87:
    v46.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_89;
  }
  v38 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v39 = *(_DWORD *)(v38 + *(_QWORD *)(v6 + 40));
  if ( (v39 & 1) != 0 )
  {
LABEL_62:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
  }
  else
  {
    while ( 1 )
    {
      v40 = v39;
      v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + *(_QWORD *)(v6 + 40)), v39 - 2, v39);
      if ( v40 == v39 )
        break;
      if ( (v39 & 1) != 0 )
        goto LABEL_62;
    }
  }
LABEL_129:
  v57 = a2;
  sub_14002A5E0(v6, a2, 0LL);
LABEL_163:
  v71 = *(_QWORD *)(*(_QWORD *)(v57 + 184) + 8LL);
  if ( *(_BYTE *)(v71 + 2) == 40 )
  {
    v72 = *(unsigned int *)(v71 + 20);
    v73 = *(_DWORD *)(v71 + 24);
    v177 = *(_QWORD *)(*(_QWORD *)(v57 + 184) + 8LL);
  }
  else
  {
    v73 = *(_DWORD *)(v71 + 12);
    v72 = *(unsigned __int8 *)(v71 + 2);
  }
  v75 = 0;
  if ( (v73 & 0x102) != 0x102 && (v73 & 0x80010) == 0 )
  {
    if ( (unsigned int)v72 > 0x20 || (v74 = 0x1000D0000LL, !_bittest64(&v74, v72)) )
      v75 = 1;
  }
  if ( v178 )
  {
    v76 = *(unsigned int *)v182;
    v77 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)v77 != 1094997074 || (*(_BYTE *)(v77 + 111) & 4) == 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( (unsigned int)v76 / *(_DWORD *)(v6 + 648) < HighestNodeNumber + 1 )
        HighestNodeNumber = (unsigned int)v76 / *(_DWORD *)(v6 + 648);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v6 + 640) + 16 * v76));
    }
  }
  sub_140028C24(v6 + 720, v75);
  if ( (*(_BYTE *)(v71 + 3) & 0x3F) == 0 )
  {
    v79 = sub_140007B40(v29);
    *(_BYTE *)(v71 + 3) = v79;
    if ( (v79 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v71 + 2) == 40 )
        *(_DWORD *)(v177 + 44) = -1073741670;
      else
        *(_DWORD *)(v71 + 64) = -1073741670;
    }
  }
  if ( !v176 )
    goto LABEL_294;
  v80 = *(_QWORD *)(*(_QWORD *)(v57 + 184) + 8LL);
  if ( *(_BYTE *)(v80 + 2) == 40 )
    v81 = *(_QWORD *)(v80 + 96);
  else
    v81 = *(_QWORD *)(v80 + 48);
  v82 = *(_QWORD *)(v81 + 224);
  if ( (*(_BYTE *)(v81 + 16) & 2) == 0 )
    goto LABEL_222;
  v83 = *(int **)(v82 + 560);
  v84 = v81 + 48;
  v85 = &v83[16 * *(unsigned int *)(v81 + 84) + 16];
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v87 = (KSPIN_LOCK *)(v85 + 10);
  if ( CurrentIrql != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v87, &LockHandle);
    v96 = *(_BYTE *)(v81 + 16);
    v97 = *v83;
    if ( (v96 & 2) != 0 )
    {
      *(_BYTE *)(v81 + 16) = v96 & 0xFD;
      v98 = *(_QWORD *)v84;
      v99 = *(_QWORD *)v85;
      if ( *(_QWORD *)(*(_QWORD *)v84 + 8LL) != v84 )
        goto LABEL_227;
      v100 = *(_QWORD **)(v81 + 56);
      if ( *v100 != v84 )
        goto LABEL_227;
      *v100 = v98;
      *(_QWORD *)(v98 + 8) = v100;
      if ( (*(_DWORD *)(v81 + 96) & 1) != 0 )
      {
        v101 = v81 + 64;
        if ( *((_QWORD *)v85 + 4) == v81 + 64 )
          *((_QWORD *)v85 + 4) = *(_QWORD *)v101;
        v102 = *(_QWORD *)v101;
        if ( *(_QWORD *)(*(_QWORD *)v101 + 8LL) != v101 )
          goto LABEL_227;
        v103 = *(_QWORD **)(v81 + 72);
        if ( *v103 != v101 )
          goto LABEL_227;
        *v103 = v102;
        *(_QWORD *)(v102 + 8) = v103;
        *(_DWORD *)(v81 + 96) &= ~1u;
      }
      if ( (v97 & 4) == 0 && v99 == v84 )
      {
        if ( *(int **)v85 == v85 )
          v85[12] = -1;
        else
          v85[12] = *(_DWORD *)(*(_QWORD *)v85 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_218;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v87, &LockHandle);
  v88 = *(_BYTE *)(v81 + 16);
  v89 = *v83;
  if ( (v88 & 2) == 0 )
    goto LABEL_203;
  *(_BYTE *)(v81 + 16) = v88 & 0xFD;
  v90 = *(_QWORD *)v84;
  v91 = *(_QWORD *)v85;
  if ( *(_QWORD *)(*(_QWORD *)v84 + 8LL) != v84 )
    goto LABEL_227;
  v92 = *(_QWORD **)(v81 + 56);
  if ( *v92 != v84 )
    goto LABEL_227;
  *v92 = v90;
  *(_QWORD *)(v90 + 8) = v92;
  if ( (*(_DWORD *)(v81 + 96) & 1) == 0 )
    goto LABEL_198;
  v93 = v81 + 64;
  if ( *((_QWORD *)v85 + 4) == v81 + 64 )
    *((_QWORD *)v85 + 4) = *(_QWORD *)v93;
  v94 = *(_QWORD *)v93;
  if ( *(_QWORD *)(*(_QWORD *)v93 + 8LL) != v93 || (v95 = *(_QWORD **)(v81 + 72), *v95 != v93) )
LABEL_227:
    __fastfail(3u);
  *v95 = v94;
  *(_QWORD *)(v94 + 8) = v95;
  *(_DWORD *)(v81 + 96) &= ~1u;
LABEL_198:
  if ( (v89 & 4) == 0 && v91 == v84 )
  {
    if ( *(int **)v85 == v85 )
      v85[12] = -1;
    else
      v85[12] = *(_DWORD *)(*(_QWORD *)v85 + 32LL);
  }
LABEL_203:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_218:
  if ( byte_140168DAA )
  {
    v183 = 0LL;
    IoGetActivityIdIrp(a2, &v183);
    if ( byte_1401694F2 < 0 )
      sub_140001CE8(v105, v104, (__int64)&v183, v106, 4);
  }
  v5 = 0LL;
LABEL_222:
  sub_140027440(v81, *(_QWORD *)(*(_QWORD *)(v82 + 24) + 8LL));
  if ( (unsigned int)sub_1400567A0(v108, v107) )
  {
    v111 = *(_QWORD *)(v82 + 3600);
    if ( v111 && *(_QWORD *)(v111 + 104) )
    {
LABEL_225:
      sub_14006AD74(v82, v81);
    }
    else
    {
      v109 = *(_QWORD *)(v82 + 24);
      if ( *(_QWORD *)(v109 + 5616) )
      {
        v110 = v81;
        goto LABEL_232;
      }
    }
  }
  else
  {
    v109 = *(_QWORD *)(v82 + 24);
    if ( *(_QWORD *)(v109 + 5624) )
    {
      v110 = v81;
      if ( (*(_BYTE *)(v109 + 112) & 0x10) != 0 )
        goto LABEL_225;
LABEL_232:
      sub_140056004(v109, v110);
    }
  }
  if ( *(_BYTE *)(v80 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v81 + 16) & 0x40) != 0 )
    {
      v112 = *(_QWORD *)(v81 + 752);
      v180.QuadPart = 1LL;
      if ( v112 )
      {
        if ( byte_140168724 )
          v113 = KeQueryPerformanceCounter(&v180);
        else
          v113.QuadPart = KeQueryUnbiasedInterruptTime();
        v114 = v113;
        *(_BYTE *)(v112 + 3) = *(_BYTE *)(v80 + 3);
        *(_DWORD *)(v112 + 12) = *(_DWORD *)(v80 + 24);
        if ( (*(_DWORD *)(v80 + 24) & 0x40) != 0 )
          *(_DWORD *)(v112 + 16) = *(_DWORD *)(v80 + 60);
        if ( *(_BYTE *)(v80 + 3) == 48 )
          *(_DWORD *)(v112 + 64) = *(_DWORD *)(v80 + 44);
        if ( !*(_DWORD *)(v80 + 20) )
        {
          v115 = *(_DWORD *)(v80 + 56);
          v116 = 0;
          if ( v115 )
          {
            while ( 1 )
            {
              v117 = *(unsigned int *)(v80 + 4LL * v116 + 120);
              if ( (unsigned int)v117 >= 0x80 )
              {
                v118 = *(unsigned int *)(v80 + 16);
                if ( (unsigned int)v117 <= (unsigned int)v118 )
                {
                  v119 = v80 + v117;
                  if ( *(_DWORD *)(v80 + v117) == 64 && v117 + 40 <= v118 )
                    break;
                }
              }
              if ( ++v116 >= v115 )
                goto LABEL_250;
            }
            *(_BYTE *)(v112 + 4) = *(_BYTE *)(v119 + 8);
            *(_QWORD *)(v112 + 32) = *(_QWORD *)(v119 + 16);
            *(_BYTE *)(v112 + 11) = *(_BYTE *)(v119 + 9);
          }
          else
          {
LABEL_250:
            *(_BYTE *)(v112 + 3) = 48;
            *(_DWORD *)(v112 + 64) = -1073741811;
          }
        }
        if ( byte_140168724 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v114.QuadPart )
          v123 = PerformanceCounter.QuadPart - v114.QuadPart;
        else
          v123 = PerformanceCounter.QuadPart - v114.QuadPart - 1;
        if ( byte_140168724 )
        {
          LowPart = v180.LowPart;
          v124 = 0;
          if ( v180.QuadPart && v123 )
          {
            v125 = v123 / v180.QuadPart;
            v123 = 1000 * (v123 % v180.QuadPart);
            v121.QuadPart = 10000 * (v123 % v180.QuadPart) % v180.QuadPart;
            v124 = 10000 * (v123 % v180.QuadPart) / v180.QuadPart + 16 * (-24 * v125 + v123 / v180.QuadPart);
          }
        }
        else
        {
          v124 = v123;
        }
        if ( (byte_1401694F0 & 0x40) != 0 )
          sub_140053A04(LowPart, v121.LowPart, v123, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v124);
      }
      *(_QWORD *)(*(_QWORD *)(v81 + 752) + 48LL) = *(_QWORD *)(v81 + 176);
      *(_QWORD *)(*(_QWORD *)(v81 + 752) + 24LL) = *(_QWORD *)(v81 + 184);
      *(_QWORD *)(*(_QWORD *)(v81 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v81 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = *(_QWORD *)(v81 + 752);
      *(_BYTE *)(v81 + 16) &= ~0x40u;
      *(_QWORD *)(v81 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v80 + 96) = 0LL;
      *(_QWORD *)(v80 + 64) = *(_QWORD *)(v81 + 184);
      *(_QWORD *)(v80 + 104) = 0LL;
      if ( *(_QWORD *)(v81 + 192) )
      {
        if ( (*(_BYTE *)(v80 + 24) & 0xC0) == 0xC0 )
        {
          v126 = *(_DWORD *)(v80 + 56);
          v127 = 0;
          if ( v126 )
          {
            while ( 1 )
            {
              v128 = *(unsigned int *)(v80 + 4LL * v127 + 120);
              if ( (unsigned int)v128 >= 0x80 )
              {
                v129 = *(unsigned int *)(v80 + 16);
                if ( (unsigned int)v128 <= (unsigned int)v129 )
                {
                  v130 = v128 + v80;
                  if ( *(_DWORD *)(v128 + v80) == 1 && v128 + 24 <= v129 )
                    break;
                }
              }
              if ( ++v127 >= v126 )
                goto LABEL_278;
            }
            if ( v130 )
              *(_QWORD *)(v130 + 16) = *(_QWORD *)(v81 + 192);
          }
        }
      }
LABEL_278:
      if ( byte_1401688AC )
      {
        v131 = *(_DWORD *)(v80 + 24);
        if ( (v131 & 0x2000000) != 0 )
          *(_DWORD *)(v80 + 24) = v131 & 0xFDFFFFFF;
      }
    }
  }
  else
  {
    v45 = byte_1401688AC == 0;
    *(_QWORD *)(v80 + 48) = *(_QWORD *)(v81 + 176);
    *(_QWORD *)(v80 + 24) = *(_QWORD *)(v81 + 184);
    *(_QWORD *)(v80 + 56) = 0LL;
    *(_QWORD *)(v80 + 40) = 0LL;
    if ( !v45 )
    {
      v132 = *(_DWORD *)(v80 + 12);
      if ( (v132 & 0x2000000) != 0 )
        *(_DWORD *)(v80 + 12) = v132 & 0xFDFFFFFF;
    }
  }
  sub_140017A20(v81, 1);
  if ( *(_BYTE *)(v80 + 2) == 40 )
    v133 = *(_DWORD *)(v80 + 24);
  else
    v133 = *(_DWORD *)(v80 + 12);
  if ( (v133 & 0x4000) == 0 )
  {
    v134 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v135 = *(_DWORD *)(v134 + *(_QWORD *)(v82 + 40));
    if ( (v135 & 1) != 0 )
    {
LABEL_291:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v82 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v136 = v135;
        v135 = _InterlockedCompareExchange((volatile signed __int32 *)(v134 + *(_QWORD *)(v82 + 40)), v135 - 2, v135);
        if ( v136 == v135 )
          break;
        if ( (v135 & 1) != 0 )
          goto LABEL_291;
      }
    }
  }
  v29 = v173;
LABEL_294:
  v171 = sub_140051260(v182, 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 22LL, &unk_14014D880, *(_QWORD *)(v6 + 8), a2, *(_DWORD *)(a2 + 48));
  }
  v137 = *(_QWORD *)(a2 + 184);
  v138 = *(_BYTE *)(v137 + 16) & 3;
  *(_QWORD *)(v137 + 16) = 0LL;
  v139 = *(_QWORD *)(v6 + 24);
  if ( (v138 & 1) != 0
    && (*(_DWORD *)(v6 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v6 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864));
  }
  if ( v138 >= 2u )
  {
    v140 = *(_QWORD **)(v139 + 4960);
    if ( v140 )
      PoFxIdleComponent(*v140, 0LL, 0LL);
  }
  v45 = byte_140168DAA == 0;
  v141 = a2;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v29;
  if ( v45 )
    goto LABEL_362;
  v182 = 0LL;
  IoGetActivityIdIrp(a2, &v182);
  v143 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v143 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_362;
    v145 = &unk_140148B18;
    goto LABEL_361;
  }
  if ( *(_BYTE *)v143 != 15 )
  {
    if ( *(_BYTE *)v143 != 27 )
      goto LABEL_362;
    if ( *(_BYTE *)(v143 + 1) == 7 && !*(_DWORD *)(v143 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v144 = *(_DWORD **)(a2 + 56);
        if ( v144 )
          LODWORD(v5) = *v144;
        sub_140056AB0(v142, v143, (unsigned int)&v182, a2, (char)v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_362;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_362;
    v145 = &unk_140149FE8;
LABEL_361:
    sub_140052F3C(v142, v145, &v182, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_362;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_362;
  v146 = *(_QWORD *)(v143 + 8);
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  if ( *(_BYTE *)(v146 + 2) == 40 )
  {
    v151 = 0LL;
    if ( *(_DWORD *)(v146 + 20) )
      goto LABEL_362;
    v152 = *(_DWORD *)(v146 + 56);
    v153 = 0;
    if ( !v152 )
    {
LABEL_334:
      v159 = 0;
      goto LABEL_335;
    }
    while ( 2 )
    {
      v154 = *(unsigned int *)(v146 + 4LL * v153 + 120);
      if ( (unsigned int)v154 >= 0x80 )
      {
        v155 = *(unsigned int *)(v146 + 16);
        if ( (unsigned int)v154 < (unsigned int)v155 )
        {
          v156 = (unsigned int)v154;
          v157 = *(_DWORD *)(v146 + v154) - 64;
          if ( v157 )
          {
            v158 = v157 - 1;
            if ( v158 )
            {
              if ( v158 == 1 && v156 + 40 <= v155 )
              {
                if ( *(_DWORD *)(v146 + v156 + 12) )
                  v151 = (unsigned __int8 *)(v156 + v146 + 32);
                v159 = *(_BYTE *)(v146 + v156 + 8);
                v5 = *(_BYTE **)(v146 + v156 + 24);
                v147 = *(_BYTE *)(v146 + v156 + 9);
                goto LABEL_335;
              }
              goto LABEL_333;
            }
            v160 = v156 + 56;
          }
          else
          {
            v160 = v156 + 40;
          }
          if ( v160 <= v155 )
          {
            if ( *(_BYTE *)(v146 + v156 + 10) )
              v151 = (unsigned __int8 *)(v156 + v146 + 24);
            v159 = *(_BYTE *)(v146 + v156 + 8);
            v5 = *(_BYTE **)(v146 + v156 + 16);
            v147 = *(_BYTE *)(v146 + v156 + 9);
LABEL_335:
            if ( v151 )
            {
              LODWORD(v161) = *v151;
              v141 = a2;
              goto LABEL_341;
            }
            goto LABEL_362;
          }
        }
      }
LABEL_333:
      if ( ++v153 >= v152 )
        goto LABEL_334;
      continue;
    }
  }
  LODWORD(v161) = *(unsigned __int8 *)(v146 + 72);
  v5 = *(_BYTE **)(v146 + 32);
  v147 = *(_BYTE *)(v146 + 11);
  v159 = *(_BYTE *)(v146 + 4);
  if ( *(_BYTE *)(v146 + 2) )
    goto LABEL_362;
LABEL_341:
  LOBYTE(v161) = (_BYTE)v161 - 8;
  if ( ((unsigned __int8)v161 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v146 + 3) == 1 || !v5 || !v147 )
      goto LABEL_357;
    v162 = 0;
    v161 = &v5[v147];
    v163 = v5 + 8;
    if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
    {
      if ( v163 <= v161 )
      {
        v149 = v5[2];
        v148 = v5[1] & 0xF;
        v150 = v5[3];
        goto LABEL_355;
      }
    }
    else if ( v163 <= v161 )
    {
      v148 = v5[2] & 0xF;
      v164 = v147;
      if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v147 )
        v164 = (unsigned __int8)v5[7] + 8;
      v161 = v5 + 13;
      v165 = (unsigned __int64)&v5[v164];
      if ( (unsigned __int64)(v5 + 13) <= v165 )
        v149 = v5[12];
      if ( (unsigned __int64)(v5 + 14) <= v165 )
        v150 = *v161;
LABEL_355:
      v162 = 1;
    }
    if ( !v162 )
    {
LABEL_357:
      v150 = 0;
      v149 = 0;
      v148 = 0;
    }
    sub_140052E64(
      (_DWORD)v161,
      v146,
      (unsigned int)&v182,
      v141,
      *(_DWORD *)(v141 + 48),
      *(_BYTE *)(v146 + 3),
      v159,
      v148,
      v149,
      v150,
      v141);
  }
LABEL_362:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v171 )
    v166 = (struct _KDPC *)(*(_QWORD *)(v6 + 24) + 1712LL);
  else
    v166 = (struct _KDPC *)(v6 + 1312);
  LOBYTE(v51) = KeInsertQueueDpc(v166, 0LL, 0LL);
  return v51;
}
