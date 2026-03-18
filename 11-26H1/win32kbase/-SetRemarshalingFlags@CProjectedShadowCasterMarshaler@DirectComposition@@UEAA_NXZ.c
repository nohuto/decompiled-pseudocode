/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition@@UEAA_NXZ @ 0x140246240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  _DWORD *v2; // rax
  int *v3; // rcx

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v2 |= 0x100u;
  if ( *((_QWORD *)this + 10) )
    *v2 |= 0x400u;
  v3 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x200u;
  else
    v3 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 12) )
    *v3 = *v2 | 0x800;
  return 1;
}
