/*
 * XREFs of ??1_Reallocation_guard@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAA@XZ @ 0x180037C04
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800373D4 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CApplication *>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
}
