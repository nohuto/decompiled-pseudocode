/*
 * XREFs of ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1801BF444
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003B600 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BF2A0 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BF400 (-OnViewShown@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x18023A500 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180389BF0 (-OnSetForegroundFailed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180389E20 (-OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_d6aa439010436c493593067787cb4742_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180386D40 (--$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U-$ITypedEventHandler@PEAVStartEx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int v3; // edi
  volatile signed __int32 *v4; // rbx
  RTL_SRWLOCK *v5; // rsi
  volatile int *v6; // rdx
  volatile signed __int32 *v7; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = 0;
  v9 = 0LL;
  v10[0] = &v11;
  v10[1] = &v9;
  v4 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)a1->Ptr + 12), v6);
    v4 = v7;
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
  {
    v3 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_d6aa439010436c493593067787cb4742_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>(
           v10,
           v4,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return v3;
}
