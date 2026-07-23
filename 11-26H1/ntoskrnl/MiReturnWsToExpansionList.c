/*
 * XREFs of MiReturnWsToExpansionList @ 0x140476F90
 * Callers:
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x1404D1810 (MiAllowWorkingSetExpansion.c)
 *     MiAskKeToOutswapProcess @ 0x1404D1920 (MiAskKeToOutswapProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  __int64 *v2; // r8
  __int64 result; // rax
  __int64 **v4; // rcx

  v2 = (__int64 *)(a1 + 16LL * a2 + 24);
  result = 16 * (a2 + 1145LL) + *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  v4 = *(__int64 ***)(result + 8);
  if ( *v4 != (__int64 *)result )
    __fastfail(3u);
  *v2 = result;
  v2[1] = (__int64)v4;
  *v4 = v2;
  *(_QWORD *)(result + 8) = v2;
  return result;
}
