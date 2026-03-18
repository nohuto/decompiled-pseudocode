/*
 * XREFs of ?SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140194610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  int v1; // eax
  bool v2; // zf

  v1 = *((_DWORD *)this + 4) | 0x7C0;
  v2 = *((_BYTE *)this + 96) == 0;
  *((_DWORD *)this + 4) = v1;
  if ( !v2 )
    *((_DWORD *)this + 4) = v1 | 0x800;
  return 1;
}
