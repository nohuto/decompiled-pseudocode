/*
 * XREFs of ZwLoadKeyEx @ 0x140725650
 * Callers:
 *     DifZwLoadKeyExWrapper @ 0x1406A9180 (DifZwLoadKeyExWrapper.c)
 *     PiDrvDbLoadHive @ 0x140B1F060 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKeyEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
