/*
 * XREFs of PfpRpControlRequestReset @ 0x1409BDEE4
 * Callers:
 *     PfpRpShutdown @ 0x1407C9D30 (PfpRpShutdown.c)
 *     PfpRpControlRequestPerform @ 0x140B04BF0 (PfpRpControlRequestPerform.c)
 * Callees:
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x1409BE290 (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  LIST_ENTRY *i; // rcx
  LIST_ENTRY *NextProcess; // rax
  __int64 result; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = NextProcess )
  {
    NextProcess = PsGetNextProcess(i, v2, v3, v4);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)&NextProcess[31].Flink + 1, 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  result = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  return result;
}
