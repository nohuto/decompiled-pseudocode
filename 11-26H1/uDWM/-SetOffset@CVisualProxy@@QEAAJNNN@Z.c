/*
 * XREFs of ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x18000A7A0
 * Callers:
 *     ?SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z @ 0x18000A724 (-SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?SendSetOffset@CVisual@@MEAAJAEBUtagPOINT@@@Z @ 0x18000A770 (-SendSetOffset@CVisual@@MEAAJAEBUtagPOINT@@@Z.c)
 *     ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039710 (-OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C614 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetOffset(CVisualProxy *this, double a2, double a3, double a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v5,
      v12);
    return v6;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
        (const char *)(unsigned int)v7,
        v12);
      return v8;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 224LL))(*((_QWORD *)this + 4));
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
          (const char *)(unsigned int)v9,
          v12);
        return v10;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
