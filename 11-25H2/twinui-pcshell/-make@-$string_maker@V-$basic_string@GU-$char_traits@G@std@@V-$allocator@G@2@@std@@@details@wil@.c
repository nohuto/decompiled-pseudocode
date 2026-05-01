/*
 * XREFs of ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800585DC
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18005B6F0 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803CF764 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803CFACC (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800F2514 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::string_maker<std::wstring>::make(__int128 *a1, void *Src, unsigned __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int128 *v8; // rdi
  char v9; // bl
  size_t size_of; // rax
  size_t v12; // rbx
  __int128 v13; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  _BYTE v16[32]; // [rsp+48h] [rbp-50h] BYREF

  if ( Src )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v6 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v15 = 7LL;
    if ( a3 > 7 )
    {
      if ( (a3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v6 = a3 | 7;
        if ( (a3 | 7) < 0xA )
          v6 = 10LL;
      }
      size_of = std::_Get_size_of_n<2>(v6 + 1);
      *(_QWORD *)&v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v14 = a3;
      v15 = v6;
      v12 = 2 * a3;
      memcpy_0((void *)v13, Src, v12);
      *(_WORD *)(v12 + v13) = 0;
    }
    else
    {
      v14 = a3;
      v7 = 2 * a3;
      memcpy_0(&v13, Src, 2 * a3);
      *(_WORD *)((char *)&v13 + v7) = 0;
    }
    v8 = &v13;
    v9 = 1;
  }
  else
  {
    v8 = (__int128 *)std::wstring::wstring(v16, a3, 0LL);
    v9 = 2;
  }
  if ( a1 != v8 )
  {
    std::wstring::_Tidy_deallocate(a1);
    *a1 = *v8;
    a1[1] = v8[1];
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 7LL;
    *(_WORD *)v8 = 0;
  }
  if ( (v9 & 2) != 0 )
  {
    try
    {
      v9 &= ~2u;
      std::wstring::_Tidy_deallocate(v16);
    }
    catch ( ... )
    {
      return 2147942414LL;
    }
  }
  if ( (v9 & 1) != 0 )
    std::wstring::_Tidy_deallocate(&v13);
  return 0LL;
}
