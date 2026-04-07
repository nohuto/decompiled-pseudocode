/*
 * XREFs of ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18007132C (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z @ 0x18008523C (-Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B68DC (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800B6E20 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 *     ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800CFB88 (-RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@.c)
 *     ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800D8EF0 (-RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z @ 0x18009AAEC (-CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBitmapSource::Create(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v3; // r10
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v11; // [rsp+20h] [rbp-40h]
  int v12; // [rsp+20h] [rbp-40h]
  struct IWICBitmap *v13; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v13 = 0LL;
  v3 = 4LL * a1;
  if ( v3 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)0x80070216LL,
      v11);
  }
  else
  {
    v4 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v5 = *v4;
    v13 = 0LL;
    v12 = v3;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, GUID *))(v5 + 160))(
           v4,
           a1,
           a2,
           &GUID_WICPixelFormat32bppPBGRA);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = -2147024882;
      v8 = 2147942414LL;
      v9 = 197LL;
    }
    else
    {
      v8 = (unsigned int)v6;
      v9 = 196LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v8,
      v12);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v13);
  }
  return v7;
}
