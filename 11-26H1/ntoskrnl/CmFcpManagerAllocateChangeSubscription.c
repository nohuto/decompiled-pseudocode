/*
 * XREFs of CmFcpManagerAllocateChangeSubscription @ 0x140B4A1A0
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B4A070 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_KSCB **__fastcall CmFcpManagerAllocateChangeSubscription(__int64 a1, _KSCB *a2, _KSCB *a3)
{
  unsigned __int32 v5; // eax
  _KSCB **result; // rax

  if ( CmpFreezeListLock.SchedulerApcFill3[50] )
  {
    result = (_KSCB **)ExAllocatePool2(0x40uLL);
    if ( !result )
      return result;
  }
  else
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)&CmpFreezeListLock.SchedulerApcFill5[52]);
    if ( v5 > 3 )
      return 0LL;
    result = (_KSCB **)&CmpFreezeListLock.PriorityFloorCounts[96 * v5 + 24];
  }
  *(_OWORD *)result = 0LL;
  result[11] = 0LL;
  result[3] = 0LL;
  result[4] = (_KSCB *)CmpWorkItemWrapper;
  result[5] = (_KSCB *)(result + 2);
  result[2] = 0LL;
  result[8] = (_KSCB *)CmFcpChangeSubscriptionWrapper;
  *((_DWORD *)result + 14) = 0;
  result[6] = 0LL;
  *((_DWORD *)result + 15) = 4;
  result[9] = a3;
  result[10] = a2;
  return result;
}
