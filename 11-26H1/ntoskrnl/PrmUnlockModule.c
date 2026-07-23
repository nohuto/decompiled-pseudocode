/*
 * XREFs of PrmUnlockModule @ 0x1406D41B0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PrmUnlockModule(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v4; // edi

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
  }
  _InterlockedIncrement((_DWORD *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry.Next + 1);
  if ( LODWORD(ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry.Next) == 2 )
    v4 = guard_dispatch_icall_no_overrides(a1, a2);
  else
    v4 = -1058143731;
  _InterlockedDecrement((_DWORD *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry.Next + 1);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v4;
}
