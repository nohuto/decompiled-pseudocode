/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801B8B80
 * Callers:
 *     ??$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800532CC (--$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x1801B8B40 (-remove_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJUEventRegistrationTok.c)
 *     ??$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180428F64 (--$InvokeDelegates@V_lambda_042b81dcc6f54f0383a437e9dffe2f01_@@U-$ITypedEventHandler@PEAUIClient.c)
 *     ?remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x180434B10 (-remove_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1801D6E04 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  volatile signed __int32 *v5; // rdi
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  bool v9; // r12
  __int64 v10; // r13
  __int64 v11; // r13
  volatile signed __int32 *v12; // rcx
  Microsoft::WRL::Details::EventTargetArray *v13; // rax
  int v15; // ebx
  struct IUnknown **v16; // r15
  void **v17; // rbp
  char v18; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v21; // [rsp+88h] [rbp+20h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v21 = v2;
  if ( !Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0LL;
  v9 = 0;
  v10 = Ptr[3] - (_QWORD)v7;
  v19 = 0LL;
  v11 = (v10 >> 3) - 1;
  v20 = v11;
  if ( !v11 )
  {
    v9 = *v7 == a2;
    goto LABEL_4;
  }
  v15 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v19,
          &v20);
  if ( v15 >= 0 )
  {
    v8 = v19;
    v16 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v16 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_11:
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      if ( v5 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
      return 0LL;
    }
    v17 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v16 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v16, *v17++);
        --v11;
      }
      else
      {
        v9 = 1;
      }
      ++v16;
    }
    while ( v16 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
LABEL_4:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      if ( &v18 != (char *)a1 )
      {
        v5 = (volatile signed __int32 *)a1->Ptr;
        a1->Ptr = 0LL;
      }
      v12 = (volatile signed __int32 *)a1->Ptr;
      v13 = v8;
      v8 = 0LL;
      a1->Ptr = v13;
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
    }
    goto LABEL_11;
  }
  if ( v19 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
  return (unsigned int)v15;
}
