/*
 * XREFs of _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE804
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?FromGameController@?$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@AEBUIGameController@Input@Gaming@Windows@3@@Z @ 0x180346F28 (-FromGameController@-$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameController.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180586A84 (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ??$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@23@XZ @ 0x1805ED77C (--$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Wind.c)
 *     ??$call@P6A?AUXmlDocument@Dom@Xml@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UXmlDocument@Dom@Xml@Data@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXmlDocument@Dom@Xml@Data@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805EDA08 (--$call@P6A-AUXmlDocument@Dom@Xml@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@-$.c)
 *     _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1805EE330 (_lambda_2b4736168c23780831e980beacfbaf99_--operator().c)
 *     ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUIXmlNode@Dom@Xml@Data@Windows@3@@Z @ 0x1805EE640 (-AppendChild@-$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@i.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805EEF78 (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21
struct IUnknown *__fastcall anonymous_namespace_::CreateConsentToastXmlDocument(
        struct IUnknown *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v8; // eax
  void (__fastcall ***v9)(_QWORD, void *, __int64 **); // rcx
  void (__fastcall ***v10)(_QWORD, void *, __int64 **); // rcx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 *v16; // [rsp+38h] [rbp-89h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-81h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-79h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-71h] BYREF
  void (__fastcall ***v20)(__int64 *, void *, __int64 **); // [rsp+58h] [rbp-69h] BYREF
  void (__fastcall ***v21)(__int64 *, void *, __int64 **); // [rsp+60h] [rbp-61h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v22)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+68h] [rbp-59h] BYREF
  void (__fastcall ***v23)(__int64 *, void *, __int64 **); // [rsp+70h] [rbp-51h] BYREF
  int v24; // [rsp+78h] [rbp-49h]
  __int64 *v25; // [rsp+80h] [rbp-41h] BYREF
  __int64 v26[4]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v27[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v28[5]; // [rsp+C8h] [rbp+7h] BYREF
  __int64 *lpVtbl; // [rsp+F0h] [rbp+2Fh] BYREF
  struct IUnknown v30; // [rsp+F8h] [rbp+37h] BYREF

  v28[4] = (__int64)a1;
  v24 = 0;
  v18 = &qword_1808DD378;
  _InterlockedIncrement64(&qword_1808DD378);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Xml::Dom::XmlDocument>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>,
      a1);
    v8 = 6;
    _InterlockedDecrement64(&qword_1808DD378);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD378);
    v22 = _lambda_e39067982572d3667926157dc9eb0f0a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Xml::Dom::XmlDocument (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v22);
    v8 = 2;
  }
  v24 = v8 | 1;
  winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"toast");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v21,
    v28);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"systemDialog");
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"scenario");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v21,
    v27,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"visual");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v22,
    v27);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"binding");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v20,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"ToastGeneric");
  winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"template");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v20,
    v28,
    v27);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"image");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v23,
    v27);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"appLogoOverride");
  winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"placement");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v23,
    v28,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, a4);
  winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"src");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v23,
    v28,
    v26);
  if ( v23 )
  {
    lpVtbl = 0LL;
    (**v23)((__int64 *)v23, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &lpVtbl);
    v19 = lpVtbl;
  }
  else
  {
    v19 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v20,
    &lpVtbl,
    &v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"text");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v19,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"header");
  winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"hint-style");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v19,
    v28,
    v27);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, a2);
  v9 = (void (__fastcall ***)(_QWORD, void *, __int64 **))*winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
                                                             (__int64 *)a1,
                                                             &v30,
                                                             v27);
  if ( v9 )
  {
    lpVtbl = 0LL;
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &lpVtbl);
    v17 = lpVtbl;
  }
  else
  {
    v17 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v19,
    &lpVtbl,
    &v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
  if ( v19 )
  {
    lpVtbl = 0LL;
    (*(void (__fastcall **)(__int64 *, void *, __int64 **))*v19)(
      v19,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &lpVtbl);
    v17 = lpVtbl;
  }
  else
  {
    v17 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v20,
    &lpVtbl,
    &v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"text");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v17,
    v27);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"body");
  winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"hint-style");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v17,
    v28,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, a3);
  v10 = (void (__fastcall ***)(_QWORD, void *, __int64 **))*winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
                                                              (__int64 *)a1,
                                                              &v30,
                                                              v26);
  if ( v10 )
  {
    lpVtbl = 0LL;
    (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &lpVtbl);
    v16 = lpVtbl;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v17,
    &lpVtbl,
    &v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
  if ( v17 )
  {
    lpVtbl = 0LL;
    (*(void (__fastcall **)(__int64 *, void *, __int64 **))*v17)(
      v17,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &lpVtbl);
    v16 = lpVtbl;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v20,
    &lpVtbl,
    &v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  if ( v20 )
  {
    lpVtbl = 0LL;
    (**v20)((__int64 *)v20, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &lpVtbl);
    v16 = lpVtbl;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v22,
    &lpVtbl,
    &v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  if ( v22 )
  {
    lpVtbl = 0LL;
    (**(void (__fastcall ***)(const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64), void *, __int64 **))v22)(
      v22,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &lpVtbl);
    v16 = lpVtbl;
  }
  else
  {
    v16 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v21,
    &lpVtbl,
    &v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"actions");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v16,
    v26);
  v30.lpVtbl = a1->lpVtbl;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v30);
  v12 = *lambda_2b4736168c23780831e980beacfbaf99_::operator()(
           v11,
           &v18,
           (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30,
           0x38A5u,
           L"allow");
  lpVtbl = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64 *, void *, __int64 **))*v12)(
      v12,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &lpVtbl);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v16,
    &v25,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  lpVtbl = (__int64 *)a1->lpVtbl;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&lpVtbl);
  v14 = *lambda_2b4736168c23780831e980beacfbaf99_::operator()(
           v13,
           &v25,
           (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl,
           0x38A6u,
           L"deny");
  v30.lpVtbl = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64 *, void *, struct IUnknown *))*v14)(
      v14,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &v30);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v16,
    &v18,
    &v30);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  lpVtbl = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64 *, void *, __int64 **))*v16)(
      v16,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &lpVtbl);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v21,
    &v18,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  lpVtbl = 0LL;
  if ( v21 )
    (**v21)((__int64 *)v21, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &lpVtbl);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    a1,
    &v18,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  return a1;
}
