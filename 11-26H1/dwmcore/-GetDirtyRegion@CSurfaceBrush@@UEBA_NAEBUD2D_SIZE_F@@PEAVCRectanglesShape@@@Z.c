/*
 * XREFs of ?GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188670
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x1801886DC (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSurfaceBrush::GetDirtyRegion(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  __int64 v3; // rax
  const struct CRectanglesShape *v4; // r9

  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
    return 0;
  if ( *((_QWORD *)this - 9) )
  {
    if ( *((_QWORD *)this - 9) != v3 )
      return 0;
    return (*(__int64 (__fastcall **)(_QWORD, char *, const struct D2D_SIZE_F *, struct CRectanglesShape *))(**((_QWORD **)this + 4) + 64LL))(
             *((_QWORD *)this + 4),
             (char *)this - 160,
             a2,
             a3);
  }
  else
  {
    v4 = (const struct CRectanglesShape *)*((_QWORD *)this + 12);
    if ( !v4 )
      return 0;
    return CSurfaceBrush::TransformDirtyRegion((CSurfaceBrush *)((char *)this - 160), 0LL, a2, v4, a3);
  }
}
