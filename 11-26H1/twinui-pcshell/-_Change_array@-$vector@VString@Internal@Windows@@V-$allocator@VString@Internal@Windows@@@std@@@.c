/*
 * XREFs of ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x18022B194
 * Callers:
 *     ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x18030F4FC (--$_Emplace_reallocate@VString@Internal@Windows@@@-$vector@VString@Internal@Windows@@V-$allocato.c)
 *     ??$_Reallocate@$0A@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x18030F7E8 (--$_Reallocate@$0A@@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@s.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800F09A4 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

Windows::Internal::String *__fastcall std::vector<Windows::Internal::String>::_Change_array(
        Windows::Internal::String **a1,
        Windows::Internal::String *a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Internal::String *v6; // rcx
  Windows::Internal::String *result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Windows::Internal::String>>(v6, a1[1]);
    std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = (Windows::Internal::String *)((char *)a2 + 8 * a3);
  result = (Windows::Internal::String *)((char *)a2 + 8 * a4);
  a1[2] = result;
  return result;
}
