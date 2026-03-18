/*
 * XREFs of ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x14003BBC0
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x140038ED8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14003A4B4 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x14003C1D0 (imp_WdfPdoInitAllocate.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x140094ECC (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall WDFDEVICE_INIT::WDFDEVICE_INIT(WDFDEVICE_INIT *this, FxDriver *Driver)
{
  PnpPowerInit *p_PnpPower; // rbx

  this->Driver = Driver;
  p_PnpPower = &this->PnpPower;
  this->FileObject.Class = WdfFileObjectInvalid;
  *(_OWORD *)&this->FileObject.Attributes.Size = 0LL;
  *(_OWORD *)&this->FileObject.Attributes.EvtDestroyCallback = 0LL;
  *(_OWORD *)&this->FileObject.Attributes.ParentObject = 0LL;
  this->FileObject.Attributes.ContextTypeInfo = 0LL;
  *(_OWORD *)&this->FileObject.Callbacks.Size = 0LL;
  *(_OWORD *)&this->FileObject.Callbacks.EvtFileClose = 0LL;
  *(_QWORD *)&this->FileObject.Callbacks.AutoForwardCleanupClose = 0LL;
  this->FileObject.AutoForwardCleanupClose = WdfUseDefault;
  this->FileObject.Set = 0;
  this->Security.Sddl = 0LL;
  this->Security.DeviceClass = 0LL;
  this->Security.DeviceClassSet = 0;
  memset(&this->PnpPower, 0, 0x90uLL);
  memset(&p_PnpPower->PolicyEventCallbacks, 0, sizeof(p_PnpPower->PolicyEventCallbacks));
  p_PnpPower->PnpStateCallbacks = 0LL;
  p_PnpPower->PowerStateCallbacks = 0LL;
  p_PnpPower->PowerPolicyStateCallbacks = 0LL;
  p_PnpPower->PowerPolicyOwner = WdfUseDefault;
  *(_OWORD *)&this->Fdo.EventCallbacks.Size = 0LL;
  *(_OWORD *)&this->Fdo.EventCallbacks.EvtDeviceFilterRemoveResourceRequirements = 0LL;
  memset(&this->Fdo.ListConfig, 0, sizeof(this->Fdo.ListConfig));
  *(_OWORD *)&this->Fdo.ListConfigAttributes.Size = 0LL;
  *(_OWORD *)&this->Fdo.ListConfigAttributes.EvtDestroyCallback = 0LL;
  *(_OWORD *)&this->Fdo.ListConfigAttributes.ParentObject = 0LL;
  this->Fdo.ListConfigAttributes.ContextTypeInfo = 0LL;
  this->Fdo.Filter = 0;
  this->Fdo.PhysicalDevice = 0LL;
  this->Pdo.HardwareIDs.m_Count = 0;
  this->Pdo.HardwareIDs.m_ListHead.Blink = &this->Pdo.HardwareIDs.m_ListHead;
  this->Pdo.HardwareIDs.m_ListHead.Flink = &this->Pdo.HardwareIDs.m_ListHead;
  this->Pdo.CompatibleIDs.m_Count = 0;
  this->Pdo.CompatibleIDs.m_ListHead.Blink = &this->Pdo.CompatibleIDs.m_ListHead;
  this->Pdo.CompatibleIDs.m_ListHead.Flink = &this->Pdo.CompatibleIDs.m_ListHead;
  memset(&this->Pdo, 0, 0x40uLL);
  *(_QWORD *)&this->Pdo.DefaultLocale = 0LL;
  this->Pdo.DeviceText.Next = 0LL;
  this->Pdo.LastDeviceTextEntry = &this->Pdo.DeviceText.Next;
  this->Pdo.Parent = 0LL;
  this->Pdo.DeviceID = 0LL;
  this->Pdo.InstanceID = 0LL;
  this->Pdo.ContainerID = 0LL;
  this->Pdo.DescriptionEntry = 0LL;
  this->Control.ShutdownNotification = 0LL;
  this->Control.Flags = 0;
  this->DriverGlobals = Driver->m_Globals;
  this->ReadWriteIoType = WdfDeviceIoBuffered;
  *(_DWORD *)&this->CreatedOnStack = 0x10000;
  this->DeviceType = 34;
  this->Characteristics = 256;
  this->DeviceName = 0LL;
  this->CreatedDevice = 0LL;
  this->RequiresSelfIoTarget = 0;
  *(_QWORD *)&this->RemoveLockOptionFlags = 0LL;
  *(_OWORD *)&this->RequestAttributes.Size = 0LL;
  *(_OWORD *)&this->RequestAttributes.EvtDestroyCallback = 0LL;
  *(_OWORD *)&this->RequestAttributes.ParentObject = 0LL;
  this->RequestAttributes.ContextTypeInfo = 0LL;
  this->PreprocessInfo = 0LL;
  this->IoInCallerContextCallback = 0LL;
  this->CxDeviceInitListHead.Blink = &this->CxDeviceInitListHead;
  this->CxDeviceInitListHead.Flink = &this->CxDeviceInitListHead;
  this->ReleaseHardwareOrderOnFailure = WdfReleaseHardwareOrderOnFailureEarly;
  this->CxContextObject = 0LL;
}
