/*
 * XREFs of ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x180616A4C
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18061184C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compa.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x180611990 (--$emplace@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uh.c)
 * Callees:
 *     <none>
 */

bool std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Check_rehash_required_1()
{
  int v0; // ecx
  float v1; // xmm0_4
  unsigned __int64 v2; // rax
  float v3; // xmm1_4

  v0 = qword_1808DEF10 + 1;
  if ( qword_1808DEF10 + 1 < 0 )
  {
    v2 = v0 & 1 | ((unsigned __int64)(qword_1808DEF10 + 1) >> 1);
    v1 = (float)(int)v2 + (float)(int)v2;
  }
  else
  {
    v1 = (float)v0;
  }
  if ( qword_1808DEF38 < 0 )
    v3 = (float)(qword_1808DEF38 & 1 | (unsigned int)((unsigned __int64)qword_1808DEF38 >> 1))
       + (float)(qword_1808DEF38 & 1 | (unsigned int)((unsigned __int64)qword_1808DEF38 >> 1));
  else
    v3 = (float)(int)qword_1808DEF38;
  return (float)(v1 / v3) > *(float *)&dword_1808DEF00;
}
