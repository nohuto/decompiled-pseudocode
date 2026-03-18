/*
 * XREFs of ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140040680
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400054FC (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x1400405C4 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x14004083C (-ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x140040860 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::Stop(FxUsbDevice *this, _WDF_IO_TARGET_SENT_IO_ACTION Action)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r12
  __int64 v8; // rdi
  unsigned __int8 *p_m_NumInterfaces; // rsi
  unsigned __int8 *v10; // r14
  __int64 v11; // rdi
  FxUsbInterface *v12; // rbp
  __int64 j; // rsi
  FxUsbPipe *v14; // rcx
  FxUsbInterface *v15; // r14
  __int64 i; // rbp
  FxUsbPipe *v17; // rcx
  _LIST_ENTRY *Blink; // rcx
  int v19; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY head; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 wait; // [rsp+68h] [rbp+10h] BYREF

  wait = 0;
  head.Next = 0LL;
  FxIoTarget::Stop(this, Action);
  if ( Action != WdfIoTargetLeaveSentIoPending )
    FxUsbDevice::AcquireInterfaceIterationLock(this, v4);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Blink = this[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &wait, v5);
    v7 = wait;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v8 = 0LL;
  p_m_NumInterfaces = &this->m_NumInterfaces;
  if ( this->m_NumInterfaces )
  {
    do
    {
      v15 = this->m_Interfaces[v8];
      if ( v15->m_ConfiguredPipes )
      {
        for ( i = 0LL; (unsigned int)i < v15->m_NumberOfConfiguredPipes; i = (unsigned int)(i + 1) )
        {
          v17 = v15->m_ConfiguredPipes[i];
          if ( v17 )
          {
            wait = 0;
            LOBYTE(v19) = 1;
            v17->GotoStopState(v17, Action, &head, &wait, v19);
          }
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *p_m_NumInterfaces );
    v10 = &this->m_NumInterfaces;
  }
  else
  {
    v10 = &this->m_NumInterfaces;
  }
  FxNonPagedObject::Unlock(this, v7, v6);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  v11 = 0LL;
  if ( *p_m_NumInterfaces )
  {
    do
    {
      v12 = this->m_Interfaces[v11];
      if ( v12->m_ConfiguredPipes )
      {
        for ( j = 0LL; (unsigned int)j < v12->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
        {
          v14 = v12->m_ConfiguredPipes[j];
          if ( v14 )
            v14->WaitForSentIoToComplete(v14);
        }
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < *v10 );
  }
  if ( Action != WdfIoTargetLeaveSentIoPending )
    FxUsbDevice::ReleaseInterfaceIterationLock(this);
}
