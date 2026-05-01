/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800015A4
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180001500 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180009E64 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180009EA4 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000FEA8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180010BA0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        _QWORD *a1,
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
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  PSRWLOCK v17; // [rsp+28h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v18; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, a1 + 2);
  v8 = (_QWORD *)*a1;
  v18 = 0LL;
  if ( v8 )
    v9 = ((__int64)(v8[3] - v8[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v17 = (PSRWLOCK)v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v18,
          &v17);
  if ( v10 >= 0 )
  {
    v12 = (_QWORD *)*a1;
    if ( *a1 )
    {
      v13 = (void **)v12[4];
      for ( i = (struct IUnknown **)v12[2]; i != (struct IUnknown **)v12[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v18, *i, *v13);
        v12 = (_QWORD *)*a1;
        ++v13;
      }
    }
    v15 = v18;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v15, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, a1 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v18);
    if ( v17 )
      ReleaseSRWLockExclusive(v17);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    return 0LL;
  }
  else
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v10;
  }
}
