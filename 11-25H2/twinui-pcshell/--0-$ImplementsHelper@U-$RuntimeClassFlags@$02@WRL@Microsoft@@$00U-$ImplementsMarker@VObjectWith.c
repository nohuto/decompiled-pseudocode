/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Details@23@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802986C8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1801EC114 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 24));
  InitializeSRWLock((PSRWLOCK)(a1 + 32));
  *(_DWORD *)(a1 + 40) = SHTaskPoolGetUniqueContext();
  *(_QWORD *)(a1 + 48) = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink>'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 64) + 8LL) + a1 + 64) = &ObjectWithClassName::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_WORD *)(a1 + 128) = 0;
  return result;
}
