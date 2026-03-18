/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006CC14
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x14026CCDC (AdjustCcdDatabasePermissions.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14041A024 (DxgkHandleCcdDatabaseRequests.c)
 *     CreateServiceSid @ 0x14041A24C (CreateServiceSid.c)
 * Callees:
 *     ?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z @ 0x140065540 (-FreePoolWithTag@-$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z.c)
 */

void __fastcall __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag(v1);
}
