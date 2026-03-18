/*
 * XREFs of ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x14009DCD0
 * Callers:
 *     ?GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x140280D00 (-GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoIn.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorDigitalVideoInputParams(
        unsigned __int8 *a1,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  __int64 result; // rax
  unsigned int v4; // r11d
  char v5; // cl
  _QWORD v6[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v6, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v5 = *(_BYTE *)(v6[0] + 20LL);
    if ( v5 >= 0 )
      return (unsigned int)-1073741275;
    else
      a2->IsDFP1xCompatible = v5 & 1;
    return v4;
  }
  return result;
}
