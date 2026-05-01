/*
 * XREFs of ??$?0U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAA@PEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@W4MARSHAL_KIND@@@Z @ 0x180214CA0
 * Callers:
 *     ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180392380 (-OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C3B60 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C3D90 (-OnViewCreated@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180072BA0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 */

__int64 *__fastcall CMarshaledInterface::CMarshaledInterface(__int64 *a1, IUnknown *a2)
{
  *a1 = 0LL;
  CMarshaledInterface::Marshal(a1, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, a2, 2);
  return a1;
}
