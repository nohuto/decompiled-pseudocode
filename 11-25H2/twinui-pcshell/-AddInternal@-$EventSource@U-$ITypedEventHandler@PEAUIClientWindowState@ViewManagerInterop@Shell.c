/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050AD0
 * Callers:
 *     ?add_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180050640 (-add_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJPEAU-$ITypedEventHandler.c)
 *     ?add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1804336D0 (-add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PE.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800520AC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *Ptr; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  Microsoft::WRL::Details::EventTargetArray *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rsi
  RTL_SRWLOCK v21; // rcx
  void **v23; // r15
  struct IUnknown **i; // rsi
  char v25; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v26 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v27 = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v26,
          &v27);
  if ( v12 < 0 )
  {
    if ( v26 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v26,
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
    v16 = v26;
    if ( a1->Ptr )
    {
      v23 = (void **)v15[4];
      for ( i = (struct IUnknown **)v15[2]; i != (struct IUnknown **)v15[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v16, *i, *v23);
        v15 = a1->Ptr;
        ++v23;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v16, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    v20 = 0LL;
    if ( &v25 != (char *)a1 )
    {
      v20 = a1->Ptr;
      a1->Ptr = 0LL;
    }
    v21.Ptr = a1->Ptr;
    a1->Ptr = v16;
    if ( v21.Ptr )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v21.Ptr,
        v17,
        v18,
        v19);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v20,
        v17,
        v18,
        v19);
    return 0LL;
  }
}
