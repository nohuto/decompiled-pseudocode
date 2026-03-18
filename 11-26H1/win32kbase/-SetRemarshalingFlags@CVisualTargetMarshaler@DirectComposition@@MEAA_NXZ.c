/*
 * XREFs of ?SetRemarshalingFlags@CVisualTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023B1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualTargetMarshaler *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 8) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return result;
}
