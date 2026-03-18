/*
 * XREFs of ZwConnectPort @ 0x140724870
 * Callers:
 *     DifZwConnectPortWrapper @ 0x14069D9D0 (DifZwConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
