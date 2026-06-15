/*
 * XREFs of ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CEB0
 * Callers:
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18014E1A4 (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180140278 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 *     ?_Begin_capture_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z @ 0x18014C29C (-_Begin_capture_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z.c)
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014CDA0 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x18014D2DC (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 */

int __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_capture_group(
        __int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  char v6; // r8
  int result; // eax

  v2 = *(_DWORD *)(a1 + 24) + 1;
  *(_DWORD *)(a1 + 24) = v2;
  if ( v2 >= 0x3E8 )
  {
    std::_Xregex_error(12LL);
    __debugbreak();
  }
  v3 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_capture_group(
         a1 + 64,
         v2);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(a1);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(a1 + 64, v3);
  std::vector<bool>::resize((__int64 *)(a1 + 32), (unsigned int)(*(_DWORD *)(a1 + 24) + 1));
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(unsigned int *)(v3 + 32);
  v6 = v5 & 0x1F;
  v5 >>= 5;
  result = *(_DWORD *)(v4 + 4 * v5) | (1 << v6);
  *(_DWORD *)(v4 + 4 * v5) = result;
  return result;
}
