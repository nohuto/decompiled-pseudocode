/*
 * XREFs of ??0WDFCXDEVICE_INIT@@QEAA@XZ @ 0x140082584
 * Callers:
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1400824AC (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall WDFCXDEVICE_INIT::WDFCXDEVICE_INIT(WDFCXDEVICE_INIT *this)
{
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
  this->ClientDriverGlobals = 0LL;
  this->CxDriverGlobals = 0LL;
  this->PreprocessInfo = 0LL;
  this->IoInCallerContextCallback = 0LL;
  *(_OWORD *)&this->RequestAttributes.Size = 0LL;
  *(_OWORD *)&this->RequestAttributes.EvtDestroyCallback = 0LL;
  *(_OWORD *)&this->RequestAttributes.ParentObject = 0LL;
  this->RequestAttributes.ContextTypeInfo = 0LL;
  memset(&this->FileObject, 0, sizeof(this->FileObject));
  this->FileObject.AutoForwardCleanupClose = WdfUseDefault;
  memset(&this->PnpPowerCallbacks, 0, sizeof(this->PnpPowerCallbacks));
  this->CxDeviceInfo = 0LL;
}
