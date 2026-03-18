/*
 * XREFs of ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x14004BE04
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14004BE40 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxPkgGeneral::DecrementOpenHandleCount(FxPkgGeneral *this)
{
  FxDeviceBase *m_DeviceBase; // rcx

  if ( _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( BYTE5(m_DeviceBase[1].m_Globals) )
      FxObject::DeleteObject(m_DeviceBase);
  }
}
