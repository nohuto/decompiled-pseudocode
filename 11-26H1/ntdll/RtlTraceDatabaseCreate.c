/*
 * XREFs of RtlTraceDatabaseCreate @ 0x180149CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     RtlpTraceDatabaseAllocate @ 0x18014A09C (RtlpTraceDatabaseAllocate.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlTraceDatabaseCreate(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 (__fastcall *a5)(unsigned int a1, __int64 a2))
{
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(unsigned int, __int64); // rcx
  size_t v13; // r8
  __int64 result; // rax

  if ( a1 > 0x100000 )
    return 0LL;
  v9 = RtlpTraceDatabaseAllocate((8LL * a1 + 65784) & 0xFFFFFFFFFFFF0000uLL);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_DWORD *)v9 = -1412576052;
  *(_DWORD *)(v9 + 8) = a4;
  *(_DWORD *)(v9 + 4) = a3 | 1;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 24) = a2;
  v11 = v9 + 192;
  *(_QWORD *)(v9 + 32) = 0x10000LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)(v9 + 120) = 0LL;
  *(_QWORD *)(v9 + 112) = 0LL;
  memset_thunk_772440563353939046((void *)(v9 + 128), 0, 0x40uLL);
  RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(v10 + 48), 0, 0);
  v12 = RtlStackTraceHashFunction;
  *(_DWORD *)(v10 + 88) = a1;
  if ( a5 )
    v12 = a5;
  *(_QWORD *)(v10 + 104) = v12;
  *(_DWORD *)v11 = -1412580421;
  *(_QWORD *)(v11 + 8) = v10;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)(v11 + 24) = 0x10000LL;
  v13 = 8LL * *(unsigned int *)(v10 + 88);
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 96) = v11 + 56;
  memset_thunk_772440563353939046((void *)(v11 + 56), 0, v13);
  *(_QWORD *)(v11 + 32) = v10;
  *(_QWORD *)(v11 + 40) = v10 + 0x10000;
  result = v10;
  *(_QWORD *)(v11 + 48) = v11 + 8 * (*(unsigned int *)(v10 + 88) + 7LL);
  return result;
}
