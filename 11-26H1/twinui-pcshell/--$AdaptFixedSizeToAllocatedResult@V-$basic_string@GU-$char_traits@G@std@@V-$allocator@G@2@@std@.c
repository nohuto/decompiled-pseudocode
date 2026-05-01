/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800332BC
 * Callers:
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180033F88 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x180032D0C (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x18013D04C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ??R?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z @ 0x1801AB9F4 (--R-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<std::wstring,256>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  _QWORD *v12; // rdx
  int v13; // eax
  bool v14; // cc
  int v15; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v21[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[512]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  std::wstring::wstring(v20);
  memset_0(v22, 0, sizeof(v22));
  v16 = 0LL;
  v17 = &v16;
  v18 = 256LL;
  v19 = v22;
  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    __fastfail(7u);
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE **, __int64 *, unsigned __int64 **))(*(_QWORD *)v4 + 32LL))(
         v4,
         &v19,
         &v18,
         &v17);
  if ( v5 < 0 )
    goto LABEL_3;
  v7 = v16;
  if ( v16 > 0x100 )
  {
    while ( 1 )
    {
      v9 = v7;
      v10 = wil::details::string_maker<std::wstring>::make(v20, 0LL, v7 - 1);
      v11 = v10;
      if ( v10 < 0 )
        break;
      v12 = v20;
      if ( v20[3] > 7uLL )
        v12 = (_QWORD *)v20[0];
      v13 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v12, v9, &v16);
      if ( v13 < 0 )
      {
        v5 = v13;
        goto LABEL_3;
      }
      v7 = v16;
      v14 = v16 <= v9;
      if ( v16 < v9 )
      {
        std::wstring::erase(v20, v16 - 1);
        v7 = v16;
        v14 = v16 <= v9;
      }
      if ( v14 )
        goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v10,
      v15);
    std::wstring::_Tidy_deallocate(v20);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return v11;
  }
  else
  {
    v8 = wil::details::string_maker<std::wstring>::make(v20, v22, v16 - 1);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v8,
        v15);
LABEL_3:
      std::wstring::_Tidy_deallocate(v20);
      wistd::function<bool (long)>::~function<bool (long)>(a2);
      return (unsigned int)v5;
    }
LABEL_6:
    memset(v21, 0, sizeof(v21));
    std::wstring::_Take_contents(v21, v20);
    if ( a1 != (_QWORD *)v21 )
    {
      std::wstring::_Tidy_deallocate(a1);
      std::wstring::_Take_contents(a1, v21);
    }
    std::wstring::_Tidy_deallocate(v21);
    std::wstring::_Tidy_deallocate(v20);
    wistd::function<bool (long)>::~function<bool (long)>(a2);
    return 0LL;
  }
}
