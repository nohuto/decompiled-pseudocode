/*
 * XREFs of ??0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x140020D1C
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14002008C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A574 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPkgGeneral::FxPkgGeneral(FxPkgGeneral *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1104, 0, FxDriverGlobals);
  this->m_DeviceBase = Device;
  this->__vftable = (FxPkgGeneral_vtbl *)FxPkgGeneral::`vftable';
  this->m_EvtDeviceShutdown.m_Method = 0LL;
  this->m_OpenHandleCount = 1;
  this->m_FileObjectInfoHeadList.Blink = &this->m_FileObjectInfoHeadList;
  this->m_FileObjectInfoHeadList.Flink = &this->m_FileObjectInfoHeadList;
  this->m_Flags = 0;
  this->m_ExecutionLevel = WdfExecutionLevelInheritFromParent;
  this->m_SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DriverCreatedQueue = 0LL;
  this->m_DefaultQueueForCreates = 0LL;
  this->m_CxFileCleanupCloseV2 = 0;
}
