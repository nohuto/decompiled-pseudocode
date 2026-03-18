/*
 * XREFs of ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x140042F74
 * Callers:
 *     ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1403EAB90 (-GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorManufactureDate(
        const unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  __int64 result; // rax
  _BYTE *v5; // r10
  _BYTE *v6; // r11
  unsigned __int8 v7; // al
  bool v8; // cc
  _QWORD v9[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v9[0] = a1;
  v9[10] = 1LL;
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v9, (bool)a2);
  if ( (int)result >= 0 )
  {
    *v5 = v6[16];
    *a3 = (unsigned __int8)v6[17] + 1990;
    v7 = v6[18];
    if ( v7 == 1 )
    {
      if ( v6[19] == 3 )
      {
        v8 = *v5 <= 0x36u;
        goto LABEL_8;
      }
      if ( v6[19] >= 4u )
        goto LABEL_15;
    }
    if ( v7 >= 3u )
    {
LABEL_15:
      if ( *v5 == 0xFF )
      {
        *v5 = 0;
        goto LABEL_12;
      }
      v8 = *v5 <= 0x36u;
    }
    else
    {
      v8 = (unsigned __int8)(*v5 - 1) <= 0x35u;
    }
LABEL_8:
    if ( !v8 )
    {
      *v5 = 0;
      return 3223126026LL;
    }
LABEL_12:
    if ( *a3 > 0x7C9u )
      return 0LL;
    *a3 = 0;
    return 3223126026LL;
  }
  return result;
}
