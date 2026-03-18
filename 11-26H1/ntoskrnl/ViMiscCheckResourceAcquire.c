/*
 * XREFs of ViMiscCheckResourceAcquire @ 0x140C3E2F0
 * Callers:
 *     VfMiscExAcquireSharedWaitForExclusive_Entry @ 0x140C3C870 (VfMiscExAcquireSharedWaitForExclusive_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

struct _KTHREAD *__fastcall ViMiscCheckResourceAcquire(__int64 a1, char a2, __int64 a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int8 CurrentIrql; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (struct _KTHREAD *)&retaddr;
  if ( (a1 & 7) != 0 )
    result = (struct _KTHREAD *)CarReportRuleViolationFromNt(196, 61LL, 0LL, 0LL, a1, 0xBu, a3);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (result->MiscFlags & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !result->WaitBlock[3].SpareLong && (CurrentIrql != 2 || a2) )
        return (struct _KTHREAD *)CarReportRuleViolationFromNt(
                                    196,
                                    55LL,
                                    CurrentIrql,
                                    KeGetCurrentThread()->CombinedApcDisable,
                                    a1,
                                    0xBu,
                                    a3);
    }
  }
  return result;
}
