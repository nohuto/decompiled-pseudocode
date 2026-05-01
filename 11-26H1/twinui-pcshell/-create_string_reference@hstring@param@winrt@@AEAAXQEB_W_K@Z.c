/*
 * XREFs of ?create_string_reference@hstring@param@winrt@@AEAAXQEB_W_K@Z @ 0x1801B5690
 * Callers:
 *     ??0hstring@param@winrt@@QEAA@QEB_W@Z @ 0x1801B5660 (--0hstring@param@winrt@@QEAA@QEB_W@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802C3488 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::param::hstring::create_string_reference(
        winrt::param::hstring *this,
        const wchar_t *const a2,
        int a3)
{
  char *v4; // rcx

  if ( a3 )
  {
    v4 = (char *)this + 8;
    if ( a2[a3] )
      abort();
    *(_DWORD *)v4 = 1;
    *((_DWORD *)v4 + 1) = a3;
    *((_QWORD *)v4 + 2) = a2;
    *(_QWORD *)this = v4;
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}
