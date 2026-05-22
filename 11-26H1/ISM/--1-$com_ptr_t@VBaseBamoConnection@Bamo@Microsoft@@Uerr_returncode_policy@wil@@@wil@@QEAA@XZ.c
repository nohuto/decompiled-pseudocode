/*
 * XREFs of ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180088DE4
 * Callers:
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18002352C (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x180045514 (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x180045798 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18007B158 (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180095A68 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??1MPCManager@@UEAA@XZ @ 0x1800B5FE8 (--1MPCManager@@UEAA@XZ.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180163B24 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x180164B08 (--1MPCManagerClient@@UEAA@XZ.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x18016FAAC (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateServer_InputSystemInternalServerConnection__::_1_::dtor$0 @ 0x1801D5385 (_Microsoft--Bamo--BaseBamoConnection--CreateServer_InputSystemInternalServerConnection__--_1_--d.c)
 *     __lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()_::_1_::dtor$1 @ 0x1801D550F (__lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator()_--_1_--dtor$1.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x1801D559F (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BaseBamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x1801D67E8 (_Microsoft--Bamo--BaseBamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180088FE0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  return result;
}
