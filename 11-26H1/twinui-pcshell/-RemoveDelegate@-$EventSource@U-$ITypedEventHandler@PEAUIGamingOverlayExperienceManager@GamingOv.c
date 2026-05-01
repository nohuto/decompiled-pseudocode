/*
 * XREFs of ?RemoveDelegate@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180352100
 * Callers:
 *     ?Remove@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18020F894 (-Remove@-$EventSource@U-$IEventHandler@_N@Foundation@Windows@@U-$InvokeModeOptions@$0-1@WRL@Micr.c)
 *     ?remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180237400 (-remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_XboxLiveKeyChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1802374C0 (-remove_XboxLiveKeyChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18033BDF4 (--$InvokeDelegates@V_lambda_06958e91366e7e07f3b4ee9ae841a90f_@@U-$ITypedEventHandler@PEAUIGaming.c)
 *     ??$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0808a6f2104e0fe6f743d65699099e1d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18033BF88 (--$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U-$ITypedEventHandler@PEAUIGaming.c)
 *     ??$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18033C11C (--$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U-$IEventHandler@_N@Foundation@Wi.c)
 *     ?remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180359E70 (-remove_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@.c)
 *     ?remove_DisplaySizeChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180359F20 (-remove_DisplaySizeChanged@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18017FA2C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18018F48C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1801BEB2C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  unsigned int v2; // esi
  volatile signed __int32 *v5; // rdi
  RTL_SRWLOCK v6; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  bool v9; // r12
  __int64 v10; // r13
  RTL_SRWLOCK *v11; // r13
  int v12; // ebx
  struct IUnknown **v14; // r14
  void **v15; // rdi
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v19; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v20; // [rsp+40h] [rbp-10h]

  v2 = 0;
  v20 = a2;
  v18 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v19, a1 + 2);
  v6.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
    return v2;
  }
  v7 = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2);
  v8 = 0LL;
  v9 = 0;
  v10 = *((_QWORD *)v6.Ptr + 3) - (_QWORD)v7;
  v16 = 0LL;
  v11 = (RTL_SRWLOCK *)((v10 >> 3) - 1);
  v17 = v11;
  if ( !v11 )
  {
    v9 = *v7 == a2;
LABEL_18:
    if ( v9 )
    {
      v17 = 0LL;
      wil::AcquireSRWLockExclusive(&v17, a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v18, (char *)a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (volatile signed __int32 **)a1,
        (char *)&v16);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
      v5 = v18;
      v8 = v16;
    }
    goto LABEL_20;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v16,
          (unsigned __int64 *)&v17);
  if ( v12 < 0 )
  {
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v16);
    v2 = v12;
    goto LABEL_8;
  }
  v8 = v16;
  v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  if ( v14 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    v15 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || v20 != *v14 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v14, *v15++);
        v11 = (RTL_SRWLOCK *)((char *)v11 - 1);
      }
      else
      {
        v9 = 1;
      }
      ++v14;
    }
    while ( v14 != *((struct IUnknown ***)a1->Ptr + 3) );
    v5 = v18;
    goto LABEL_18;
  }
LABEL_20:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return 0LL;
}
