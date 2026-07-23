/*
 * XREFs of FsRtlpExclusiveIrpCancelRoutine @ 0x1404FBA50
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 */

__int64 __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2)
{
  return FsRtlpCancelExclusiveIrp(a2, 0LL);
}
