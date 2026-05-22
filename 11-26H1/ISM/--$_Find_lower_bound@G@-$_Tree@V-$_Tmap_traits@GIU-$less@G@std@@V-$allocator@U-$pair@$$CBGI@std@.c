/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x18008053C
 * Callers:
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x18006C258 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z @ 0x1800ED6E4 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 *v3; // rcx
  int v4; // eax

  v3 = *(__int64 **)(qword_180253EF0 + 8);
  *a2 = v3;
  a2[1] = 0LL;
  a2[2] = qword_180253EF0;
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
