/*
 * XREFs of ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14006F2B0
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14006EE28 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x14001B834 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 */

__int64 __fastcall FxIoResReqList::_CreateAndInit(
        FX_POOL ***ResourceReqList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebx
  FX_POOL **v7; // rax
  FX_POOL **v8; // rdi

  v4 = 0;
  *ResourceReqList = 0LL;
  v7 = FxObjectHandleAlloc2(
         FxDriverGlobals,
         (unsigned __int64)FxDriverGlobals,
         0xA0uLL,
         a4,
         0LL,
         0,
         FxObjectTypeExternal);
  v8 = v7;
  if ( v7 )
  {
    FxResourceCollection::FxResourceCollection((FxResourceCollection *)v7, FxDriverGlobals, 0x1037u, 0xA0u, 3u);
    v8[19] = 0LL;
    *v8 = (FX_POOL *)FxIoResList::`vftable';
    *((_BYTE *)v8 + 144) = 3;
    *ResourceReqList = v8;
  }
  else
  {
    v4 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxResource_hpp_Traceguids_0, 0xC000009A);
  }
  return v4;
}
