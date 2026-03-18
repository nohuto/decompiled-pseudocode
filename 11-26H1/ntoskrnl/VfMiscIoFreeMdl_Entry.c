/*
 * XREFs of VfMiscIoFreeMdl_Entry @ 0x140C3CB70
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

char __fastcall VfMiscIoFreeMdl_Entry(__int64 a1)
{
  ULONG_PTR v2; // r8
  char result; // al

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_QWORD *)a1);
  v2 = *(_QWORD *)(a1 + 8);
  result = *(_WORD *)(v2 + 10) & 0x11;
  if ( result == 1 )
    return CarReportRuleViolationFromNt(196, 184LL, v2, *(__int16 *)(v2 + 10), 0LL, 0xBu, *(_QWORD *)a1);
  return result;
}
