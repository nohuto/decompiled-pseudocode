/*
 * XREFs of ?CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z @ 0x18009AAEC
 * Callers:
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x1800850F0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18009A928 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z @ 0x18009AB6C (-CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapSource::CreateFromWicBitmap(struct IWICBitmapSource *a1, struct CBitmapSource **a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *))a1->lpVtbl[1].Release)(a1);
  if ( v4 < 0 )
  {
    v5 = 278LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CBitmapSource::CreateFromWicBitmapSource(a1, a2);
  if ( v4 < 0 )
  {
    v5 = 279LL;
    goto LABEL_3;
  }
  return 0LL;
}
