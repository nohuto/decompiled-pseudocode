/*
 * XREFs of ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14001C20C
 * Callers:
 *     imp_WdfDpcCreate @ 0x14001C0F0 (imp_WdfDpcCreate.c)
 * Callees:
 *     ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001BAD0 (--0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14001C2C0 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 */

__int64 __fastcall FxDpc::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  FxDpc *v9; // rax
  FxDpc *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi

  v9 = (FxDpc *)FxObjectHandleAlloc2(
                  FxDriverGlobals,
                  (unsigned __int64)Config,
                  0xE0uLL,
                  (unsigned int)ParentObject,
                  Attributes,
                  0,
                  FxObjectTypeExternal);
  if ( !v9 )
    return 3221225626LL;
  FxDpc::FxDpc(v9, FxDriverGlobals);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  v12 = FxDpc::Initialize(v10, Attributes, Config, ParentObject, Dpc);
  if ( v12 < 0 )
    FxObject::DeleteFromFailedCreate(v11);
  return (unsigned int)v12;
}
