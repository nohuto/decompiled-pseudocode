/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019D9B4
 * Callers:
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBG@Z @ 0x18019D764 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$pair@$$.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 *v3; // rcx
  int v4; // eax

  v3 = *(__int64 **)(qword_180254068 + 8);
  *a2 = v3;
  a2[1] = 0LL;
  a2[2] = qword_180254068;
  while ( !*((_BYTE *)v3 + 25) )
  {
    *a2 = v3;
    if ( *((_WORD *)v3 + 14) >= *a3 )
    {
      a2[2] = v3;
      v4 = 1;
    }
    else
    {
      v3 += 2;
      v4 = 0;
    }
    *((_DWORD *)a2 + 2) = v4;
    v3 = (__int64 *)*v3;
  }
  return a2;
}
