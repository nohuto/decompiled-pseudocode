/*
 * XREFs of ZwCreateWaitablePort @ 0x140724E50
 * Callers:
 *     DifZwCreateWaitablePortWrapper @ 0x1406A3550 (DifZwCreateWaitablePortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWaitablePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
