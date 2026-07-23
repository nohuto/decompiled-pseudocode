/*
 * XREFs of ViSpMmMapLockedPagesSanityChecks @ 0x140C49B44
 * Callers:
 *     ViSpMmMapLockedPages_Entry @ 0x140725FE0 (ViSpMmMapLockedPages_Entry.c)
 *     ViSpMmMapLockedPagesSpecifyCache_Entry @ 0x140C49CE0 (ViSpMmMapLockedPagesSpecifyCache_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     MmIsMdlPageLocked @ 0x140C496C4 (MmIsMdlPageLocked.c)
 */

__int64 __fastcall ViSpMmMapLockedPagesSanityChecks(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  unsigned __int64 *v10; // rdi
  ULONG_PTR v11; // rsi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( !a2 )
  {
    if ( CurrentIrql > 2u )
      CarReportRuleViolationFromNt(196, 116LL, CurrentIrql, BugCheckParameter2, 0LL, 0, a3);
LABEL_7:
    v7 = *(_WORD *)(BugCheckParameter2 + 10);
    v8 = ((unsigned int)VfRuleClasses >> 20) & 4 | 0x21;
    if ( (v7 & v8) != 0 )
      CarReportRuleViolationFromNt(
        196,
        178LL,
        BugCheckParameter2,
        *(__int16 *)(BugCheckParameter2 + 10),
        (unsigned __int16)(v7 & v8),
        0,
        a3);
    goto LABEL_9;
  }
  if ( CurrentIrql > 1u )
    CarReportRuleViolationFromNt(196, 117LL, CurrentIrql, BugCheckParameter2, a2, 0, a3);
  if ( a2 != 1 )
    goto LABEL_7;
LABEL_9:
  v9 = 23;
  if ( a2 != 1 )
    v9 = 18;
  if ( (v9 & *(_WORD *)(BugCheckParameter2 + 10)) == 0 )
    CarReportRuleViolationFromNt(196, 179LL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), v9, 0, a3);
  v10 = (unsigned __int64 *)(BugCheckParameter2 + 48);
  v11 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
       + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
       + 4095) >> 12;
  do
  {
    result = MmIsMdlPageLocked(*v10);
    if ( !(_DWORD)result )
      result = CarReportRuleViolationFromNt(196, 133LL, BugCheckParameter2, v11, *v10, 0, a3);
    ++v10;
  }
  while ( (unsigned __int64)v10 < BugCheckParameter2 + 48 + 8 * v11 );
  return result;
}
