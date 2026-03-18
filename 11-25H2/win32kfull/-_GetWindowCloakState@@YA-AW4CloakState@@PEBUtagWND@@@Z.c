/*
 * XREFs of ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140060190
 * Callers:
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14005FFA8 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14006001C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x14028AAD4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     NtUserSetShellSpecialWindow @ 0x1402A0150 (NtUserSetShellSpecialWindow.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D3C1C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _GetWindowCloakState(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL);
  if ( (v2 & 0x20) != 0 )
    result = 2LL;
  if ( (v2 & 0x40) != 0 )
    result = (unsigned int)result | 1;
  if ( v2 < 0 )
    return (unsigned int)result | 1;
  return result;
}
