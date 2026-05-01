/*
 * XREFs of __std_fs_code_page @ 0x1802D4A8C
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180318D48 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     <none>
 */

__int64 _std_fs_code_page()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = _o____lc_codepage_func();
  v1 = 0;
  if ( v0 == 65001 )
    return 65001;
  return v1;
}
