/*
 * XREFs of ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x14008F9AC
 * Callers:
 *     ?InvokeCompanionCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCompanionTarget@@@Z @ 0x1400AAFD0 (-InvokeCompanionCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x14009AE2C (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxCompanionTarget::NotifyPrePrepareHardware(
        FxCompanionTarget *this,
        WDFCMRESLIST__ *Raw,
        WDFCMRESLIST__ *Translated)
{
  _CM_RESOURCE_LIST *WdmList; // rsi
  _CM_RESOURCE_LIST *v6; // rbx
  unsigned int v7; // edi
  FxCmResList *pList; // [rsp+30h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(this->m_Device->m_Globals, (unsigned __int64)Raw, 0x1036u, (void **)&pList);
  WdmList = FxCmResList::CreateWdmList(pList, 0x100uLL);
  FxObjectHandleGetPtr(this->m_Device->m_Globals, (unsigned __int64)Translated, 0x1036u, (void **)&pList);
  v6 = FxCmResList::CreateWdmList(pList, 0x100uLL);
  v7 = this->m_RdDeviceCompanion->SendPrepareHardware(this->m_RdDeviceCompanion, WdmList, v6);
  if ( WdmList )
    ExFreePoolWithTag(WdmList, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
