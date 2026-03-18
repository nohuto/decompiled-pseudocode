/*
 * XREFs of MiUpdateSlabContextSlabSize @ 0x140707AA4
 * Callers:
 *     MmManagePartitionUpdateAttributes @ 0x14087D548 (MmManagePartitionUpdateAttributes.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x1404A0C04 (MiEnumerateSlabAllocatorsEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdateSlabContextSlabSize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v6; // edi

  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiEnumerateSlabAllocatorsEx(a1, (__int64)MiLockSlabAllocator, 1LL, 0xFFFFFFFF, 8u);
  if ( (unsigned int)MiEnumerateSlabAllocatorsEx(a1, (__int64)MiCheckSlabAllocatorEmpty, 0LL, 0xFFFFFFFF, 8u) )
  {
    v6 = -1073741791;
  }
  else
  {
    MiEnumerateSlabAllocatorsEx(a1, (__int64)MiSetSlabAllocatorSlabSize, v3, 0xFFFFFFFF, 8u);
    v6 = 0;
  }
  MiEnumerateSlabAllocatorsEx(a1, (__int64)MiLockSlabAllocator, 0LL, 0xFFFFFFFF, 8u);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v6;
}
