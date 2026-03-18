/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239070
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171570 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 84);
  if ( *((_BYTE *)this + 360) != 1 )
    v1 |= 4u;
  if ( *((_BYTE *)this + 361) )
    v1 |= 8u;
  *((_DWORD *)this + 84) = v1 | 3;
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  return 1;
}
