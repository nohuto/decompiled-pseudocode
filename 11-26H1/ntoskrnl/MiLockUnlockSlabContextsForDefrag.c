/*
 * XREFs of MiLockUnlockSlabContextsForDefrag @ 0x1407077BC
 * Callers:
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 *     MiEstablishDefragSlabEntries @ 0x140706AC4 (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x1404A0C04 (MiEnumerateSlabAllocatorsEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockUnlockSlabContextsForDefrag(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  unsigned __int64 v8; // rdi

  v3 = a2;
  if ( a2 && !a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 80) = CurrentIrql;
  }
  result = MiEnumerateSlabAllocatorsEx(
             *(_QWORD *)a1,
             (__int64)MiLockSlabAllocator,
             v3,
             *(_DWORD *)(a1 + 68),
             *(_DWORD *)(a1 + 72));
  if ( !(_DWORD)v3 && !a3 )
  {
    v8 = *(unsigned __int8 *)(a1 + 80);
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 80));
    __writecr8(v8);
    *(_BYTE *)(a1 + 80) = 17;
  }
  return result;
}
