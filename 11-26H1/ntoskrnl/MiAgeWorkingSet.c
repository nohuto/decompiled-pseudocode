/*
 * XREFs of MiAgeWorkingSet @ 0x1402DF150
 * Callers:
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiComputeAgingAmount @ 0x1402E0730 (MiComputeAgingAmount.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 *     MiLogWsAging @ 0x14050545C (MiLogWsAging.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r15d
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 i; // rdx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edi
  LARGE_INTEGER v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-3A0h] BYREF
  int v39; // [rsp+30h] [rbp-398h]
  __int64 v40; // [rsp+38h] [rbp-390h]
  _DWORD v41[2]; // [rsp+40h] [rbp-388h] BYREF
  char v42; // [rsp+49h] [rbp-37Fh]
  __int64 v43; // [rsp+60h] [rbp-368h]
  __int64 v44; // [rsp+70h] [rbp-358h]
  __int64 v45; // [rsp+80h] [rbp-348h]
  __int64 (__fastcall *v46)(); // [rsp+E8h] [rbp-2E0h]
  __int64 (__fastcall *v47)(); // [rsp+F0h] [rbp-2D8h]
  int *v48; // [rsp+F8h] [rbp-2D0h]
  unsigned int v49; // [rsp+100h] [rbp-2C8h] BYREF
  char v50; // [rsp+104h] [rbp-2C4h]
  char v51; // [rsp+105h] [rbp-2C3h]
  int v52; // [rsp+108h] [rbp-2C0h]
  unsigned int v53; // [rsp+10Ch] [rbp-2BCh]
  __int64 v54; // [rsp+128h] [rbp-2A0h]
  unsigned __int64 v55; // [rsp+130h] [rbp-298h]
  __int64 v56; // [rsp+148h] [rbp-280h]

  memset_0(&v49, 0, 0x280uLL);
  memset_0(v41, 0, 0xC0uLL);
  v7 = *(_DWORD *)(a4 + 24);
  v40 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(v40 + 32);
  v9 = *(_QWORD *)(a1 + 152);
  if ( v9 > result )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = v9 - result;
    v39 = 0;
    if ( !v7 )
      v7 = 10;
    PerformanceFrequency.LowPart = a3 & 2;
    MiLockWorkingSetCoreExclusive(a1);
    v12 = 24LL;
    if ( (a3 & 2) == 0 )
      v12 = 28LL;
    v13 = *(unsigned int *)(v12 + v10);
    MiUnlockWorkingSetCoreExclusive(a1);
    v14 = 0LL;
    if ( v13 + v11 >= v11 )
      v14 = (unsigned int)v13;
    v15 = v7 * (v11 + v14);
    result = 0x624DD2F1A9FBE77LL * v15;
    v16 = v15 / 0x3E8;
    if ( v16 > v11 )
    {
      v17 = v11 * v7;
      result = 0x624DD2F1A9FBE77LL * v17;
      v16 = v17 / 0x3E8;
    }
    if ( (a3 & 1) != 0 && !*(_BYTE *)(a4 + 30) )
    {
      result = *(unsigned int *)(a1 + 184);
      if ( (result & 0x10) != 0 )
      {
        result = MiComputeHardAgingPercent(a1, 4LL);
        if ( v7 < (unsigned int)result )
        {
          v39 = 1;
          v7 = result;
          result = MiComputeAgingAmount(a1, v11, a3, (unsigned int)result);
          v16 = result;
        }
      }
    }
    if ( v16 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      MiLockWorkingSetCoreExclusive(a1);
      if ( PerformanceFrequency.LowPart )
        *(_DWORD *)(v18 + 24) = (v11 + *(unsigned int *)(v18 + 24)) % v7;
      else
        *(_DWORD *)(v18 + 28) = (v11 + *(unsigned int *)(v18 + 28)) % v7;
      MiUnlockWorkingSetCoreExclusive(a1);
      v19 = *(unsigned __int16 *)(a1 + 174);
      v53 = v7;
      v20 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v19);
      if ( v39 )
        goto LABEL_27;
      v21 = v20 + 3648;
      for ( i = *(_QWORD *)(v20 + 3408) + *(_QWORD *)(v20 + 3280); v21 < v20 + 4088; i += v23 )
      {
        v23 = *(_QWORD *)(v21 + 16);
        v21 += 88LL;
      }
      if ( i + *(_QWORD *)(v20 + 4104) < *(_QWORD *)(v20 + 18632) )
      {
        if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 184)) != 2 )
        {
          v36 = 3;
          if ( i >= *(_QWORD *)(v20 + 18624) )
            v36 = 5;
          v52 = v36;
        }
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1024) )
        {
          v50 = *(_BYTE *)(a4 + 28);
          v51 = *(_BYTE *)(a4 + 29);
        }
      }
      v24 = *(_DWORD *)(a1 + 184);
      if ( (v24 & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x26u) || (v24 & 0x40) == 0 )
          goto LABEL_27;
      }
      else if ( !*(_QWORD *)(a1 + 624) && (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        goto LABEL_27;
      }
      v56 = 1LL;
LABEL_27:
      v42 = a2;
      v48 = (int *)&v49;
      v46 = MiAgePte;
      v47 = MiAgeWorkingSetTail;
      v25 = 16LL;
      if ( !PerformanceFrequency.LowPart )
        v25 = 8LL;
      v55 = v16;
      v43 = a1;
      v49 = a3;
      v41[0] = 6;
      v26 = *(_QWORD *)(v25 + v40);
      v27 = v44;
      v28 = KdDebuggerEnteredCount;
      if ( !v26 )
        v27 = -1LL;
      v45 = v26;
      v44 = v27;
      PerformanceFrequency.QuadPart = 0LL;
      v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( PerformanceFrequency.QuadPart != 10000000 )
        v29.QuadPart = 10000000 * v29.QuadPart / PerformanceFrequency.QuadPart;
      MiWalkPageTables(v41);
      PerformanceFrequency.QuadPart = 0LL;
      result = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
      if ( PerformanceFrequency.QuadPart != 10000000 )
        result = (__int64)(10000000 * result) / PerformanceFrequency.QuadPart;
      if ( *(_DWORD *)a4 == 1
        && KeGetCurrentThread() == *(struct _KTHREAD **)(v20 + 18304)
        && v28 == KdDebuggerEnteredCount )
      {
        v30 = *(_QWORD *)(v20 + 18656);
        v31 = result - v29.QuadPart;
        if ( result <= v29.QuadPart )
          v31 = 0LL;
        result = v31 + v30;
        if ( v31 + v30 >= v30 )
        {
          v32 = *(_QWORD *)(v20 + 18648);
          v33 = v32 + v54;
          if ( v32 + v54 >= v32 )
          {
            *(_QWORD *)(v20 + 18648) = v33;
            *(_QWORD *)(v20 + 18656) = result;
            if ( v33 )
            {
              result /= v33;
              v34 = result;
              if ( result )
              {
                result = 0x989680 / result;
                *(_QWORD *)(v20 + 18664) = 0x989680 / v34;
              }
            }
          }
        }
      }
    }
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 1) != 0 )
  {
    v35 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
    result = v35 & 1;
    if ( result == v35 )
      return MiLogWsAging(v35, a1, &v49, a3);
  }
  return result;
}
