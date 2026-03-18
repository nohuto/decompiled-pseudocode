/*
 * XREFs of ?GetLiftedOverlayType@CSurfaceBrush@@UEBA?AW4LiftedOverlayType@@XZ @ 0x1801A8140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CSurfaceBrush::GetLiftedOverlayType(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 40LL))(*(_QWORD *)(a1 + 192)) != 0;
}
