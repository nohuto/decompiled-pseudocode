/*
 * XREFs of ZwQueryInformationByName @ 0x140725E70
 * Callers:
 *     DifZwQueryInformationByNameWrapper @ 0x1406B0EC0 (DifZwQueryInformationByNameWrapper.c)
 *     SdbpGetFileTimestamp @ 0x140880F74 (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationByName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
