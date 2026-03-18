/*
 * XREFs of imp_WdfChildListBeginIteration @ 0x1400556D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x140055808 (-BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfChildListBeginIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *v6; // rdi
  unsigned int _a2; // eax
  FxChildList *v8; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v6 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0x15u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !Iterator )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( Iterator->Size == 40 )
  {
    _a2 = Iterator->Flags;
    if ( (_a2 & 0xFFFFFFF8) == 0 )
    {
      v8 = pList;
      *(_OWORD *)Iterator->Reserved = 0LL;
      *(_OWORD *)&Iterator->Reserved[2] = 0LL;
      FxChildList::BeginIteration(v8, Iterator);
      return;
    }
    WPP_IFR_SF_DDd(v6, v5, 0xCu, 0x17u, WPP_FxChildListAPI_cpp_Traceguids, _a2, 7u, -1073741811);
  }
  else
  {
    WPP_IFR_SF_DDd(v6, v5, 0xCu, 0x16u, WPP_FxChildListAPI_cpp_Traceguids, Iterator->Size, 0x28u, -1073741820);
  }
  FxVerifierDbgBreakPoint(v6);
}
