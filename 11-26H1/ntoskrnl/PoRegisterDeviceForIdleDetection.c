/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x140426D10
 * Callers:
 *     PoRunDownDeviceObject @ 0x140426C2C (PoRunDownDeviceObject.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  KIRQL v9; // r9
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdx
  ULONG DeviceType; // eax
  int v13; // esi
  __int64 v14; // rdi
  KIRQL v15; // dl
  PVOID **v16; // rax
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r8
  _QWORD *SparePtr; // rcx

  v4 = 0LL;
  if ( !ConservationIdleTime && !PerformanceIdleTime )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
    Dope = DeviceObject->DeviceObjectExtension->Dope;
    if ( !Dope )
      goto LABEL_4;
    p_IdleList = &Dope->IdleList;
    Flink = Dope->IdleList.Flink;
    if ( Flink == &Dope->IdleList )
      goto LABEL_4;
    if ( Flink->Blink == p_IdleList )
    {
      Blink = Dope->IdleList.Blink;
      if ( Blink->Flink == p_IdleList )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        *(_QWORD *)&Dope->IdleType = 0LL;
        *(_QWORD *)&Dope->ConservationIdleTime = 0LL;
        Dope->CurrentState = PowerDeviceUnspecified;
        Dope->IdleCount = 0;
        Dope->BusyCount = 0;
        Dope->BusyReference = 0;
        Dope->TotalBusyCount = 0;
        Dope->Specific = 0LL;
        Dope->IdleList.Blink = &Dope->IdleList;
        p_IdleList->Flink = p_IdleList;
LABEL_4:
        KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v9);
        return v4;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v13 = 0;
  if ( DeviceType != 7 && DeviceType != 45 )
  {
LABEL_9:
    v14 = PopGetDope();
    if ( !v14 )
      return v4;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
    *(_DWORD *)(v14 + 16) = ConservationIdleTime;
    v16 = (PVOID **)(v14 + 32);
    *(_DWORD *)(v14 + 20) = PerformanceIdleTime;
    *(_DWORD *)(v14 + 52) = State;
    *(_DWORD *)(v14 + 48) = v13;
    if ( *v16 == (PVOID *)v16 )
    {
      *(_DWORD *)(v14 + 56) = 1;
      SparePtr = PpmIdlePolicyLock.WaitBlock[3].SparePtr;
      if ( *(struct _KTHREAD **)PpmIdlePolicyLock.WaitBlock[3].SparePtr != (struct _KTHREAD *)&PpmIdlePolicyLock.Spare18 )
        goto LABEL_17;
      *v16 = &PpmIdlePolicyLock.WaitBlock[3].Object;
      *(_QWORD *)(v14 + 40) = SparePtr;
      *SparePtr = v16;
      PpmIdlePolicyLock.LastXStateSaveDebugInfo = v14 + 32;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v15);
    PopCheckForWork();
    return (PULONG)v14;
  }
  if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] && stru_140E67200.WaitBlockFill6[80]
    || (DeviceObject->Characteristics & 1) == 0 )
  {
    v13 = 1;
    goto LABEL_9;
  }
  return v4;
}
