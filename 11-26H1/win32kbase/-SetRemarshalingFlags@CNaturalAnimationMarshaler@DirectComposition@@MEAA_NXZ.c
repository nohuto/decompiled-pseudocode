/*
 * XREFs of ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1402453D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401C1270 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4) | 0x70000;
  *((_DWORD *)this + 4) = v1;
  if ( (v1 & 0x1000) != 0 )
  {
    v1 |= 0x2000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v1 & 0x4000) != 0 )
    *((_DWORD *)this + 4) = v1 | 0x8000;
  DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  return 1;
}
