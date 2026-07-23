/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x140775100
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     ExpPartitionCreatePool @ 0x14077511C (ExpPartitionCreatePool.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(__int64 a1, __int64 a2, __int64 a3)
{
  return ExpPartitionCreatePool(*(_QWORD *)(a2 + 16), a2, a3, a1);
}
