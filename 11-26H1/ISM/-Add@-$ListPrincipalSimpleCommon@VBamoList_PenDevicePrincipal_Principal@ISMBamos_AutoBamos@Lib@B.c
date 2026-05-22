/*
 * XREFs of ?Add@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@QEAAJPEAVBamoPenDevicePrincipal@@@Z @ 0x18018DCBC
 * Callers:
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x18018ED88 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoPenDevicePrincipal@@@Z @ 0x18018F2D8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBa.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>,BamoPenDevicePrincipal *>::Add(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r8
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  unsigned int inserted; // ebx
  Microsoft::BamoImpl::BamoImplObject *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1[4] + 32LL);
  v5 = 0LL;
  if ( *(int *)(v4 + 8) > 0 )
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock(v8, v5);
  inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>,BamoPenDevicePrincipal *>::InsertWorker(
               a1,
               v5,
               (__int64)(a1[8] - a1[7]) >> 3,
               a2);
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v8);
  return inserted;
}
