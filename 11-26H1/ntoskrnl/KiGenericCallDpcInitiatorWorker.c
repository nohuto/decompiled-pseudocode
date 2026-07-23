/*
 * XREFs of KiGenericCallDpcInitiatorWorker @ 0x1403CC2F0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireDpcCorralLock @ 0x1403CC370 (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x1403CC3E8 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x1403CC4D0 (KiReleaseDpcCorralLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGenericCallDpcInitiatorWorker(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl

  KiAcquireDpcCorralLock();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v2, 2LL);
  }
  KiInitiateGenericCallDpc(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return KiReleaseDpcCorralLock();
}
