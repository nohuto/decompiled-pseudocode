/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@Z @ 0x18036FBEC
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180376DAC (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A41D0 (-_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803C82F0 (-ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803D1E10 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_3bc36cc94778ab9bb6fd2b85701aef7e_@@$0?0PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@5673@@Z@Details@WRL@Microsoft@@V_lambda_3bc36cc94778ab9bb6fd2b85701aef7e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_3bc36cc94778ab9bb6fd2b85701aef7e_@@$0?0PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_3bc36cc94778ab9bb6fd2b85701aef7e_@@@Z @ 0x1803702EC (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIShellExperienceView@Expe_ea_1803702EC.c)
 */

volatile int **__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_9b1304efb7a7b751b6c8be48389d9538_>(
        volatile int **a1)
{
  volatile int **v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile int **)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>::*)(Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_3bc36cc94778ab9bb6fd2b85701aef7e_,-1,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_3bc36cc94778ab9bb6fd2b85701aef7e_>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v4,
      v3);
  }
  return a1;
}
