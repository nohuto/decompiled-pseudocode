/*
 * XREFs of ZwQuerySystemInformationEx @ 0x14069DF00
 * Callers:
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformationEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
