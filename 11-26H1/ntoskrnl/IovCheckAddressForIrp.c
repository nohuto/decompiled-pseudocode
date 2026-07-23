/*
 * XREFs of IovCheckAddressForIrp @ 0x140C308F0
 * Callers:
 *     IovStatelessIoCallDriverRules @ 0x140C30AEC (IovStatelessIoCallDriverRules.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfTargetDriversIsEnabled @ 0x140C4CCAC (VfTargetDriversIsEnabled.c)
 */

void __fastcall IovCheckAddressForIrp(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  struct _KPROCESS *Process; // r8

  if ( BugCheckParameter3 )
  {
    if ( MmIsUserAddress(BugCheckParameter3) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( (unsigned int)VfTargetDriversIsEnabled(a3) )
          CarReportRuleViolationFromNt(0xC4u, 0xE2uLL, BugCheckParameter2, BugCheckParameter3, 0LL, 4, a3);
      }
    }
  }
}
