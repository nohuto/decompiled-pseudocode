/*
 * XREFs of ??$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_d6aa439010436c493593067787cb4742_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1801AEBE0
 * Callers:
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1801AEB24 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051DBC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_d6aa439010436c493593067787cb4742_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(
        __int64 a1,
        volatile int *a2,
        RTL_SRWLOCK *a3)
{
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi

  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
    v5 = v6;
  }
  v7 = *(__int64 **)(v5 + 16);
  if ( v7 != *(__int64 **)(v5 + 24) )
  {
    v8 = *(_QWORD **)(v4 + 8);
    v9 = *(_QWORD **)v4;
    do
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v7 + 24LL))(
              *v7,
              (*v9 + 40LL) & -(__int64)(*v9 != 0LL),
              *v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a3,
            *v7);
      }
      ++v7;
    }
    while ( v7 != *(__int64 **)(v5 + 24) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
