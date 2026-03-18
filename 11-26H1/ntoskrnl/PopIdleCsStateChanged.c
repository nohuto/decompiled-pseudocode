/*
 * XREFs of PopIdleCsStateChanged @ 0x1407DA1D0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopGetModernStandbyTransitionReason @ 0x1404F02A8 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned int ModernStandbyTransitionReason; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  LOBYTE(stru_140F0F620.Padding[1]) = v2;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v2 )
  {
    stru_140F0F620.Padding[2] = qword_140E26F48;
    if ( !qword_140E26F48 )
      stru_140F0F620.Padding[2] = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
      LODWORD(stru_140F0F620.KcsanThread) = 0;
    stru_140F0F620.Padding[2] = 0LL;
  }
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
