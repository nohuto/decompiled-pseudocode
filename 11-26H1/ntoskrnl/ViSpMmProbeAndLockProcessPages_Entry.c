/*
 * XREFs of ViSpMmProbeAndLockProcessPages_Entry @ 0x140726000
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ViSpMmProbeAndLockProcessPages_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v3; // r8
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    CarReportRuleViolationFromNt(
      0xC4u,
      0x71uLL,
      CurrentIrql,
      *(_QWORD *)(a1 + 24),
      *(char *)(a1 + 12),
      0,
      *(_QWORD *)a1);
  v3 = *(_QWORD *)(a1 + 24);
  result = *(__int16 *)(v3 + 10);
  if ( (result & 0x813) != 0 )
    return CarReportRuleViolationFromNt(
             0xC4u,
             0xB1uLL,
             v3,
             *(__int16 *)(v3 + 10),
             *(_WORD *)(v3 + 10) & 0x813,
             0,
             *(_QWORD *)a1);
  return result;
}
