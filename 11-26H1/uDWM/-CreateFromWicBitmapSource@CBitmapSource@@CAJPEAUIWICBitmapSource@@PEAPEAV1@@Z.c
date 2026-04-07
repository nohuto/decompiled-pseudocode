/*
 * XREFs of ?CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z @ 0x18009AB6C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z @ 0x18009AAEC (-CreateFromWicBitmap@CBitmapSource@@CAJPEAUIWICBitmap@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z @ 0x18009A66C (--0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBitmapSource::CreateFromWicBitmapSource(struct IWICBitmapSource *a1, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  CBitmapSource *v8; // rax
  struct tagSIZE v10; // [rsp+20h] [rbp-10h] BYREF
  CBitmapSource *v11; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LONG v13; // [rsp+50h] [rbp+20h] BYREF
  LONG v14; // [rsp+60h] [rbp+30h] BYREF
  CBaseObject *v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v13 = 0;
  v14 = 0;
  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, LONG *, LONG *))a1->lpVtbl->GetSize)(a1, &v13, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v10.cx = v13;
    v10.cy = v14;
    v8 = (CBitmapSource *)DefaultHeap::AllocClear(0xB8uLL);
    v11 = v8;
    if ( v8 )
      v8 = CBitmapSource::CBitmapSource(v8, a1, &v10);
    v15 = v8;
    if ( v8 )
    {
      v15 = 0LL;
      *a2 = v8;
      v5 = 0;
      goto LABEL_9;
    }
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 263LL;
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 258LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)v6);
LABEL_9:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
  return v5;
}
