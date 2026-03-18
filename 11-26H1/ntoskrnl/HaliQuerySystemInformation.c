/*
 * XREFs of HaliQuerySystemInformation @ 0x140BED8E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerQueryClockSourceType @ 0x1404E0A34 (HalpTimerQueryClockSourceType.c)
 *     xKdEnumerateDebuggingDevices @ 0x1405306C0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyDeviceMemory @ 0x14055978C (RtlCopyDeviceMemory.c)
 *     HalpTimerQueryWatchdogType @ 0x140577C70 (HalpTimerQueryWatchdogType.c)
 *     HalpGetDisplayBiosInformation @ 0x140578820 (HalpGetDisplayBiosInformation.c)
 *     HalpDpQueryMaxHotPlugMemoryAddress @ 0x14057EEF8 (HalpDpQueryMaxHotPlugMemoryAddress.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140592A90 (HalpQueryNumaRangeTableInformation.c)
 *     HalpHvQueryHyperlaunchEntrypoint @ 0x140592C24 (HalpHvQueryHyperlaunchEntrypoint.c)
 *     HalpGetHibernateResumePc @ 0x1405A2CC4 (HalpGetHibernateResumePc.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpGetMcaLog @ 0x1407810BC (HalpGetMcaLog.c)
 *     HalpInterruptQueryControllerInfo @ 0x140781120 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptGetIrtInfo @ 0x1407815A8 (HalpInterruptGetIrtInfo.c)
 *     HalpQueryPerDeviceMsiLimitInformation @ 0x1407816A4 (HalpQueryPerDeviceMsiLimitInformation.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1407824AC (HalpQueryIommuReservedRegionInformation.c)
 *     HalpDmaGetRemappingInformation @ 0x1407832FC (HalpDmaGetRemappingInformation.c)
 *     HalpQuerySecondaryInterruptInformation @ 0x1407840B0 (HalpQuerySecondaryInterruptInformation.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140784C78 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpQueryHeterogeneousMemoryAttributesInterface @ 0x140784E08 (HalpQueryHeterogeneousMemoryAttributesInterface.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1407852F4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpQueryPostSleepStats @ 0x1407853EC (HalpQueryPostSleepStats.c)
 *     HalpGetProcessorBrandString @ 0x140785D34 (HalpGetProcessorBrandString.c)
 *     HalpAuditQueryResults @ 0x140786054 (HalpAuditQueryResults.c)
 *     HalpChannelPowerRequest @ 0x140787250 (HalpChannelPowerRequest.c)
 *     xHalAllocatePmcCounterSet @ 0x140B11900 (xHalAllocatePmcCounterSet.c)
 *     HalpQueryProfileInformation @ 0x140B19488 (HalpQueryProfileInformation.c)
 *     HalpQueryDebuggerInformation @ 0x140C128B0 (HalpQueryDebuggerInformation.c)
 *     HalpQueryChannelTopologyInformation @ 0x140CB5078 (HalpQueryChannelTopologyInformation.c)
 */

__int64 __fastcall HaliQuerySystemInformation(
        int a1,
        unsigned int a2,
        __int64 (__fastcall **a3)(unsigned int a1, int a2, __int64 a3, int a4),
        int *a4)
{
  unsigned int PerDeviceMsiLimitInformation; // ebx
  int v9; // edi
  __int64 HibernateResumePc; // rax
  unsigned int Flink_high; // edi
  char *Blink; // r15
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
            HibernateResumePc = (__int64)HalpGetHibernateResumePc();
            goto LABEL_18;
          }
          return (unsigned int)-1073741820;
        case ':':
          v9 = 8;
          if ( a2 == 8 )
          {
            HibernateResumePc = HalpDeviceBlockUnblockPushLock.WriteTransferCount;
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
        Blink = (char *)HalpPmuArbiter.ApcState.ApcListHead[1].Blink;
        if ( !HalpPmuArbiter.ApcState.ApcListHead[1].Blink )
          return (unsigned int)-1073741822;
        Flink_high = HIDWORD(HalpPmuArbiter.ApcState.ApcListHead[1].Blink->Flink);
        v24 = Flink_high <= *(_DWORD *)&HalpPmuArbiter.ApcStateFill[16];
LABEL_61:
        if ( !v24 )
          return (unsigned int)-1073741822;
        if ( a2 < Flink_high )
          goto LABEL_21;
LABEL_63:
        if ( !Flink_high )
          return PerDeviceMsiLimitInformation;
        goto LABEL_64;
      case '$':
        return (unsigned int)HalpChannelPowerRequest((__int16 *)a3, a2, a4);
      case '%':
        Blink = (char *)&off_14000BC80;
        if ( a2 < 0x10 )
          Blink = 0LL;
        Flink_high = a2 < 0x10 ? 0 : 0x10;
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
        Flink_high = 8;
        if ( a2 != 8 )
          return (unsigned int)-1073741820;
        Blink = (char *)v27;
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
    Blink = *(char **)&HalpPmuArbiter.ApcStateFill[40];
    if ( !*(_QWORD *)&HalpPmuArbiter.ApcStateFill[40] )
      return (unsigned int)-1073741822;
    Flink_high = *(_DWORD *)(*(_QWORD *)&HalpPmuArbiter.ApcStateFill[40] + 4LL);
    v24 = Flink_high <= *(_DWORD *)&HalpPmuArbiter.ApcStateFill[32];
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
          Flink_high = 56;
          if ( a2 < 0x38 )
            return (unsigned int)-1073741820;
          Blink = (char *)v27;
          SecondaryInterruptInformation = HalpQuerySecondaryInterruptInformation((__int64)v27);
        }
        else
        {
          Flink_high = 12;
          if ( a2 < 0xC )
            return (unsigned int)-1073741820;
          Blink = (char *)v27;
          SecondaryInterruptInformation = HalpInterruptGetIrtInfo((__int64)v27);
        }
      }
      else
      {
        Flink_high = 8;
        if ( a2 < 8 )
          return (unsigned int)-1073741820;
        Blink = (char *)v27;
        SecondaryInterruptInformation = HalpAuditQueryResults(v27);
      }
    }
    else
    {
      Flink_high = 12;
      if ( a2 < 0xC )
        return (unsigned int)-1073741820;
      Blink = (char *)v27;
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
      Blink = (char *)v27;
      Flink_high = 4;
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
              HibernateResumePc = (__int64)HalpDpQueryMaxHotPlugMemoryAddress();
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
        Flink_high = 456;
        if ( a2 < 0x1C8 )
        {
LABEL_21:
          *a4 = Flink_high;
          return (unsigned int)-1073741820;
        }
        Blink = (char *)&BadIOAddrList;
LABEL_66:
        *a4 = Flink_high;
        RtlCopyDeviceMemory((char *)a3, Blink, Flink_high);
        return PerDeviceMsiLimitInformation;
      }
      return (unsigned int)HalpGetMcaLog();
    }
    Blink = (char *)v27;
    LODWORD(v27[0]) = *(_DWORD *)a3;
    Flink_high = 144;
    PerDeviceMsiLimitInformation = xHalAllocatePmcCounterSet();
LABEL_64:
    if ( a2 < Flink_high )
      Flink_high = a2;
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
