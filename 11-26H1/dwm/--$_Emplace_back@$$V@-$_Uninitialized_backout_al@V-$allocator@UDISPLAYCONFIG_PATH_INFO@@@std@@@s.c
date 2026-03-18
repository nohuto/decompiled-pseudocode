/*
 * XREFs of ??$_Emplace_back@$$V@?$_Uninitialized_backout_al@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAAXXZ @ 0x14000D964
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D848 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@s.c)
 * Callees:
 *     ??$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@QEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x14000DA78 (--$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@-$_Default_allocator_traits@V-$allocator@UDISPLAYCONF.c)
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::allocator<DISPLAYCONFIG_PATH_INFO>>::_Emplace_back<>(__int64 a1)
{
  __int64 result; // rax

  result = std::_Default_allocator_traits<std::allocator<DISPLAYCONFIG_PATH_INFO>>::construct<DISPLAYCONFIG_PATH_INFO,>(
             a1,
             *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) += 72LL;
  return result;
}
