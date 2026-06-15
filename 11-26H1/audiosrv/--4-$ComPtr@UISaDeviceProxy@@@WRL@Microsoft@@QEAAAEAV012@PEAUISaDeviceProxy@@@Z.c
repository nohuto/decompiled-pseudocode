/*
 * XREFs of ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180061EB0
 * Callers:
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003D448 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003DD00 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FACF0 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FAF90 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@A.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180130070 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
