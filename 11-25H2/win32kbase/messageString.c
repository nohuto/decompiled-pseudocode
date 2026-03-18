/*
 * XREFs of messageString @ 0x140108E1C
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     <none>
 */

const char *__fastcall messageString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx

  if ( a1 <= 0x24B )
  {
    if ( a1 == 587 )
      return "WM_POINTERACTIVATE";
    v1 = a1 - 581;
    if ( !v1 )
      return "WM_POINTERUPDATE";
    v3 = v1 - 1;
    if ( !v3 )
      return "WM_POINTER_DOWN";
    v4 = v3 - 1;
    if ( !v4 )
      return "WM_POINTERUP";
    v5 = v4 - 2;
    if ( !v5 )
      return "WM_POINTERENTER";
    if ( v5 == 1 )
      return "WM_POINTERLEAVE";
    return (const char *)&unk_14025EF20;
  }
  v6 = a1 - 588;
  if ( !v6 )
    return "WM_POINTERCAPTURECHANGED";
  v7 = v6 - 5;
  if ( !v7 )
    return "WM_POINTERROUTEDTO";
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
      return "WM_POINTERROUTEDRELEASED";
    return (const char *)&unk_14025EF20;
  }
  return "WM_POINTERROUTEDAWAY";
}
