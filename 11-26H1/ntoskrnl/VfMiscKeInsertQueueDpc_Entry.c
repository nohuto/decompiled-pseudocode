/*
 * XREFs of VfMiscKeInsertQueueDpc_Entry @ 0x140C3CDE0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404FD268 (VfMiscCheckKernelAddress.c)
 */

__int64 __fastcall VfMiscKeInsertQueueDpc_Entry(__int64 a1)
{
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 24), 0x40uLL, *(_QWORD *)a1);
}
