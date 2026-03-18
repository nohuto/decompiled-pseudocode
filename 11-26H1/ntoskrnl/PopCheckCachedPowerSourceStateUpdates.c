/*
 * XREFs of PopCheckCachedPowerSourceStateUpdates @ 0x140946990
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopCheckCachedPowerSourceStateUpdates()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  NTSTATUS *v3; // [rsp+68h] [rbp-20h]
  __int64 v4; // [rsp+70h] [rbp-18h]

  if ( *(_WORD *)((char *)&stru_140F10070.ExpectedRunTime + 1) != LOWORD(stru_140F10070.Header.WaitListHead.Blink)
    || LODWORD(stru_140F10070.KernelStack) != LODWORD(stru_140F10070.SListFaultAddress)
    || *(_OWORD *)((char *)&stru_140F10070.KernelStack + 4) != __PAIR128__(
                                                                 __PAIR64__(
                                                                   stru_140F10070.ThreadLock,
                                                                   (unsigned int)stru_140F10070.StackBase),
                                                                 __PAIR64__(
                                                                   (unsigned int)stru_140F10070.StackLimit,
                                                                   HIDWORD(stru_140F10070.SListFaultAddress)))
    || HIDWORD(stru_140F10070.SchedulingGroup) != HIDWORD(stru_140F10070.ThreadLock)
    || (result = stru_140F10070.CycleTime,
        *(_DWORD *)&stru_140F10070.WaitRegister.Flags != LODWORD(stru_140F10070.CycleTime)) )
  {
    stru_140F10070.KernelStack = stru_140F10070.SListFaultAddress;
    LODWORD(stru_140F10070.StateSaveArea) = stru_140F10070.StackLimit;
    HIDWORD(stru_140F10070.StateSaveArea) = stru_140F10070.StackBase;
    stru_140F10070.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)stru_140F10070.ThreadLock;
    *(_WORD *)((char *)&stru_140F10070.ExpectedRunTime + 1) = stru_140F10070.Header.WaitListHead.Blink;
    *(_DWORD *)&stru_140F10070.WaitRegister.Flags = stru_140F10070.CycleTime;
    LOBYTE(stru_140F10070.ExpectedRunTime) = 0;
    result = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_SOURCE_STATE_CHANGE, (__int64)&stru_140F10070.ExpectedRunTime);
    if ( (unsigned int)dword_140E07598 > 5 )
    {
      v1 = result;
      v4 = 4LL;
      v3 = &v1;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07598,
               (unsigned __int8 *)&word_14004D54E,
               0LL,
               0LL,
               3u,
               &v2);
    }
  }
  return result;
}
