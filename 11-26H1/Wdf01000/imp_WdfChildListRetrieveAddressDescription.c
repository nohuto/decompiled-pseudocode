/*
 * XREFs of imp_WdfChildListRetrieveAddressDescription @ 0x14008B880
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x14008C95C (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 */

__int64 __fastcall imp_WdfChildListRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  unsigned int _a3; // edx
  unsigned int v9; // ebx
  unsigned int m_AddressDescriptionSize; // eax
  unsigned int AddressDescriptionSize; // edx
  int v12; // eax
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxChildList *pList; // [rsp+80h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  v7 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xCu, 0xEu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( !AddressDescription )
    FxVerifierNullBugCheck(v7, retaddr);
  _a3 = pList->m_IdentificationDescriptionSize;
  if ( _a3 == IdentificationDescription->IdentificationDescriptionSize )
  {
    m_AddressDescriptionSize = pList->m_AddressDescriptionSize;
    if ( m_AddressDescriptionSize )
    {
      AddressDescriptionSize = AddressDescription->AddressDescriptionSize;
      if ( m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize )
      {
        v12 = FxChildList::GetAddressDescription(pList, IdentificationDescription, AddressDescription);
        v9 = v12;
        if ( v7->FxVerboseOn )
          WPP_IFR_SF_qd(v7, 5u, 0xCu, 0x12u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v12);
      }
      else
      {
        v9 = -1073741808;
        WPP_IFR_SF_DDd(
          v7,
          AddressDescriptionSize,
          0xCu,
          0x11u,
          WPP_FxChildListAPI_cpp_Traceguids,
          AddressDescriptionSize,
          m_AddressDescriptionSize,
          -1073741808);
      }
    }
    else
    {
      v9 = -1073741808;
      WPP_IFR_SF_D(v7, 2u, 0xCu, 0x10u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
    }
  }
  else
  {
    v9 = -1073741808;
    WPP_IFR_SF_DDd(
      v7,
      _a3,
      0xCu,
      0xFu,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      _a3,
      -1073741808);
  }
  return v9;
}
