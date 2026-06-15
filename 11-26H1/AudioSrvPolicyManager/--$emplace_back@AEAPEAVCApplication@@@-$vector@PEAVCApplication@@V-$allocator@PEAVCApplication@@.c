/*
 * XREFs of ??$emplace_back@AEAPEAVCApplication@@@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAAAEAPEAVCApplication@@AEAPEAV2@@Z @ 0x180043030
 * Callers:
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180044144 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800373D4 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 */

char *__fastcall std::vector<CApplication *>::emplace_back<CApplication * &>(_QWORD *a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
             a1,
             (__int64)v3,
             a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (char *)v4;
}
