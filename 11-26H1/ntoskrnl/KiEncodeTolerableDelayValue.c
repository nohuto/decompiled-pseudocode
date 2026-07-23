/*
 * XREFs of KiEncodeTolerableDelayValue @ 0x1403B7F44
 * Callers:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1403B5280 (PopFxEnableWorkOrderWatchdog.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403B80D4 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KiEncodeTolerableDelayValue(unsigned int a1)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d
  bool v4; // zf
  char v5; // dl
  char v6; // al
  unsigned int v8; // ebx

  if ( (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline() )
  {
    v2 = a1 / 0x2710;
    if ( (unsigned __int16)(a1 / 0x2710) > 0x3C0u )
      LOWORD(v2) = 960;
    v3 = (unsigned __int16)(2 * (v2 & 0x1FFF));
    v4 = !_BitScanReverse(&v2, v3);
    if ( v4 || v2 < 3 )
    {
      v5 = 0;
    }
    else
    {
      v5 = v2 - 3;
      LOWORD(v3) = (unsigned __int16)v3 >> v5;
    }
    v6 = (unsigned __int16)v3 >> 1;
    if ( v5 )
      v6 = v3;
    return (8 * v5) | v6 & 7;
  }
  else
  {
    v8 = a1 >> 18;
    if ( v8 > 0x3F )
      LOBYTE(v8) = 63;
    return v8;
  }
}
