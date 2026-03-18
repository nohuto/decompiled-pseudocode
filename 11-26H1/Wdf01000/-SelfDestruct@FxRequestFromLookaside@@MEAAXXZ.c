/*
 * XREFs of ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x14002AF50
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x14002B050 (FxFreeToNPagedLookasideList.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     FxFreeToNPagedLookasideListNoTracking @ 0x1400702CC (FxFreeToNPagedLookasideListNoTracking.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x140081D1C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

void __fastcall FxRequestFromLookaside::SelfDestruct(FxRequestFromLookaside *this)
{
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestFromLookaside *v2; // rbx
  char m_ObjectFlags; // al
  __int64 v4; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_DeviceBase = this->m_DeviceBase;
  v2 = this;
  FxRequestBase::~FxRequestBase(this);
  m_ObjectFlags = v2->m_ObjectFlags;
  if ( v2->m_ForwardRequestToParent )
  {
    m_Globals = v2->m_Globals;
    if ( m_ObjectFlags < 0 )
      v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
    if ( m_Globals->FxPoolTrackingOn )
      FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v2[-1].m_InternalContext);
    ExFreePoolWithTag(v2[-1].m_InternalContext, 0);
  }
  else
  {
    if ( m_ObjectFlags < 0 )
      v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
    if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
      FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v2[-1].m_InternalContext);
    v4 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v4 && *(_WORD *)(v4 + 8) == 4354 && *(_BYTE *)(v4 + 1787) )
      FxFreeToNPagedLookasideListNoTracking(
        (_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock,
        v2[-1].m_InternalContext);
    else
      FxFreeToNPagedLookasideList((_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock, v2[-1].m_InternalContext);
  }
}
