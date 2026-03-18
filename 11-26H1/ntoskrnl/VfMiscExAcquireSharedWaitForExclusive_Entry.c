/*
 * XREFs of VfMiscExAcquireSharedWaitForExclusive_Entry @ 0x140C3C870
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceAcquire @ 0x140C3E2F0 (ViMiscCheckResourceAcquire.c)
 */

__int64 __fastcall VfMiscExAcquireSharedWaitForExclusive_Entry(__int64 a1)
{
  return ViMiscCheckResourceAcquire(*(_QWORD *)(a1 + 16));
}
