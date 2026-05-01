/*
 * XREFs of ?RmpSystemSetGpuMemoryBudget@@YAJKK@Z @ 0x180065D4C
 * Callers:
 *     ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180065B60 (-RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 *     ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180065C10 (-RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemSetGpuMemoryBudget(int a1, int a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]

  v4 = a1;
  v3 = 16LL;
  v5 = a2;
  return D3DKMTSetMemoryBudgetTarget(&v3);
}
