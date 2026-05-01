/*
 * XREFs of ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800FAD4C
 * Callers:
 *     _lambda_1a4d461b071b17a49d9b71157d22f5c1_::operator() @ 0x1803A0E10 (_lambda_1a4d461b071b17a49d9b71157d22f5c1_--operator().c)
 *     _lambda_39011a0525b85c0c4a9a6636d6d62842_::operator() @ 0x1803A0EB4 (_lambda_39011a0525b85c0c4a9a6636d6d62842_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e67c556ce08e3c949afc512b1e697689___::Run @ 0x1803A2230 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e67c556ce08e3c949afc512b1e697689___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x1800F9FCC (-SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1800FACE4 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB28C (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 */

__int64 __fastcall CortanaAvailability::WriteCortanaAvailabilityToRegistry(
        CortanaAvailability *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int IsCortanaAvailable; // eax
  unsigned __int8 *v4; // rdx
  unsigned int v5; // ebx
  int v7; // edi
  __int64 v8; // rdx
  unsigned __int8 v9; // si
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  IsCortanaAvailable = CortanaExperienceHelpers::IsCortanaAvailable((CortanaExperienceHelpers *)&v12, a2, a3);
  v5 = IsCortanaAvailable;
  if ( IsCortanaAvailable != -2147024894 && IsCortanaAvailable < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)IsCortanaAvailable);
    return v5;
  }
  v11 = 0;
  v7 = CortanaAvailability::CheckCortanaAvailability((CortanaAvailability *)&v11, v4);
  if ( v7 < 0 )
  {
    v8 = 251LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v9 = v11;
  v7 = CortanaExperienceHelpers::SetCortanaRegKey(L"IsAvailable", (const unsigned __int16 *)v11);
  if ( v7 < 0 )
  {
    v8 = 252LL;
    goto LABEL_6;
  }
  if ( v9 != v12 || v5 == -2147024894 )
    SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
  return 0LL;
}
