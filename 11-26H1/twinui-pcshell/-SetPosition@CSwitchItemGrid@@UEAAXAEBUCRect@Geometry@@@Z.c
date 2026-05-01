/*
 * XREFs of ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@@Z @ 0x1804C3330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwitchItemGrid::SetPosition(CSwitchItemGrid *this, const struct Geometry::CRect *a2)
{
  (*(void (__fastcall **)(CSwitchItemGrid *, const struct Geometry::CRect *, _QWORD, _QWORD))(*(_QWORD *)this + 512LL))(
    this,
    a2,
    0LL,
    0LL);
}
