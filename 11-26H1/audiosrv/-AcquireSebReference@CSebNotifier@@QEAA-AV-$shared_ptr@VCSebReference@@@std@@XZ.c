/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180011EE8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F308 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800B0BF8 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CSebNotifier::AcquireSebReference(CSebNotifier *this, _QWORD *a2)
{
  _QWORD *v2; // rsi
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  int v6; // r15d
  std::_Ref_count_base *v7; // rcx
  int v9; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<CSebReference>::`vftable';
    *((_QWORD *)v4 + 2) = this;
  }
  else
  {
    v5 = 0LL;
  }
  try
  {
    std::_Mutex_base::lock((CSebNotifier *)((char *)this + 8));
    v6 = *(_DWORD *)this + 1;
    *(_DWORD *)this = v6;
    if ( v6 == 1 )
      CSebNotifier::PublishSebEvent(this, 1u);
    _Mtx_unlock((CSebNotifier *)((char *)this + 8));
    if ( v6 == 1 )
      CSebNotifier::CancelDeferredSebReferenceRelease(this);
    if ( v5 )
      _InterlockedIncrement(v5 + 2);
    *v2 = v5 + 4;
    v7 = (std::_Ref_count_base *)v2[1];
    v2[1] = v5;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x212,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)0x8007000ELL,
      v9);
    return a2;
  }
  return v2;
}
