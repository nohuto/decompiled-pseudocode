/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@@std@@QEAA@XZ @ 0x1800A7BA8
 * Callers:
 *     ??$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAX_KAEBQEAPEAVInputSite@@1@Z @ 0x1800A7534 (--$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@-$vector@PEAVInputSite@@V-$allocator@PEAVInput.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180061A40 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<InputSite *>>::~_Tidy_guard<std::vector<InputSite *>>(__int64 **a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>(v1);
  return result;
}
