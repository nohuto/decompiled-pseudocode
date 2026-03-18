/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x14069E8A0
 * Callers:
 *     BiDeleteEfiVariable @ 0x140A25CC8 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
