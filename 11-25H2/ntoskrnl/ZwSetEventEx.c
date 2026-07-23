/*
 * XREFs of ZwSetEventEx @ 0x14069E560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetEventEx(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
