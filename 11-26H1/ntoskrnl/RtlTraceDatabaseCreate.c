/*
 * XREFs of RtlTraceDatabaseCreate @ 0x140622AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAllocate @ 0x140622E98 (RtlpTraceDatabaseAllocate.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlTraceDatabaseCreate(
        unsigned int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(unsigned int a1, __int64 a2))
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(unsigned int, __int64); // rcx
  size_t v13; // r8
  __int64 result; // rax

  if ( a1 > 0x100000 )
    return 0LL;
  v9 = RtlpTraceDatabaseAllocate((8LL * a1 + 4368) & 0xFFFFFFFFFFFFF000uLL, 6LL, a4);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_DWORD *)(v9 + 8) = a4;
  *(_DWORD *)v9 = -1412576052;
  *(_DWORD *)(v9 + 4) = a3 | 2;
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = 4096LL;
  v11 = v9 + 216;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 144) = 0LL;
  *(_QWORD *)(v9 + 136) = 0LL;
  memset_0((void *)(v9 + 152), 0, 0x40uLL);
  if ( (*(_DWORD *)(v10 + 4) & 4) != 0 )
  {
    *(_QWORD *)(v10 + 56) = 0LL;
  }
  else
  {
    *(_DWORD *)(v10 + 56) = 1;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_DWORD *)(v10 + 72) = 0;
    *(_WORD *)(v10 + 80) = 1;
    *(_BYTE *)(v10 + 82) = 6;
    *(_DWORD *)(v10 + 84) = 0;
    *(_QWORD *)(v10 + 96) = v10 + 88;
    *(_QWORD *)(v10 + 88) = v10 + 88;
  }
  v12 = RtlStackTraceHashFunction;
  *(_DWORD *)(v10 + 112) = a1;
  if ( a5 )
    v12 = a5;
  *(_QWORD *)(v10 + 128) = v12;
  *(_DWORD *)v11 = -1412580421;
  *(_QWORD *)(v11 + 8) = v10;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)(v11 + 24) = 4096LL;
  v13 = 8LL * *(unsigned int *)(v10 + 112);
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 120) = v11 + 56;
  memset_0((void *)(v11 + 56), 0, v13);
  *(_QWORD *)(v11 + 32) = v10;
  *(_QWORD *)(v11 + 40) = v10 + 4096;
  result = v10;
  *(_QWORD *)(v11 + 48) = v11 + 8 * (*(unsigned int *)(v10 + 112) + 7LL);
  return result;
}
