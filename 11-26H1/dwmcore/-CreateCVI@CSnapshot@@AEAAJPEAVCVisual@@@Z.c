/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180286BC8
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x180216C50 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x1801CC5A0 (-RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_NPEAPEAV1@@Z @ 0x180262030 (-CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_N.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CCachedVisualImage *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 20) && *((_DWORD *)this + 21) )
  {
    v9 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
    v4 = CCachedVisualImage::CreateForDCompSnapshot(
           *((struct CComposition **)this + 3),
           a2,
           (const struct D2D_SIZE_U *)this + 10,
           *((_BYTE *)this + 88),
           &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 28LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\snapshot.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
      return v5;
    }
    v4 = CComposition::RegisterRenderSnapshotToPerform(*((CComposition **)this + 3), v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 31LL;
      goto LABEL_7;
    }
    wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=((__int64 *)this + 9, (__int64 *)&v9);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  }
  return 0LL;
}
