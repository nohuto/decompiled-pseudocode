/*
 * XREFs of imp_WdfChildListRetrieveNextDevice @ 0x1400558F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140055AD8 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfChildListRetrieveNextDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        WDFDEVICE__ **Device,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned int _a2; // eax
  unsigned int Flags; // eax
  unsigned __int16 v10; // r9
  int v11; // ebx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rax
  unsigned int IdentificationDescriptionSize; // edx
  unsigned int _a3; // eax
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  unsigned int m_AddressDescriptionSize; // eax
  void *retaddr; // [rsp+48h] [rbp+8h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+10h] BYREF
  FxChildList *pList; // [rsp+60h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !Iterator )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  *Device = 0LL;
  _a2 = Iterator->Size;
  if ( Iterator->Size != 40 )
  {
    v10 = 24;
LABEL_8:
    v11 = -1073741820;
    WPP_IFR_SF_DDd(pFxDriverGlobals, 0x28u, 0xCu, v10, WPP_FxChildListAPI_cpp_Traceguids, _a2, 0x28u, -1073741820);
    return v11;
  }
  Flags = Iterator->Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    v11 = -1073741811;
    WPP_IFR_SF_DDd(pFxDriverGlobals, 0x28u, 0xCu, 0x19u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7u, -1073741811);
    return v11;
  }
  if ( !Info )
    return FxChildList::GetNextDevice(pList, Device, Iterator, Info);
  _a2 = Info->Size;
  if ( Info->Size != 40 )
  {
    v10 = 26;
    goto LABEL_8;
  }
  IdentificationDescription = Info->IdentificationDescription;
  if ( !IdentificationDescription
    || (IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize,
        _a3 = pList->m_IdentificationDescriptionSize,
        _a3 == IdentificationDescriptionSize) )
  {
    AddressDescription = Info->AddressDescription;
    if ( !AddressDescription )
      return FxChildList::GetNextDevice(pList, Device, Iterator, Info);
    m_AddressDescriptionSize = pList->m_AddressDescriptionSize;
    if ( m_AddressDescriptionSize )
    {
      if ( m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize )
        return FxChildList::GetNextDevice(pList, Device, Iterator, Info);
      v11 = -1073741811;
      WPP_IFR_SF_DDd(
        pFxDriverGlobals,
        (unsigned __int8)AddressDescription,
        0xCu,
        0x1Du,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescription->AddressDescriptionSize,
        m_AddressDescriptionSize,
        -1073741811);
    }
    else
    {
      v11 = -1073741808;
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xCu, 0x1Cu, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
    }
  }
  else
  {
    v11 = -1073741811;
    WPP_IFR_SF_DDd(
      pFxDriverGlobals,
      IdentificationDescriptionSize,
      0xCu,
      0x1Bu,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescriptionSize,
      _a3,
      -1073741811);
  }
  return v11;
}
