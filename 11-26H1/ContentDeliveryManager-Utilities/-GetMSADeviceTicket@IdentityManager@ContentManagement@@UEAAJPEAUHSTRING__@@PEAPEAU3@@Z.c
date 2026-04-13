/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800320E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIAuthenticationManager@WebAuthentication@Security@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAuthenticationManager@WebAuthentication@Security@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023940 (--$ActivateInstance@V-$ComPtr@UIAuthenticationManager@WebAuthentication@Security@Internal@Window.c)
 *     ??$CreateExternalObjectVector@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@1234@@Z @ 0x1800247B0 (--$CreateExternalObjectVector@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Win.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180027930 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING, __int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD); // rdi
  int v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v24; // edx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *); // rdi
  int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64 *); // rdi
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  int v35; // [rsp+20h] [rbp-59h]
  __int64 v36; // [rsp+30h] [rbp-49h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-41h] BYREF
  __int64 v38; // [rsp+40h] [rbp-39h] BYREF
  __int64 v39; // [rsp+48h] [rbp-31h] BYREF
  __int64 v40; // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-21h] BYREF
  __int64 v42; // [rsp+60h] [rbp-19h] BYREF
  __int64 v43; // [rsp+68h] [rbp-11h] BYREF
  int v44; // [rsp+70h] [rbp-9h] BYREF
  __int64 v45; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+7h] BYREF
  __int64 v47; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a3 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
    0x42u,
    0x41u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Security::WebAuthentication::IAuthenticationManager>>(
         v47,
         &v45);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v36 = 0LL;
    v47 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
      0x46u,
      0x45u);
    v7 = v47;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    ActivationFactory = RoGetActivationFactory(v7, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v36);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v35);
LABEL_40:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
      goto LABEL_41;
    }
    v38 = 0LL;
    v9 = v36;
    v10 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v36 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    v47 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MBI_SSL", 8u, 7u);
    v11 = v10(v9, a2, v47, &v38);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v11,
        v35);
LABEL_39:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
      goto LABEL_40;
    }
    v37 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v14 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>>(
            v12,
            &v37,
            v13);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 443LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14,
        v35);
LABEL_38:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      goto LABEL_39;
    }
    v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v37)[13])(v37, v38);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 444LL;
      goto LABEL_9;
    }
    v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v37;
    v17 = **v37;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    v14 = v17(v16, &GUID_cb72d686_9516_520d_a274_fa4cd1762cb2, &v39);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 445LL;
      goto LABEL_9;
    }
    v41 = 0LL;
    v40 = 0LL;
    v18 = v45;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v45 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
    v20 = v19(v18, v39, &v41);
    v6 = v20;
    if ( v20 < 0 )
    {
      v21 = (unsigned int)v20;
      v22 = 450LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v21,
        v35);
      goto LABEL_37;
    }
    v23 = v41;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(
           v23,
           v24,
           v25);
    if ( v6 < 0
      || (v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v23)[8])(
                 v23,
                 &v40),
          v6 < 0) )
    {
      v22 = 451LL;
      goto LABEL_35;
    }
    v26 = v40;
    if ( !v40 )
    {
      v6 = -2147023728;
      v22 = 452LL;
LABEL_35:
      v21 = (unsigned int)v6;
      goto LABEL_36;
    }
    v43 = 0LL;
    v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
    v28 = v27(v26, &v43);
    v6 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C8,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v28,
        v35);
LABEL_22:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
LABEL_37:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
      goto LABEL_38;
    }
    v42 = 0LL;
    v29 = v43;
    v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v43 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
    v31 = v30(v29, 0LL, &v42);
    v6 = v31;
    if ( v31 >= 0 )
    {
      v44 = 0;
      v31 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 64LL))(v42, &v44);
      v6 = v31;
      if ( v31 >= 0 )
      {
        v6 = v44;
        if ( v44 < 0 )
        {
          v33 = (unsigned int)v44;
          v32 = 463LL;
          goto LABEL_26;
        }
        v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 48LL))(v42, a3);
        v6 = v31;
        if ( v31 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
          v6 = 0;
          goto LABEL_41;
        }
        v32 = 464LL;
      }
      else
      {
        v32 = 462LL;
      }
    }
    else
    {
      v32 = 459LL;
    }
    v33 = (unsigned int)v31;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v33,
      v35);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v5,
    v35);
LABEL_41:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
  return (unsigned int)v6;
}
