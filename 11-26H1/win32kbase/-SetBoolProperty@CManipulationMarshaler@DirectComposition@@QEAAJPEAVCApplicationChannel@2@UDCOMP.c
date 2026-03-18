/*
 * XREFs of ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_NPEA_N@Z @ 0x14016F834
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14019C940 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 * Callees:
 *     ??$GetNewTValue@_N@CManipulationMarshaler@DirectComposition@@IEAA_N_N0W4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x14016F8E0 (--$GetNewTValue@_N@CManipulationMarshaler@DirectComposition@@IEAA_N_N0W4ManipulationMarshalerFla.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBoolProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v5; // r8d
  int v6; // r8d
  unsigned int v7; // r11d
  char v8; // cl
  __int64 v9; // r10
  char New; // al

  v5 = a3 - 4;
  if ( !v5 )
  {
    New = DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(
            a1,
            *(_BYTE *)(a1 + 108) & 1,
            (unsigned __int8)a4,
            a4,
            a5);
    v8 = *(_BYTE *)(v9 + 108) & 0xFE;
    goto LABEL_8;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = 2
       * DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(
           a1,
           (*(_BYTE *)(a1 + 108) & 2) != 0,
           (unsigned __int8)a4,
           a4,
           a5);
    New = *(_BYTE *)(v9 + 108) & 0xFD;
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
    LOBYTE(v6) = a4;
    v8 = 4
       * DirectComposition::CManipulationMarshaler::GetNewTValue<bool>(a1, (*(_BYTE *)(a1 + 108) & 4) != 0, v6, a4, a5);
    New = *(_BYTE *)(v9 + 108) & 0xFB;
LABEL_8:
    *(_BYTE *)(v9 + 108) = New | v8;
    return v7;
  }
  return (unsigned int)-1073741811;
}
