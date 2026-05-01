/*
 * XREFs of ?NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z @ 0x18046E920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180289360 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyInputAppPropertyChanged(
        TouchKeyboardExperienceManager *this,
        HSTRING a2,
        HSTRING a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = TouchKeyboardExperienceManager::OnInputAppPropertyChanged(
         (TouchKeyboardExperienceManager *)((char *)this - 200),
         a2,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18B3,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
