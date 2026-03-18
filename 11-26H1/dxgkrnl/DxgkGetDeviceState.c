/*
 * XREFs of DxgkGetDeviceState @ 0x14036A440
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall DxgkGetDeviceState(void *Src)
{
  PsGetCurrentThreadPreviousMode();
  return DxgkGetDeviceStateInternal(Src);
}
