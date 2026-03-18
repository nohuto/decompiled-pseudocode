/*
 * XREFs of MiDereferenceEnclaveModule @ 0x140876560
 * Callers:
 *     MiFreeEnclaveModules @ 0x140773CE8 (MiFreeEnclaveModules.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
