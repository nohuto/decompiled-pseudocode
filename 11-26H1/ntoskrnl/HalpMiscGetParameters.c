/*
 * XREFs of HalpMiscGetParameters @ 0x140CB5644
 * Callers:
 *     HalpMiscInitSystem @ 0x140BF13F0 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     atoi @ 0x1405381E0 (atoi.c)
 *     HalpInterruptForceClusterMode @ 0x14057F83C (HalpInterruptForceClusterMode.c)
 *     HalpInterruptSetMsiOverride @ 0x14057FFBC (HalpInterruptSetMsiOverride.c)
 *     HalpIsPartitionCpuManager @ 0x140587720 (HalpIsPartitionCpuManager.c)
 *     HalpIsXboxNanovisorPresent @ 0x14058778C (HalpIsXboxNanovisorPresent.c)
 *     HalpProcIsSmtDisabled @ 0x140CB5508 (HalpProcIsSmtDisabled.c)
 */

char __fastcall HalpMiscGetParameters(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rdi
  char *v4; // rax
  char v5; // cl
  int v6; // eax
  char *v7; // rax
  char v8; // cl
  int v9; // eax
  char v10; // cl
  char *v16; // rax
  char v17; // cl
  unsigned __int8 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)HalpInterruptModel() == 1 )
    BYTE2(HalpDeviceBlockUnblockPushLock.Timer.DueTime.u.LowPart) = 1;
  LOBYTE(v2) = HalpProcIsSmtDisabled(a1);
  HalpInterruptBlockHyperthreading = v2;
  if ( a1 )
  {
    if ( (_BYTE)v2 && (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x200) == 0 )
      HalpInterruptStartHyperthreadSiblings = 1;
    v3 = *(const char **)(a1 + 216);
    if ( !v3 )
      goto LABEL_77;
    strstr(*(const char **)(a1 + 216), "SAFEBOOT:");
    if ( strstr(v3, "ONECPU") )
      HalpInterruptProcessorCap = 1;
    if ( strstr(v3, "USEPHYSICALAPIC") )
      HalpInterruptPhysicalModeOnly = 1;
    if ( strstr(v3, "BREAK") )
      BYTE1(HalpDeviceBlockUnblockPushLock.Timer.DueTime.LowPart) = 1;
    v4 = strstr(v3, "MAXPROCSPERCLUSTER");
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( !*v4 || v5 == 32 || (unsigned __int8)(v5 - 48) <= 9u )
          break;
        ++v4;
      }
      v6 = atoi(v4);
      HalpInterruptForceClusterMode(v6);
    }
    v7 = strstr(v3, "MAXAPICCLUSTER");
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( !*v7 || v8 == 32 || (unsigned __int8)(v8 - 48) <= 9u )
          break;
        ++v7;
      }
      v9 = atoi(v7);
      if ( v9 )
        LODWORD(HalpInterruptMaxCluster) = v9;
    }
    if ( strstr(v3, "X2APICPOLICY=ENABLE") )
      HalpInterruptX2ApicPolicy = 1;
    if ( strstr(v3, "X2APICPOLICY=DISABLE") )
      HalpInterruptX2ApicPolicy = 0;
    if ( strstr(v3, "USELEGACYAPICMODE") )
      HalpInterruptX2ApicPolicy = 0;
    if ( strstr(v3, "SYSTEMWATCHDOGPOLICY=DISABLED") )
    {
      HalpTimerWatchdogDisable = 1;
    }
    else if ( strstr(v3, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
    {
      HalpTimerWatchdogPhysicalOnly = 1;
    }
    if ( strstr(v3, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
      HalpAvoidMmConfigAccessMethod = 1;
    if ( strstr(v3, "MSIPOLICY=FORCEDISABLE") )
    {
      v10 = 0;
    }
    else
    {
      if ( !strstr(v3, "FORCEMSI") )
      {
LABEL_46:
        if ( !HalpIsHvPresent() )
          goto LABEL_52;
        HalpHvPresent = 1;
        if ( HalpIsPartitionCpuManager() )
          HalpHvCpuManager = 1;
        if ( HalpIsMicrosoftCompatibleHvLoaded() )
        {
          _RAX = 1073741828LL;
          __asm { cpuid }
          if ( (_RAX & 0x10) == 0 )
          {
LABEL_54:
            if ( HalpHvCpuManager )
            {
              v19 = 0;
              if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v19) )
              {
                if ( v19 == 2 && (__readmsr(0xFEu) & 0x8000) != 0 )
                  BYTE2(HalpDeviceBlockUnblockPushLock.Timer.DueTime.u.LowPart) = 1;
              }
            }
            if ( strstr(v3, "FIRSTMEGABYTEPOLICY=USEALL")
              || HalpIsMicrosoftCompatibleHvLoaded() && !HalpHvCpuManager && strstr(v3, "NOVGA") )
            {
              BYTE2(HalpDeviceBlockUnblockPushLock.Timer.DueTime.u.LowPart) = 0;
            }
            if ( strstr(v3, "USEPLATFORMCLOCK") )
              HalpTimerPlatformSourceForced = 1;
            if ( strstr(v3, "USEPLATFORMTICK") )
              HalpTimerPlatformClockSourceForced = 1;
            v16 = strstr(v3, "GROUPSIZE");
            if ( v16 )
            {
              while ( 1 )
              {
                v17 = *v16;
                if ( !*v16 || v17 == 32 || (unsigned __int8)(v17 - 48) <= 9u )
                  break;
                ++v16;
              }
              HalpMaximumGroupSize = atoi(v16);
              if ( (unsigned int)(HalpMaximumGroupSize - 1) > 0x3F )
                HalpMaximumGroupSize = 64;
            }
            HalpSplitLargeNumaNodes = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x20000) != 0;
            strstr(v3, "HALTPROFILINGPOLICY=BLOCKED");
            strstr(v3, "HALTPROFILINGPOLICY=RELAXED");
            strstr(v3, "HALTPROFILINGPOLICY=RESTRICTED");
LABEL_77:
            v2 = *(_QWORD *)(a1 + 240);
            if ( v2 )
            {
              LODWORD(v2) = *(_DWORD *)(v2 + 2648);
              if ( (v2 & 0x40000) != 0 )
                HalpPrebootMode = 1;
            }
            return v2;
          }
        }
        else
        {
LABEL_52:
          if ( !HalpIsXboxNanovisorPresent() )
            goto LABEL_54;
        }
        HalpHvUsedForReboot = 1;
        goto LABEL_54;
      }
      v10 = 1;
    }
    HalpInterruptSetMsiOverride(v10);
    goto LABEL_46;
  }
  return v2;
}
