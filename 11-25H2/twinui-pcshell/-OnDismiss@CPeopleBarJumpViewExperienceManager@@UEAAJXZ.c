/*
 * XREFs of ?OnDismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x18037BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18037B5E8 (-Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnDismiss(CPeopleBarJumpViewExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CPeopleBarJumpViewExperienceManager::Dismiss((CPeopleBarJumpViewExperienceManager *)((char *)this - 16), 0);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x72,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
