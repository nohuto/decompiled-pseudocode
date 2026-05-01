/*
 * XREFs of ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1800FACE4
 * Callers:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800FAD4C (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1801C86CC (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall CortanaExperienceHelpers::IsCortanaAvailable(
        CortanaExperienceHelpers *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int Data; // [rsp+38h] [rbp+10h] BYREF

  Data = 0;
  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(L"IsAvailable", (LPBYTE)&Data, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey >= 0 )
  {
    *(_BYTE *)this = Data == 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (int)"shellcommon\\internal\\shell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)CortanaRegKey);
    return v5;
  }
}
