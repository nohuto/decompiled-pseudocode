/*
 * XREFs of DxgkHandleCcdDatabaseRequests @ 0x14041A024
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006CC14 (--1-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoolWit.c)
 *     AdjustCcdDatabasePermissions @ 0x14026CCDC (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x14026D57C (CheckCallerMatchesSid.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkInvalidateQdcCacheOnlyDatabase @ 0x14034A144 (DxgkInvalidateQdcCacheOnlyDatabase.c)
 *     CreateServiceSid @ 0x14041A24C (CreateServiceSid.c)
 */

__int64 __fastcall DxgkHandleCcdDatabaseRequests(int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  PSID v7; // rbx
  int v8; // ebx
  struct DXGPROCESS *Current; // rax
  char v11; // cl
  unsigned int v12; // eax
  int v13; // edi
  _DWORD v14[8]; // [rsp+20h] [rbp-20h] BYREF
  PSID Sid; // [rsp+78h] [rbp+38h] BYREF

  v14[0] = 80;
  v14[1] = -123880637;
  v14[2] = 1617898341;
  v14[3] = -1424805804;
  v14[4] = 1466607281;
  v14[5] = 2109097600;
  CreateServiceSid(&Sid, v14);
  v7 = Sid;
  if ( !Sid )
  {
    v8 = -1073741670;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2784;
    return (unsigned int)v8;
  }
  Current = DXGPROCESS::GetCurrent(v6);
  if ( !Current || (v11 = 1, (*((_DWORD *)Current + 102) & 4) == 0) )
    v11 = 0;
  v12 = a1 & 0xC0000000;
  if ( (a1 & 0xC0000000) != 0x80000000 )
  {
    if ( v12 != -1073741824 )
    {
      if ( v12 == 0x40000000 && !v11 )
      {
        v8 = -1073741790;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2795;
LABEL_21:
        __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&Sid);
        return (unsigned int)v8;
      }
      goto LABEL_16;
    }
    if ( v11 )
      goto LABEL_16;
  }
  v13 = CheckCallerMatchesSid(v7);
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2806;
LABEL_15:
    v8 = v13;
    goto LABEL_21;
  }
LABEL_16:
  if ( a1 == 0x80000000 )
  {
    v13 = AdjustCcdDatabasePermissions(
            0,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
            0,
            v7);
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2813;
      goto LABEL_15;
    }
    v8 = AdjustCcdDatabasePermissions(
           0,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
           0,
           v7);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2814;
      goto LABEL_21;
    }
    goto LABEL_27;
  }
  if ( a1 == -2147483647 )
  {
    DxgkInvalidateQdcCacheOnlyDatabase();
LABEL_27:
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&Sid);
    return 0LL;
  }
  if ( a1 == 0x40000000 && a2 >= 0x18 )
  {
    DisplayScenarioSetCCDRetrievalForActivity(a3 + 4, *(unsigned int *)(a3 + 20));
    goto LABEL_27;
  }
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&Sid);
  return 3221225485LL;
}
