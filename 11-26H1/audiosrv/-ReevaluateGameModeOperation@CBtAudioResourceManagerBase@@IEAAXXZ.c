/*
 * XREFs of ?ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E537C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1df132a844a0d979aea352c16f8519f0__void_::_Do_call @ 0x1800E7B40 (std--_Func_impl_no_alloc__lambda_1df132a844a0d979aea352c16f8519f0__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_cf1ffbf4768438001d13675b422808c7__void_::_Do_call @ 0x1800E7BA0 (std--_Func_impl_no_alloc__lambda_cf1ffbf4768438001d13675b422808c7__void_--_Do_call.c)
 * Callees:
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E5B28 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z @ 0x1800E788C (-UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z.c)
 */

void __fastcall CBtAudioResourceManagerBase::ReevaluateGameModeOperation(CBtAudioResourceManagerBase *this)
{
  bool v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  CBtAudioResourceManagerBase::UpdateCurrentGameOperatingMode(this, &v2);
  if ( v2 )
    CBtAudioResourceManagerBase::RefreshStreamsOnDevice(this);
}
