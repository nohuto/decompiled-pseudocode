/*
 * XREFs of ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659884
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x180501044 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805015F4 (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805073C4 (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18069D2FC (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetMaxAppCount@CAppLayout@@UEAAIXZ @ 0x18069EA10 (-GetMaxAppCount@CAppLayout@@UEAAIXZ.c)
 * Callees:
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659804 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(
        ImmersiveApplicationLayout *this,
        struct tagSIZE a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  __int64 result; // rax

  v3 = 1;
  if ( (int)this < SHIDWORD(this) )
    return v3;
  v4 = 2 * (int)(float)((float)a2.cx / 100.0) - (int)(float)((float)(500 * a2.cx) / -100.0);
  v5 = ImmersiveApplicationLayout::ComputeGutterWidth(this, a2, a3);
  v3 = (v6 - v4) / (v4 + v5) + 1;
  result = 2LL;
  if ( v3 < 2 )
    return v3;
  return result;
}
