/*
 * XREFs of MiBalanceSetThread @ 0x1406F5170
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 */

NTSTATUS __fastcall MiBalanceSetThread(__int64 a1)
{
  NTSTATUS result; // eax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  Object[0] = (PVOID)(a1 + 88);
  Object[1] = (PVOID)(a1 + 112);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      break;
    if ( result == 1 )
      MiPartitionPeriodicTick(a1);
  }
  return result;
}
