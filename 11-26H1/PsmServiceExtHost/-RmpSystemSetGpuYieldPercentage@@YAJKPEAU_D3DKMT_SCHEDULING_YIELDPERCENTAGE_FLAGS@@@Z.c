/*
 * XREFs of ?RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z @ 0x180065D9C
 * Callers:
 *     ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180065B60 (-RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 *     ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180065C10 (-RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetGpuYieldPercentage(int a1, struct _D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]

  v2 = *(_DWORD *)a2;
  v6 = a1;
  v4 = 16LL;
  v5 = v2;
  return D3DKMTSetYieldPercentage(&v4);
}
