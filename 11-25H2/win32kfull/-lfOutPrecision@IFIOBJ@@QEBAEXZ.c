/*
 * XREFs of ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x140106A74
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x140105190 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     vIFIMetricsToLogFontW @ 0x140304B4C (vIFIMetricsToLogFontW.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IFIOBJ::lfOutPrecision(IFIOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_QWORD *)this + 48LL);
  if ( (v1 & 1) != 0 )
    return 8;
  if ( (v1 & 2) != 0 )
    return 6;
  if ( (v1 & 4) != 0 )
    return 3;
  return v1 & 8;
}
