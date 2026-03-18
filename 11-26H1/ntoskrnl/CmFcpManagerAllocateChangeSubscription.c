/*
 * XREFs of CmFcpManagerAllocateChangeSubscription @ 0x140B48410
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B482E0 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

unsigned __int8 *__fastcall CmFcpManagerAllocateChangeSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  unsigned __int8 *result; // rax

  if ( BYTE2(CmpFreezeListLock.ForegroundLossTime) )
  {
    result = (unsigned __int8 *)ExAllocatePool2(0x40uLL);
    if ( !result )
      return result;
  }
  else
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)(&CmpFreezeListLock.ForegroundLossTime + 1));
    if ( v5 > 3 )
      return 0LL;
    result = (unsigned __int8 *)(&CmpFreezeListLock.SchedulerAssistPriorityFloor + 24 * v5);
  }
  *(_OWORD *)result = 0LL;
  *((_QWORD *)result + 11) = 0LL;
  *((_QWORD *)result + 3) = 0LL;
  *((_QWORD *)result + 4) = CmpWorkItemWrapper;
  *((_QWORD *)result + 5) = result + 16;
  *((_QWORD *)result + 2) = 0LL;
  *((_QWORD *)result + 8) = CmFcpChangeSubscriptionWrapper;
  *((_DWORD *)result + 14) = 0;
  *((_QWORD *)result + 6) = 0LL;
  *((_DWORD *)result + 15) = 4;
  *((_QWORD *)result + 9) = a3;
  *((_QWORD *)result + 10) = a2;
  return result;
}
