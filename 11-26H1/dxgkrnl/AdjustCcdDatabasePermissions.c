/*
 * XREFs of AdjustCcdDatabasePermissions @ 0x14026CCDC
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x14026CCDC (AdjustCcdDatabasePermissions.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14041A024 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006CC14 (--1-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoolWit.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D864 (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x14006DC18 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x140098598 (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoo.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     AdjustCcdDatabasePermissions @ 0x14026CCDC (AdjustCcdDatabasePermissions.c)
 *     _CcdOpenRegistrySubkey @ 0x1403E4610 (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall AdjustCcdDatabasePermissions(int a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  ULONG v7; // r15d
  NTSTATUS DaclSecurityDescriptor; // ebx
  ULONG v9; // eax
  __int64 Pool2; // rax
  PSECURITY_DESCRIPTOR v11; // rbx
  NTSTATUS v12; // eax
  unsigned int v13; // edi
  PACL v14; // rcx
  ULONG i; // ebx
  NTSTATUS v16; // edi
  int AclSize; // ebx
  ULONG v18; // ebx
  struct _ACL *v19; // rax
  struct _ACL *v20; // rdi
  ULONG v21; // eax
  __int64 v22; // rax
  PSECURITY_DESCRIPTOR v23; // rbx
  unsigned int *v24; // rbx
  ULONG v25; // r14d
  __int64 v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-59h] BYREF
  PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor; // [rsp+58h] [rbp-51h] BYREF
  ULONG ResultLength[2]; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int8 DaclDefaulted[8]; // [rsp+68h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-39h] BYREF
  ULONG Length; // [rsp+78h] [rbp-31h] BYREF
  unsigned int *v35; // [rsp+80h] [rbp-29h] BYREF
  PACL Dacl; // [rsp+88h] [rbp-21h] BYREF
  ULONG AceListLength; // [rsp+90h] [rbp-19h] BYREF
  ULONG Size; // [rsp+94h] [rbp-15h] BYREF
  ULONG Size_4; // [rsp+98h] [rbp-11h] BYREF
  PVOID Ace; // [rsp+A0h] [rbp-9h] BYREF
  PVOID AceList; // [rsp+A8h] [rbp-1h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+27h]
  unsigned __int8 DaclPresent; // [rsp+120h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2502;
    return 0LL;
  }
  v7 = 0;
  Size_4 = 2;
  Handle = 0LL;
  DaclSecurityDescriptor = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, &Size_4);
  if ( DaclSecurityDescriptor < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2510;
LABEL_73:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v9 = 336;
  SecurityDescriptor = 0LL;
  for ( Length = 336; ; v9 = Length )
  {
    Pool2 = ExAllocatePool2(256LL, v9, 1265072196LL);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&SecurityDescriptor,
      Pool2);
    v11 = SecurityDescriptor;
    if ( !SecurityDescriptor )
    {
      v13 = -1073741801;
      goto LABEL_75;
    }
    v12 = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Length, &Length);
    v13 = v12;
    if ( v12 != -1073741789 )
      break;
  }
  if ( v12 < 0 )
  {
LABEL_75:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2532;
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return v13;
  }
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v11, &DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2539;
    goto LABEL_72;
  }
  if ( !DaclPresent || (v14 = Dacl) == 0LL )
  {
    DaclSecurityDescriptor = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2543;
    goto LABEL_72;
  }
  DaclPresent = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= v14->AceCount )
    {
      if ( DaclPresent )
        goto LABEL_56;
      SelfRelativeSecurityDescriptor = 0LL;
      memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
      v43 = 0LL;
      if ( v14->AclSize < 8u )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2578;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Dacl->AclSize >= sizeof(ACL)",
          2578LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v14 = Dacl;
      }
      AclSize = v14->AclSize;
      v18 = RtlLengthSid(a4) + 8 + AclSize;
      v19 = (struct _ACL *)ExAllocatePool2(256LL, v18, 1265072196LL);
      *(_QWORD *)ResultLength = v19;
      v20 = v19;
      if ( v19 )
      {
        DaclSecurityDescriptor = RtlCreateAcl(v19, v18, 2u);
        if ( DaclSecurityDescriptor >= 0 )
        {
          AceList = 0LL;
          AceListLength = 0;
          DaclSecurityDescriptor = RtlGetAce(Dacl, 0, &AceList);
          if ( DaclSecurityDescriptor >= 0 )
          {
            DaclSecurityDescriptor = RtlGetAcesBufferSize(Dacl, &AceListLength);
            if ( DaclSecurityDescriptor >= 0 )
            {
              DaclSecurityDescriptor = RtlAddAce(v20, 2u, 0, AceList, AceListLength);
              if ( DaclSecurityDescriptor >= 0 )
              {
                DaclSecurityDescriptor = RtlAddAccessAllowedAceEx(v20, 2u, 2u, 0x2001Fu, a4);
                if ( DaclSecurityDescriptor >= 0 )
                {
                  DaclSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v20, 0);
                    if ( DaclSecurityDescriptor >= 0 )
                    {
                      if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
                      {
                        v21 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
                        Size = v21;
                        if ( v21 >= 0x28 )
                        {
                          v22 = ExAllocatePool2(256LL, v21, 1265072196LL);
                          _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
                            (__int64 *)&SelfRelativeSecurityDescriptor,
                            v22);
                          if ( ____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&SelfRelativeSecurityDescriptor) )
                          {
                            DaclSecurityDescriptor = -1073741670;
                            WdLogSingleEntry1(2LL);
                            WdLogGlobalForLineNumber = 2624;
                          }
                          else
                          {
                            v23 = SelfRelativeSecurityDescriptor;
                            memset(SelfRelativeSecurityDescriptor, 0, Size);
                            v16 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v23, &Size);
                            if ( v16 < 0 )
                            {
                              WdLogSingleEntry1(2LL);
                              WdLogGlobalForLineNumber = 2629;
                              __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
                              __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)ResultLength);
                              goto LABEL_24;
                            }
                            DaclSecurityDescriptor = ZwSetSecurityObject(Handle, 4u, v23);
                            if ( DaclSecurityDescriptor >= 0 )
                            {
                              __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
                              __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)ResultLength);
                              goto LABEL_56;
                            }
                            WdLogSingleEntry1(2LL);
                            WdLogGlobalForLineNumber = 2634;
                          }
                        }
                        else
                        {
                          DaclSecurityDescriptor = -1073741595;
                          WdLogSingleEntry1(2LL);
                          WdLogGlobalForLineNumber = 2617;
                        }
                      }
                      else
                      {
                        DaclSecurityDescriptor = -1073741595;
                        WdLogSingleEntry1(2LL);
                        WdLogGlobalForLineNumber = 2609;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 2605;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 2602;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 2599;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2596;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 2595;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2594;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2589;
        }
      }
      else
      {
        DaclSecurityDescriptor = -1073741670;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2586;
      }
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)ResultLength);
LABEL_72:
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
      goto LABEL_73;
    }
    Ace = 0LL;
    v16 = RtlGetAce(v14, i, &Ace);
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2552;
LABEL_24:
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
      DaclSecurityDescriptor = v16;
      goto LABEL_73;
    }
    if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0x2001F) == 0x2001F && RtlEqualSid((char *)Ace + 8, a4) )
      break;
    v14 = Dacl;
  }
  DaclPresent = 1;
LABEL_56:
  v24 = 0LL;
  v25 = 544;
  v35 = 0LL;
  while ( 1 )
  {
    do
    {
      if ( !v24 )
      {
        v26 = ExAllocatePool2(256LL, v25, 1265072196LL);
        _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
          (__int64 *)&v35,
          v26);
        v24 = v35;
        if ( !v35 )
        {
          DaclSecurityDescriptor = -1073741670;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2651;
          __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((void **)&v35);
          goto LABEL_72;
        }
      }
      ResultLength[0] = 0;
      v27 = ZwEnumerateKey(Handle, v7, KeyBasicInformation, v24, v25 - 2, ResultLength);
      v28 = v27;
      if ( v27 != -2147483643 && v27 != -1073741789 )
        break;
      v25 = ResultLength[0] + 2;
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        (__int64 *)&v35,
        0LL);
      v24 = v35;
    }
    while ( (_DWORD)v28 == -2147483643 || (_DWORD)v28 == -1073741789 );
    if ( (int)v28 < 0 )
      break;
    *((_WORD *)v24 + ((unsigned __int64)v24[3] >> 1) + 8) = 0;
    AdjustCcdDatabasePermissions(Handle, v24 + 4, a3 + 1, a4);
    ++v7;
  }
  if ( (_DWORD)v28 != -2147483622 )
  {
    if ( (_DWORD)v28 == -1073741444 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2683;
    }
    else
    {
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 2689;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed to enumerate key with status 0x%I64x",
        v28,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((void **)&v35);
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
  return 0LL;
}
