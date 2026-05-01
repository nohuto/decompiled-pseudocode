/*
 * XREFs of ??$InvokeDelegates@V_lambda_4968d30b413081c09ea62553d21bc736_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_4968d30b413081c09ea62553d21bc736_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180368FE4
 * Callers:
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18036CB90 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18039AE10 (-OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18005205C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18020D050 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience_ea_18020D050.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_4968d30b413081c09ea62553d21bc736_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3,
        __int64 a4)
{
  __int64 v6; // rbx
  struct IUnknown **v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v13, a2, (__int64)a3, a4);
  v6 = v13;
  v7 = *(struct IUnknown ***)(v13 + 16);
  if ( v7 != *(struct IUnknown ***)(v13 + 24) )
  {
    v8 = (_QWORD *)a1[1];
    v9 = (_QWORD *)*a1;
    do
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*v7)->lpVtbl[1].QueryInterface)(*v7, *v9, *v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 0LL, 0LL);
        if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
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
