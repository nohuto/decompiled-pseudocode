/*
 * XREFs of ?_Swap_data@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x1802111D8
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x18033E068 (--$_Med3_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x18033E194 (--$_Partition_by_median_guess_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18039D590 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::wstring::_Swap_data(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm3

  v2 = *a1;
  v3 = a1[1];
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = v2;
  a2[1] = v3;
}
