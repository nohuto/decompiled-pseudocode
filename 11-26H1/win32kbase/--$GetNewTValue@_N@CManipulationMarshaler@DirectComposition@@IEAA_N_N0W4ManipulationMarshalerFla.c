/*
 * XREFs of ??$GetNewTValue@_N@CManipulationMarshaler@DirectComposition@@IEAA_N_N0W4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x14016F8E0
 * Callers:
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_NPEA_N@Z @ 0x14016F834 (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        _BYTE *a5)
{
  char result; // al

  result = a2;
  if ( a2 != a3 )
  {
    result = a3;
    *a5 = 1;
    *(_DWORD *)(a1 + 16) |= 0x80u;
  }
  return result;
}
