/*
 * XREFs of ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x18004BB30
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBGUSimpleHapticsControllerFeedback@@@1@@Z @ 0x18018BDBC (--$emplace@AEBU-$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@-$_Hash@V-$_Umap_traits@GUSi.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x1801922C8 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x180193308 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Find_last<unsigned short>(
        _QWORD *a1,
        __int64 **a2,
        _WORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 *v5; // r9
  __int64 **v6; // r11
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 **result; // rax

  v4 = a4 & a1[6];
  v5 = (__int64 *)a1[1];
  v6 = (__int64 **)(a1[3] + 16 * v4);
  v7 = v6[1];
  if ( v7 == v5 )
  {
    *a2 = v5;
    result = a2;
    a2[1] = 0LL;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *((_WORD *)v7 + 8) )
      {
        v8 = (__int64 *)*v7;
        a2[1] = v7;
        result = a2;
        *a2 = v8;
        return result;
      }
      if ( v7 == *v6 )
        break;
      v7 = (__int64 *)v7[1];
    }
    *a2 = v7;
    result = a2;
    a2[1] = 0LL;
  }
  return result;
}
