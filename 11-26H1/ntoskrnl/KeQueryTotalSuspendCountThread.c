/*
 * XREFs of KeQueryTotalSuspendCountThread @ 0x1404CF3A0
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryTotalSuspendCountThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // esi

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v6 = (volatile signed __int32 *)(v3 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v3 + 736), v5, a3);
  v7 = *(_DWORD *)(v3 + 120);
  v8 = *(char *)(v3 + 644);
  v9 = v8 + 1;
  if ( (v7 & 0x4000) == 0 )
    v9 = v8;
  _InterlockedAnd(v6, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
