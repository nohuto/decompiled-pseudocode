/*
 * XREFs of imp_WdfSpinLockCreate @ 0x140018550
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x14001867C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x140018798 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  void *ParentObject; // rdx
  int result; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  bool v10; // cf
  unsigned __int16 FxDriverGlobals; // bp
  FxSpinLock *v12; // rax
  FxObject *v13; // rax
  FxObject *v14; // rbx
  int v15; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  WDFSPINLOCK__ *lock; // [rsp+70h] [rbp+18h] BYREF
  FxObject *pParent; // [rsp+78h] [rbp+20h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  lock = 0LL;
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], SpinLockAttributes, 0) >= 0 )
  {
    ParentObject = SpinLockAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v3, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    v3 = pFxDriverGlobals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(v3, retaddr);
  result = FxValidateObjectAttributes(v3, SpinLockAttributes, 0);
  if ( result >= 0 )
  {
    v10 = v3->FxVerifierLock != 0;
    *SpinLock = 0LL;
    FxDriverGlobals = v10 ? 0x100 : 0;
    v12 = (FxSpinLock *)FxObjectHandleAlloc2(
                          v3,
                          v8,
                          0x80uLL,
                          v9,
                          SpinLockAttributes,
                          FxDriverGlobals,
                          FxObjectTypeExternal);
    if ( v12 && (FxSpinLock::FxSpinLock(v12, v3, FxDriverGlobals), (v14 = v13) != 0LL) )
    {
      v15 = FxObject::Commit(v13, SpinLockAttributes, (void **)&lock, 0LL, 1u);
      if ( v15 < 0 )
        FxObject::DeleteFromFailedCreate(v14);
      else
        *SpinLock = lock;
      return v15;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
