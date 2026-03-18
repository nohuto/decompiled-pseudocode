/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045920
 * Callers:
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x140038B3C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1400460BC (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006B3B0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DCE0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5BC0 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5DE0 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5E10 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x140044DCC (GetIoQueueList_ProcessQueueListEntry.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x140045B54 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x140045E24 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     WPP_IFR_SF_Lq @ 0x140045FC0 (WPP_IFR_SF_Lq.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(
        FxPkgIo *this,
        unsigned __int32 Action,
        __int64 a3,
        unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // r8
  unsigned __int8 v10; // r8
  char m_ObjectFlags; // al
  _SINGLE_LIST_ENTRY *p_Blink; // rsi
  KIRQL v13; // bp
  void *v14; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // r14
  _LIST_ENTRY *Flink; // rdi
  _SINGLE_LIST_ENTRY *v17; // rbx
  _SINGLE_LIST_ENTRY *j; // rdi
  _LIST_ENTRY *i; // rdi
  FxTagTracker *Blink; // rcx
  unsigned int RefCount; // edx
  FxVerifierLock *v22; // rcx
  FxVerifierLock *v23; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-48h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  irql = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v9 = 0LL;
  WPP_IFR_SF_Lq(m_Globals, Action, (unsigned int)v9, a4, RefType, Action, v9);
  m_ObjectFlags = this->m_ObjectFlags;
  p_Blink = 0LL;
  queueList.Next = 0LL;
  if ( m_ObjectFlags < 0 && (v22 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v22, &irql, v10);
    v13 = irql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  this->m_PowerStateOn = 0;
  if ( Action == 2 || Action == 3 )
    this->m_QueuesAreShuttingDown = 1;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
    {
      if ( LODWORD(i[1].Flink) == 1 )
      {
        i[1].Blink = (_LIST_ENTRY *)p_Blink;
        p_Blink = (_SINGLE_LIST_ENTRY *)&i[1].Blink;
        RefCount = _InterlockedIncrement((volatile signed __int32 *)&i[-56].Flink + 1);
        if ( SLOBYTE(i[-55].Flink) < 0 )
        {
          Blink = (FxTagTracker *)i[-60].Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x65776F70,
              1479,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
        }
      }
    }
  }
  else
  {
    Flink = p_m_IoQueueListHead->Flink;
    if ( p_m_IoQueueListHead->Flink != p_m_IoQueueListHead )
    {
      do
      {
        GetIoQueueList_ProcessQueueListEntry(Flink, &queueList, v14);
        Flink = Flink->Flink;
      }
      while ( Flink != p_m_IoQueueListHead );
      p_Blink = queueList.Next;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v23 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    FxVerifierLock::Unlock(v23, v13, (unsigned __int8)v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v13);
  if ( Action == 1 )
  {
    v17 = p_Blink;
    if ( !p_Blink )
      return 0LL;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v17[-116]);
      v17 = v17->Next;
    }
    while ( v17 );
  }
  if ( p_Blink )
  {
    for ( j = p_Blink->Next; ; j = j->Next )
    {
      FxIoQueue::StopProcessingForPower((FxIoQueue *)&p_Blink[-116], (FxIoStopProcessingForPowerAction)Action);
      p_Blink->Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))p_Blink[-116].Next[2].Next)(
        &p_Blink[-116],
        1702326128LL,
        1249LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !j )
        break;
      p_Blink = j;
    }
  }
  return 0LL;
}
