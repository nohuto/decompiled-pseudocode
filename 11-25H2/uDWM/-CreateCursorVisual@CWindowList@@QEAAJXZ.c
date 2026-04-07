/*
 * XREFs of ?CreateCursorVisual@CWindowList@@QEAAJXZ @ 0x1800E39A4
 * Callers:
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18009734C (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800AB4A0 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateCursorVisual(CWindowList *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CCursorVisual *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCursorVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = CCursorVisual::Create(*((struct IDwmChannel ***)CDesktopManager::s_pDesktopManagerInstance + 6), 1uLL, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v7;
    v7 = 0LL;
    *((_QWORD *)this + 11) = v4;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3F,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v7);
  return v3;
}
