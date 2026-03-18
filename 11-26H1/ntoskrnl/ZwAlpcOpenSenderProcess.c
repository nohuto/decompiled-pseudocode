/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x140724510
 * Callers:
 *     DifZwAlpcOpenSenderProcessWrapper @ 0x14069B470 (DifZwAlpcOpenSenderProcessWrapper.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
