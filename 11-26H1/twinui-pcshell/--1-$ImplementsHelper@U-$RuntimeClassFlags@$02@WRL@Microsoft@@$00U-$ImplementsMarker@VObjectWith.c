/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Details@23@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802FBF88
 * Callers:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802FBF38 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VCWRLObject.c)
 * Callees:
 *     ??1?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1802FBED0 (--1-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>(
        __int64 a1)
{
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::~ChainLink<ObjectWithIamLock>(a1 + 48);
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)(a1 + 16));
}
