/*
 * XREFs of ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18003A890
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800224E0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x180023B4C (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x180023C60 (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ??A?$CSimpleArray@PEAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAAEAPEAUHINSTANCE__@@H@Z @ 0x18004AD58 (--A-$CSimpleArray@PEAUHINSTANCE__@@V-$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAA.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::_AtlRaiseException()
{
  RaiseException(0xC000008C, 1u, 0, 0LL);
}
