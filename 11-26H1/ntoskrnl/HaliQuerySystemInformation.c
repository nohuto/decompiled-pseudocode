/*
 * XREFs of HaliQuerySystemInformation @ 0x140BF38E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerQueryClockSourceType @ 0x1404DA114 (HalpTimerQueryClockSourceType.c)
 *     xKdEnumerateDebuggingDevices @ 0x140532BC0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyDeviceMemory @ 0x14055BC1C (RtlCopyDeviceMemory.c)
 *     HalpTimerQueryWatchdogType @ 0x14057A1A0 (HalpTimerQueryWatchdogType.c)
 *     HalpGetDisplayBiosInformation @ 0x14057AD50 (HalpGetDisplayBiosInformation.c)
 *     HalpDpQueryMaxHotPlugMemoryAddress @ 0x140581418 (HalpDpQueryMaxHotPlugMemoryAddress.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140595210 (HalpQueryNumaRangeTableInformation.c)
 *     HalpHvQueryHyperlaunchEntrypoint @ 0x1405953A4 (HalpHvQueryHyperlaunchEntrypoint.c)
 *     HalpGetHibernateResumePc @ 0x1405A54D4 (HalpGetHibernateResumePc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpGetMcaLog @ 0x140783BBC (HalpGetMcaLog.c)
 *     HalpInterruptQueryControllerInfo @ 0x140783C20 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptGetIrtInfo @ 0x1407840A8 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryPerDeviceMsiLimitInformation @ 0x1407841A4 (HalpQueryPerDeviceMsiLimitInformation.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x140784FAC (HalpQueryIommuReservedRegionInformation.c)
 *     HalpDmaGetRemappingInformation @ 0x140785E30 (HalpDmaGetRemappingInformation.c)
 *     HalpQuerySecondaryInterruptInformation @ 0x140786BE4 (HalpQuerySecondaryInterruptInformation.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407877AC (HalpGetAcpiStaticNumaTopology.c)
 *     HalpQueryHeterogeneousMemoryAttributesInterface @ 0x140787938 (HalpQueryHeterogeneousMemoryAttributesInterface.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140787E24 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPostSleepStats @ 0x140787F1C (HalpQueryPostSleepStats.c)
 *     HalpGetProcessorBrandString @ 0x140788864 (HalpGetProcessorBrandString.c)
 *     HalpAuditQueryResults @ 0x140788B84 (HalpAuditQueryResults.c)
 *     HalpChannelPowerRequest @ 0x140789D80 (HalpChannelPowerRequest.c)
 *     xHalAllocatePmcCounterSet @ 0x140B13680 (xHalAllocatePmcCounterSet.c)
 *     HalpQueryProfileInformation @ 0x140B1B8D8 (HalpQueryProfileInformation.c)
 *     HalpQueryDebuggerInformation @ 0x140C188B0 (HalpQueryDebuggerInformation.c)
 *     HalpQueryChannelTopologyInformation @ 0x140CBB0B8 (HalpQueryChannelTopologyInformation.c)
 */

__int64 __fastcall HaliQuerySystemInformation(
        int a1,
        unsigned int a2,
        __int64 (__fastcall **a3)(unsigned int a1, int a2, __int64 a3, int a4),
        int *a4)
{
  unsigned int PerDeviceMsiLimitInformation; // ebx
  int v9; // edi
  struct _LIST_ENTRY *HibernateResumePc; // rax
  unsigned int SignalState; // edi
  char *Process; // r15
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int HeterogeneousMemoryAttributesInterface; // eax
  unsigned int SecondaryInterruptInformation; // eax
  bool v24; // cc
  int WatchdogType; // eax
  _KWAIT_BLOCK *v27[32]; // [rsp+20h] [rbp-E0h] BYREF

  memset_0(v27, 0, sizeof(v27));
  PerDeviceMsiLimitInformation = 0;
  if ( a4 )
    *a4 = 0;
  if ( a1 > 34 )
  {
    if ( a1 > 47 )
    {
      switch ( a1 )
      {
        case '0':
          return (unsigned int)HalpDmaGetRemappingInformation(a2, a4);
        case '2':
          if ( a2 != 24 )
            return (unsigned int)-1073741820;
          HeterogeneousMemoryAttributesInterface = HalpQueryHeterogeneousMemoryAttributesInterface(a3);
          break;
        case '3':
          if ( a2 < 2 )
            return (unsigned int)-1073741820;
          PerDeviceMsiLimitInformation = HalpQueryPerDeviceMsiLimitInformation(a3);
          if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
            *a4 = 2;
          return PerDeviceMsiLimitInformation;
        case '4':
        case '5':
          return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
        case '8':
          v9 = 8;
          if ( a2 == 8 )
          {
            HibernateResumePc = (struct _LIST_ENTRY *)HalpGetHibernateResumePc();
            goto LABEL_18;
          }
          return (unsigned int)-1073741820;
        case ':':
          v9 = 8;
          if ( a2 == 8 )
          {
            HibernateResumePc = HalpDeviceBlockUnblockPushLock.GlobalForegroundListEntry.Blink;
            goto LABEL_18;
          }
          return (unsigned int)-1073741820;
        case '<':
          if ( a2 < 0x18 )
            return (unsigned int)-1073741820;
          HeterogeneousMemoryAttributesInterface = HalpQueryPostSleepStats(a3);
          break;
        default:
          return (unsigned int)-1073741496;
      }
LABEL_46:
      PerDeviceMsiLimitInformation = HeterogeneousMemoryAttributesInterface;
      if ( HeterogeneousMemoryAttributesInterface >= 0 )
        *a4 = 24;
      return PerDeviceMsiLimitInformation;
    }
    switch ( a1 )
    {
      case '/':
        v9 = 4;
        if ( a2 < 4 )
          return (unsigned int)-1073741820;
        WatchdogType = HalpTimerQueryWatchdogType(a3);
        break;
      case '#':
        Process = (char *)HalpPmuArbiter.ApcState.Process;
        if ( !HalpPmuArbiter.ApcState.Process )
          return (unsigned int)-1073741822;
        SignalState = HalpPmuArbiter.ApcState.Process->Header.SignalState;
        v24 = SignalState <= *(_DWORD *)&HalpPmuArbiter.ApcStateFill[16];
LABEL_61:
        if ( !v24 )
          return (unsigned int)-1073741822;
        if ( a2 < SignalState )
          goto LABEL_21;
LABEL_63:
        if ( !SignalState )
          return PerDeviceMsiLimitInformation;
        goto LABEL_64;
      case '$':
        return (unsigned int)HalpChannelPowerRequest((__int16 *)a3, a2, a4);
      case '%':
        Process = (char *)&off_14000BDC0;
        if ( a2 < 0x10 )
          Process = 0LL;
        SignalState = a2 < 0x10 ? 0 : 0x10;
        PerDeviceMsiLimitInformation = a2 < 0x10 ? 0xC0000004 : 0;
        goto LABEL_63;
      case '\'':
        return (unsigned int)HalpInterruptQueryControllerInfo(a2, a3, a4);
      case '(':
        if ( a2 < 0x10 )
          return (unsigned int)-1073741820;
        PerDeviceMsiLimitInformation = HalpQueryIommuReservedRegionInformation((__int64)a3, a2);
        if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
          *a4 = 16;
        return PerDeviceMsiLimitInformation;
      case '+':
        v9 = 4;
        if ( (HalpPlatformFlags & 4) != 0 )
          return (unsigned int)-1073741637;
        if ( a2 < 4 )
          return (unsigned int)-1073741820;
        WatchdogType = HalpQueryAcpiWakeAlarmSystemPowerState(a3);
        break;
      case ',':
      case '-':
        return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
      case '.':
        SignalState = 8;
        if ( a2 != 8 )
          return (unsigned int)-1073741820;
        Process = (char *)v27;
        v27[0] = (_KWAIT_BLOCK *)HalpHvQueryHyperlaunchEntrypoint();
        goto LABEL_66;
      default:
        return (unsigned int)-1073741496;
    }
    PerDeviceMsiLimitInformation = WatchdogType;
    if ( WatchdogType < 0 )
      return PerDeviceMsiLimitInformation;
    goto LABEL_19;
  }
  if ( a1 == 34 )
  {
    Process = (char *)HalpPmuArbiter.ApcState.ApcListHead[1].Blink;
    if ( !HalpPmuArbiter.ApcState.ApcListHead[1].Blink )
      return (unsigned int)-1073741822;
    SignalState = HIDWORD(HalpPmuArbiter.ApcState.ApcListHead[1].Blink->Flink);
    v24 = SignalState <= *(_DWORD *)&HalpPmuArbiter.ApcStateFill[20];
    goto LABEL_61;
  }
  if ( a1 > 20 )
  {
    v14 = a1 - 23;
    if ( !v14 )
      return (unsigned int)HalpGetProcessorBrandString(a2, (__int64)a3, a4);
    v15 = v14 - 2;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 != 2 )
                    return (unsigned int)-1073741496;
                  return (unsigned int)HalpQueryDebuggerInformation(a3, a2, a4);
                }
                else
                {
                  return (unsigned int)HalpQueryChannelTopologyInformation(a3, a2, a4);
                }
              }
              else
              {
                return (unsigned int)HalpQueryNumaRangeTableInformation(a3, a2, (unsigned int *)a4);
              }
            }
            if ( a2 < 0x18 )
              return (unsigned int)-1073741820;
            HeterogeneousMemoryAttributesInterface = xKdEnumerateDebuggingDevices();
            goto LABEL_46;
          }
          SignalState = 56;
          if ( a2 < 0x38 )
            return (unsigned int)-1073741820;
          Process = (char *)v27;
          SecondaryInterruptInformation = HalpQuerySecondaryInterruptInformation((__int64)v27);
        }
        else
        {
          SignalState = 12;
          if ( a2 < 0xC )
            return (unsigned int)-1073741820;
          Process = (char *)v27;
          SecondaryInterruptInformation = HalpInterruptGetIrtInfo((__int64)v27);
        }
      }
      else
      {
        SignalState = 8;
        if ( a2 < 8 )
          return (unsigned int)-1073741820;
        Process = (char *)v27;
        SecondaryInterruptInformation = HalpAuditQueryResults(v27);
      }
    }
    else
    {
      SignalState = 12;
      if ( a2 < 0xC )
        return (unsigned int)-1073741820;
      Process = (char *)v27;
      SecondaryInterruptInformation = HalpTimerQueryClockSourceType(v27);
    }
    PerDeviceMsiLimitInformation = SecondaryInterruptInformation;
    goto LABEL_66;
  }
  switch ( a1 )
  {
    case 20:
    case 1:
      return (unsigned int)HalpQueryProfileInformation((unsigned int)a1, a2, (__int64)a3, (unsigned int *)a4);
    case 7:
      return (unsigned int)HalpGetMcaLog();
    case 8:
      return (unsigned int)-1073741496;
    case 9:
      Process = (char *)v27;
      SignalState = 4;
      LODWORD(v27[0]) = HalpGetDisplayBiosInformation();
      goto LABEL_64;
  }
  if ( a1 != 11 )
  {
    if ( a1 != 12 )
    {
      if ( a1 != 13 )
      {
        if ( a1 != 16 )
        {
          if ( a1 == 17 )
          {
            v9 = 8;
            if ( a2 == 8 )
            {
              HibernateResumePc = HalpDpQueryMaxHotPlugMemoryAddress();
LABEL_18:
              *a3 = (__int64 (__fastcall *)(unsigned int, int, __int64, int))HibernateResumePc;
LABEL_19:
              *a4 = v9;
              return PerDeviceMsiLimitInformation;
            }
            return (unsigned int)-1073741820;
          }
          return (unsigned int)-1073741496;
        }
        SignalState = 456;
        if ( a2 < 0x1C8 )
        {
LABEL_21:
          *a4 = SignalState;
          return (unsigned int)-1073741820;
        }
        Process = (char *)&BadIOAddrList;
LABEL_66:
        *a4 = SignalState;
        RtlCopyDeviceMemory((char *)a3, Process, SignalState);
        return PerDeviceMsiLimitInformation;
      }
      return (unsigned int)HalpGetMcaLog();
    }
    Process = (char *)v27;
    LODWORD(v27[0]) = *(_DWORD *)a3;
    SignalState = 144;
    PerDeviceMsiLimitInformation = xHalAllocatePmcCounterSet();
LABEL_64:
    if ( a2 < SignalState )
      SignalState = a2;
    goto LABEL_66;
  }
  if ( a2 != 64 )
    return (unsigned int)-1073741820;
  PerDeviceMsiLimitInformation = -1073741496;
  if ( HalpNumaConfig )
  {
    PerDeviceMsiLimitInformation = HalpGetAcpiStaticNumaTopology();
    if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
      *a4 = 64;
  }
  return PerDeviceMsiLimitInformation;
}
