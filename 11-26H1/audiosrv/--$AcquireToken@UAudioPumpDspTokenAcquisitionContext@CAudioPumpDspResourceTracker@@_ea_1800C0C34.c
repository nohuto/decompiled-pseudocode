/*
 * XREFs of ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@QEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800C0C34
 * Callers:
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUIUnknown@@@Z @ 0x1800C19CC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEAUEndpointCharacterist.c)
 *     ?AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z @ 0x1800C1BDC (-AcquireAudioPumpDspTokenForEndpoint@CAudioPumpDspResourceTracker@@QEAAJPEBG0PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@?$TokenManager@VCAudioPumpDspResourceTracker@@@@AEAAJAEBUAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800C0804 (--$AcquireToken@UAudioPumpDspTokenAcquisitionContext@CAudioPumpDspResourceTracker@@@-$TokenManag.c)
 */

__int64 __fastcall TokenManager<CAudioPumpDspResourceTracker>::AcquireToken<CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v6) = 0;
  result = TokenManager<CAudioPumpDspResourceTracker>::AcquireToken<CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext>(
             a1,
             a2,
             a3 == 0,
             a4,
             &v6);
  if ( *a4 )
    return 0LL;
  return result;
}
