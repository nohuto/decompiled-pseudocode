/*
 * XREFs of ??0CProtocolActivatedEventArgs@@QEAA@XZ @ 0x1803288E4
 * Callers:
 *     ??$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIUriRuntimeClass@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@$$QEAPEAUIUriRuntimeClass@Foundation@6@@Z @ 0x180325D6C (--$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@Appli.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1803284C4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIProtocolActivatedEventArgs@Activatio.c)
 */

CProtocolActivatedEventArgs *__fastcall CProtocolActivatedEventArgs::CProtocolActivatedEventArgs(
        CProtocolActivatedEventArgs *this)
{
  CProtocolActivatedEventArgs *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>((__int64)this);
  *((_QWORD *)this + 39) = &CThreadRefTaker::`vftable';
  *((_QWORD *)this + 40) = 0LL;
  SHGetThreadRef((IUnknown **)this + 40);
  *(_QWORD *)this = &CProtocolActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs'};
  *((_QWORD *)this + 1) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>'};
  *((_QWORD *)this + 2) = &CProtocolActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData'};
  *((_QWORD *)this + 3) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>'};
  *((_QWORD *)this + 4) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>'};
  *((_QWORD *)this + 5) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CActivatedEventArgsWithViewIdBase>'};
  *((_QWORD *)this + 10) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::Selector<CActivatedEventArgsBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>>'};
  *((_QWORD *)this + 11) = &CProtocolActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 12) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 13) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 14) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 29) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>>'};
  *((_QWORD *)this + 30) = &CProtocolActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IViewSwitcherProvider'};
  *((_QWORD *)this + 31) = &CProtocolActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>'};
  *((_QWORD *)this + 39) = &CProtocolActivatedEventArgs::`vftable';
  result = this;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  return result;
}
