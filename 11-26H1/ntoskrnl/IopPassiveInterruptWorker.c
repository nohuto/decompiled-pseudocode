/*
 * XREFs of IopPassiveInterruptWorker @ 0x1402C4E20
 * Callers:
 *     <none>
 * Callees:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x1402C4F6C (IopReleasePassiveInterruptBlockLock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1402C4FA4 (IopDereferencePassiveInterruptBlock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140AABB14 (IopAcquireReleaseDispatcherLock.c)
 */

__int64 __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // r8
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-38h] BYREF

  LOBYTE(a2) = 1;
  PreviousAffinity = 0LL;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = 12;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, v3);
    }
    KxAcquireSpinLock((PKSPIN_LOCK)P + 7);
    LOBYTE(v6) = CurrentIrql;
    if ( !P[65] )
      break;
    P[65] = 0;
    IopReleasePassiveInterruptBlockLock(P, v6);
    if ( *((_DWORD *)P + 8) == 1 && !P[28] )
      guard_dispatch_icall_no_overrides(*((unsigned int *)P + 6), 2LL, v9);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0LL, 0LL);
  }
  P[64] = 0;
  IopReleasePassiveInterruptBlockLock(P, v6);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    guard_dispatch_icall_no_overrides(*((unsigned int *)P + 6), 2LL, v7);
  return IopDereferencePassiveInterruptBlock(P);
}
