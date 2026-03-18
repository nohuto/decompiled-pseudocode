/*
 * XREFs of ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188540
 * Callers:
 *     ?GetDirtyRegion@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188530 (-GetDirtyRegion@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRec.c)
 *     ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180283700 (-GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectangl.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x1801886DC (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(
        const struct CSurfaceBrush *a1,
        const struct CMILMatrix *a2,
        const struct D2D_SIZE_F *a3,
        struct CRectanglesShape *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v9)(_QWORD, GUID *, __int64 *); // rax
  int v10; // eax
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v15[5]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v16[16]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+1Fh] BYREF

  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 23);
  v9 = *v6;
  v14 = 0LL;
  v10 = (*v9)(v6, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v14);
  v11 = v14;
  if ( v10 >= 0 )
  {
    v15[1] = 0LL;
    v15[0] = &CRectanglesShape::`vftable';
    v17 = 0LL;
    v15[2] = v16;
    v15[3] = v16;
    v15[4] = &v17;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct D2D_SIZE_F *, _QWORD *))(*(_QWORD *)v14 + 24LL))(
           v14,
           a3,
           v15) )
    {
      v12 = CSurfaceBrush::TransformDirtyRegion(a1, a2, a3, (const struct CRectanglesShape *)v15, a4);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v15);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      return v12;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v15);
    v11 = v14;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0;
}
