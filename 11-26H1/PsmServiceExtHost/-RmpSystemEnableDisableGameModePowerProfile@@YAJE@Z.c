/*
 * XREFs of ?RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z @ 0x1800671E0
 * Callers:
 *     ?RmpGameModeUnapplyPowerProfile@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180067190 (-RmpGameModeUnapplyPowerProfile@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCE.c)
 *     ?RmpGameModeTryApplyPowerProfile@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088290 (-RmpGameModeTryApplyPowerProfile@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemEnableDisableGameModePowerProfile(char a1)
{
  unsigned __int64 v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0xFFFFFFFF00000001uLL;
  if ( a1 )
    LODWORD(v2) = 3;
  return NtUpdateWnfStateData(&WNF_SEB_GAME_MODE, &v2, 8LL, 0LL, 0LL, 0, 0);
}
