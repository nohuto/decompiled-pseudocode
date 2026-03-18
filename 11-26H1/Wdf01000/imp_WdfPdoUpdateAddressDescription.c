/*
 * XREFs of imp_WdfPdoUpdateAddressDescription @ 0x14008BE50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x140026580 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C8A8 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall imp_WdfPdoUpdateAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  __int64 result; // rax
  FxDeviceDescriptionEntry *m_Description; // rsi
  FxChildList *m_DeviceList; // rbp
  KIRQL v7; // bl
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             (unsigned __int64)Device,
             "imp_WdfPdoUpdateAddressDescription",
             &pPkgPdo,
             &pFxDriverGlobals,
             0LL);
  if ( !AddressDescription )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (int)result >= 0 )
  {
    m_Description = pPkgPdo->m_Description;
    if ( m_Description
      && (m_DeviceList = m_Description->m_DeviceList,
          m_DeviceList->m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize) )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&m_DeviceList->m_ListLock);
      FxChildList::CopyAddress(m_DeviceList, m_Description->m_AddressDescription, AddressDescription);
      KeReleaseSpinLock(&m_DeviceList->m_ListLock, v7);
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
