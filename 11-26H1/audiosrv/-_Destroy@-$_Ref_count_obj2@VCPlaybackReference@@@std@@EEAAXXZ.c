/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180071B00
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800131F4 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CPlaybackReference>::_Destroy(__int64 a1)
{
  _WORD *v1; // rbx
  std::_Mutex_base *v2; // rdi

  v1 = (_WORD *)(a1 + 16);
  v2 = *(std::_Mutex_base **)(a1 + 128);
  std::_Mutex_base::lock(v2);
  CPlaybackNotifier::UpdateAudioPlaybackStatus(v2, 1, v1);
  return _Mtx_unlock(v2);
}
