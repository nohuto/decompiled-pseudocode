/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x1405F0BC8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAdjustTimerDueTimes @ 0x1403E84DC (KiAdjustTimerDueTimes.c)
 *     KiSelectActiveTimerTable @ 0x140466620 (KiSelectActiveTimerTable.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  signed __int64 active; // rdi
  unsigned __int8 CurrentIrql; // bl
  char v6; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+21h] [rbp-37h]
  char v8; // [rsp+23h] [rbp-35h]
  int v9; // [rsp+24h] [rbp-34h]
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  char v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+41h] [rbp-17h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v7 = 0;
  v8 = 0;
  v13 = 0;
  if ( KiSerializeTimerExpiration )
  {
    result = (unsigned int)KeTimerRebaseThresholdOnDripsExit;
    v3 = a2 - KiClockTimerOneShotStartTime;
    if ( v3 > 10000000LL * (unsigned int)KeTimerRebaseThresholdOnDripsExit )
    {
      KiAccumulatedDeepSleepTimerRebasing += v3;
      *(_QWORD *)(MmWriteableSharedUserData + 944) += v3;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v6 = 1;
      v11 = -v3;
      v9 = 0;
      v12 = 1;
      v10 = 0LL;
      active = KiSelectActiveTimerTable(a1, 0);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), active, (__int64)&v6);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
