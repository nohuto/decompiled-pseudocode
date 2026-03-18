/*
 * XREFs of ??$GetNewTValue@_N@CManipulationMarshaler@DirectComposition@@IEAA_N_N0W4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x1401153CC
 * Callers:
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x14011531C (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA.c)
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
    *(_DWORD *)(a1 + 16) |= 0x40u;
  }
  return result;
}
