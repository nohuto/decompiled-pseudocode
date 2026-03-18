/*
 * XREFs of ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1400433BC
 * Callers:
 *     ?GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x1403CA1C0 (-GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDIDV1_FillProductIdManufacturerName(
        const unsigned __int8 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  _WORD *v6; // r11
  _QWORD v7[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7[0] = a1;
  v7[10] = 1LL;
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v7, (bool)a2);
  if ( (int)result >= 0 )
  {
    *a2 = *(_WORD *)(v5 + 8);
    *v6 = *(_WORD *)(v5 + 10);
    return 0LL;
  }
  return result;
}
