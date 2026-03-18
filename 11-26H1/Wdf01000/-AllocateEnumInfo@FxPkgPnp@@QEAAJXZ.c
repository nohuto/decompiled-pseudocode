/*
 * XREFs of ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x14001D560
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140022370 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AllocateEnumInfo@FxDevice@@UEAAJXZ @ 0x140095930 (-AllocateEnumInfo@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x14001CD08 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateEnumInfo(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // si
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // rax
  FxWaitLockInternal *v8; // rax
  FxWaitLockInternal *v9; // rbx
  unsigned int v10; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 m_ObjectSize; // rax
  const void *_a1; // rcx
  FxVerifierLock *v15; // rcx
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  if ( !this->m_EnumInfo )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v15 = (FxVerifierLock *)this[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    {
      FxVerifierLock::Lock(v15, &irql, a3);
      v4 = irql;
    }
    else
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    if ( !this->m_EnumInfo )
    {
      m_Globals = this->m_Globals;
      v7 = retaddr;
      *(_QWORD *)&v16.UsePoolType = 0LL;
      v16.u.PoolFlags = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v7 = 0LL;
      v8 = (FxWaitLockInternal *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   &v16,
                                   0x88uLL,
                                   m_Globals->Tag,
                                   v7);
      v9 = v8;
      if ( !v8 )
      {
        this->m_EnumInfo = 0LL;
        v10 = -1073741670;
        m_DeviceBase = this->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Du, WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
        goto LABEL_10;
      }
      FxWaitLockInternal::FxWaitLockInternal(v8);
      LODWORD(v9[2].m_Event.m_Event.Header.WaitListHead.Flink) = 0;
      WORD2(v9[2].m_Event.m_Event.Header.WaitListHead.Flink) = 0;
      BYTE6(v9[2].m_Event.m_Event.Header.WaitListHead.Flink) = 0;
      *(_QWORD *)&v9[2].m_Event.m_Event.Header.Lock = 0LL;
      v9[1].m_Event.m_Event.Header.WaitListHead.Blink = &v9[1].m_Event.m_Event.Header.WaitListHead;
      v9[1].m_Event.m_Event.Header.WaitListHead.Flink = &v9[1].m_Event.m_Event.Header.WaitListHead;
      v9[1].m_OwningThread = (_KTHREAD *)&v9[1].m_Event.m_DbgFlagIsInitialized;
      *(_QWORD *)&v9[1].m_Event.m_DbgFlagIsInitialized = (char *)v9 + 64;
      *(_QWORD *)&v9[1].m_Event.m_Event.Header.Lock = FxWaitLockTransactionedList::`vftable';
      FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)((char *)v9 + 96));
      this->m_EnumInfo = (FxEnumerationInfo *)v9;
      KeInitializeEvent(&v9->m_Event.m_Event, SynchronizationEvent, 1u);
      v9->m_Event.m_DbgFlagIsInitialized = 1;
      KeInitializeEvent((PRKEVENT)&v9[2].m_Event.m_Event.Header.WaitListHead.Blink, SynchronizationEvent, 1u);
      v9[3].m_Event.m_Event.Header.Type = 1;
    }
    v10 = 0;
LABEL_10:
    FxNonPagedObject::Unlock(this, v4, v5);
    return v10;
  }
  return 0LL;
}
