/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIToken@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C133C
 * Callers:
 *     ??$Make@VToken@?$TokenManager@VCAudioPumpDspResourceTracker@@@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VToken@?$TokenManager@VCAudioPumpDspResourceTracker@@@@@12@XZ @ 0x1800C0D18 (--$Make@VToken@-$TokenManager@VCAudioPumpDspResourceTracker@@@@$$V@Details@WRL@Microsoft@@YA-AV-.c)
 *     ??$Make@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@12@XZ @ 0x1800F6A0C (--$Make@VToken@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001E374 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>((__int64)a1);
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>::`vftable'{for `IToken'};
  a1[2] = &TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
