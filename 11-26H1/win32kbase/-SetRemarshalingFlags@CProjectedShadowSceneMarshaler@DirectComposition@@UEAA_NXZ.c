/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowSceneMarshaler@DirectComposition@@UEAA_NXZ @ 0x140246A40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  int v2; // eax

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4) | 0x7E00;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) = v2 | 0x100;
  return 1;
}
