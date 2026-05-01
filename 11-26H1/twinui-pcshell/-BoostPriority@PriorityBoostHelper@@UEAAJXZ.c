/*
 * XREFs of ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180191DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180191E64 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::BoostPriority(PriorityBoostHelper *this)
{
  int v1; // ebx
  const char *v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( GetCurrentThreadId() != v1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x60,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v3);
  ++*((_DWORD *)this + 23);
  v4 = PriorityBoostHelper::BoostPriorityHelper((PriorityBoostHelper *)((char *)this - 16));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
