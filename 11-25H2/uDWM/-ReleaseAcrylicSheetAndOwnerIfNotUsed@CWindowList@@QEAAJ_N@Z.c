/*
 * XREFs of ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44
 * Callers:
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001B724 (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x180037B2C (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_fe545bda8eea4d2e77db634168ef197a__void_::_Do_call @ 0x1800A15D0 (std--_Func_impl_no_alloc__lambda_fe545bda8eea4d2e77db634168ef197a__void_--_Do_call.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800E2FDC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E68AC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnimationActive@CAcrylicSheet@@QEAA_NXZ @ 0x1800A12F8 (-IsAnimationActive@CAcrylicSheet@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(CWindowList *this, char a2)
{
  char *v3; // rdi
  struct CVisualProxy **v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  char *v8; // rcx
  __int64 v9; // rax
  char *v10; // rsi
  CAcrylicSheet *v11; // rcx
  char v12; // al
  struct CVisualProxy **v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (char *)this + 536;
    v4 = (struct CVisualProxy **)*((_QWORD *)this + 67);
    if ( v4 )
    {
      v5 = CContainerVisual::RemoveChild(v4[3], v4);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC0F,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5,
          v16);
        return v6;
      }
    }
    v8 = v3;
  }
  else
  {
    v9 = *((_QWORD *)this + 87);
    if ( !v9 )
      return 0LL;
    v10 = (char *)this + 536;
    v11 = (CAcrylicSheet *)*((_QWORD *)this + 67);
    if ( !v11 )
      return 0LL;
    v12 = *(_BYTE *)(v9 + 677);
    if ( (v12 & 0x40) != 0 || (v12 & 0x10) != 0 || (v12 & 0x20) != 0 || CAcrylicSheet::IsAnimationActive(v11) )
      return 0LL;
    v14 = CContainerVisual::RemoveChild(v13[3], v13);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC1F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v14,
        v16);
      return v15;
    }
    v8 = v10;
  }
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v8);
  *((_QWORD *)this + 87) = 0LL;
  return 0LL;
}
