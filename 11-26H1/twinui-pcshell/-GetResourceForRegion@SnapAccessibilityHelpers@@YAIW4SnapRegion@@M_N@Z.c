/*
 * XREFs of ?GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z @ 0x1805BEB40
 * Callers:
 *     ?GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_N@Z @ 0x1805AF0CC (-GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BEF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapAccessibilityHelpers::GetResourceForRegion(int a1, float a2, char a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  if ( a1 > 6 )
  {
    v8 = a1 - 7;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
            return 15031LL;
          return a3 != 0 ? 15046 : 15017;
        }
        else
        {
          return a3 != 0 ? 15043 : 15014;
        }
      }
      else if ( a2 >= 0.40000001 )
      {
        if ( a2 <= 0.60000002 )
          return a3 != 0 ? 15036 : 15006;
        else
          return a3 != 0 ? 15049 : 15020;
      }
      else
      {
        return a3 != 0 ? 15042 : 15013;
      }
    }
    else
    {
      return a3 != 0 ? 15040 : 15010;
    }
  }
  else if ( a1 == 6 )
  {
    if ( a2 >= 0.40000001 )
    {
      if ( a2 <= 0.60000002 )
        return a3 != 0 ? 15035 : 15005;
      else
        return a3 != 0 ? 15052 : 15023;
    }
    else
    {
      return a3 != 0 ? 15047 : 15018;
    }
  }
  else
  {
    v3 = a1 - 1;
    if ( !v3 )
      return a3 != 0 ? 15038 : 15008;
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
        return a3 != 0 ? 15039 : 15009;
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          return a3 != 0 ? 15041 : 15011;
        return 15031LL;
      }
      if ( a2 >= 0.40000001 )
      {
        if ( a2 <= 0.60000002 )
          return a3 != 0 ? 15037 : 15007;
        else
          return a3 != 0 ? 15050 : 15021;
      }
      else
      {
        return a3 != 0 ? 15044 : 15015;
      }
    }
    else if ( a2 >= 0.40000001 )
    {
      if ( a2 <= 0.60000002 )
        return a3 != 0 ? 15034 : 15004;
      else
        return a3 != 0 ? 15051 : 15022;
    }
    else
    {
      return a3 != 0 ? 15045 : 15016;
    }
  }
}
