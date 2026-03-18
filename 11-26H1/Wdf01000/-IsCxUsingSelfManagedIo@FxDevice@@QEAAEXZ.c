/*
 * XREFs of ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x14007ACF4
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x14001BB34 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FxDevice::IsCxUsingSelfManagedIo(FxDevice *this)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // r10
  FxDevice *Flink; // rdx
  char v3; // r9
  __int64 i; // r8
  FxDevice *v6; // rcx
  FxCxCallbackType smIoCallbackList[7]; // [rsp+8h] [rbp+8h]

  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  *(_DWORD *)smIoCallbackList = 184812290;
  Flink = (FxDevice *)this->m_CxDeviceInfoListHead.Flink;
  v3 = 0;
  *(_WORD *)&smIoCallbackList[4] = 3340;
  smIoCallbackList[6] = FxCxCallbackSmIoCleanup;
  if ( Flink != (FxDevice *)&this->m_CxDeviceInfoListHead && Flink )
  {
    do
    {
      if ( v3 )
        break;
      for ( i = 0LL; (unsigned int)i < 7; i = (unsigned int)(i + 1) )
      {
        if ( *((_QWORD *)&Flink->m_DeviceBase + (unsigned __int8)smIoCallbackList[i]) )
        {
          v3 = 1;
          break;
        }
      }
      v6 = (FxDevice *)Flink->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
      Flink = v6;
      if ( v6 == (FxDevice *)p_m_CxDeviceInfoListHead )
        break;
    }
    while ( v6 );
  }
  return v3;
}
