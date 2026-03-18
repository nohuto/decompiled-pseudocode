/*
 * XREFs of ValidateAllocationZeroed @ 0x1400A8220
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ValidateAllocationZeroed(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  char *i; // rdx
  char *v10; // rdi

  result = a2;
  for ( i = a1; (unsigned __int64)i < result; i += 4 )
  {
    if ( *(_DWORD *)i )
    {
      v10 = (char *)(i - a1);
      WdLogSingleEntry5(
        4LL,
        i,
        *(unsigned int *)i,
        &i[-*(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL)],
        i - a1 + *(_QWORD *)(a5 + 32),
        *(_QWORD *)(*(_QWORD *)(a3 + 368) + 48LL));
      WdLogGlobalForLineNumber = 520;
      result = WdLogSingleEntry5(4LL, a4, *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL), *(_QWORD *)(a5 + 32), a1, v10);
      WdLogGlobalForLineNumber = 526;
      return result;
    }
  }
  return result;
}
