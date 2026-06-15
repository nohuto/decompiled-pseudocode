/*
 * XREFs of ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x18002EBBC
 * Callers:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180012A00 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800373D4 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     ??$_Emplace_reallocate@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAU23@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003EA50 (--$_Emplace_reallocate@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_Uniqu.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<CApplication *>::_Xlength()
{
  std::_Xlength_error("vector too long");
}
