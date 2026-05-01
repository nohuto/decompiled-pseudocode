/*
 * XREFs of ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180030644
 * Callers:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1800304D8 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x18013D094 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x1801E7010 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     __std_search_2 @ 0x1802CD350 (__std_search_2.c)
 */

__int64 __fastcall std::_Traits_find<std::char_traits<unsigned short>>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax

  if ( a5 > a2 || a3 > a2 - a5 )
    return -1LL;
  if ( !a5 )
    return a3;
  v7 = a1 + 2 * a2;
  v8 = _std_search_2(a1 + 2 * a3, v7, a4);
  if ( v8 == v7 )
    return -1LL;
  else
    return (v8 - a1) >> 1;
}
