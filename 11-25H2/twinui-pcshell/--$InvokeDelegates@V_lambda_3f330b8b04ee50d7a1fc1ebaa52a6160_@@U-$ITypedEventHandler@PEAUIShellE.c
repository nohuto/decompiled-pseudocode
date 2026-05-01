/*
 * XREFs of ??$InvokeDelegates@V_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1802AC6B0
 * Callers:
 *     ??$DoInvoke@V_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@@Z @ 0x1802AC608 (--$DoInvoke@V_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x18017F410 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18020542C (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 v6; // rbx
  struct IUnknown **v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v13 = a2;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v13);
    v6 = v4;
    v13 = v4;
  }
  v7 = *(struct IUnknown ***)(v6 + 16);
  if ( v7 != *(struct IUnknown ***)(v6 + 24) )
  {
    v8 = (_QWORD *)v5[1];
    v9 = (_QWORD *)*v5;
    do
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, __int64))(*v7)->lpVtbl[1].QueryInterface)(
              *v7,
              *v9,
              *v8,
              v4);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -1996357631 || v11 == -2147417848 || v11 == -2147023174 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *(struct IUnknown ***)(v6 + 24) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return 0LL;
}
