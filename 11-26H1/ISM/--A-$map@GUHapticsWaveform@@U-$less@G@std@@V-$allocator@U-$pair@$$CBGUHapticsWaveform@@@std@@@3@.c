/*
 * XREFs of ??A?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@QEAAAEAUHapticsWaveform@@$$QEAG@Z @ 0x18019DDE0
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??$_Try_emplace@G$$V@?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DA0C (--$_Try_emplace@G$$V@-$map@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGUHapticsW.c)
 */

__int64 __fastcall std::map<unsigned short,HapticsWaveform>::operator[](__int64 *a1, _WORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)std::map<unsigned short,HapticsWaveform>::_Try_emplace<unsigned short,>(a1, (__int64)v3, a2) + 32LL;
}
