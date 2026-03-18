/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x14069C260
 * Callers:
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
