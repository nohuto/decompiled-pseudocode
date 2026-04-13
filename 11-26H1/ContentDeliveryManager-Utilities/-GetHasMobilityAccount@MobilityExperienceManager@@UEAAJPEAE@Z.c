/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A9890
 * Callers:
 *     <none>
 * Callees:
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180027798 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002A370 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??Dvector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEBAAEBV?$ComPtr@UIWebAccount@Credentials@Security@Windows@@@WRL@Microsoft@@XZ @ 0x1800A97C0 (--Dvector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Secu.c)
 *     ??Yvector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@H@Z @ 0x1800A97D0 (--Yvector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Secu.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800AA330 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Security@Window.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  HRESULT v7; // edx
  __int64 v8; // r8
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 *v11; // rax
  int v12; // ecx
  int v13; // edi
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  HRESULT v20; // eax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-59h] BYREF
  int (__fastcall ***v23)(_QWORD, GUID *, __int64 **); // [rsp+28h] [rbp-51h] BYREF
  INT32 result; // [rsp+30h] [rbp-49h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-41h] BYREF
  __int64 v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v28; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+58h] [rbp-21h] BYREF
  int v30; // [rsp+60h] [rbp-19h]
  __int64 v31; // [rsp+68h] [rbp-11h] BYREF
  int v32; // [rsp+70h] [rbp-9h] BYREF
  int *v33; // [rsp+78h] [rbp-1h]
  int v34; // [rsp+80h] [rbp+7h] BYREF
  __int64 v35; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+17h] BYREF
  HSTRING string2; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a2 = 0;
  v28 = 0LL;
  string2 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
    0x41u,
    0x40u);
  ActivationFactory = RoGetActivationFactory(string2, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v28);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v22 = 0LL;
    v5 = *v28;
    v22 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v5 + 96))(
           v28,
           &v22);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v26 = 0LL;
      v9 = v22;
      v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
             v22,
             v7,
             v8);
      if ( v4 < 0
        || (v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v9)[8])(
                   v9,
                   &v26),
            v4 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x85,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
          (const char *)(unsigned int)v4);
      }
      else
      {
        v31 = v26;
        v33 = &v34;
        v34 = 0;
        v35 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 56LL))(v26, &v32);
        *v33 = v10;
        wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
          &v31,
          0LL);
        v11 = &v31;
        v29 = &v31;
        v12 = 0;
        v30 = 0;
        v13 = v32;
        while ( 1 )
        {
          if ( *(int *)v11[2] < 0 || v12 == v13 )
            goto LABEL_18;
          v14 = (__int64 **)wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::vector_iterator_nothrow::operator*(&v29);
          v23 = 0LL;
          v15 = *v14;
          v16 = **v14;
          v23 = 0LL;
          v17 = (*(__int64 (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v16 + 48))(
                  v15,
                  &v23);
          v4 = v17;
          if ( v17 < 0 )
            break;
          v27 = 0LL;
          if ( (**v23)(v23, &GUID_4a01eb05_4e42_41d4_b518_e008a5163614, &v27) >= 0 )
          {
            string1 = 0LL;
            v18 = *v27;
            string1 = 0LL;
            v19 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v18 + 56))(v27, &string1);
            v4 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x90,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
                (const char *)(unsigned int)v19);
              goto LABEL_20;
            }
            result = 0;
            string2 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"consumers", 0xAu, 9u);
            v20 = WindowsCompareStringOrdinal(string1, string2, &result);
            v4 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x93,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
                (const char *)(unsigned int)v20);
              string2 = 0LL;
LABEL_20:
              Windows::Internal::String::~String(&string1);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
              goto LABEL_23;
            }
            string2 = 0LL;
            if ( !result )
            {
              *a2 = 1;
              Windows::Internal::String::~String(&string1);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v23);
LABEL_18:
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v26);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
              wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
              return 0LL;
            }
            Windows::Internal::String::~String(&string1);
          }
          wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
          wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v23);
          wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::vector_iterator_nothrow::operator+=((__int64)&v29);
          v12 = v30;
          v11 = v29;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
          (const char *)(unsigned int)v17);
LABEL_23:
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v23);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      }
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
  return (unsigned int)v4;
}
