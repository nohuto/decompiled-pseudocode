/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180202314
 * Callers:
 *     ??1PositionAndSizeOptionsProvider@KeyboardHosting@@UEAA@XZ @ 0x1802022EC (--1PositionAndSizeOptionsProvider@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180202344 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHost.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::~_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>(
        _QWORD *a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *>>>(
    a1,
    a1,
    *(_QWORD *)(*a1 + 8LL));
  return std::_Deallocate<16>(*a1, 56LL);
}
