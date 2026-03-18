/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x14001C730
 * Callers:
 *     imp_WdfWaitLockCreate @ 0x14001C680 (imp_WdfWaitLockCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1400AA32C (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140018874 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x14001CD08 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  FxObject *v9; // rax
  FxObject *v10; // rdi
  int v12; // ebx

  *LockHandle = 0LL;
  v9 = (FxObject *)FxObjectHandleAlloc2(
                     FxDriverGlobals,
                     (unsigned __int64)Attributes,
                     0x90uLL,
                     AssignDriverAsDefaultParent,
                     Attributes,
                     0,
                     FxObjectTypeExternal);
  v10 = v9;
  if ( v9 )
  {
    FxObject::FxObject(v9, (_FX_DRIVER_GLOBALS *)0x1023, 0x90u, FxDriverGlobals);
    FxWaitLockInternal::FxWaitLockInternal((FxWaitLockInternal *)&v10[1]);
    v10->__vftable = (FxObject_vtbl *)FxObject::`vftable';
    KeInitializeEvent((PRKEVENT)&v10[1], SynchronizationEvent, 1u);
    LOBYTE(v10[1].m_ObjectFlags) = 1;
    v12 = FxObject::Commit(v10, Attributes, (void **)LockHandle, ParentObject, AssignDriverAsDefaultParent);
    if ( v12 < 0 )
      FxObject::DeleteFromFailedCreate(v10);
    return (unsigned int)v12;
  }
  else
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
