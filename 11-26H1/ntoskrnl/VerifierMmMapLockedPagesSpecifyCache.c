/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x140C45960
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140C3A918 (VfFaultsIsSystemSufficientlyBooted.c)
 */

__int64 __fastcall VerifierMmMapLockedPagesSpecifyCache(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  char v5; // si
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
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
LABEL_5:
    LOBYTE(a2) = v5;
    return guard_dispatch_icall_no_overrides(BugCheckParameter2, a2);
  }
  if ( ((VfRuleClasses & 4) == 0 || !(unsigned int)VfFaultsInjectResourceFailure(0))
    && ((VfRuleClasses & 0x40000) == 0
     || !ViFnAutoFailInject
     || !(unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"MmMapLockedPagesSpecifyCache", a2)) )
  {
    goto LABEL_5;
  }
  if ( v5 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
