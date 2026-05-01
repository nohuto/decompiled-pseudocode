/*
 * XREFs of ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x1800C49C8
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C47C8 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800C2BA4 (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsDeveloperOverrideEnabled(
        CortanaAvailability *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int Data; // [rsp+30h] [rbp+8h] BYREF

  Data = 0;
  *(_BYTE *)this = 0;
  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(L"DevOverrideOneSettings", (LPBYTE)&Data, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey != -2147024894 )
  {
    if ( CortanaRegKey < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)CortanaRegKey);
      return v5;
    }
    if ( Data == 1 )
      *(_BYTE *)this = 1;
  }
  return 0LL;
}
