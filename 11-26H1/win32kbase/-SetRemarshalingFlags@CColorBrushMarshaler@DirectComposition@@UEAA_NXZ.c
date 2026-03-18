/*
 * XREFs of ?SetRemarshalingFlags@CColorBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorBrushMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
