/*
 * XREFs of ??$Make@VToken@?$TokenManager@VCAudioPumpDspResourceTracker@@@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VToken@?$TokenManager@VCAudioPumpDspResourceTracker@@@@@12@XZ @ 0x1800C0D18
 * Callers:
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@AEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800C0804 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@-$TokenManag.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIToken@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C133C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIToken@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make<TokenManager<CAudioPumpDspResourceTracker>::Token,>(_QWORD *a1)
{
  _OWORD *v2; // rbx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>(v2);
    *(_QWORD *)v2 = &TokenManager<CAudioPumpDspResourceTracker>::Token::`vftable';
    *((_QWORD *)v2 + 1) = &TokenManager<CAudioPumpDspResourceTracker>::Token::`vftable'{for `IToken'};
    *((_QWORD *)v2 + 2) = &TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v2;
    v4 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v4);
  return a1;
}
