/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180285244
 * Callers:
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800284E8 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x1801B0EC4 (--4ViewOptions@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength(a1, a2, a2);
  v3 = *a1;
  if ( v3 )
  {
    std::_Deallocate<16>(v3, 16 * ((a1[2] - v3) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<Windows::Foundation::Rect>::_Buy_raw(a1);
}
