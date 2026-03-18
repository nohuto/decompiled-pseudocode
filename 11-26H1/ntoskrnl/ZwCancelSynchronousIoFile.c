/*
 * XREFs of ZwCancelSynchronousIoFile @ 0x140724690
 * Callers:
 *     DifZwCancelSynchronousIoFileWrapper @ 0x14069C950 (DifZwCancelSynchronousIoFileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCancelSynchronousIoFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
