/*
 * XREFs of ViSpMmProbeAndLockPages_Entry @ 0x140C49D00
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ViSpMmProbeAndLockPages_Entry(__int64 a1)
{
  __int16 v2; // di
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v4; // r8
  __int64 result; // rax

  v2 = 2071;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    CarReportRuleViolationFromNt(196, 112LL, CurrentIrql, *(_QWORD *)(a1 + 16), *(char *)(a1 + 12), 0, *(_QWORD *)a1);
  if ( (unsigned int)VfVerifyMode < 3 )
    v2 = 2067;
  v4 = *(_QWORD *)(a1 + 16);
  result = *(__int16 *)(v4 + 10);
  if ( ((unsigned __int16)result & (unsigned __int16)v2) != 0 )
    return CarReportRuleViolationFromNt(
             196,
             177LL,
             v4,
             *(__int16 *)(v4 + 10),
             (unsigned __int16)(result & v2),
             0,
             *(_QWORD *)a1);
  return result;
}
