/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180013FC4
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014B68 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000C6F4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180011148 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     memmove_0 @ 0x18004337C (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  size_t v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  char *result; // rax

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  v8 = std::_Allocate<16,std::_Default_allocate_traits>(v2);
  memset_0((char *)v8 + v5, 0, a2 - v5);
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  v9 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = (const struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - (_QWORD)v9);
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
      if ( (unsigned __int64)v9 - *(v9 - 1) - 8 > 0x1F )
        _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      v9 = (_QWORD *)*(v9 - 1);
    }
    operator delete(v9, v10);
  }
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = (char *)v8 + a2;
  result = (char *)v8 + v2;
  *(_QWORD *)(a1 + 16) = (char *)v8 + v2;
  return result;
}
