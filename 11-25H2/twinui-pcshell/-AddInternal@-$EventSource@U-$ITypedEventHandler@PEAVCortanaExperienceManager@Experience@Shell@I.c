/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050188
 * Callers:
 *     ?add_Shown@UndockedSearchAppExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180050130 (-add_Shown@UndockedSearchAppExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVCortanaExperien.c)
 *     ?add_Shown@CortanaSharedExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180371280 (-add_Shown@CortanaSharedExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVCortanaExperienceMa.c)
 *     ?add_Shown@SearchAppExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18039D550 (-add_Shown@SearchAppExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVCortanaExperienceManage.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180050500 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800520AC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *Ptr; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  void **v16; // r14
  struct IUnknown **i; // rsi
  Microsoft::WRL::Details::EventTargetArray *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23[7]; // [rsp+20h] [rbp-38h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  v25 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v24 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v23[0] = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v24,
          v23);
  if ( v12 < 0 )
  {
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v24,
        v11,
        v13,
        v14);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v12;
  }
  else
  {
    v15 = a1->Ptr;
    if ( a1->Ptr )
    {
      v16 = (void **)v15[4];
      for ( i = (struct IUnknown **)v15[2]; i != (struct IUnknown **)v15[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v24, *i, *v16);
        v15 = a1->Ptr;
        ++v16;
      }
    }
    v18 = v24;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v18, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v25, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v24);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v24,
        v19,
        v20,
        v21);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v25,
        v19,
        v20,
        v21);
    return 0LL;
  }
}
