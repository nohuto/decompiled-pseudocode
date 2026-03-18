/*
 * XREFs of ZwLockProductActivationKeys @ 0x140725690
 * Callers:
 *     DifZwLockProductActivationKeysWrapper @ 0x1406A96B0 (DifZwLockProductActivationKeysWrapper.c)
 *     ExInitializeTimeRefresh @ 0x140CE3D60 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockProductActivationKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
