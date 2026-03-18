/*
 * XREFs of ?CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262178
 * Callers:
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x18021D48C (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18014BD88 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z @ 0x180203D0C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x1802625C4 (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CreateForVisualBitmap(
        struct CComposition *a1,
        struct CVisual *a2,
        struct CCachedVisualImage **a3)
{
  __int64 v6; // rax
  CCachedVisualImage *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCachedVisualImage *v14; // [rsp+48h] [rbp+20h] BYREF

  v6 = (__int64)DefaultHeap::AllocClear(0x648uLL);
  if ( v6 )
    v6 = CCachedVisualImage::CCachedVisualImage(v6, (__int64)a1);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    &v14,
    v6);
  v7 = v14;
  if ( v14 )
  {
    v11 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v14 + 56LL))(v14);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = CCachedVisualImage::SetRootVisual(v7, a2);
      v8 = v11;
      if ( v11 >= 0 )
      {
        CCachedVisualImage::ChoosePixelFormat(v7);
        v8 = 0;
        v14 = 0LL;
        *a3 = v7;
        goto LABEL_12;
      }
      v9 = 111LL;
    }
    else
    {
      v9 = 110LL;
    }
    v10 = (unsigned int)v11;
  }
  else
  {
    v8 = -2147024882;
    v9 = 108LL;
    v10 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
    (const char *)v10);
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v8;
}
