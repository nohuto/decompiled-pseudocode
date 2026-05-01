/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1802353BC
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180208354 (-Add@-$AgileEventSource@U-$IEventHandler@_N@Foundation@Windows@@U-$InvokeModeOptions@$0-1@WRL@Mi.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180345570 (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@.c)
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180358BC0 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 *     ?add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180358DC0 (-add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18007239C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18017FA2C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1801BEB2C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v12; // rax
  void **v13; // rsi
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v15; // rcx
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int32 *v19; // [rsp+38h] [rbp-8h] BYREF

  *a4 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)(a1 + 16));
  v8 = *(_QWORD **)a1;
  v16 = 0LL;
  if ( v8 )
    v9 = ((__int64)(v8[3] - v8[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v17 = (RTL_SRWLOCK *)v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v16,
          (unsigned __int64 *)&v17);
  if ( v10 >= 0 )
  {
    v12 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v13 = (void **)v12[4];
      for ( i = (struct IUnknown **)v12[2]; i != (struct IUnknown **)v12[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v16, *i, *v13);
        v12 = *(_QWORD **)a1;
        ++v13;
      }
    }
    v15 = v16;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v15, a2, a3);
    v17 = 0LL;
    wil::AcquireSRWLockExclusive(&v17, (RTL_SRWLOCK *)(a1 + 8));
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v19, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (volatile signed __int32 **)a1,
      (char *)&v16);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v16);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    return 0LL;
  }
  else
  {
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v16);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
    return (unsigned int)v10;
  }
}
