/*
 * XREFs of MiLockPoolCommitWs @ 0x140366098
 * Callers:
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockPoolCommitWs(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rcx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v3 = *(_QWORD *)(v1 + 72);
  *(_BYTE *)(v1 + 103) = CurrentIrql;
  return MiLockWorkingSetSharedAtDpc(v3);
}
