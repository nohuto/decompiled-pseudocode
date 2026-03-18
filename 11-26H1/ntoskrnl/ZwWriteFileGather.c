/*
 * XREFs of ZwWriteFileGather @ 0x140723750
 * Callers:
 *     DifZwWriteFileGatherWrapper @ 0x1406BFB10 (DifZwWriteFileGatherWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteFileGather(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
