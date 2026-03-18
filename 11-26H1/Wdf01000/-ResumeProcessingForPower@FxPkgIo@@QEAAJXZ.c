/*
 * XREFs of ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1400436CC
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400435D0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140078820 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400793D0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // rdx
  unsigned __int8 v6; // r8
  _LIST_ENTRY *v7; // r14
  KIRQL v8; // bp
  unsigned __int8 v9; // r8
  _LIST_ENTRY *i; // rdi
  FxTagTracker *Blink; // rcx
  unsigned int RefCount; // edx
  char m_ObjectFlags; // al
  unsigned __int8 v14; // r8
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r8
  unsigned __int16 v19; // r9
  FxIoQueue *v20; // rcx
  _LIST_ENTRY *j; // rbx
  unsigned __int64 *v22; // rdi
  unsigned __int8 v23; // al
  unsigned __int16 v24; // r9
  FxVerifierLock *v26; // rcx
  FxVerifierLock *v27; // rcx
  FxVerifierLock *v28; // rcx
  FxVerifierLock *v29; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x1Fu, WPP_FxPkgIo_cpp_Traceguids, v5);
  v7 = 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v28, &irql, v6);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  for ( i = this->m_IoQueueListHead.Blink; i != &this->m_IoQueueListHead; i = i->Blink )
  {
    if ( LODWORD(i[1].Flink) == 1 )
    {
      i[1].Blink = v7;
      v7 = (_LIST_ENTRY *)((char *)i + 24);
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
  m_ObjectFlags = this->m_ObjectFlags;
  *(_WORD *)&this->m_PowerStateOn = 1;
  if ( m_ObjectFlags < 0 && (v29 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    FxVerifierLock::Unlock(v29, v8, v9);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
  v15 = v7;
  if ( v7 )
  {
    do
    {
      v16 = v15 - 58;
      irql = 0;
      if ( BYTE2(v15[-50].Blink) )
      {
        if ( SLOBYTE(v16[1].Blink) < 0 && (v26 = (FxVerifierLock *)v15[-61].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v26, &irql, v14);
          v17 = irql;
        }
        else
        {
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v16[7]);
        }
        v20 = (FxIoQueue *)&v15[-58];
        if ( LODWORD(v16[11].Flink) == 1 )
        {
          FxNonPagedObject::Unlock(v20, v17, v18);
        }
        else
        {
          LODWORD(v16[11].Flink) = 10;
          FxIoQueue::DispatchEvents(v20, v17, 0LL, v19);
        }
      }
      v15 = v15->Flink;
    }
    while ( v15 );
    for ( j = v7->Flink; ; j = j->Flink )
    {
      v22 = (unsigned __int64 *)&v7[-58];
      irql = 0;
      if ( BYTE2(v7[-50].Blink) )
      {
        if ( *((char *)v22 + 24) < 0 && (v27 = (FxVerifierLock *)v7[-61].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v27, &irql, v14);
          v23 = irql;
        }
        else
        {
          v23 = KeAcquireSpinLockRaiseToDpc(v22 + 14);
        }
        if ( *((int *)v22 + 56) > 0 )
        {
          *((_BYTE *)v22 + 372) = 1;
          *((_BYTE *)v22 + 373) = 0;
        }
        FxIoQueue::DispatchEvents((FxIoQueue *)&v7[-58], v23, 0LL, v24);
      }
      v7->Flink = 0LL;
      (*(void (__fastcall **)(_LIST_ENTRY *, __int64, __int64, const char *))(*v22 + 16))(
        v7 - 58,
        1702326128LL,
        1328LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      v7 = j;
      if ( !j )
        break;
    }
  }
  return 0LL;
}
