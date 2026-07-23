/*
 * XREFs of PrmInvokeHandler @ 0x1406D3F70
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PrmInvokeHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // bl
  unsigned int v5; // edi

  v2 = a2;
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
    v5 = guard_dispatch_icall_no_overrides(a1, v2);
  else
    v5 = -1058143731;
  _InterlockedDecrement((_DWORD *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry.Next + 1);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v5;
}
