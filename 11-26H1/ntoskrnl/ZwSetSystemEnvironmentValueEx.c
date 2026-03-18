/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x140726B70
 * Callers:
 *     DifZwSetSystemEnvironmentValueExWrapper @ 0x1406BBAA0 (DifZwSetSystemEnvironmentValueExWrapper.c)
 *     BiDeleteEfiVariable @ 0x1409D1B5C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
