/*
 * XREFs of ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171570 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTextVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextVisualMarshaler *this)
{
  char v1; // bl

  v1 = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 43)
    || *((_QWORD *)this + 46)
    || *((_QWORD *)this + 49) )
  {
    return 1;
  }
  return v1;
}
