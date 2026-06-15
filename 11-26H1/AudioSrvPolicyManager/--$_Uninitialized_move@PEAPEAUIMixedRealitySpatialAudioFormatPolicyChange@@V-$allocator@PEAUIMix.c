/*
 * XREFs of ??$_Uninitialized_move@PEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@YAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU1@0PEAPEAU1@AEAV?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@0@@Z @ 0x1800375AC
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800373D4 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 */

char *__fastcall std::_Uninitialized_move<IMixedRealitySpatialAudioFormatPolicyChange * *>(
        void *a1,
        __int64 a2,
        char *a3)
{
  std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
