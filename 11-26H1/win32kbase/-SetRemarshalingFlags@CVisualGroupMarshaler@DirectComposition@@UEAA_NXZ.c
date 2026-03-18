/*
 * XREFs of ?SetRemarshalingFlags@CVisualGroupMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualGroupMarshaler *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 8) == 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return !v1;
}
