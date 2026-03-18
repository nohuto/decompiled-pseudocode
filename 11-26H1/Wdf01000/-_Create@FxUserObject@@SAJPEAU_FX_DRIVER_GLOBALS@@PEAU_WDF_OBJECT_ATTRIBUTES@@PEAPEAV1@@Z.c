/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001B3B8
 * Callers:
 *     imp_WdfObjectCreate @ 0x14001B2C0 (imp_WdfObjectCreate.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x140093100 (imp_WdfCxDeviceInitAllocateContext.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A574 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject,
        unsigned int a4)
{
  FxNonPagedObject *v7; // rax
  FxUserObject *v8; // rbx
  signed int _a1; // eax
  unsigned int v10; // esi
  void *handle; // [rsp+78h] [rbp+20h] BYREF

  v7 = (FxNonPagedObject *)FxObjectHandleAlloc2(
                             FxDriverGlobals,
                             (unsigned __int64)Attributes,
                             0x78uLL,
                             a4,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
  v8 = (FxUserObject *)v7;
  if ( v7 )
  {
    FxNonPagedObject::FxNonPagedObject(v7, (_FX_DRIVER_GLOBALS *)0x100C, 0x78u, FxDriverGlobals);
    v8->__vftable = (FxUserObject_vtbl *)FxUserObject::`vftable';
    _a1 = FxObject::Commit(v8, Attributes, &handle, 0LL, 1u);
    v10 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, _a1);
      FxObject::DeleteFromFailedCreate(v8);
    }
    else
    {
      *pUserObject = v8;
    }
    return v10;
  }
  else
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
