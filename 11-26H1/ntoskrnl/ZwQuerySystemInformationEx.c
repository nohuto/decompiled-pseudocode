/*
 * XREFs of ZwQuerySystemInformationEx @ 0x1407261D0
 * Callers:
 *     DifZwQuerySystemInformationExWrapper @ 0x1406B44D0 (DifZwQuerySystemInformationExWrapper.c)
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformationEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
