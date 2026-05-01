/*
 * XREFs of ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AF0F4
 * Callers:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800AE53C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AEDE4 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x1800AEFE0 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x1800B02CC (CDelayIAMOperations--AddOperation__lambda_408d293201316df79a8620e012e4c791___.c)
 *     CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1801CD7F4 (CDelayIAMOperations--AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801EB0BC (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x18027D9E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x18028CBFC (CDelayIAMOperations--AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x1802DB678 (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___ @ 0x1802DB7EC (CDelayIAMOperations--AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___.c)
 *     CDelayIAMOperations::AddOperation__lambda_36ac732e4dc79f438aaac687fe092223___ @ 0x1802DB980 (CDelayIAMOperations--AddOperation__lambda_36ac732e4dc79f438aaac687fe092223___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1802DBAF8 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180302610 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsValidWindow(CApplicationManagerUtility *this, HWND a2)
{
  int v3; // eax
  char v4; // bl

  SetLastError(0);
  v3 = IsWindowInDestroy(this);
  v4 = 0;
  if ( !v3 )
    return GetLastError() != 1400;
  return v4;
}
