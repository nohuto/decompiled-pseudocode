/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140AECC80
 * Callers:
 *     MiInSwapStore @ 0x140AEC480 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x140AECA90 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
