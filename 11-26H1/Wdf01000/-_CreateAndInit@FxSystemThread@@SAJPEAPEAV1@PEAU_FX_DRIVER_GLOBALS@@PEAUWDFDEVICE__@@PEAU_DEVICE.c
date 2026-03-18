/*
 * XREFs of ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1400AC798
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1400A6B10 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400AC454 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1400AC550 (-CreateThread@FxSystemThread@@AEAAJXZ.c)
 */

__int64 __fastcall FxSystemThread::_CreateAndInit(
        FxSystemThread **SystemThread,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DeviceObject)
{
  FX_POOL **v8; // rax
  FxNonPagedObject *v9; // rax
  unsigned __int8 v10; // r8
  FxSystemThread *v11; // rbx
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r8
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+8h] BYREF

  *SystemThread = 0LL;
  v8 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)FxDriverGlobals,
         0x100uLL,
         (unsigned int)DeviceObject,
         0LL,
         0,
         FxObjectTypeInternal);
  if ( v8
    && (FxSystemThread::FxSystemThread((FxSystemThread *)v8, FxDriverGlobals), (v11 = (FxSystemThread *)v9) != 0LL) )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(v9, &PreviousIrql, v10);
    v12 = PreviousIrql;
    v11->m_Initialized = 1;
    FxNonPagedObject::Unlock(v11, v12, v13);
    if ( (int)FxSystemThread::CreateThread(v11) >= 0 )
    {
      *SystemThread = v11;
      return 0LL;
    }
    else
    {
      WPP_IFR_SF_qqd(
        FxDriverGlobals,
        2u,
        0xCu,
        0xBu,
        WPP_FxSystemThread_cpp_Traceguids,
        Device,
        DeviceObject,
        0xC0000001);
      FxObject::DeleteFromFailedCreate(v11);
      return 3221225473LL;
    }
  }
  else
  {
    WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0xCu, 0xAu, WPP_FxSystemThread_cpp_Traceguids, Device, DeviceObject, 0xC000009A);
    return 3221225626LL;
  }
}
