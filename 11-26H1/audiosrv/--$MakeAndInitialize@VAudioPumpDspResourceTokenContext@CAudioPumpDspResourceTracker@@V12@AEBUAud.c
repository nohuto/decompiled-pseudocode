/*
 * XREFs of ??$MakeAndInitialize@VAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@V12@AEBUAudioPumpDspTokenAcquisitionContext@2@AEAPEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@AEBUAudioPumpDspTokenAcquisitionContext@4@AEAPEAV4@@Z @ 0x1800C0DD8
 * Callers:
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@AEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800C0804 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@-$TokenManag.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAA@XZ @ 0x1800C13C8 (--0AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBUAudioPumpDspTokenAcquisitionContext@2@PEAV2@@Z @ 0x1800C21D0 (-RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext,CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext,CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext const &,CAudioPumpDspResourceTracker * &>(
        CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext **a1,
        const struct CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext *a2,
        struct CAudioPumpDspResourceTracker **a3)
{
  void *v6; // rax
  int v7; // edi
  CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new[](0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v8 = (CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *)CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::AudioPumpDspResourceTokenContext((CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *)v6);
    v11 = v8;
    v10 = 0LL;
    v7 = CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::RuntimeClassInitialize(v8, a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      if ( v8 )
        (*(void (__fastcall **)(CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = 0;
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  return (unsigned int)v7;
}
