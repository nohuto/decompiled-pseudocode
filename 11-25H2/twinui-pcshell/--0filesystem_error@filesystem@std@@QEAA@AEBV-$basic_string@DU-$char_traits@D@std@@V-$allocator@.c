/*
 * XREFs of ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18031428C
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801E2D2C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180318F20 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18031447C (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180318D48 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::filesystem::filesystem_error::filesystem_error(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  const char *v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  _OWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF

  v10 = a1;
  v9 = *a4;
  std::system_error::system_error(a1, &v9, a2);
  *(_QWORD *)a1 = &std::filesystem::filesystem_error::`vftable';
  std::wstring::wstring(a1 + 40, a3);
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 7LL;
  *(_WORD *)(a1 + 72) = 0;
  v11[0] = 0LL;
  v11[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v11[0]) = 0;
  v6 = "Unknown exception";
  if ( *(_QWORD *)(a1 + 8) )
    v6 = *(const char **)(a1 + 8);
  *(_QWORD *)&v9 = v6;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  *((_QWORD *)&v9 + 1) = v7;
  std::filesystem::filesystem_error::_Pretty_message((void *)(a1 + 104));
  std::wstring::_Tidy_deallocate((void **)v11);
  return a1;
}
