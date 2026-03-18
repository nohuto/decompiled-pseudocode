/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x140B90B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B8667C (VfFaultsIsSystemSufficientlyBooted.c)
 */

__int64 __fastcall VerifierMmMapLockedPagesSpecifyCache(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 0xDu) && (_DWORD)a5 )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      CarReportRuleViolationFromNt(
        196,
        130LL,
        BugCheckParameter2,
        *(__int16 *)(BugCheckParameter2 + 10),
        (unsigned int)a5,
        0xBu,
        retaddr);
    return guard_dispatch_icall_no_overrides(BugCheckParameter2);
  }
  if ( ((VfRuleClasses & 4) == 0 || !(unsigned int)VfFaultsInjectResourceFailure(0))
    && ((VfRuleClasses & 0x40000) == 0
     || !ViFnAutoFailInject
     || !(unsigned __int8)guard_dispatch_icall_no_overrides("MmMapLockedPagesSpecifyCache")) )
  {
    return guard_dispatch_icall_no_overrides(BugCheckParameter2);
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
