/*
 * XREFs of ESM_ShouldQueueWorkItem @ 0x14002ECC8
 * Callers:
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1400215A0 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 * Callees:
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x140041D0C (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 */

char __fastcall ESM_ShouldQueueWorkItem(__int64 a1, char a2)
{
  _QWORD *v2; // r14
  char v5; // bl

  v2 = *(_QWORD **)(a1 + 960);
  v5 = 0;
  if ( KeGetCurrentIrql()
    && (a2 || *(_BYTE *)(a1 + 1018) && !(unsigned __int8)Controller_IsRunningWithIrqlRaisedAndTracked(*v2)) )
  {
    return 1;
  }
  return v5;
}
