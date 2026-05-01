/*
 * XREFs of ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x18021BA60
 * Callers:
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180396DC0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803973D4 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::Hide(CVirtualTouchpadExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 192) != 2 )
    return 0LL;
  v1 = CVirtualTouchpadExperienceManager::HideInternal(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x293,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
