/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18009A928
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18009A87C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z @ 0x18009AAEC (-CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct CBitmapSource **a3)
{
  int CompressedSourceBitmap; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IWICBitmap *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  CompressedSourceBitmap = CreateCompressedSourceBitmap(
                             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
                             a1,
                             a2);
  v5 = CompressedSourceBitmap;
  if ( CompressedSourceBitmap >= 0 )
  {
    CompressedSourceBitmap = CBitmapSource::CreateFromWicBitmap(v9, a3);
    v5 = CompressedSourceBitmap;
    if ( CompressedSourceBitmap >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 85LL;
  }
  else
  {
    v6 = 84LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)(unsigned int)CompressedSourceBitmap);
LABEL_7:
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
