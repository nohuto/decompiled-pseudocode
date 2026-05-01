/*
 * XREFs of ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180065740
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180048990 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800649FC (-_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180170784 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180170AF8 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     WPP_SF_ldddd @ 0x180201E84 (WPP_SF_ldddd.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(__int64 a1, int a2)
{
  unsigned __int8 v2; // r8
  PSRWLOCK v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  int result; // eax
  HWND v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagRECT Rect; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 && (!*(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13) || *(_BYTE *)(a1 + 14)) )
    v2 = 1;
  if ( v2 != *(_BYTE *)(a1 + 15) )
  {
    v4 = CApplicationManagerUtility::g_pIAMGlobals;
    v5 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 15) = v2;
    v6 = v2;
    (*(void (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)v4[16].Ptr + 48LL))(v4[16].Ptr, v5, v2);
    result = *(_DWORD *)&WPP_GLOBAL_Control;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0 )
    {
      v8 = *(HWND *)(a1 + 16);
      Rect = 0LL;
      result = GetWindowRect(v8, &Rect);
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        return WPP_SF_ldddd(
                 *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
                 v9,
                 v10,
                 v6,
                 Rect.left,
                 Rect.top,
                 Rect.right,
                 Rect.bottom);
      }
    }
  }
  return result;
}
