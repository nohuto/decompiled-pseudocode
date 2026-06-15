/*
 * XREFs of ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180015DB4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x1800166F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180027B90 (-RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z.c)
 *     ??$_Uninitialized_move@PEAKV?$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV?$allocator@K@0@@Z @ 0x180027C38 (--$_Uninitialized_move@PEAKV-$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV-$allocator@K@0@@Z.c)
 *     ??$_Uninitialized_move@PEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@YAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU1@0PEAPEAU1@AEAV?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@0@@Z @ 0x1800375AC (--$_Uninitialized_move@PEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@V-$allocator@PEAUIMix.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180044920 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     memmove_0 @ 0x18004B850 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
