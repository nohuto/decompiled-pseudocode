/*
 * XREFs of ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180552BF0
 * Callers:
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805525A0 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180553448 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED02C (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  _WORD *v6; // rbx
  unsigned __int64 i; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  v5 = 3 * v4;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    a1,
    0LL,
    3 * v4);
  v6 = (_WORD *)*a1;
  for ( i = 0LL; i < v4; ++i )
  {
    v8 = *(unsigned __int16 *)(a2 + 2 * i);
    if ( (unsigned __int16)(v8 - 33) <= 0x3Cu && (v9 = 0x14000000D6004FFDLL, _bittest64(&v9, (unsigned int)(v8 - 33))) )
    {
      *v6 = 37;
      v10 = StringCchPrintfW(v6 + 1, v5 - 1, L"%2x", (unsigned int)v8);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x67,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\AppIdHelpers.h",
          (const char *)(unsigned int)v10,
          1);
      v6 += 3;
      v5 -= 3LL;
    }
    else
    {
      --v5;
      if ( (_DWORD)v8 == 32 )
        *v6 = 43;
      else
        *v6 = _o_towlower(v8);
      ++v6;
    }
  }
  *v6 = 0;
  return a1;
}
