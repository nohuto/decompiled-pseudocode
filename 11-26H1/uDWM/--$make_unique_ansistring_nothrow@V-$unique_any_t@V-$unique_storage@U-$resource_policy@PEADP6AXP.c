/*
 * XREFs of ??$make_unique_ansistring_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@0@PEBD_K@Z @ 0x1800D1E2C
 * Callers:
 *     ?log_message@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z @ 0x1800D4CAC (-log_message@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18005D5C0 (memcpy_s_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall wil::make_unique_ansistring_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        _BYTE *a2,
        __int64 a3,
        const char *a4)
{
  rsize_t v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  _QWORD *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFA6,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      a4);
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = CoTaskMemAlloc(v6 + 1);
  v8 = v7;
  if ( v7 )
  {
    memcpy_s_0(v7, v6 + 1, a2, v6);
    v8[v6] = 0;
  }
  result = a1;
  *a1 = v8;
  return result;
}
