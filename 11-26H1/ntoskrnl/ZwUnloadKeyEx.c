/*
 * XREFs of ZwUnloadKeyEx @ 0x140726F90
 * Callers:
 *     DifZwUnloadKeyExWrapper @ 0x1406BE270 (DifZwUnloadKeyExWrapper.c)
 *     PiDrvDbUnloadHive @ 0x140B1F12C (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
