/*
 * XREFs of _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180076AC0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180097AF0 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 *     ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x1801BBFB0 (-OnIdleStateChanged@CApplicationManager@@UEAAJH@Z.c)
 *     ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801E2620 (-OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal.c)
 *     ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801E8CE0 (-OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shel.c)
 *     ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180461B60 (-OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experienc.c)
 *     ?OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180462710 (-OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Exp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  result = a1;
  *(_QWORD *)(a1 + 8) = a3;
  return result;
}
