/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x1800850F0
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180069A34 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180073C2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z @ 0x18008523C (-Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18009A9D0 (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z @ 0x18009AAEC (-CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBitmapSource::Create(HICON a1, struct CBitmapSource **a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  struct IWICBitmapSource *v7; // rcx
  struct IWICBitmap *v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IWICBitmap *v14; // [rsp+40h] [rbp+20h] BYREF
  struct IWICBitmapSource *v15; // [rsp+48h] [rbp+28h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v4 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v5 = *v4;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, HICON, struct IWICBitmapSource **))(v5 + 176))(v4, a1, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x68,
      (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v6);
  v7 = v15;
  if ( v15 )
  {
    v8 = v14;
    v14 = 0LL;
    if ( v8 )
    {
      ((void (__fastcall *)(struct IWICBitmap *))v8->lpVtbl->Release)(v8);
      v7 = v15;
    }
    v9 = CreateFormatConverterToPBGRA(v7, &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F,
        (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( v14 )
  {
    v11 = CBitmapSource::CreateFromWicBitmap(v14, a2);
    v10 = v11;
    if ( v11 >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
        (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)&v14);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    v10 = CFallbackBitmapSource::Get(a2);
    if ( v14 )
      ((void (__fastcall *)(struct IWICBitmap *))v14->lpVtbl->Release)(v14);
    if ( v15 )
      ((void (__fastcall *)(struct IWICBitmapSource *))v15->lpVtbl->Release)(v15);
  }
  return v10;
}
