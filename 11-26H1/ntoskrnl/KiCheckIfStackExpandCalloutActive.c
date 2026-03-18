/*
 * XREFs of KiCheckIfStackExpandCalloutActive @ 0x1402038B0
 * Callers:
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall KiCheckIfStackExpandCalloutActive(ULONG_PTR BugCheckParameter1)
{
  if ( (*(_BYTE *)(BugCheckParameter1 + 125) & 1) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
}
