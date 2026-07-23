/*
 * XREFs of VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140C43100
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VfMiscMmBuildMdlForNonPagedPool_Entry(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx
  __int64 v3; // r8
  ULONG_PTR v4; // r9

  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    result = MmDeterminePoolType(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
    if ( result != 64 )
      return CarReportRuleViolationFromNt(196, 127LL, 0LL, v4, v3, 0xBu, *v2);
  }
  return result;
}
