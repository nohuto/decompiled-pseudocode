/*
 * XREFs of ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140043204
 * Callers:
 *     ?GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x140280E80 (-GetParseResult@EdidMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 *     ?GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140413710 (-GetNativeMode@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDID_V1_GetPreferredMode(const unsigned __int8 *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5[0] = a1;
  v5[10] = 1LL;
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v5, (bool)a2);
  if ( (int)result >= 0 )
  {
    if ( *(_WORD *)(v3 + 54) || *(_BYTE *)(v3 + 56) || *(_BYTE *)(v3 + 58) && *(_BYTE *)(v3 + 57) != 0xFD )
    {
      *(_DWORD *)v4 = *(unsigned __int8 *)(v3 + 56) + (*(unsigned __int8 *)(v3 + 58) >> 4 << 8);
      *(_DWORD *)(v4 + 4) = *(unsigned __int8 *)(v3 + 59) + (*(unsigned __int8 *)(v3 + 61) >> 4 << 8);
      *(_BYTE *)(v4 + 8) = *(_BYTE *)(v3 + 71) >> 7;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
