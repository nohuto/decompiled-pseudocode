/*
 * XREFs of ZwConnectPort @ 0x14069C5C0
 * Callers:
 *     DifZwConnectPortWrapper @ 0x1406312A0 (DifZwConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
