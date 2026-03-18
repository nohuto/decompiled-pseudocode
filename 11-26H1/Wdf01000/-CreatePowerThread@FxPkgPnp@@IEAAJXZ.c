/*
 * XREFs of ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1400A6B10
 * Callers:
 *     ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1400A35B0 (-QueryForPowerThread@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1400A7A90 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1400AC668 (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1400AC798 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall FxPkgPnp::CreatePowerThread(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  WDFDEVICE__ *v3; // r8
  bool v5; // zf
  _DEVICE_OBJECT *m_DeviceObject; // r9
  int result; // eax
  FxSystemThread *v8; // rbx
  FxSystemThread *pOld; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  v3 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  pOld = 0LL;
  v5 = m_DeviceBase->m_ObjectSize == 0;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( v5 )
    v3 = 0LL;
  result = FxSystemThread::_CreateAndInit(&pOld, m_Globals, v3, m_DeviceObject);
  if ( result >= 0 )
  {
    v8 = pOld;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PowerThread, (signed __int64)pOld, 0LL) )
    {
      FxSystemThread::ExitThread(v8);
      v8->DeleteObject(v8);
    }
    this->m_HasPowerThread = 1;
    return 0;
  }
  return result;
}
