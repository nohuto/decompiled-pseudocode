/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801DC820
 * Callers:
 *     ?remove_VirtualDesktopChanged@VirtualDesktop@@UEAAJUEventRegistrationToken@@@Z @ 0x1801DC7E0 (-remove_VirtualDesktopChanged@VirtualDesktop@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_57dacf7fd65ae5979a4de013971663d7_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1801E74E0 (--$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U-$ITypedEventHandler@PEAUIVirtua.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1801D6E04 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        __int64 a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r12
  unsigned int v4; // ebp
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rax
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rbx
  bool v10; // r13
  __int64 v11; // rax
  int v12; // ebx
  struct IUnknown **v14; // r15
  __int64 v15; // r12
  void **v16; // rdi
  volatile signed __int32 *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+28h] [rbp-40h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v22; // [rsp+88h] [rbp+20h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 16);
  v4 = 0;
  v6 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(volatile signed __int32 **)a1;
  v22 = v2;
  if ( !v7 )
  {
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    return v4;
  }
  v8 = (struct IUnknown **)*((_QWORD *)v7 + 2);
  v9 = 0LL;
  v10 = 0;
  v11 = *((_QWORD *)v7 + 3) - (_QWORD)v8;
  v20 = 0LL;
  v18 = (v11 >> 3) - 1;
  v21 = v18;
  if ( v11 >> 3 == 1 )
  {
    v10 = *v8 == a2;
LABEL_18:
    if ( v10 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v6 = 0LL;
      if ( &v19 != (char *)a1 )
      {
        v6 = *(volatile signed __int32 **)a1;
        *(_QWORD *)a1 = 0LL;
      }
      v17 = *(volatile signed __int32 **)a1;
      *(_QWORD *)a1 = v9;
      v9 = 0LL;
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
      if ( a1 != -8 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    }
    goto LABEL_25;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v20,
          (unsigned __int64 *)&v21);
  if ( v12 < 0 )
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v20);
    v4 = v12;
    goto LABEL_8;
  }
  v9 = v20;
  v14 = *(struct IUnknown ***)(*(_QWORD *)a1 + 16LL);
  if ( v14 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) )
  {
    v15 = v18;
    v16 = *(void ***)(*(_QWORD *)a1 + 32LL);
    do
    {
      if ( v10 || a2 != *v14 )
      {
        if ( !v15 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v14, *v16++);
        --v15;
      }
      else
      {
        v10 = 1;
      }
      ++v14;
    }
    while ( v14 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) );
    v6 = 0LL;
    v2 = (RTL_SRWLOCK *)(a1 + 16);
    goto LABEL_18;
  }
LABEL_25:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v9);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return 0LL;
}
