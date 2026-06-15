/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x18014E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800EE920 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
wchar_t *__fastcall std::collate<unsigned short>::do_transform(
        const _Collvec *a1,
        wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  unsigned __int64 v7; // rax
  const _Collvec *v8; // rdi
  wchar_t *v9; // rcx
  wchar_t *v10; // rdx
  wchar_t *v11; // rcx

  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 7LL;
  *a2 = 0;
  v7 = a4 - a3;
  if ( v7 )
  {
    v8 = a1 + 1;
    do
    {
      std::wstring::resize(a2, v7);
      v9 = a2;
      if ( *((_QWORD *)a2 + 3) > 7uLL )
        v9 = *(wchar_t **)a2;
      v10 = &v9[*((_QWORD *)a2 + 2)];
      v11 = a2;
      if ( *((_QWORD *)a2 + 3) > 7uLL )
        v11 = *(wchar_t **)a2;
      v7 = _Wcsxfrm(v11, v10, a3, a4, v8);
    }
    while ( v7 > *((_QWORD *)a2 + 2) && v7 );
  }
  std::wstring::resize(a2, v7);
  return a2;
}
