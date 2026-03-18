/*
 * XREFs of ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1801B10A0
 * Callers:
 *     ?FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1801B105C (-FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall CSurfaceBrush::FindCommonRenderStrategy(const struct CResource *a1)
{
  if ( !a1 )
    return off_1802DE1A0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 31LL) )
    return off_1802DE1B8;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 31LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 12LL) )
  {
    return &off_1802DE1C0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 162LL) )
    return off_1802DE1A8;
  return (void **)((unsigned __int64)off_1802DE1B0 & -(__int64)((*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(
                                                                  a1,
                                                                  94LL) != 0));
}
