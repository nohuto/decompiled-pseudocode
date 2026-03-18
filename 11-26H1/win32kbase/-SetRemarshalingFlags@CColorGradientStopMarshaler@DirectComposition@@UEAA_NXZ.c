/*
 * XREFs of ?SetRemarshalingFlags@CColorGradientStopMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorGradientStopMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorGradientStopMarshaler *this)
{
  if ( *((float *)this + 14) != 0.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 4) |= 0x80u;
  return 1;
}
