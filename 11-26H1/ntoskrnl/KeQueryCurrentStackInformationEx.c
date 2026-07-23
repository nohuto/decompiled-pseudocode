/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x1402634E0
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140262F40 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x140263490 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlpGetStackLimitsEx @ 0x1403D9530 (RtlpGetStackLimitsEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x140412060 (RtlpIsFrameInBoundsEx.c)
 *     KeCheckStackAndTargetAddress @ 0x140470910 (KeCheckStackAndTargetAddress.c)
 *     KasanWrapperRtlRestoreContext @ 0x1404777B0 (KasanWrapperRtlRestoreContext.c)
 *     PnprGetStackLimits @ 0x1405250F0 (PnprGetStackLimits.c)
 *     KasanHibernationGetStackLow @ 0x1405DFFA0 (KasanHibernationGetStackLow.c)
 *     WheaIsAltContextAllocPossible @ 0x1406D9E90 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x1403A8BB8 (KiRspInIstStack.c)
 */

char __fastcall KeQueryCurrentStackInformationEx(unsigned __int64 a1, _DWORD *a2, char **a3, unsigned __int64 *a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rbx
  char *StackLimit; // r8
  unsigned __int64 v11; // rax
  char *StackBase; // rcx
  char result; // al
  char *IsrStack; // rdx
  char *v15; // rcx
  char *v16; // rdx
  char *v17; // rcx
  char *v18; // rdx
  char *v19; // rcx
  char *v20; // rdx
  char *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v15 = &IsrStack[-(unsigned int)KeIsrStackSize];
    if ( (unsigned __int64)v15 <= a1 && a1 < (unsigned __int64)IsrStack )
    {
      *a2 = 6;
      result = 1;
      *a4 = (unsigned __int64)IsrStack;
      *a3 = v15;
      return result;
    }
    v16 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v17 = &v16[-(unsigned int)KeExceptionStackSize];
    if ( (unsigned __int64)v17 <= a1 && a1 < (unsigned __int64)v16 )
    {
      *a2 = 10;
      result = 1;
      *a4 = (unsigned __int64)v16;
      *a3 = v17;
      return result;
    }
  }
  else if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    goto LABEL_3;
  }
  v18 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
  v19 = &v18[-(unsigned int)KeExceptionStackSize];
  if ( (unsigned __int64)v19 <= a1 && a1 < (unsigned __int64)v18 )
  {
    *a2 = 10;
    result = 1;
    *a4 = (unsigned __int64)v18;
    *a3 = v19;
    return result;
  }
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
  {
    if ( CurrentIrql >= 2u )
    {
      v20 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v21 = &v20[-(unsigned int)KeKernelStackSize];
      if ( a1 < (unsigned __int64)v20 && (unsigned __int64)v21 <= a1 )
      {
        *a2 = 1;
        result = 1;
        *a4 = (unsigned __int64)v20;
        *a3 = v21;
        return result;
      }
      if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
      {
        *a2 = 7;
        result = 1;
        *a4 = -1LL;
        *a3 = (char *)0xFFFF800000000000LL;
        return result;
      }
    }
    if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xFu )
      goto LABEL_7;
    v22 = (unsigned int)KeIstStackSize;
    v23 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( KiKvaShadow )
      v22 = 464LL;
    if ( a1 <= v23 && a1 >= v23 - v22
      || KiKvaShadow && (v24 = *(_QWORD *)(v23 + 8), a1 <= v24) && a1 >= v24 - (unsigned int)(KeIstStackSize - 32) )
    {
      *a2 = 8;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return result;
    }
    if ( !(unsigned int)KiRspInIstStack(2LL, a1) )
    {
LABEL_7:
      if ( (CurrentThread->SameThreadTransientFlags & 1) != 0 )
        *a2 = 2;
      else
        *a2 = (CurrentThread->CallbackNestingLevel != 0) + 3;
      StackLimit = (char *)CurrentThread->StackLimit;
      v11 = (unsigned __int64)StackLimit;
      StackBase = (char *)CurrentThread->StackBase;
      *a4 = (unsigned __int64)StackBase;
      if ( StackLimit >= StackBase )
        v11 = (unsigned __int64)StackLimit;
      *a3 = StackLimit;
      if ( v11 <= a1 && a1 < *a4 )
        return 1;
      if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
      {
        *a2 = 0;
        *a4 = -1LL;
        *a3 = (char *)0xFFFF800000000000LL;
        return 1;
      }
      return 0;
    }
    else
    {
      *a2 = 9;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
    }
  }
  else
  {
    *a2 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
  }
  return result;
}
