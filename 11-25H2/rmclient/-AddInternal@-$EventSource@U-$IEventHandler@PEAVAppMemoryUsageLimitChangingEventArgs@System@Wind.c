/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180001C8C
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180001A3C (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180001E88 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180001EA0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002174 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180002790 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001377C (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180013CF8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        _QWORD *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  unsigned __int64 v7; // rsi
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  volatile int *v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  void **v21; // rsi
  struct IUnknown **i; // rdi
  _QWORD *v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = a1;
  *a4 = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  v7 = 1LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v7 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                  - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
       + 1;
  v8 = 0LL;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v9;
  v10 = v9;
  if ( !v9 )
  {
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v23);
    v12 = -2147024882;
LABEL_11:
    ReleaseSRWLockExclusive(&SRWLock);
    return (unsigned int)v12;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>(v9);
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v10[2] = 0LL;
  v10[3] = 0LL;
  v10[4] = 0LL;
  *v10 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v12 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
          (Microsoft::WRL::Details::EventTargetArray *)v10,
          v7);
  if ( v12 >= 0 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v10 + 12), v11);
    v12 = 0;
    v8 = (Microsoft::WRL::Details::EventTargetArray *)v10;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v10, v11, v13);
  if ( v12 < 0 )
  {
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v8,
        v14,
        v15);
    goto LABEL_11;
  }
  v17 = Windows::System::CMemoryManager::s_limitChangeEvent;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v21 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
    for ( i = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
          i != *(struct IUnknown ***)(v17 + 24);
          ++i )
    {
      Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *i, *v21);
      v17 = Windows::System::CMemoryManager::s_limitChangeEvent;
      ++v21;
    }
  }
  *a4 = a2;
  Microsoft::WRL::Details::EventTargetArray::AddTail(v8, a2, a3);
  AcquireSRWLockExclusive(&stru_18002FD48);
  v18 = Windows::System::CMemoryManager::s_limitChangeEvent;
  Windows::System::CMemoryManager::s_limitChangeEvent = (__int64)v8;
  ReleaseSRWLockExclusive(&stru_18002FD48);
  ReleaseSRWLockExclusive(&SRWLock);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v18,
      v19,
      v20);
  return 0LL;
}
