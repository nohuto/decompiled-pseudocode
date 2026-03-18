/*
 * XREFs of ?PointerMsgRefTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTERMSGDATA_REFTYPE@@@Z @ 0x140205CFC
 * Callers:
 *     ?UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F3A10 (-UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     ?ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F3E00 (-ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerMsgRefTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( !a1 )
    return "Invalid";
  v1 = a1 - 1;
  if ( !v1 )
    return "Leave";
  v2 = v1 - 1;
  if ( !v2 )
    return "InputQ";
  v3 = v2 - 1;
  if ( !v3 )
    return "QEvent";
  v4 = v3 - 1;
  if ( !v4 )
    return "Thread";
  v5 = v4 - 1;
  if ( !v5 )
    return "Hook";
  v6 = v5 - 1;
  if ( !v6 )
    return "SMS";
  v7 = v6 - 1;
  if ( !v7 )
    return "BWND";
  if ( v7 == 1 )
    return "Guard";
  return "UNKNOWN";
}
