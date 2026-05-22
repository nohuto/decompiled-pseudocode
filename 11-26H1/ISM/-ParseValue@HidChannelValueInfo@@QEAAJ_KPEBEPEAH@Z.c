/*
 * XREFs of ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x180098BB0
 * Callers:
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x180082430 (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 *     ?ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800EDB8C (-ParseInputBufferForReport@HidLampArrayAttributesReportParser@@QEAAJPEBEIPEAULampArrayAttributes.c)
 * Callees:
 *     ?InternalParseValue@HidChannelValueInfo@@AEAAI_KPEBE@Z @ 0x18007D998 (-InternalParseValue@HidChannelValueInfo@@AEAAI_KPEBE@Z.c)
 */

__int64 __fastcall HidChannelValueInfo::ParseValue(
        HidChannelValueInfo *this,
        unsigned __int64 a2,
        const unsigned __int8 *a3,
        int *a4)
{
  unsigned int v4; // eax
  unsigned int *v5; // r10
  __int64 v6; // r11

  v4 = HidChannelValueInfo::InternalParseValue(this, a2, a3);
  if ( v4 < *(__int64 *)(v6 + 24) || v4 > *(__int64 *)(v6 + 32) )
  {
    *v5 = 0;
    return 2147942487LL;
  }
  else
  {
    *v5 = v4;
    return 0LL;
  }
}
