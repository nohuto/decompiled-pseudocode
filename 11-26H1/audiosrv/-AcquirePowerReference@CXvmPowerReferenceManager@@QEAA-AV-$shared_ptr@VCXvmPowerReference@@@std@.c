/*
 * XREFs of ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x18010F2D4
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x18010F450 (-CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CXvmPowerReferenceManager::AcquirePowerReference(
        CXvmPowerReferenceManager *this,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v2; // r12
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // r15
  volatile signed __int32 *v6; // rdi
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64, char *, char *); // rsi
  int v9; // eax
  std::_Ref_count_base *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v13; // [rsp+80h] [rbp+8h]

  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    v4 = (volatile signed __int32 *)operator new(0x18uLL);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 2) = 1;
      *((_DWORD *)v4 + 3) = 1;
      *(_QWORD *)v4 = &std::_Ref_count_obj2<CXvmPowerReference>::`vftable';
      *((_QWORD *)v4 + 2) = this;
    }
    else
    {
      v5 = 0LL;
    }
    try
    {
      v6 = v5 + 4;
      std::_Mutex_base::lock((CXvmPowerReferenceManager *)((char *)this + 40));
      v13 = *((_DWORD *)this + 8) + 1;
      *((_DWORD *)this + 8) = v13;
      if ( v13 == 1 )
      {
        v7 = *((_QWORD *)this + 16);
        v8 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v7 + 24LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 17);
        v9 = v8(v7, (char *)this + 16, (char *)this + 136);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            366LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v9);
        v6 = v5 + 4;
      }
      _Mtx_unlock((CXvmPowerReferenceManager *)((char *)this + 40));
      if ( v13 == 1 )
        CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(this);
      if ( v5 )
        _InterlockedIncrement(v5 + 2);
      *v2 = v6;
      v10 = (std::_Ref_count_base *)v2[1];
      v2[1] = v5;
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        381LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)0x8007000ELL);
      return a2;
    }
  }
  return v2;
}
