/*
 * XREFs of ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x14009FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400054FC (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x1400405C4 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x14004083C (-ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x140066EA0 (-Purge@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x14006703C (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::Purge(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_PURGE_IO_ACTION v2; // r12d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  unsigned __int8 *p_m_NumInterfaces; // rsi
  unsigned int v8; // edi
  FxUsbInterface *v9; // r14
  unsigned int i; // r15d
  FxUsbPipe *v11; // rcx
  unsigned __int8 *v12; // r15
  _FX_DRIVER_GLOBALS *v13; // rdx
  unsigned int v14; // edi
  FxUsbInterface *v15; // r14
  unsigned int j; // esi
  FxUsbPipe *v17; // rcx
  int v18; // [rsp+28h] [rbp-28h]
  _LIST_ENTRY pendedHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+98h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (int)Action;
  irql = 0;
  sentHead.Next = 0LL;
  FxIoTarget::Purge(this, Action);
  if ( v2 != WdfIoTargetPurgeIo )
    FxUsbDevice::AcquireInterfaceIterationLock(this, v4);
  FxNonPagedObject::Lock(this, &irql, v5);
  p_m_NumInterfaces = &this->m_NumInterfaces;
  v8 = 0;
  if ( this->m_NumInterfaces )
  {
    do
    {
      v9 = this->m_Interfaces[v8];
      if ( v9->m_ConfiguredPipes )
      {
        for ( i = 0; i < v9->m_NumberOfConfiguredPipes; ++i )
        {
          v11 = v9->m_ConfiguredPipes[i];
          if ( v11 )
          {
            wait = 0;
            LOBYTE(v18) = 1;
            pendedHead.Blink = &pendedHead;
            pendedHead.Flink = &pendedHead;
            v11->GotoPurgeState(v11, v2, &pendedHead, &sentHead, &wait, v18);
            FxIoTarget::CompletePendedRequestList(v9->m_ConfiguredPipes[i], &pendedHead);
          }
        }
      }
      ++v8;
    }
    while ( v8 < *p_m_NumInterfaces );
    v12 = &this->m_NumInterfaces;
  }
  else
  {
    v12 = &this->m_NumInterfaces;
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  FxIoTarget::_CancelSentRequests(&sentHead);
  v14 = 0;
  if ( *p_m_NumInterfaces )
  {
    do
    {
      v15 = this->m_Interfaces[v14];
      if ( v15->m_ConfiguredPipes )
      {
        for ( j = 0; j < v15->m_NumberOfConfiguredPipes; ++j )
        {
          v17 = v15->m_ConfiguredPipes[j];
          if ( v17 )
            v17->WaitForSentIoToComplete(v17);
        }
      }
      ++v14;
    }
    while ( v14 < *v12 );
  }
  if ( v2 != WdfIoTargetPurgeIo )
    FxUsbDevice::ReleaseInterfaceIterationLock(this, v13);
}
