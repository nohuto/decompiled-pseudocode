/*
 * XREFs of ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1402411E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401C1270 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl
  unsigned int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) & 0xFFFFDFFF;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 23) )
    *((_DWORD *)this + 4) = v2 & 0xFFFFEFFF;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 18)
    || *((_QWORD *)this + 21)
    || *((_QWORD *)this + 23) )
  {
    return 1;
  }
  return v1;
}
