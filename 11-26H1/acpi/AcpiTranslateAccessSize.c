/*
 * XREFs of AcpiTranslateAccessSize @ 0x1400ACF78
 * Callers:
 *     ACPIAmliEvaluatePcch @ 0x1400ACDE4 (ACPIAmliEvaluatePcch.c)
 *     AcpiPccInitMapRegister @ 0x1400B3060 (AcpiPccInitMapRegister.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiTranslateAccessSize(unsigned __int8 a1, char a2, char a3)
{
  unsigned __int8 v3; // r9
  unsigned __int8 v4; // dl

  v3 = 0;
  if ( a1 <= 4u )
    v3 = a1;
  if ( !v3 )
  {
    v4 = a3 + a2;
    if ( v4 > 8u )
    {
      if ( v4 > 0x10u )
        v3 = (v4 > 0x20u) + 3;
      else
        v3 = 2;
    }
    else
    {
      v3 = 1;
    }
  }
  return AcpiGenericAccessSizeTranslation[v3];
}
