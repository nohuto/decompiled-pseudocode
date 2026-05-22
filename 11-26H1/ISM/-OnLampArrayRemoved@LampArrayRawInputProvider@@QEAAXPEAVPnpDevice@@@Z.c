/*
 * XREFs of ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800E40E0
 * Callers:
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E4E78 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E37A4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E5698 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnLampArrayRemoved(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v4; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *i; // rbx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v6; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v7; // rax
  RTL_SRWLOCK *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 30) == 65625 )
  {
    v4 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 72);
    for ( i = *v4;
          i != (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v4;
          i = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)i )
    {
      if ( a2 == *(struct PnpDevice **)(*((_QWORD *)i + 2) + 16LL) )
      {
        AcquireSRWLockExclusive((PSRWLOCK)this + 20);
        v6 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)i;
        v8 = (RTL_SRWLOCK *)((char *)this + 160);
        if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v6 + 1) != i
          || (v7 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)*((_QWORD *)i + 1), *v7 != i) )
        {
          __fastfail(3u);
        }
        *v7 = v6;
        *((_QWORD *)v6 + 1) = v7;
        --*((_DWORD *)this + 22);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(i);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
        return;
      }
    }
  }
  else if ( IsEdition(6176LL) )
  {
    ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 43), a2, 0);
  }
}
