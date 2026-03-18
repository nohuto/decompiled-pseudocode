/*
 * XREFs of ?GetCurrentOverlayVisuals@CDrawingContext@@QEBA_NAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180236794
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDrawingContext::GetCurrentOverlayVisuals(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  bool v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  if ( v2
    && (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 56))(
         *(_QWORD *)(v2 + 56),
         &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97,
         &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 288LL))(v6, a2);
  }
  v4 = *a2 != a2[1];
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
  return v4;
}
