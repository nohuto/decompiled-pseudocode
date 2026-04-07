/*
 * XREFs of ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18008005C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     std::_Func_impl_no_alloc__CAcrylicSheet::AnimateRect_::_21_::_lambda_1__void_::_Do_call @ 0x180095C90 (std--_Func_impl_no_alloc__CAcrylicSheet--AnimateRect_--_21_--_lambda_1__void_--_Do_call.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18 (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1810 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E2064 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnimationActive@CAcrylicSheet@@QEAA_NXZ @ 0x1800959B8 (-IsAnimationActive@CAcrylicSheet@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(CWindowList *this, char a2)
{
  CBaseObject **v3; // rsi
  CContainerVisual **v4; // rcx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  CAcrylicSheet *v8; // rcx
  CContainerVisual **v9; // rcx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (CBaseObject **)((char *)this + 536);
    v4 = (CContainerVisual **)*((_QWORD *)this + 67);
    if ( v4 )
    {
      v5 = CContainerVisual::RemoveChild(v4[3], (struct CVisual *)v4);
      if ( v5 < 0 )
      {
        v6 = 3359LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5,
          v11);
        return (unsigned int)v5;
      }
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 87);
    if ( !v7 )
      return 0LL;
    v3 = (CBaseObject **)((char *)this + 536);
    v8 = (CAcrylicSheet *)*((_QWORD *)this + 67);
    if ( !v8 || (*(_BYTE *)(v7 + 741) & 0x38) != 0 || CAcrylicSheet::IsAnimationActive(v8) )
      return 0LL;
    v5 = CContainerVisual::RemoveChild(v9[3], (struct CVisual *)v9);
    if ( v5 < 0 )
    {
      v6 = 3375LL;
      goto LABEL_11;
    }
  }
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v3);
  *((_QWORD *)this + 87) = 0LL;
  return 0LL;
}
