/*
 * XREFs of ZwWriteRequestData @ 0x140723ED0
 * Callers:
 *     DifZwWriteRequestDataWrapper @ 0x1406BFEE0 (DifZwWriteRequestDataWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteRequestData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
