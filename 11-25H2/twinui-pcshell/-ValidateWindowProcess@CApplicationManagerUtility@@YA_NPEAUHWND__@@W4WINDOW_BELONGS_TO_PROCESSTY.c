/*
 * XREFs of ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802EE620
 * Callers:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180088284 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802F37D0 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x180653794 (-GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z.c)
 *     ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1806537E0 (-GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 */

bool __fastcall CApplicationManagerUtility::ValidateWindowProcess(CallerIdentity *a1, int a2, void **a3)
{
  bool v3; // bl
  struct HWND__ v5; // [rsp+38h] [rbp+10h] BYREF
  HLOCAL hMem; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    hMem = 0LL;
    if ( CallerIdentity::GetPackageSidFromWindow(a1, (HWND)&hMem, a3) >= 0 )
    {
      v5.unused = 0;
      if ( !(unsigned int)RtlGetAppContainerSidType(hMem, &v5) )
        v3 = v5.unused == 1;
      LocalFree(hMem);
    }
  }
  else
  {
    v5.unused = 0;
    if ( (int)CallerIdentity::GetProcessTypeFromWindow(a1, &v5, (enum PROCESS_UICONTEXT *)a3) >= 0 )
      return v5.unused == 2;
  }
  return v3;
}
