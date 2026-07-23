/*
 * XREFs of HalpInterruptStartProcessor @ 0x140BF0190
 * Callers:
 *     HalStartDynamicProcessor @ 0x14057EA90 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x140582ED0 (HalStartNextProcessor.c)
 *     HalpDpStartProcessor @ 0x140BF4634 (HalpDpStartProcessor.c)
 *     HalpBlkStartBlockedProcessor @ 0x140BF50B8 (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptClearProcessorStartContext @ 0x14057EC80 (HalpInterruptClearProcessorStartContext.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14057ECA8 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpInterruptSetProcessorStartContext @ 0x14057F260 (HalpInterruptSetProcessorStartContext.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x14057F300 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpHvVpStartEnabled @ 0x140588494 (HalpHvVpStartEnabled.c)
 *     HalpSetProcessorStateByNtIndex @ 0x140593AAC (HalpSetProcessorStateByNtIndex.c)
 *     HalpHvStartProcessor @ 0x1405953B4 (HalpHvStartProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, unsigned int a2, char a3, const void *a4)
{
  unsigned int v6; // edi
  int NextProcessorLocalId; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char started; // al
  _BYTE *v11; // r13
  char v12; // si
  bool v13; // r14
  char v14; // r8
  const void *v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  const void *v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v19 = a2;
  v6 = 2;
  if ( !HalpInterruptProcessorCap || HalpInterruptProcessorsStarted < (unsigned int)HalpInterruptProcessorCap )
  {
    NextProcessorLocalId = HalpInterruptGetNextProcessorLocalId(a3, &v19);
    LOBYTE(v9) = HalpHiberInProgress;
    if ( HalpHiberInProgress || (a3 & 2) != 0 )
    {
      HalpInterruptProcessorRestarting = 1;
      if ( NextProcessorLocalId == -1073740024 )
        goto LABEL_8;
    }
    else
    {
      HalpInterruptProcessorRestarting = HalpHiberInProgress;
    }
    if ( NextProcessorLocalId >= 0 )
    {
LABEL_8:
      HalpInterruptProcessorHidden = (a3 & 4) != 0;
      started = HalpHvVpStartEnabled(v9, v8);
      v11 = HalpInterruptGlobalStartupBlock;
      v12 = started;
      if ( a1 != -1 && (int)HalpSetProcessorStateByNtIndex(a1, v19) < 0 )
        goto LABEL_20;
      v13 = 0;
      if ( !v12 )
        v13 = HalpDisableInterrupts();
      v14 = HalpInterruptProcessorHidden;
      v15 = v20;
      v11[4] = 0;
      if ( (int)HalpInterruptSetProcessorStartContext(a1, v15, v14) < 0 )
        goto LABEL_20;
      if ( v12 )
      {
        v17 = HalpHvStartProcessor(v19, v16, (__int64)v11);
      }
      else
      {
        v17 = -1073741823;
        if ( !*(_QWORD *)(HalpInterruptController + 128) )
          goto LABEL_16;
        v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v19);
      }
      if ( v17 >= 0 )
      {
        v6 = HalpInterruptWaitForProcessorStartUp(v11 + 4, v12);
        if ( v6 != 4 )
          HalpInterruptSetProblemEx(
            HalpInterruptController,
            14,
            0,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
            0x55Eu);
        goto LABEL_17;
      }
LABEL_16:
      HalpInterruptSetProblemEx(
        HalpInterruptController,
        13,
        v17,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
        0x564u);
LABEL_17:
      if ( !v12 && v13 )
        _enable();
LABEL_20:
      HalpInterruptClearProcessorStartContext();
      HalpInterruptProcessorHidden = 0;
    }
  }
  return v6;
}
