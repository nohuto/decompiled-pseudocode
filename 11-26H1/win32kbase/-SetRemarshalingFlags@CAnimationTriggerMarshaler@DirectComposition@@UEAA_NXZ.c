/*
 * XREFs of ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238A10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x100u;
  *((_DWORD *)this + 4) |= 0x600u;
  *((_QWORD *)this + 12) = 0LL;
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
