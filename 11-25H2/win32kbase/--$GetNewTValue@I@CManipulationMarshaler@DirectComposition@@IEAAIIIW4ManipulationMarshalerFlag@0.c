/*
 * XREFs of ??$GetNewTValue@I@CManipulationMarshaler@DirectComposition@@IEAAIIIW4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x140134538
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140115250 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = a2;
  if ( a2 != a3 )
  {
    result = a3;
    *a5 = 1;
    *(_DWORD *)(a1 + 16) |= 0x40u;
  }
  return result;
}
