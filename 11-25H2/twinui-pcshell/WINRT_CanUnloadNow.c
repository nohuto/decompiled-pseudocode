/*
 * XREFs of WINRT_CanUnloadNow @ 0x180172500
 * Callers:
 *     DllCanUnloadNow @ 0x1801F07B0 (DllCanUnloadNow.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?clear_factory_cache@winrt@@YAXXZ @ 0x1802DEB8C (-clear_factory_cache@winrt@@YAXXZ.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DEC4C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 WINRT_CanUnloadNow()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rsi
  bool v2; // al
  winrt *v4; // rcx
  RTL_SRWLOCK *v5; // rax
  void **v6; // rcx
  void *v7; // rdi
  PVOID v8; // rax
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_18089D838 = 1;
  v0 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                            + 32))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
     + 8;
  v1 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                            + 48))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  while ( v0 < v1 )
  {
    if ( *(_QWORD *)v0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                     + 24))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_) )
      {
        v2 = 0;
        goto LABEL_8;
      }
      if ( **(_QWORD **)(*(_QWORD *)v0 + 24LL) )
      {
        v5 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                 + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
        wil::AcquireSRWLockExclusive(&v9, v5);
        v6 = *(void ***)(*(_QWORD *)v0 + 24LL);
        v7 = *v6;
        if ( *v6 )
        {
          *v6 = 0LL;
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
          v8 = DecodePointer(v7);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
        }
        else
        {
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
        }
      }
    }
    v0 += 8LL;
  }
  v2 = (*(unsigned int (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                 + 24))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_) == 0;
LABEL_8:
  if ( !v2
    || (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(&`winrt::get_module_lock'::`2'::s_lock) )
  {
    return 1LL;
  }
  winrt::clear_factory_cache(v4);
  return 0LL;
}
