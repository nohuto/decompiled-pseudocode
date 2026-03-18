/*
 * XREFs of ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14003A720
 * Callers:
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x140038D3C (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x140038ED8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14003A4B4 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1PdoInit@@QEAA@XZ @ 0x14003A8E0 (--1PdoInit@@QEAA@XZ.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x140075B00 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140095048 (-_CleanupList@FxDeviceText@@SAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x140095A0C (--1WDFCXDEVICE_INIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall WDFDEVICE_INIT::~WDFDEVICE_INIT(WDFDEVICE_INIT *this)
{
  FxPnpStateCallback *PnpStateCallbacks; // rcx
  FxPowerStateCallback *PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rcx
  FxString *DeviceName; // rcx
  PdoInit *p_Pdo; // rsi
  FxString *DeviceID; // rcx
  FxString *InstanceID; // rcx
  FxString *ContainerID; // rcx
  unsigned int v10; // edx
  FxString *Sddl; // rcx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  FxUserObject *CxContextObject; // rcx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rdi
  WDFCXDEVICE_INIT *Flink; // rbx
  _LIST_ENTRY *v16; // rax

  PnpStateCallbacks = this->PnpPower.PnpStateCallbacks;
  if ( PnpStateCallbacks )
    FxPoolFree(PnpStateCallbacks);
  PowerStateCallbacks = this->PnpPower.PowerStateCallbacks;
  if ( PowerStateCallbacks )
    FxPoolFree(PowerStateCallbacks);
  PowerPolicyStateCallbacks = this->PnpPower.PowerPolicyStateCallbacks;
  if ( PowerPolicyStateCallbacks )
    FxPoolFree(PowerPolicyStateCallbacks);
  DeviceName = this->DeviceName;
  if ( DeviceName )
    DeviceName->DeleteObject(DeviceName);
  p_Pdo = &this->Pdo;
  DeviceID = this->Pdo.DeviceID;
  if ( DeviceID )
    DeviceID->DeleteObject(DeviceID);
  InstanceID = this->Pdo.InstanceID;
  if ( InstanceID )
    InstanceID->DeleteObject(InstanceID);
  ContainerID = this->Pdo.ContainerID;
  if ( ContainerID )
    ContainerID->DeleteObject(ContainerID);
  FxDeviceText::_CleanupList(&this->Pdo.DeviceText);
  Sddl = this->Security.Sddl;
  if ( Sddl )
    Sddl->DeleteObject(Sddl);
  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo, v10);
  CxContextObject = this->CxContextObject;
  if ( CxContextObject )
    CxContextObject->DeleteObject(CxContextObject);
  p_CxDeviceInitListHead = &this->CxDeviceInitListHead;
  while ( 1 )
  {
    Flink = (WDFCXDEVICE_INIT *)p_CxDeviceInitListHead->Flink;
    if ( p_CxDeviceInitListHead->Flink == p_CxDeviceInitListHead )
      break;
    if ( Flink->ListEntry.Blink != p_CxDeviceInitListHead
      || (v16 = Flink->ListEntry.Flink, (WDFCXDEVICE_INIT *)Flink->ListEntry.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_CxDeviceInitListHead->Flink = v16;
    v16->Blink = p_CxDeviceInitListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    if ( Flink )
    {
      WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(Flink);
      FxStump::operator delete(Flink);
    }
  }
  PdoInit::~PdoInit(p_Pdo);
}
