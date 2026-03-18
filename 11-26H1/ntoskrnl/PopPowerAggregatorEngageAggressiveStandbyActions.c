/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B451B0
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077A360 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x140B45340 (PopPdcEngagePhases.c)
 *     PopIsRemoteDesktopEnabled @ 0x140B4536C (PopIsRemoteDesktopEnabled.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorEngageAggressiveStandbyActions(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // esi
  unsigned __int8 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char IsRemoteDesktopEnabled; // r15
  char v9; // di
  char v10; // r14
  int v11; // ecx
  bool v12; // al
  __int64 v14; // [rsp+20h] [rbp-28h]

  v2 = a1;
  v3 = 58;
  PopAcquirePolicyLock(a1, a2);
  v4 = stru_140F0C428.WaitBlockFill7[121];
  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v9 = dword_140F10718;
  v10 = 0;
  if ( !dword_140F10718 || v2 )
  {
    PopNetSetConnectivityConstraint(1);
    v10 = 1;
    v3 = (v2 != 0 ? 26 : 58) & 0xFFFFFFF7;
    if ( v2 )
    {
LABEL_17:
      v3 &= 0xFFFFFFED;
      dword_140F10F10 ^= (LODWORD(stru_140F10828.SavedApcState.ApcListHead[0].Flink) ^ dword_140F10F10) & 1;
      goto LABEL_18;
    }
LABEL_16:
    if ( dword_140F1071C != 1 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( PopEnforceDisconnectedStandby )
  {
    v11 = 2;
LABEL_5:
    v10 = 1;
    PopNetSetConnectivityConstraint(v11);
    v3 = 50;
    goto LABEL_16;
  }
  if ( dword_140F10718 == 2 )
  {
    v12 = v4 != 0;
    if ( !IsRemoteDesktopEnabled )
      goto LABEL_13;
    if ( dword_140E67780 == 1 )
      v12 = 1;
    if ( dword_140F106CC || dword_140E67774 != 1 && dword_140E67778 != 1 )
    {
LABEL_13:
      if ( !v12 )
      {
        v11 = 7;
        goto LABEL_5;
      }
    }
  }
LABEL_18:
  PopIdleWakeSkippingEnabled = 0;
  dword_140F10F10 ^= (stru_140F10828.SavedApcStateFill[0] ^ (unsigned __int8)dword_140F10F10) & 4;
  KeTimerRebaseThresholdOnDripsExit = PopTimerRebaseThresholdRegValue;
  if ( v10 )
    HIBYTE(word_140E27018) |= 2u;
  if ( IsRemoteDesktopEnabled )
    HIBYTE(word_140E27018) |= 8u;
  if ( v4 )
    HIBYTE(word_140E27018) |= 0x10u;
  dword_140E26F64 = PopTimerRebaseThresholdRegValue;
  HIBYTE(word_140E27018) = HIBYTE(word_140E27018) & 0x9F | (32 * (v9 & 3));
  dword_140E27060 = 0;
  PopReleasePolicyLock((unsigned int)PopTimerRebaseThresholdRegValue, v5, v6, v7, v14);
  return PopPdcEngagePhases(v3);
}
