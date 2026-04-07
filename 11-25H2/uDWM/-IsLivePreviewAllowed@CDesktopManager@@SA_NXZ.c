/*
 * XREFs of ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800873B0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180003988 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x180073524 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char CDesktopManager::IsLivePreviewAllowed(void)
{
  char v0; // bl
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 9)
                                                             + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         L"EnableAeroPeek",
         &v3) >= 0 )
  {
    v1 = v3;
  }
  else
  {
    v1 = 1;
    v3 = 1;
  }
  if ( v1 && !(unsigned __int8)CDesktopManager::CheckAnyPolicy(1u) )
    return CDesktopManager::IsFeatureEnabled(2);
  return v0;
}
