/*
 * XREFs of ?OnGraphicsDeviceLost@CAccent@@QEAAXXZ @ 0x1800A04D4
 * Callers:
 *     ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800D04E0 (-OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@QEAAXXZ @ 0x1800A0504 (-OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@QEAAXXZ.c)
 */

void __fastcall CAccent::OnGraphicsDeviceLost(CAccent *this)
{
  CAccentAcrylicBlurBehind *v2; // rcx

  v2 = (CAccentAcrylicBlurBehind *)*((_QWORD *)this + 37);
  if ( v2 )
    CAccentAcrylicBlurBehind::OnGraphicsDeviceLost(v2);
  CAccent::OnAccentStateUpdated(this);
}
