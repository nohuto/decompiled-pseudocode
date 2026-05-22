/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019D960
 * Callers:
 *     ??$_Emplace@AEAEV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@?$_Tree@V?$_Tmap_traits@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@1@@Z @ 0x18019D58C (--$_Emplace@AEAEV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@@-$_Tree@V-$_Tmap_tr.c)
 *     ??$_Try_emplace@G$$V@?$map@GV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x18019DBD4 (--$_Try_emplace@G$$V@-$map@GV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@U-$less@.c)
 *     ?GetFeatureReport@CompliantHapticInterface@@AEAAJEPEAPEAD@Z @ 0x18019DE4C (-GetFeatureReport@CompliantHapticInterface@@AEAAJEPEAPEAD@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,std::unique_ptr<char [0]>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::unique_ptr<char [0]>>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 *a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_WORD *)v4 + 16) >= *a3 )
    {
      a2[2] = v4;
      v5 = 1;
    }
    else
    {
      v4 += 2;
      v5 = 0;
    }
    *((_DWORD *)a2 + 2) = v5;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
