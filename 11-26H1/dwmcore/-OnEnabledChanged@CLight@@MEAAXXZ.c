/*
 * XREFs of ?OnEnabledChanged@CLight@@MEAAXXZ @ 0x180264A80
 * Callers:
 *     ?OnEnabledChanged@CPositionedLight@@MEAAXXZ @ 0x18026CFD0 (-OnEnabledChanged@CPositionedLight@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLight::OnEnabledChanged(CLight *this)
{
  (*(void (__fastcall **)(CLight *, __int64))(*(_QWORD *)this + 80LL))(this, 5LL);
  (*(void (__fastcall **)(CLight *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
}
