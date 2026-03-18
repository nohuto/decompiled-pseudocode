/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400778D0 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x140007FC8 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14001B074 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140031520 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1400322B0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x14003B96C (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x1400416B4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400417C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004326C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140043578 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140044A3C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140064A50 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ??1FxAutoIrp@@QEAA@XZ @ 0x140069E88 (--1FxAutoIrp@@QEAA@XZ.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x14007830C (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x140078434 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F870 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_Dd @ 0x1400803F8 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x140080610 (WPP_IFR_SF_DDDDDDD.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x140081AC0 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     ?IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1400A6C8C (-IsUsagePowerRelated@FxPkgPnp@@IEAAEW4_WDF_SPECIAL_FILE_TYPE@@@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1400A6E28 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1400AABD0 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  struct _IO_WORKITEM *m_WorkItem; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v6; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int _a6; // r12d
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r13d
  _FX_DRIVER_GLOBALS *v10; // rdi
  int v11; // edx
  int v12; // edx
  _DEVICE_USAGE_NOTIFICATION_TYPE v13; // edx
  _WDF_SPECIAL_FILE_TYPE v14; // eax
  int v15; // edx
  unsigned int globals; // r8d
  unsigned int level; // r9d
  unsigned int flags; // r10d
  unsigned int id; // r11d
  $960502E47C9DF6615B5929388F661F48 *v20; // rdi
  __int64 v21; // rdx
  FxRelatedDeviceList *v22; // r8
  unsigned __int8 v23; // dl
  const void *v24; // r10
  unsigned int v25; // eax
  FxDevice *m_DeviceBase; // rcx
  bool IsPdo; // al
  __int64 v28; // rdx
  FxPowerPolicyOwnerSettings *v29; // r9
  _IRP *v30; // rax
  const void *v31; // rdx
  _FX_DRIVER_GLOBALS *v32; // rcx
  unsigned int v33; // r8d
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rdi
  char m_DeviceObject; // dl
  __int64 v36; // r12
  FxRelatedDeviceList *v37; // rcx
  __int64 NextEntryLocked; // rax
  CCHAR v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  char StackSize; // di
  _IRP *v44; // rax
  FxDeviceBase *v45; // rdx
  __int64 v46; // rax
  const void *v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  FxTransactionedEntry *v53; // rax
  char v54; // di
  char *v55; // r9
  _WDF_SPECIAL_FILE_TYPE v56; // eax
  FxPkgPnp *v57; // rcx
  __int64 v58; // rdx
  int v59; // r9d
  _IO_STACK_LOCATION *v60; // rcx
  __int64 v61; // r12
  FxTransactionedEntry *v62; // rax
  _WDF_SPECIAL_FILE_TYPE v63; // eax
  __int64 v64; // r8
  unsigned __int64 v65; // r9
  FxDeviceBase *v66; // rcx
  _WDF_SPECIAL_FILE_TYPE v67; // r14d
  void (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_SPECIAL_FILE_TYPE, unsigned __int8); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v70; // rcx
  FxDeviceBase *v71; // rcx
  int (__fastcall *v72)(WDFDEVICE__ *, _WDF_SPECIAL_FILE_TYPE, unsigned __int8); // rax
  unsigned __int16 v73; // dx
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  int v76; // r8d
  _IO_STACK_LOCATION *v77; // rcx
  unsigned int v78; // r9d
  __int64 v79; // r13
  FxTransactionedEntry *v80; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _FX_DRIVER_GLOBALS *v82; // rcx
  unsigned int v83; // edi
  _FX_DRIVER_GLOBALS *v85; // rcx
  unsigned int v86; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  MxAutoWorkItem workItem; // [rsp+60h] [rbp-19h] BYREF
  FxAutoIrp relatedIrp; // [rsp+68h] [rbp-11h] BYREF
  FxAutoIrp parentIrp; // [rsp+70h] [rbp-9h] BYREF
  FxRelatedDeviceList *v91; // [rsp+78h] [rbp-1h]
  __int64 v92; // [rsp+80h] [rbp+7h]
  MxDeviceObject dependentDevice; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int8 Lock; // [rsp+E8h] [rbp+6Fh]
  unsigned int OldFlags; // [rsp+F0h] [rbp+77h]
  MxDeviceObject topOfParentStack; // [rsp+F8h] [rbp+7Fh] BYREF

  relatedIrp.m_Irp = 0LL;
  m_WorkItem = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Fu, WPP_FxPkgPnp_cpp_Traceguids);
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a6 = CurrentStackLocation->Parameters.SetLock.Lock;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
  {
    FxPkgPnp::_UsageToSpecialType(DeviceUsageTypeGuestAssigned);
    FxPkgPnp::_UsageToSpecialType(DeviceUsageTypeBoot);
    FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)(v11 + 1));
    FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)(v12 + 2));
    v14 = FxPkgPnp::_UsageToSpecialType(v13);
    LOBYTE(v15) = this->m_SpecialSupport[v14 - v15];
    WPP_IFR_SF_DDDDDDD(v10, v15, globals, level, traceGuid, _a5, _a6, (unsigned __int8)v15, globals, level, flags, id);
  }
  if ( (unsigned int)(_a5 - 1) > 6
    || (v20 = &this->96, (_BYTE)_a6) && !BYTE1(v20->m_DeviceBase[1].m_Globals) && !this->m_SpecialSupport[_a5 - 1] )
  {
    v85 = this->m_Globals;
    if ( v85->FxVerboseOn )
      WPP_IFR_SF_Dd(v85, 5u, 0xCu, 0x41u, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
    v33 = -1073741822;
    goto LABEL_102;
  }
  if ( !Mx::MxHasEnoughRemainingThreadStack()
    && (FxDevice::IsPdo(v20->m_Device) || this->m_UsageDependentDeviceList != v22) )
  {
    v6 = MxWorkItem::Allocate(&workItem, *(_DEVICE_OBJECT **)(v21 + 144), v22);
    if ( v6 < 0 )
    {
      v24 = (const void *)((unsigned __int64)v20->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20->m_DeviceBase->m_ObjectSize )
        v24 = 0LL;
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        v23,
        0xCu,
        0x42u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v24,
        v20->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a5,
        _a6,
        v6);
LABEL_27:
      v33 = v6;
LABEL_102:
      v86 = FxPkgPnp::CompletePnpRequest(this, Irp, v33);
      MxWorkItem::Free(&workItem);
      FxAutoIrp::~FxAutoIrp(&parentIrp);
      FxAutoIrp::~FxAutoIrp(&relatedIrp);
      return v86;
    }
    m_WorkItem = workItem.m_WorkItem;
  }
  v25 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, _a6);
  m_DeviceBase = (FxDevice *)v20->m_DeviceBase;
  OldFlags = v25;
  IsPdo = FxDevice::IsPdo(m_DeviceBase);
  v29 = 0LL;
  if ( IsPdo )
  {
    topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v28 + 224) + 144LL));
    v30 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
    if ( v30 )
    {
      parentIrp.m_Irp = v30;
      v6 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
    }
    else
    {
      v6 = -1073741670;
      v31 = (const void *)((unsigned __int64)v20->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20->m_DeviceBase->m_ObjectSize )
        v31 = 0LL;
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        (unsigned __int8)v31,
        0xCu,
        0x43u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v31,
        topOfParentStack.m_DeviceObject,
        _a5,
        _a6,
        -1073741670);
    }
    ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    v29 = 0LL;
    topOfParentStack.m_DeviceObject = 0LL;
    if ( v6 < 0 )
    {
      v32 = this->m_Globals;
      if ( v32->FxVerboseOn )
        WPP_IFR_SF_D(v32, 5u, 0xCu, 0x44u, WPP_FxPkgPnp_cpp_Traceguids, v6);
      FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
      goto LABEL_27;
    }
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  LOBYTE(dependentDevice.m_DeviceObject) = 0;
  v92 = 0LL;
  v91 = m_UsageDependentDeviceList;
  if ( !m_UsageDependentDeviceList )
  {
    v91 = 0LL;
    goto LABEL_48;
  }
  FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
  m_DeviceObject = (char)dependentDevice.m_DeviceObject;
  v36 = v92;
  while ( 1 )
  {
    v37 = this->m_UsageDependentDeviceList;
    LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
    NextEntryLocked = (__int64)FxTransactionedList::GetNextEntryLocked(
                                 v37,
                                 (FxTransactionedEntry *)((v36 + 104) & -(__int64)(v36 != 0)));
    v40 = NextEntryLocked - 104;
    v41 = -NextEntryLocked;
    v36 = v40 & -(__int64)(v41 != 0);
    if ( !v36 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)((v40 & -(__int64)(v41 != 0)) + 0x98));
    StackSize = AttachedDeviceReference->StackSize;
    ObfDereferenceObject(AttachedDeviceReference);
    m_DeviceObject = StackSize;
    if ( StackSize <= SLOBYTE(dependentDevice.m_DeviceObject) )
      m_DeviceObject = (char)dependentDevice.m_DeviceObject;
  }
  _a6 = Lock;
  v29 = 0LL;
  if ( v39 <= 0 )
  {
LABEL_48:
    v54 = (char)v29;
    if ( this->m_PowerPolicyMachine.m_Owner != v29 )
    {
      FxPkgPnp::SaveRequestD0IrpReasonHint(this, 16);
      v6 = FxPowerIdleMachine::PowerReferenceWorker(
             &this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine,
             1u,
             FxPowerReferenceDefault,
             0LL,
             (int)v55,
             v55);
      if ( v6 < 0 )
        goto LABEL_59;
      v54 = 1;
    }
    Irp->m_Irp->IoStatus.Status = v6;
    v6 = this->SendIrpSynchronously(this, Irp);
    if ( v6 < 0 )
      goto LABEL_60;
    if ( !(_BYTE)_a6
      || this->m_HasPowerThread
      || (v56 = FxPkgPnp::_UsageToSpecialType(_a5), !FxPkgPnp::IsUsagePowerRelated(v57, v56))
      || (v6 = this->QueryForPowerThread(this), v6 >= 0) )
    {
      v63 = FxPkgPnp::_UsageToSpecialType(_a5);
      v66 = this->m_DeviceBase;
      v67 = v63;
      m_Method = this->m_DeviceUsageNotification.m_Method;
      m_ObjectSize = v66->m_ObjectSize;
      if ( m_Method )
      {
        v70 = (unsigned __int64)v66 ^ 0xFFFFFFFFFFFFFFF8uLL;
        LOBYTE(v64) = _a6;
        if ( !m_ObjectSize )
          v70 = v65;
        m_Method((WDFDEVICE__ *)v70, v67, v64);
        v65 = 0LL;
      }
      v71 = this->m_DeviceBase;
      v72 = this->m_DeviceUsageNotificationEx.m_Method;
      v73 = v71->m_ObjectSize;
      if ( v72 )
      {
        v74 = (unsigned __int64)v71 ^ 0xFFFFFFFFFFFFFFF8uLL;
        LOBYTE(v64) = _a6;
        if ( !v73 )
          v74 = v65;
        v6 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, unsigned __int64))v72)(
               v74,
               (unsigned int)v67,
               v64,
               v65);
        if ( v6 < 0 )
        {
          if ( FxDevice::IsPdo(this->m_Device) )
          {
            topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v75 + 224)
                                                                                             + 144LL));
            SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
            ObfDereferenceObject(topOfParentStack.m_DeviceObject);
          }
          else
          {
            v77 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v77[-1].MajorFunction = *(_OWORD *)&v77->MajorFunction;
            *(_OWORD *)&v77[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v77->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v77[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v77->Parameters.SetQuota + 6);
            v77[-1].FileObject = v77->FileObject;
            v77[-1].Control = v76;
            Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = v76;
            Irp->m_Irp->IoStatus.Status = v76;
            FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
          }
          v78 = OldFlags;
          Irp->m_Irp->IoStatus.Status = v6;
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v78);
          v79 = 0LL;
          if ( v91 )
          {
            for ( dependentDevice.m_DeviceObject = 0LL;
                  ;
                  SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
            {
              v80 = FxTransactionedList::GetNextEntryLocked(
                      this->m_UsageDependentDeviceList,
                      (FxTransactionedEntry *)((v79 + 104) & -(__int64)(v79 != 0)));
              v79 = (unsigned __int64)&v80[-3].m_TransactionedObject & -(__int64)(v80 != 0LL);
              if ( !v79 )
                break;
              dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)(((unsigned __int64)&v80[-3].m_TransactionedObject & -(__int64)(v80 != 0LL))
                                                                  + 0x98);
            }
          }
          goto LABEL_86;
        }
      }
      else
      {
        v6 = v65;
      }
      FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      if ( m_Owner && _a5 == DeviceUsageTypeDumpFile )
      {
        if ( (_BYTE)_a6 )
          FxPowerIdleMachine::PowerReferenceWorker(
            &m_Owner->m_PowerIdleMachine,
            0,
            FxPowerReferenceDefault,
            0LL,
            0,
            0LL);
        else
          FxPowerIdleMachine::IoDecrement(&m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
      }
      goto LABEL_86;
    }
    if ( FxDevice::IsPdo(this->m_Device) )
    {
      topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v58 + 224) + 144LL));
      SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
      ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    }
    else
    {
      v60 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v60[-1].MajorFunction = *(_OWORD *)&v60->MajorFunction;
      *(_OWORD *)&v60[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v60->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v60[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v60->Parameters.SetQuota + 6);
      v60[-1].FileObject = v60->FileObject;
      v60[-1].Control = v59;
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = v59;
      Irp->m_Irp->IoStatus.Status = v59;
      FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
LABEL_59:
    Irp->m_Irp->IoStatus.Status = v6;
LABEL_60:
    FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
    if ( v91 )
    {
      dependentDevice.m_DeviceObject = 0LL;
      v61 = 0LL;
      while ( 1 )
      {
        v62 = FxTransactionedList::GetNextEntryLocked(
                this->m_UsageDependentDeviceList,
                (FxTransactionedEntry *)((v61 + 104) & -(__int64)(v61 != 0)));
        v61 = (unsigned __int64)&v62[-3].m_TransactionedObject & -(__int64)(v62 != 0LL);
        if ( !v61 )
          break;
        dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)(((unsigned __int64)&v62[-3].m_TransactionedObject & -(__int64)(v62 != 0LL))
                                                            + 0x98);
        SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
      }
    }
LABEL_86:
    if ( v54 )
      FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
    goto LABEL_88;
  }
  v44 = IoAllocateIrp(v39, 0);
  if ( !v44 )
  {
    v6 = -1073741670;
    v45 = this->m_DeviceBase;
    v46 = v45->m_ObjectSize;
    v47 = (const void *)((unsigned __int64)v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)v46 )
      v47 = 0LL;
    WPP_IFR_SF_qddd(
      this->m_Globals,
      (unsigned __int8)v47,
      0xCu,
      0x45u,
      WPP_FxPkgPnp_cpp_Traceguids,
      v47,
      _a5,
      _a6,
      -1073741670);
    goto LABEL_89;
  }
  dependentDevice.m_DeviceObject = 0LL;
  v48 = 0LL;
  relatedIrp.m_Irp = v44;
  do
  {
    v49 = (__int64)FxTransactionedList::GetNextEntryLocked(
                     this->m_UsageDependentDeviceList,
                     (FxTransactionedEntry *)((v48 + 104) & -(__int64)(v48 != 0)));
    v50 = v49 - 104;
    v51 = -v49;
    v48 = v50 & -(__int64)(v51 != 0);
    if ( !v48 )
    {
      LOBYTE(_a6) = Lock;
      goto LABEL_48;
    }
    dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)((v50 & -(__int64)(v51 != 0)) + 0x98);
    v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, (unsigned __int8)v29);
  }
  while ( v6 >= 0 );
  v52 = 0LL;
  while ( 1 )
  {
    v53 = FxTransactionedList::GetNextEntryLocked(
            this->m_UsageDependentDeviceList,
            (FxTransactionedEntry *)((v52 + 104) & -(__int64)(v52 != 0)));
    v52 = (unsigned __int64)&v53[-3].m_TransactionedObject & -(__int64)(v53 != 0LL);
    if ( !v52 || v52 == v48 )
      break;
    dependentDevice.m_DeviceObject = *(_DEVICE_OBJECT **)(((unsigned __int64)&v53[-3].m_TransactionedObject & -(__int64)(v53 != 0LL))
                                                        + 0x98);
    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
  }
LABEL_88:
  if ( v91 )
LABEL_89:
    FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
  v82 = this->m_Globals;
  if ( v82->FxVerboseOn )
    WPP_IFR_SF_D(v82, 5u, 0xCu, 0x46u, WPP_FxPkgPnp_cpp_Traceguids, v6);
  v83 = FxPkgPnp::CompletePnpRequest(this, Irp, v6);
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v83;
}
