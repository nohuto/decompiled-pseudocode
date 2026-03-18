/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x140726B50
 * Callers:
 *     DifZwSetSystemEnvironmentValueWrapper @ 0x1406BBC40 (DifZwSetSystemEnvironmentValueWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
