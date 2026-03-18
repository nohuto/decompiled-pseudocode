/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Pointer@1@@Z @ 0x140214DCC
 * Callers:
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14010D3F8 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "Suppressed";
  v1 = a1 - 1;
  if ( !v1 )
    return "NoPointerFlags";
  v2 = v1 - 1;
  if ( !v2 )
    return "CreateNodeFailed";
  v3 = v2 - 1;
  if ( !v3 )
    return "PointerTypeChanged";
  v4 = v3 - 1;
  if ( !v4 )
    return "InvalidStateTransition";
  v5 = v4 - 1;
  if ( !v5 )
    return "HitTestFailed";
  v6 = v5 - 1;
  if ( !v6 )
    return "UIPI";
  if ( v6 == 1 )
    return "VirtualPTP";
  return "UNKNOWN";
}
