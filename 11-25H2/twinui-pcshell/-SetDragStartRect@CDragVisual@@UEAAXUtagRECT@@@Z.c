/*
 * XREFs of ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x18051F400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180521524 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1805217E4 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::SetDragStartRect(CDragVisual *this, struct tagRECT *a2)
{
  LONG top; // r8d
  LONG right; // r9d
  LONG bottom; // r10d
  LONG left; // eax
  HWND v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-40h] BYREF
  struct tagPOINT Points[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v12; // [rsp+58h] [rbp-20h] BYREF

  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  left = a2->left;
  *((_BYTE *)this + 253) = 1;
  *((_DWORD *)this + 58) = left;
  *((_DWORD *)this + 59) = top;
  *((_DWORD *)this + 60) = right;
  *((_DWORD *)this + 61) = bottom;
  v7 = (HWND)*((_QWORD *)this + 16);
  v8 = *(_OWORD *)((char *)this + 232);
  v12 = *(_OWORD *)((char *)this + 216);
  *(_OWORD *)&Points[0].x = v8;
  MapWindowPoints(0LL, v7, Points, 2u);
  if ( CDragVisual::_UpdateThumbnailRect((CDragVisual *)((char *)this - 24), (const struct Geometry::CRect *)Points)
    && *((_QWORD *)this + 10) )
  {
    v9 = *((_QWORD *)this + 6);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v10, &v9, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11)) )
      (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
        *((_QWORD *)this + 11),
        &v12,
        0LL,
        0LL);
    CDragVisual::_UpdateThumbnail((char *)this - 24, 3LL, 9LL);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v10);
  }
}
