/*
 * XREFs of ExFreePoolSanityChecks @ 0x140C4946C
 * Callers:
 *     VerifierExFreePool @ 0x140C35E10 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140C35E90 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     ExIsSpecialPoolAddress @ 0x14047E9E4 (ExIsSpecialPoolAddress.c)
 *     KevSkipVerification @ 0x140723FF8 (KevSkipVerification.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int *v6; // rbp
  __int64 v7; // rdx

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( MmIsUserAddress(a1) )
      CarReportRuleViolationFromNt(196, 16LL, a1, 0LL, 0LL, 0, a2);
    if ( !LODWORD(stru_140EFF2C0.InitialStack) || (result = ExIsSpecialPoolAddress(a1), !(_DWORD)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (a1 & 0xFFF) == 0 )
      {
        result = MmDeterminePoolType(a1);
        if ( (result & 0x100) != 0 )
        {
          if ( CurrentIrql > 1u )
            return CarReportRuleViolationFromNt(196, 17LL, CurrentIrql, 1uLL, a1, 0, a2);
        }
        else if ( CurrentIrql > 2u )
        {
          return CarReportRuleViolationFromNt(196, 18LL, CurrentIrql, 0LL, a1, 0, a2);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        CarReportRuleViolationFromNt(196, 22LL, 0x24F6uLL, a1, 0LL, 0, a2);
      v6 = (unsigned int *)(a1 - 16);
      if ( (*(_BYTE *)(a1 - 16 + 3) & 3) == 0 )
        CarReportRuleViolationFromNt(196, 19LL, 0x2504uLL, a1 - 16, *v6, 0, a2);
      result = *((_BYTE *)v6 + 3) & 3;
      if ( (*((_BYTE *)v6 + 3) & 1) != 0 )
      {
        if ( CurrentIrql <= 1u )
          goto LABEL_22;
        v7 = 17LL;
      }
      else
      {
        if ( CurrentIrql <= 2u )
          goto LABEL_22;
        v7 = 18LL;
      }
      result = CarReportRuleViolationFromNt(196, v7, CurrentIrql, *((_BYTE *)v6 + 3) & 3, a1, 0, a2);
LABEL_22:
      if ( (*((_BYTE *)v6 + 3) & 2) == 0 )
        return CarReportRuleViolationFromNt(196, 20LL, 0x2527uLL, a1 - 16, 0LL, 0, a2);
    }
  }
  return result;
}
