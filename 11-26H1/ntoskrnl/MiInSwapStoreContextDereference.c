/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140AEA190
 * Callers:
 *     MiInSwapStore @ 0x140AE9990 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x140AE9FA0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
