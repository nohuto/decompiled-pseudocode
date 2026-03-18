/*
 * XREFs of CheckCallerMatchesSid @ 0x14026D57C
 * Callers:
 *     DxgkHandleCcdDatabaseRequests @ 0x14041A024 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D864 (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1?SeReleaseSubjectContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140098574 (--1-$unique_storage@U-$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1-SeRelease.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCallerMatchesSid(PSID Sid)
{
  NTSTATUS v2; // ebx
  ULONG v3; // esi
  struct _ACL *Pool2; // rax
  struct _ACL *v5; // rbx
  NTSTATUS Acl; // esi
  struct _ACL *v8; // [rsp+58h] [rbp-29h] BYREF
  int AccessStatus; // [rsp+60h] [rbp-21h] BYREF
  DWORD GrantedAccess; // [rsp+64h] [rbp-1Dh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+68h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v13; // [rsp+90h] [rbp+Fh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B8h] [rbp+37h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v13 = 0LL;
  v2 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v2 >= 0 )
  {
    v3 = RtlLengthSid(Sid) + 20;
    Pool2 = (struct _ACL *)ExAllocatePool2(256LL, v3, 1265072196LL);
    v8 = Pool2;
    v5 = Pool2;
    if ( !Pool2 )
    {
      v2 = -1073741670;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2739;
LABEL_5:
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v8);
      goto LABEL_19;
    }
    Acl = RtlCreateAcl(Pool2, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v5, 2u, 0x1F0000u, Sid);
      if ( Acl >= 0 )
      {
        v2 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
        if ( v2 >= 0 )
        {
          if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2746;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"RtlValidSecurityDescriptor(&SecurityDescriptor)",
              2746LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          GenericMapping.GenericAll = 2031616;
          GenericMapping.GenericRead = 0x20000;
          GenericMapping.GenericWrite = 0x20000;
          GenericMapping.GenericExecute = 0x20000;
          GrantedAccess = 0;
          AccessStatus = 0;
          if ( SeAccessCheck(
                 SecurityDescriptor,
                 &SubjectContext,
                 0,
                 0x1F0000u,
                 0,
                 0LL,
                 &GenericMapping,
                 1,
                 &GrantedAccess,
                 &AccessStatus)
            || g_OSTestSigningEnabled )
          {
            __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v8);
            v2 = 0;
            goto LABEL_19;
          }
          v2 = AccessStatus;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2745;
        }
        goto LABEL_5;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2744;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2743;
    }
    __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v8);
    v2 = Acl;
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2733;
LABEL_19:
  wil::details::unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>(&p_SubjectContext);
  return (unsigned int)v2;
}
