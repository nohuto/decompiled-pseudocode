/*
 * XREFs of ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x140095104
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x14001B8C8 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A574 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008F0AC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 */

__int64 __fastcall FxDevice::AllocateCompanionTarget(
        FxDevice *this,
        FxCompanionTarget **DeviceCompanion,
        __int64 a3,
        unsigned int a4)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FX_POOL **v7; // rax
  FxCompanionTarget *v8; // rdi
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  int _a2; // esi
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // r9
  const void *_a1; // rbx
  bool v14; // zf
  unsigned __int16 m_ObjectSize; // ax
  __int64 v16; // rax
  const void *v17; // rbx
  __int64 result; // rax

  p_m_Globals = &this->m_Globals;
  v7 = FxObjectHandleAlloc2(
         this->m_Globals,
         (unsigned __int64)DeviceCompanion,
         0xA0uLL,
         a4,
         0LL,
         0,
         FxObjectTypeExternal);
  v8 = (FxCompanionTarget *)v7;
  if ( v7 )
  {
    FxNonPagedObject::FxNonPagedObject((FxNonPagedObject *)v7, (_FX_DRIVER_GLOBALS *)0x1038, 0xA0u, *p_m_Globals);
    v8->m_RdDeviceCompanion = 0LL;
    v8->FxNonPagedObject::FxObject::__vftable = (FxCompanionTarget_vtbl *)FxCompanionTarget::`vftable'{for `FxNonPagedObject'};
    v8->m_DisposeEvent = 0LL;
    v8->IDeviceCompanionCallbacks::__vftable = (IDeviceCompanionCallbacks_vtbl *)FxCompanionTarget::`vftable'{for `IDeviceCompanionCallbacks'};
    v8->m_ObjectFlags |= 0x810u;
    v8->m_PendingTaskCount = 1;
    v8->m_Device = this;
    SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
    _a2 = FxCompanionLibrary::LoadCompanion(
            qword_1400C90D0,
            v8->m_Globals,
            SafePhysicalDevice,
            (IDeviceCompanionCallbacks *)((unsigned __int64)&v8->IDeviceCompanionCallbacks & -(__int64)(v8 != 0LL)),
            &v8->m_RdDeviceCompanion);
    if ( _a2 >= 0 )
    {
      _a2 = FxObject::Commit(v8, 0LL, 0LL, this, 1u);
      if ( _a2 >= 0 )
        goto LABEL_12;
      m_ObjectSize = this->m_ObjectSize;
      v12 = 31;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v14 = m_ObjectSize == 0;
    }
    else
    {
      v11 = this->m_ObjectSize;
      v12 = 30;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v14 = v11 == 0;
    }
    if ( v14 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, v12, WPP_FxDeviceKm_cpp_Traceguids, _a1, _a2);
    FxObject::DeleteFromFailedCreate(v8);
    v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
    _a2 = -1073741670;
    v16 = this->m_ObjectSize;
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)v16 )
      v17 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0x1Du, WPP_FxDeviceKm_cpp_Traceguids, v17, -1073741670);
  }
LABEL_12:
  result = (unsigned int)_a2;
  *DeviceCompanion = v8;
  return result;
}
