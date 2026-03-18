/*
 * XREFs of ?CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_NPEAPEAV1@@Z @ 0x180262030
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180286BC8 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
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

__int64 __fastcall CCachedVisualImage::CreateForDCompSnapshot(
        struct CComposition *a1,
        struct CVisual *a2,
        const struct D2D_SIZE_U *a3,
        char a4,
        struct CCachedVisualImage **a5)
{
  __int64 v9; // rax
  CCachedVisualImage *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  CCachedVisualImage *v16[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (__int64)DefaultHeap::AllocClear(0x648uLL);
  if ( v9 )
    v9 = CCachedVisualImage::CCachedVisualImage(v9, (__int64)a1);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    v16,
    v9);
  v10 = v16[0];
  if ( v16[0] )
  {
    v14 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v16[0] + 56LL))(v16[0]);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v14 = CCachedVisualImage::SetRootVisual(v10, a2);
      v11 = v14;
      if ( v14 >= 0 )
      {
        *((_QWORD *)v10 + 12) = 0LL;
        *((float *)v10 + 26) = (float)(int)a3->width;
        *((float *)v10 + 27) = (float)(int)a3->height;
        *((float *)v10 + 28) = (float)(int)a3->width;
        *((float *)v10 + 29) = (float)(int)a3->height;
        *((_BYTE *)v10 + 1602) = a4;
        CCachedVisualImage::ChoosePixelFormat(v10);
        v11 = 0;
        v16[0] = 0LL;
        *a5 = v10;
        goto LABEL_12;
      }
      v12 = 81LL;
    }
    else
    {
      v12 = 80LL;
    }
    v13 = (unsigned int)v14;
  }
  else
  {
    v11 = -2147024882;
    v12 = 78LL;
    v13 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
    (const char *)v13);
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v16);
  return v11;
}
