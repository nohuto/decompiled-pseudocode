/*
 * XREFs of ?Hide@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x180462480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180293090 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::Hide(TouchKeyboardExperienceManager *this, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(
         (TouchKeyboardExperienceManager *)((char *)this - 200),
         a2,
         a3 != 0);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18E4,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
