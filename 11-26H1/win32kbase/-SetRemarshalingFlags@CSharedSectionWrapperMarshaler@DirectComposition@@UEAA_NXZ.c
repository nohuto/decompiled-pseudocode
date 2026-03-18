/*
 * XREFs of ?SetRemarshalingFlags@CSharedSectionWrapperMarshaler@DirectComposition@@UEAA_NXZ @ 0x140247A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedSectionWrapperMarshaler::SetRemarshalingFlags(
        DirectComposition::CSharedSectionWrapperMarshaler *this)
{
  *((_DWORD *)this + 4) &= ~0x40u;
  return 1;
}
