/*
 * XREFs of VidMmFlushAsyncOperations @ 0x14004D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall VidMmFlushAsyncOperations(__int64 a1)
{
  return KeWaitForSingleObject((PVOID)(a1 + 44888), Executive, 0, 0, 0LL);
}
