/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18009A9D0
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x1800850F0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v5 = *v4;
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 80))(v4, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 23LL;
LABEL_5:
    v9 = (unsigned int)v6;
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v12 + 64LL))(
         v12,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL,
         0LL,
         0LL,
         0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 31LL;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 30)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
         v12,
         2LL,
         a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 36LL;
    goto LABEL_5;
  }
  if ( *a2 )
  {
    v7 = 0;
    goto LABEL_12;
  }
  v7 = -2147024882;
  v9 = 2147942414LL;
  v8 = 38LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)v9);
LABEL_12:
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v12);
  return v7;
}
