/*
 * XREFs of ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180203C2C
 * Callers:
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3F4C (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x18020E52C (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18014BD88 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z @ 0x180203D0C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CreateForVisualSurface(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  LPVOID v4; // rax
  __int64 v5; // rax
  CCachedVisualImage *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = DefaultHeap::AllocClear(0x648uLL);
  if ( v4
    && (v5 = CCachedVisualImage::CCachedVisualImage(v4, a1, 2LL), v11 = v5, (v6 = (CCachedVisualImage *)v5) != 0LL) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v7 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v6 + 56LL))(v6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      CCachedVisualImage::ChoosePixelFormat(v6);
      v8 = 0;
      v11 = 0LL;
      *a2 = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
