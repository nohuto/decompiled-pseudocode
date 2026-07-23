/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B46EB0
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077D290 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x140B47040 (PopPdcEngagePhases.c)
 *     PopIsRemoteDesktopEnabled @ 0x140B4706C (PopIsRemoteDesktopEnabled.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorEngageAggressiveStandbyActions(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // esi
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char IsRemoteDesktopEnabled; // r15
  char InGlobalForegroundList; // di
  char v10; // r14
  int v11; // ecx
  bool v12; // al
  __int64 v14; // [rsp+20h] [rbp-28h]

  v2 = a1;
  v3 = 58;
  PopAcquirePolicyLock(a1, a2);
  v4 = PopPdcDeviceListLock.Spare35[1];
  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  InGlobalForegroundList = PpmIdlePolicyLock.InGlobalForegroundList;
  v10 = 0;
  if ( !LODWORD(PpmIdlePolicyLock.InGlobalForegroundList) || v2 )
  {
    PopNetSetConnectivityConstraint(1);
    v10 = 1;
    v3 = (v2 != 0 ? 26 : 58) & 0xFFFFFFF7;
    if ( v2 )
    {
LABEL_17:
      v3 &= 0xFFFFFFED;
      PopAggressiveStandbyAppliedActions ^= (PopAggressiveStandbyEnabledActions ^ PopAggressiveStandbyAppliedActions) & 1;
      goto LABEL_18;
    }
LABEL_16:
    if ( HIDWORD(PpmIdlePolicyLock.InGlobalForegroundList) != 1 )
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
  if ( LODWORD(PpmIdlePolicyLock.InGlobalForegroundList) == 2 )
  {
    v12 = v4 != 0;
    if ( !IsRemoteDesktopEnabled )
      goto LABEL_13;
    if ( dword_140E679F8 == 1 )
      v12 = 1;
    if ( HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) || dword_140E679EC != 1 && dword_140E679F0 != 1 )
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
  PopAggressiveStandbyAppliedActions ^= ((unsigned __int8)PopAggressiveStandbyEnabledActions ^ (unsigned __int8)PopAggressiveStandbyAppliedActions) & 4;
  KeTimerRebaseThresholdOnDripsExit = PopTimerRebaseThresholdRegValue;
  if ( v10 )
    HIBYTE(word_140E27158) |= 2u;
  if ( IsRemoteDesktopEnabled )
    HIBYTE(word_140E27158) |= 8u;
  if ( v4 )
    HIBYTE(word_140E27158) |= 0x10u;
  dword_140E270A4 = PopTimerRebaseThresholdRegValue;
  HIBYTE(word_140E27158) = HIBYTE(word_140E27158) & 0x9F | (32 * (InGlobalForegroundList & 3));
  dword_140E271A0 = 0;
  PopReleasePolicyLock((unsigned int)PopTimerRebaseThresholdRegValue, v5, v6, v7, v14);
  return PopPdcEngagePhases(v3);
}
