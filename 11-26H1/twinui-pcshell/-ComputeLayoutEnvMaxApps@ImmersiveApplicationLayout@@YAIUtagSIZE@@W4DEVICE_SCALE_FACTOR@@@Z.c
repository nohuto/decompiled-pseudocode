/*
 * XREFs of ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F8D8
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1805231DC (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180523794 (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805297A4 (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1806C50B4 (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetMaxAppCount@CAppLayout@@UEAAIXZ @ 0x1806C68C0 (-GetMaxAppCount@CAppLayout@@UEAAIXZ.c)
 * Callees:
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F850 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(
        ImmersiveApplicationLayout *this,
        struct tagSIZE a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  unsigned int v3; // r8d
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  __int64 result; // rax

  v3 = 1;
  if ( (int)this < SHIDWORD(this) )
    return v3;
  v4 = 2 * (int)(float)((float)a2.cx / 100.0) - (int)(float)((float)(500 * a2.cx) / -100.0);
  v5 = ImmersiveApplicationLayout::ComputeGutterWidth(this, a2, (enum DEVICE_SCALE_FACTOR)1);
  v3 = (v6 - v4) / (v4 + v5) + 1;
  result = 2LL;
  if ( v3 < 2 )
    return v3;
  return result;
}
