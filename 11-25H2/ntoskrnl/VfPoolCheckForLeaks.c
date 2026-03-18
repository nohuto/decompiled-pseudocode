/*
 * XREFs of VfPoolCheckForLeaks @ 0x140B8A370
 * Callers:
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( (*(_QWORD *)(BugCheckParameter3 + 128) || *(_QWORD *)(BugCheckParameter3 + 136)) && (MmVerifierData & 8) != 0 )
    CarReportRuleViolationFromNt(
      196,
      98LL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 112) + *(_DWORD *)(BugCheckParameter3 + 116)),
      3u,
      *(_QWORD *)(a2 + 48));
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(BugCheckParameter3 + 64));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
