/*
 * XREFs of ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1801F33E4
 * Callers:
 *     ??$_Emplace_front_internal@AEBUguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXAEBUguid@winrt@@@Z @ 0x1801F3340 (--$_Emplace_front_internal@AEBUguid@winrt@@@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@.c)
 *     ??$_Emplace_back_internal@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEAUCRect@Geometry@@@Z @ 0x1805A5BF8 (--$_Emplace_back_internal@AEAUCRect@Geometry@@@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@CAXXZ @ 0x1802C7298 (-_Xlen@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShow.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

void *__fastcall std::deque<winrt::guid>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  __int64 size_of; // rax
  char *v6; // r14
  __int64 v7; // r15
  char *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  size_t v12; // rbx
  const void *v13; // rdx
  char *v14; // r12
  size_t v15; // r8
  char *v16; // rcx
  void *result; // rax
  __int64 v18; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Xlen();
    v2 *= 2LL;
  }
  v4 = a1[3];
  size_of = std::_Get_size_of_n<8>(v2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = 8 * v4;
  v8 = &v6[8 * v4];
  v9 = v2 >> 1;
  while ( v2 <= v9 )
    v2 *= 2LL;
  v10 = a1[2];
  v11 = v2 - v10;
  v12 = 8 * v10 - v7;
  memmove_0(v8, (const void *)(a1[1] + v7), v12);
  v13 = (const void *)a1[1];
  v14 = &v8[v12];
  if ( v4 > v11 )
  {
    memmove_0(v14, v13, 8 * v11);
    memmove_0(v6, (const void *)(8 * v11 + a1[1]), v7 - 8 * v11);
    v16 = &v6[v7 - 8 * v11];
    v15 = 8 * v11;
  }
  else
  {
    memmove_0(v14, v13, 8 * v4);
    memset_0(&v14[v7], 0, 8 * (v11 - v4));
    v15 = 8 * v4;
    v16 = v6;
  }
  result = memset_0(v16, 0, v15);
  v18 = a1[1];
  if ( v18 )
    result = (void *)std::_Deallocate<16>(v18, 8LL * a1[2]);
  a1[2] += v11;
  a1[1] = v6;
  return result;
}
