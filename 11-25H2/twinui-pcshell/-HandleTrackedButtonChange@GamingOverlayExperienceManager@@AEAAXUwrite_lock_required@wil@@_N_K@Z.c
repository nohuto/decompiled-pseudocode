/*
 * XREFs of ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180347E38
 * Callers:
 *     ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x1803479E8 (-HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z.c)
 * Callees:
 *     ??$?O_KU?$ratio@$00$0PECEA@@std@@_JU?$ratio@$00$0DOI@@1@@chrono@std@@YA_NAEBV?$duration@_KU?$ratio@$00$0PECEA@@std@@@01@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@01@@Z @ 0x18033B324 (--$-O_KU-$ratio@$00$0PECEA@@std@@_JU-$ratio@$00$0DOI@@1@@chrono@std@@YA_NAEBV-$duration@_KU-$rat.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x18034EF90 (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@AEBUAPP_LOCAL_.c)
 *     ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18034FD54 (-StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803506B8 (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::HandleTrackedButtonChange(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  bool v7; // al
  __int64 v8; // rdx
  char v9; // r10
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-38h]
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 288) )
  {
    if ( !a3 )
      return;
    GamingOverlayExperienceManager::StopShortPressTimer();
    v5 = a1;
    v11 = 2;
    goto LABEL_9;
  }
  if ( a3 )
    return;
  if ( *(_BYTE *)(a1 + 304) )
  {
    v6 = *(_QWORD *)(a1 + 296);
    if ( v6 < a4 )
    {
      v13 = a4 - v6;
      v7 = std::chrono::operator><unsigned __int64,std::ratio<1,1000000>,__int64,std::ratio<1,1000>>(
             &v13,
             (_QWORD *)(a1 + 344));
      v5 = a1;
      if ( !v7 )
      {
        LOBYTE(v8) = v9;
        GamingOverlayExperienceManager::StartShortPressTimer(a1, v8);
        goto LABEL_11;
      }
      v11 = 1;
LABEL_9:
      v10 = *(unsigned int *)(a1 + 292);
      memset(v12, 0, sizeof(v12));
      GamingOverlayExperienceManager::SendGamepadCommand(v5, &v13, v12, v10, v11);
      *(_DWORD *)(a1 + 292) = 0;
LABEL_11:
      *(_BYTE *)(a1 + 304) = 0;
      return;
    }
  }
  *(_DWORD *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 304) = 0;
}
