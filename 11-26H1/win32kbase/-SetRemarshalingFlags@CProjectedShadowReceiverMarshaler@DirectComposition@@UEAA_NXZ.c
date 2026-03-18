/*
 * XREFs of ?SetRemarshalingFlags@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAA_NXZ @ 0x140246540
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  int *v2; // rax
  int v3; // ecx
  bool v4; // zf

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v2 |= 0x100u;
  v3 = *v2 | 0x200;
  v4 = *((_QWORD *)this + 11) == 0LL;
  *v2 = v3;
  if ( !v4 )
    *v2 = v3 | 0x400;
  return 1;
}
