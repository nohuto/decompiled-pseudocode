/*
 * XREFs of HalConfigureAdapterChannel @ 0x1404D5890
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalConfigureAdapterChannel(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bl
  char v4; // bp
  unsigned __int64 v5; // rdx
  KSPIN_LOCK *v6; // rsi
  unsigned int v7; // edi

  v1 = *(_QWORD *)(a1 + 368);
  v2 = a1;
  if ( !*(_QWORD *)(v1 + 112) )
    return 3221225474LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0;
  if ( CurrentIrql == 15 )
  {
    v6 = (KSPIN_LOCK *)(v1 + 168);
  }
  else
  {
    v5 = *(unsigned __int8 *)(v1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v5 )
      __writecr8(v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v5);
    }
    v6 = (KSPIN_LOCK *)(v1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 168));
    v4 = 1;
  }
  v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 64), *(unsigned int *)(v2 + 380));
  if ( v4 )
  {
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
