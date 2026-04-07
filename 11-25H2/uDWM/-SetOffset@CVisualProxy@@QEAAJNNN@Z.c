/*
 * XREFs of ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180003DEC
 * Callers:
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180003D90 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800240E0 (-OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A9454 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetOffset(CVisualProxy *this, double a2, double a3, double a4)
{
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
  if ( v5 < 0 )
  {
    v7 = 48LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
    if ( v5 < 0 )
    {
      v7 = 49LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 224LL))(*((_QWORD *)this + 3));
      if ( v5 >= 0 )
        return 0LL;
      v7 = 50LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return (unsigned int)v5;
}
