/*
 * XREFs of ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180028358
 * Callers:
 *     ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU56@AEAU56@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAUhstring@winrt@@22@Z @ 0x1801FC980 (--$_Construct_in_place@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-.c)
 *     ??0GameMruItem@@QEAA@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@11@Z @ 0x18021F390 (--0GameMruItem@@QEAA@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805C13D4 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1805C2760 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805CB05C (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1805CCC5C (_anonymous_namespace_--TruncateDisplayName.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18061E9F4 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

char **__fastcall std::wstring::wstring(char **a1, __int128 *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rbx
  __int128 v5; // xmm6
  size_t v6; // rbx
  __int64 size_of; // rax
  char *v9; // rax
  size_t v10; // rbx
  char *v11; // rdi

  v2 = 0x7FFFFFFFFFFFFFFELL;
  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = *((_QWORD *)a2 + 1);
  v5 = *a2;
  if ( v4 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = (char *)7;
  if ( v4 > 7 )
  {
    if ( (v4 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v2 = v4 | 7;
      if ( (v4 | 7) < 0xA )
        v2 = 10LL;
    }
    size_of = std::_Get_size_of_n<2>(v2 + 1);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    a1[2] = (char *)v4;
    v10 = 2 * v4;
    *a1 = v9;
    a1[3] = (char *)v2;
    v11 = v9;
    memcpy_0(v9, (const void *)v5, v10);
    *(_WORD *)&v11[v10] = 0;
  }
  else
  {
    a1[2] = (char *)v4;
    v6 = 2 * v4;
    memcpy_0(a1, (const void *)v5, v6);
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return a1;
}
