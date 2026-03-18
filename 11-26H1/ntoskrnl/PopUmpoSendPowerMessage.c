/*
 * XREFs of PopUmpoSendPowerMessage @ 0x140437684
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140437368 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140437AA0 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoQuerySmartSuspendPrediction @ 0x1407DB538 (PopUmpoQuerySmartSuspendPrediction.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x1407DB584 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 *     PopUmpoSendPowerRequestAction @ 0x1407DB5D0 (PopUmpoSendPowerRequestAction.c)
 *     PopPowerRequestDelete @ 0x140AD6100 (PopPowerRequestDelete.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x140AD627C (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140ADE014 (PopUmpoSendPowerRequestCreate.c)
 *     PopMonitorProcessBrightnessAction @ 0x140B25090 (PopMonitorProcessBrightnessAction.c)
 *     PopUmpoSendLegacyEvent @ 0x140B33664 (PopUmpoSendLegacyEvent.c)
 *     PopUmpoSendUserPresencePredictionAction @ 0x140B3AC78 (PopUmpoSendUserPresencePredictionAction.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140438B60 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140AE47FC (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140AEB244 (PopReleaseUmpoPushLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140BFD138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140C09EE4 (PopPushPowerStateTransitionRecord.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(_DWORD *Src, size_t Size, char a3, __int64 a4)
{
  int v8; // ebp
  _WORD *Pool2; // rdi
  int v10; // eax
  int v11; // ebx
  _KSCB *QueuedScb; // rcx
  __int64 MessageAttribute; // rax
  __int64 v15; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v16[160]; // [rsp+50h] [rbp-D8h] BYREF

  v15 = 0LL;
  v8 = -1073741823;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopModernStandbyStateNotify.TracingPrivate[0] )
  {
    if ( Size > 0xFD8 )
    {
      v11 = -2147483643;
    }
    else
    {
      memset_0(Pool2 + 2, 0, 0xFFCuLL);
      *Pool2 = Size;
      Pool2[1] = Size + 40;
      memmove(Pool2 + 20, Src, Size);
      if ( a3 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&PopModernStandbyStateNotify.OtherTransferCount);
        if ( SLODWORD(PopModernStandbyStateNotify.OtherTransferCount) > 0 )
          QueuedScb = PopModernStandbyStateNotify.QueuedScb;
        else
          QueuedScb = 0LL;
        if ( *Src == 13 || *Src == 7 )
          v8 = PopPushPowerStateTransitionRecord(QueuedScb, KeGetCurrentThread());
        memset_0(v16, 0, sizeof(v16));
        v15 = 4096LL;
        v11 = ((__int64 (__fastcall *)(unsigned __int64, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _BYTE *, _QWORD))ZwAlpcSendWaitReceivePort)(
                PopModernStandbyStateNotify.TracingPrivate[0],
                0x20000LL,
                Pool2,
                0LL,
                Pool2,
                &v15,
                v16,
                0LL);
        if ( v8 >= 0 )
          PoDelistPowerStateTransitionBlocker();
        _InterlockedDecrement((volatile signed __int32 *)&PopModernStandbyStateNotify.OtherTransferCount);
        if ( v11 < 0 )
          goto LABEL_7;
        MessageAttribute = AlpcGetMessageAttribute(v16, 0x20000000LL);
        v10 = PopUmpoProcessMessage(Pool2, MessageAttribute, a4);
      }
      else
      {
        v10 = ZwAlpcSendWaitReceivePort(
                PopModernStandbyStateNotify.TracingPrivate[0],
                0x10000LL,
                Pool2,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                v15);
      }
      v11 = v10;
    }
  }
  else
  {
    v11 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
