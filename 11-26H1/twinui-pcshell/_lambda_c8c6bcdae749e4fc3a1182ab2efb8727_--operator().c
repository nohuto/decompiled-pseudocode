/*
 * XREFs of _lambda_c8c6bcdae749e4fc3a1182ab2efb8727_::operator() @ 0x1802B717C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c8c6bcdae749e4fc3a1182ab2efb8727___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1802B7150 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802B7150.c)
 * Callees:
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x180050814 (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1801E3728 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1801FB3D8 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     _lambda_2534448c28008708ec9492fec198ef75_::operator() @ 0x1802B7218 (_lambda_2534448c28008708ec9492fec198ef75_--operator().c)
 *     ?CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x18045A1C0 (-CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall lambda_c8c6bcdae749e4fc3a1182ab2efb8727_::operator()(__int64 a1)
{
  DisableSearchPolicy *v2; // rcx
  XamlLauncher *v3; // rcx
  __int64 v4; // rdx
  HWND WindowW; // rax

  lambda_2534448c28008708ec9492fec198ef75_::operator()(a1 + 8, 0LL);
  if ( !DisableSearchPolicy::IsSearchDisabled(v2) )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 364LL) < *(_DWORD *)(*(_QWORD *)a1 + 368LL)
      && XamlLauncher::AllowAutoAppRestartOnCrash(v3) )
    {
      ++*(_DWORD *)(*(_QWORD *)a1 + 364LL);
      RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        *(IUnknown **)(*(_QWORD *)a1 + 176LL),
        v4);
    }
    else
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( WindowW && !GetPropW(WindowW, L"IsExplorerShuttingDown") )
        StartWindowTelemetry::CortanaKeepsCrashing();
    }
  }
  return 0LL;
}
