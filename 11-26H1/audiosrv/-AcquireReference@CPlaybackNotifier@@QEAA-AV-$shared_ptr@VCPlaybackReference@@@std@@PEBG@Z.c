/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180011240
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x1800131F4 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CPlaybackNotifier::AcquireReference(std::_Mutex_base *this, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x88uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<CPlaybackReference>::`vftable';
    *((_QWORD *)v7 + 16) = this;
    _o_wcscpy_s(v7 + 4, 56LL, a3);
  }
  else
  {
    v8 = 0LL;
  }
  try
  {
    std::_Mutex_base::lock(this);
    CPlaybackNotifier::UpdateAudioPlaybackStatus(this, 0LL, a3);
    if ( v8 )
      _InterlockedIncrement(v8 + 2);
    *v4 = v8 + 4;
    v9 = (std::_Ref_count_base *)v4[1];
    v4[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    _Mtx_unlock(this);
    if ( v8 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x269,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v10);
    return a2;
  }
  return v4;
}
