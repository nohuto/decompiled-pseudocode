/*
 * XREFs of sub_140034B00 @ 0x140034B00
 * Callers:
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 * Callees:
 *     sub_140001CE8 @ 0x140001CE8 (sub_140001CE8.c)
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140028C24 @ 0x140028C24 (sub_140028C24.c)
 *     sub_140051260 @ 0x140051260 (sub_140051260.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     sub_140056004 @ 0x140056004 (sub_140056004.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140034B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // edi
  __int64 v5; // r13
  char v6; // r8
  unsigned int v7; // eax
  unsigned __int64 v8; // r9
  unsigned int v9; // edx
  unsigned int v10; // ebx
  char v11; // r11
  unsigned int v12; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 *v23; // rbx
  LONGLONG v24; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v26; // rcx
  int v27; // r9d
  char v28; // al
  __int64 *v29; // rcx
  __int64 *v30; // r8
  __int64 **v31; // rax
  __int64 *v32; // rcx
  __int64 *v33; // rdx
  __int64 **v34; // rax
  int v35; // r9d
  char v36; // al
  __int64 *v37; // rcx
  __int64 *v38; // r8
  __int64 **v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r14
  LARGE_INTEGER v53; // rax
  LARGE_INTEGER v54; // rbx
  unsigned int v55; // r8d
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v59; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v61; // r8
  char v62; // r9
  LONGLONG v63; // r9
  unsigned int v64; // ebx
  unsigned int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned __int64 v68; // r10
  int v69; // eax
  bool v70; // zf
  int v71; // eax
  int v72; // eax
  unsigned __int64 v73; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  char v76; // al
  int v77; // ecx
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  int *v80; // rax
  void *v81; // rdx
  __int64 v82; // rdx
  char v83; // bl
  char v84; // si
  _BYTE *v85; // r9
  unsigned __int8 v86; // r10
  char v87; // r11
  char v88; // r12
  char *v89; // rbx
  unsigned int v90; // r15d
  unsigned __int64 v91; // r14
  __int64 v92; // r8
  int v93; // ecx
  char v94; // cl
  char v95; // r8
  _BYTE *v96; // rax
  char *v97; // r12
  unsigned int v98; // eax
  char v99; // al
  int v100; // r8d
  __int64 v101; // rcx
  char v102; // [rsp+60h] [rbp-79h]
  char v103; // [rsp+61h] [rbp-78h]
  unsigned int v104; // [rsp+64h] [rbp-75h]
  unsigned int v105; // [rsp+68h] [rbp-71h]
  unsigned int v106; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v107; // [rsp+70h] [rbp-69h]
  unsigned int v108; // [rsp+74h] [rbp-65h]
  int v109; // [rsp+78h] [rbp-61h]
  unsigned int v110; // [rsp+78h] [rbp-61h]
  __int64 v111; // [rsp+80h] [rbp-59h]
  __int64 v112; // [rsp+88h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v115[3]; // [rsp+B0h] [rbp-29h] BYREF
  int v116; // [rsp+C8h] [rbp-11h]
  __int128 v117; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v118; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 168);
  LOBYTE(v4) = 0;
  v5 = *(_QWORD *)(a2 + 160);
  *(_QWORD *)&v117 = a3;
  v6 = 0;
  v112 = a1;
  v7 = *(unsigned __int8 *)(v3 + 2);
  v115[0] = 0LL;
  v115[1] = 0LL;
  v116 = 0;
  v108 = 0;
  v107 = 0;
  v115[2] = a2;
  if ( (_BYTE)v7 != 40 )
  {
    v9 = *(_DWORD *)(v3 + 12);
    v8 = v7;
    v6 = *(_BYTE *)(v3 + 4);
    v104 = v9;
    v105 = v7;
    goto LABEL_13;
  }
  v8 = *(unsigned int *)(v3 + 20);
  v9 = *(_DWORD *)(v3 + 24);
  v105 = v8;
  v104 = v9;
  if ( !(_DWORD)v8 )
  {
    v10 = *(_DWORD *)(v3 + 56);
    v11 = 0;
    v12 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = *(unsigned int *)(v3 + 4LL * v12 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v14 = *(unsigned int *)(v3 + 16);
          if ( (unsigned int)v13 < (unsigned int)v14 )
            break;
        }
LABEL_11:
        if ( ++v12 >= v10 )
          goto LABEL_12;
      }
      v15 = (unsigned int)v13;
      v16 = *(_DWORD *)(v13 + v3) - 64;
      if ( !v16 )
        goto LABEL_9;
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
LABEL_9:
          if ( v15 + 40 <= v14 )
          {
            v6 = *(_BYTE *)(v15 + v3 + 8);
LABEL_12:
            v8 = 0LL;
            v9 = *(_DWORD *)(v3 + 24);
            a1 = v112;
            goto LABEL_13;
          }
        }
      }
      else if ( v15 + 56 <= v14 )
      {
        v6 = *(_BYTE *)(v15 + v3 + 8);
        v11 = 1;
      }
      if ( v11 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v107 = *(_DWORD *)(a1 + 1936);
    v108 = 1;
  }
  if ( v6 == 40 )
  {
    v107 = *(_DWORD *)(a1 + 1932);
    v108 = 2;
  }
  v18 = 0x1000D0000LL;
  v106 = (v9 & 0x102) != 0x102 && (v9 & 0x80010) == 0 && ((unsigned int)v8 > 0x20 || !_bittest64(&v18, v8));
  v109 = sub_1400066C0(a1, v5, 1);
  if ( v109 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  v19 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v20 = *(_QWORD *)(v19 + 96);
  else
    v20 = *(_QWORD *)(v19 + 48);
  v111 = *(_QWORD *)(v20 + 224);
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v21 = *(_QWORD *)(v19 + 96);
  else
    v21 = *(_QWORD *)(v19 + 48);
  if ( (*(_BYTE *)(v21 + 16) & 2) != 0 )
  {
    v22 = *(unsigned int *)(v21 + 84) + 1LL;
    PerformanceFrequency = *(union _LARGE_INTEGER *)(*(_QWORD *)(v20 + 224) + 560LL);
    v23 = (__int64 *)(v21 + 48);
    v24 = PerformanceFrequency.QuadPart + (v22 << 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    CurrentIrql = KeGetCurrentIrql();
    v26 = (KSPIN_LOCK *)(v24 + 40);
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v26, &LockHandle);
      v27 = *(_DWORD *)PerformanceFrequency.QuadPart;
      v28 = *((_BYTE *)v23 - 32);
      if ( (v28 & 2) == 0 )
      {
LABEL_52:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_67:
        if ( byte_140168DAA )
        {
          v118 = 0LL;
          IoGetActivityIdIrp(v5, &v118);
          if ( byte_1401694F2 < 0 )
            sub_140001CE8(v44, v43, (__int64)&v118, v45, 4);
        }
        goto LABEL_70;
      }
      *((_BYTE *)v23 - 32) = v28 & 0xFD;
      v29 = (__int64 *)*v23;
      v30 = *(__int64 **)v24;
      if ( *(__int64 **)(*v23 + 8) == v23 )
      {
        v31 = (__int64 **)v23[1];
        if ( *v31 == v23 )
        {
          *v31 = v29;
          v29[1] = (__int64)v31;
          if ( (v23[6] & 1) == 0 )
          {
LABEL_47:
            if ( (v27 & 4) == 0 && v30 == v23 )
            {
              if ( *(_QWORD *)v24 == v24 )
                *(_DWORD *)(v24 + 48) = -1;
              else
                *(_DWORD *)(v24 + 48) = *(_DWORD *)(*(_QWORD *)v24 + 32LL);
            }
            goto LABEL_52;
          }
          v32 = v23 + 2;
          if ( *(__int64 **)(v24 + 32) == v23 + 2 )
            *(_QWORD *)(v24 + 32) = *v32;
          v33 = (__int64 *)*v32;
          if ( *(__int64 **)(*v32 + 8) == v32 )
          {
            v34 = (__int64 **)v23[3];
            if ( *v34 == v32 )
            {
              *v34 = v33;
              v33[1] = (__int64)v34;
              *((_DWORD *)v23 + 12) &= ~1u;
              goto LABEL_47;
            }
          }
        }
      }
LABEL_75:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(v26, &LockHandle);
    v35 = *(_DWORD *)PerformanceFrequency.QuadPart;
    v36 = *((_BYTE *)v23 - 32);
    if ( (v36 & 2) != 0 )
    {
      *((_BYTE *)v23 - 32) = v36 & 0xFD;
      v37 = (__int64 *)*v23;
      v38 = *(__int64 **)v24;
      if ( *(__int64 **)(*v23 + 8) != v23 )
        goto LABEL_75;
      v39 = (__int64 **)v23[1];
      if ( *v39 != v23 )
        goto LABEL_75;
      *v39 = v37;
      v37[1] = (__int64)v39;
      if ( (v23[6] & 1) != 0 )
      {
        v40 = v23 + 2;
        if ( *(__int64 **)(v24 + 32) == v23 + 2 )
          *(_QWORD *)(v24 + 32) = *v40;
        v41 = (__int64 *)*v40;
        if ( *(__int64 **)(*v40 + 8) != v40 )
          goto LABEL_75;
        v42 = (__int64 **)v23[3];
        if ( *v42 != v40 )
          goto LABEL_75;
        *v42 = v41;
        v41[1] = (__int64)v42;
        *((_DWORD *)v23 + 12) &= ~1u;
      }
      if ( (v35 & 4) == 0 && v38 == v23 )
      {
        if ( *(_QWORD *)v24 == v24 )
          *(_DWORD *)(v24 + 48) = -1;
        else
          *(_DWORD *)(v24 + 48) = *(_DWORD *)(*(_QWORD *)v24 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_67;
  }
LABEL_70:
  v46 = v111;
  sub_140027440(v20, *(_QWORD *)(*(_QWORD *)(v111 + 24) + 8LL));
  if ( (unsigned int)sub_1400567A0(v48, v47) )
  {
    v51 = *(_QWORD *)(v111 + 3600);
    if ( v51 && *(_QWORD *)(v51 + 104) )
    {
      v50 = v20;
      goto LABEL_73;
    }
    v49 = *(_QWORD *)(v111 + 24);
    if ( !*(_QWORD *)(v49 + 5616) )
      goto LABEL_82;
    v50 = v20;
LABEL_81:
    sub_140056004(v49, v50);
    goto LABEL_82;
  }
  v49 = *(_QWORD *)(v111 + 24);
  if ( *(_QWORD *)(v49 + 5624) )
  {
    v50 = v20;
    if ( (*(_BYTE *)(v49 + 112) & 0x10) != 0 )
    {
LABEL_73:
      sub_14006AD74(v111, v50);
      goto LABEL_82;
    }
    goto LABEL_81;
  }
LABEL_82:
  if ( *(_BYTE *)(v19 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v20 + 16) & 0x40) != 0 )
    {
      v52 = *(_QWORD *)(v20 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v52 )
      {
        if ( byte_140168724 )
          v53 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v53.QuadPart = KeQueryUnbiasedInterruptTime();
        v54 = v53;
        *(_BYTE *)(v52 + 3) = *(_BYTE *)(v19 + 3);
        *(_DWORD *)(v52 + 12) = *(_DWORD *)(v19 + 24);
        if ( (*(_DWORD *)(v19 + 24) & 0x40) != 0 )
          *(_DWORD *)(v52 + 16) = *(_DWORD *)(v19 + 60);
        if ( *(_BYTE *)(v19 + 3) == 48 )
          *(_DWORD *)(v52 + 64) = *(_DWORD *)(v19 + 44);
        if ( !*(_DWORD *)(v19 + 20) )
        {
          v55 = 0;
          if ( *(_DWORD *)(v19 + 56) )
          {
            while ( 1 )
            {
              v56 = *(unsigned int *)(v19 + 4LL * v55 + 120);
              if ( (unsigned int)v56 >= 0x80 )
              {
                v57 = *(unsigned int *)(v19 + 16);
                if ( (unsigned int)v56 <= (unsigned int)v57 && *(_DWORD *)(v56 + v19) == 64 && v56 + 40 <= v57 )
                  break;
              }
              if ( ++v55 >= *(_DWORD *)(v19 + 56) )
                goto LABEL_99;
            }
            *(_BYTE *)(v52 + 4) = *(_BYTE *)((unsigned int)v56 + v19 + 8);
            *(_QWORD *)(v52 + 32) = *(_QWORD *)((unsigned int)v56 + v19 + 16);
            *(_BYTE *)(v52 + 11) = *(_BYTE *)((unsigned int)v56 + v19 + 9);
          }
          else
          {
LABEL_99:
            *(_BYTE *)(v52 + 3) = 48;
            *(_DWORD *)(v52 + 64) = -1073741811;
          }
        }
        if ( byte_140168724 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v54.QuadPart )
          v61 = PerformanceCounter.QuadPart - v54.QuadPart;
        else
          v61 = PerformanceCounter.QuadPart - v54.QuadPart - 1;
        if ( byte_140168724 )
        {
          LowPart = PerformanceFrequency.LowPart;
          v62 = 0;
          if ( PerformanceFrequency.QuadPart && v61 )
          {
            v63 = v61 / PerformanceFrequency.QuadPart;
            v61 = 1000 * (v61 % PerformanceFrequency.QuadPart);
            v59.QuadPart = 10000 * (v61 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v62 = 10000 * (v61 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                + 16 * (-24 * v63 + v61 / PerformanceFrequency.QuadPart);
          }
        }
        else
        {
          v62 = v61;
        }
        if ( (byte_1401694F0 & 0x40) != 0 )
          sub_140053A04(LowPart, v59.LowPart, v61, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v62);
        v46 = v111;
      }
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 48LL) = *(_QWORD *)(v20 + 176);
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 24LL) = *(_QWORD *)(v20 + 184);
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL) = *(_QWORD *)(v20 + 752);
      *(_BYTE *)(v20 + 16) &= ~0x40u;
      *(_QWORD *)(v20 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v19 + 96) = 0LL;
      *(_QWORD *)(v19 + 64) = *(_QWORD *)(v20 + 184);
      *(_QWORD *)(v19 + 104) = 0LL;
      if ( *(_QWORD *)(v20 + 192) && (*(_BYTE *)(v19 + 24) & 0xC0) == 0xC0 )
      {
        v64 = *(_DWORD *)(v19 + 56);
        v65 = 0;
        if ( v64 )
        {
          while ( 1 )
          {
            v66 = 0LL;
            v67 = *(unsigned int *)(v19 + 4LL * v65 + 120);
            if ( (unsigned int)v67 >= 0x80 )
            {
              v68 = *(unsigned int *)(v19 + 16);
              if ( (unsigned int)v67 <= (unsigned int)v68 && *(_DWORD *)(v67 + v19) == 1 && v67 + 24 <= v68 )
                break;
            }
            if ( ++v65 >= v64 )
              goto LABEL_127;
          }
          v66 = v67 + v19;
LABEL_127:
          v46 = v111;
          if ( v66 )
            *(_QWORD *)(v66 + 16) = *(_QWORD *)(v20 + 192);
        }
        else
        {
          v46 = v111;
        }
      }
      if ( byte_1401688AC )
      {
        v69 = *(_DWORD *)(v19 + 24);
        if ( (v69 & 0x2000000) != 0 )
          *(_DWORD *)(v19 + 24) = v69 & 0xFDFFFFFF;
      }
    }
  }
  else
  {
    v70 = byte_1401688AC == 0;
    *(_QWORD *)(v19 + 48) = *(_QWORD *)(v20 + 176);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v20 + 184);
    *(_QWORD *)(v19 + 56) = 0LL;
    *(_QWORD *)(v19 + 40) = 0LL;
    if ( !v70 )
    {
      v71 = *(_DWORD *)(v19 + 12);
      if ( (v71 & 0x2000000) != 0 )
        *(_DWORD *)(v19 + 12) = v71 & 0xFDFFFFFF;
    }
  }
  sub_140017A20(v20, 1);
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v72 = *(_DWORD *)(v19 + 24);
  else
    v72 = *(_DWORD *)(v19 + 12);
  if ( (v72 & 0x4000) == 0 )
  {
    v73 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v74 = *(_DWORD *)(v73 + *(_QWORD *)(v46 + 40));
    while ( (v74 & 1) == 0 )
    {
      v75 = v74;
      v74 = _InterlockedCompareExchange((volatile signed __int32 *)(v73 + *(_QWORD *)(v46 + 40)), v74 - 2, v74);
      if ( v75 == v74 )
        goto LABEL_145;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v46 + 520), 0, 0);
  }
LABEL_145:
  if ( (unsigned __int8)sub_140051260(v115, 0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v112 + 24) + 1712LL), 0LL, 0LL);
  sub_140028C24(v112 + 720, v106);
  if ( v109 >= 0 )
  {
    sub_14000EF0C(v112 + 720, v108, v107, v112);
    if ( (_QWORD)v117 )
      *(_BYTE *)v117 = 0;
    v100 = (v104 >> 3) & 2 | 4;
    if ( (v104 & 0x80000) == 0 )
      v100 = (v104 >> 3) & 2;
    if ( (v104 & 0x102) != 0x102 && (v104 & 0x80010) == 0 )
    {
      if ( v105 > 0x20 || (v101 = 0x1000D0000LL, !_bittest64(&v101, v105)) )
        v100 |= 1u;
    }
    if ( !(unsigned int)sub_1400068E0(v112, v5, v100) )
      sub_14000C020(v112, 0);
    return;
  }
  v76 = sub_140007B40(v109);
  v70 = byte_140168DAA == 0;
  *(_BYTE *)(v3 + 3) = v76;
  *(_BYTE *)(v5 + 141) = -84;
  *(_DWORD *)(v5 + 48) = v77;
  if ( v70 )
    goto LABEL_213;
  v117 = 0LL;
  IoGetActivityIdIrp(v5, &v117);
  v79 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v79 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_213;
    v81 = &unk_140148B18;
    goto LABEL_212;
  }
  if ( *(_BYTE *)v79 != 15 )
  {
    if ( *(_BYTE *)v79 != 27 )
      goto LABEL_213;
    if ( *(_BYTE *)(v79 + 1) == 7 && !*(_DWORD *)(v79 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v80 = *(int **)(v5 + 56);
        if ( v80 )
          v4 = *v80;
        sub_140056AB0(v78, v79, (unsigned int)&v117, v5, v4, *(_DWORD *)(v5 + 48));
      }
      goto LABEL_213;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_213;
    v81 = &unk_140149FE8;
LABEL_212:
    sub_140052F3C(v78, v81, &v117, v5, *(_DWORD *)(v5 + 48));
    goto LABEL_213;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_213;
  v82 = *(_QWORD *)(v79 + 8);
  v83 = 0;
  v84 = 0;
  v102 = 0;
  v85 = 0LL;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  if ( *(_BYTE *)(v82 + 2) != 40 )
  {
    v94 = *(_BYTE *)(v82 + 72);
    v85 = *(_BYTE **)(v82 + 32);
    v86 = *(_BYTE *)(v82 + 11);
    v84 = *(_BYTE *)(v82 + 4);
    if ( !*(_BYTE *)(v82 + 2) )
      goto LABEL_188;
    goto LABEL_213;
  }
  v89 = 0LL;
  v103 = 0;
  if ( *(_DWORD *)(v82 + 20) )
    goto LABEL_213;
  v90 = 0;
  v110 = *(_DWORD *)(v82 + 56);
  if ( !v110 )
    goto LABEL_185;
  while ( 1 )
  {
    v78 = *(unsigned int *)(v82 + 4LL * v90 + 120);
    if ( (unsigned int)v78 >= 0x80 )
    {
      v91 = *(unsigned int *)(v82 + 16);
      if ( (unsigned int)v78 < (unsigned int)v91 )
        break;
    }
LABEL_179:
    if ( ++v90 >= v110 )
      goto LABEL_185;
  }
  v92 = (unsigned int)v78;
  v93 = *(_DWORD *)(v78 + v82) - 64;
  if ( v93 )
  {
    LODWORD(v78) = v93 - 1;
    if ( (_DWORD)v78 )
    {
      if ( (_DWORD)v78 == 1 )
      {
        LODWORD(v78) = v92 + 40;
        if ( v92 + 40 <= v91 )
        {
          if ( *(_DWORD *)(v92 + v82 + 12) )
            v89 = (char *)(v92 + v82 + 32);
          v85 = *(_BYTE **)(v92 + v82 + 24);
          goto LABEL_184;
        }
      }
    }
    else
    {
      LODWORD(v78) = v92 + 56;
      if ( v92 + 56 <= v91 )
      {
        v103 = 1;
        if ( *(_BYTE *)(v92 + v82 + 10) )
          v89 = (char *)(v92 + v82 + 24);
        v84 = *(_BYTE *)(v92 + v82 + 8);
        v85 = *(_BYTE **)(v92 + v82 + 16);
        v86 = *(_BYTE *)(v92 + v82 + 9);
      }
    }
    goto LABEL_178;
  }
  LODWORD(v78) = v92 + 40;
  if ( v92 + 40 > v91 )
  {
LABEL_178:
    if ( v103 )
      goto LABEL_185;
    goto LABEL_179;
  }
  if ( *(_BYTE *)(v92 + v82 + 10) )
    v89 = (char *)(v92 + v82 + 24);
  v85 = *(_BYTE **)(v92 + v82 + 16);
LABEL_184:
  v86 = *(_BYTE *)(v92 + v82 + 9);
  v84 = *(_BYTE *)(v92 + v82 + 8);
LABEL_185:
  if ( v89 )
  {
    v94 = *v89;
    v83 = 0;
LABEL_188:
    LOBYTE(v78) = v94 - 8;
    if ( (v78 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v82 + 3) == 1 || !v85 || !v86 )
        goto LABEL_208;
      v95 = 0;
      v78 = (unsigned __int64)&v85[v86];
      v96 = v85 + 8;
      if ( (unsigned __int8)((*v85 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v96 <= v78 )
        {
          v95 = 1;
          v83 = v85[2];
          v87 = v85[1] & 0xF;
          v88 = v85[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v96 <= v78 )
        {
          v97 = v85 + 13;
          v87 = v85[2] & 0xF;
          v98 = v86;
          if ( (unsigned int)(unsigned __int8)v85[7] + 8 <= v86 )
            v98 = (unsigned __int8)v85[7] + 8;
          v78 = (unsigned __int64)&v85[v98];
          if ( (unsigned __int64)v97 > v78 )
            v102 = 0;
          else
            v102 = v85[12];
          if ( (unsigned __int64)(v85 + 14) > v78 )
            v88 = 0;
          else
            v88 = *v97;
          v95 = 1;
        }
        v83 = v102;
      }
      if ( v95 )
      {
        LOBYTE(v4) = v83;
        v99 = v88;
      }
      else
      {
LABEL_208:
        v87 = 0;
        v99 = 0;
      }
      sub_140052E64(v78, v82, (unsigned int)&v117, v5, *(_DWORD *)(v5 + 48), *(_BYTE *)(v82 + 3), v84, v87, v4, v99, v5);
    }
  }
LABEL_213:
  IofCompleteRequest((PIRP)v5, 0);
}
