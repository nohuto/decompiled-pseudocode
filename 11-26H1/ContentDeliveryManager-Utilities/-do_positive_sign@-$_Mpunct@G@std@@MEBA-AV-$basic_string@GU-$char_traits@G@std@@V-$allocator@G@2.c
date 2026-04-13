/*
 * XREFs of ?do_positive_sign@?$_Mpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180018F50
 * Callers:
 *     <none>
 * Callees:
 *     wcslen_0 @ 0x180021E8D (wcslen_0.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005CCEC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

__int64 __fastcall std::_Mpunct<unsigned short>::do_positive_sign(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // rdi
  size_t v3; // rax

  v2 = *(const wchar_t **)(a1 + 40);
  v3 = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  if ( *v2 )
    v3 = wcslen_0(v2);
  std::wstring::assign(a2, v2, v3);
  return a2;
}
