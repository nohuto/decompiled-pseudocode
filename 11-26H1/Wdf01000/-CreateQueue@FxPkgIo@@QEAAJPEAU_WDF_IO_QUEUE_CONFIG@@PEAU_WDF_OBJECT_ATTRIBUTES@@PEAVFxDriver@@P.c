/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140019184
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x140018EE0 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001DD08 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1400193C0 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1400194DC (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqqd @ 0x14006A614 (WPP_IFR_SF_qqqd.c)
 *     ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BC08 (-GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z.c)
 */

int __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  WDFDRIVER__ *Driver; // rdx
  int result; // eax
  FxIoQueue *v12; // rdi
  int v13; // esi
  void *ParentObject; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v16; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a3; // rdx
  bool v19; // zf
  unsigned __int16 v20; // ax
  const void *v21; // rcx
  const void *v22; // rdx
  FxDriver *pDriver[4]; // [rsp+50h] [rbp-20h] BYREF
  FxObject *pParent; // [rsp+A0h] [rbp+30h] BYREF
  FxIoQueue *pQueue; // [rsp+B0h] [rbp+40h] BYREF

  m_Globals = this->m_Globals;
  pParent = 0LL;
  pQueue = 0LL;
  pDriver[0] = 0LL;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    pDriver[1] = 0LL;
    pDriver[2] = (FxDriver *)5379;
    m_DeviceBase = pParent->m_DeviceBase;
    if ( !m_DeviceBase )
    {
      v22 = (const void *)((unsigned __int64)pParent ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pParent->m_ObjectSize )
        v22 = 0LL;
      WPP_IFR_SF_q(pParent->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, v22);
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, -1073741808);
      return -1073741808;
    }
    v16 = this->m_DeviceBase;
    if ( m_DeviceBase != v16 )
    {
      m_ObjectSize = v16->m_ObjectSize;
      _a3 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v19 = m_ObjectSize == 0;
      v20 = m_DeviceBase->m_ObjectSize;
      if ( v19 )
        _a3 = 0LL;
      v21 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20 )
        v21 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        v21,
        _a3,
        -1073741808);
      return -1073741808;
    }
  }
  else
  {
    pParent = this;
  }
  if ( Config->Size > 0x58 )
  {
    Driver = Config->Driver;
    if ( Driver )
      FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)pDriver);
  }
  result = FxIoQueue::_Create(m_Globals, QueueAttributes, Config, Caller, this, this->m_PowerStateOn, &pQueue);
  if ( result >= 0 )
  {
    v12 = pQueue;
    if ( pDriver[0] )
      v12->m_CxDeviceInfo = FxDevice::GetCxDeviceInfo(this->m_Device, pDriver[0]);
    v13 = FxObject::Commit(v12, QueueAttributes, 0LL, pParent, 1u);
    if ( v13 < 0 )
    {
      FxObject::DeleteFromFailedCreate(v12);
    }
    else
    {
      FxPkgIo::AddIoQueue(this, v12);
      *ppQueue = v12;
    }
    return v13;
  }
  return result;
}
