/*
 * XREFs of MiLockPoolCommitWs @ 0x1403642F8
 * Callers:
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1403652A0 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
