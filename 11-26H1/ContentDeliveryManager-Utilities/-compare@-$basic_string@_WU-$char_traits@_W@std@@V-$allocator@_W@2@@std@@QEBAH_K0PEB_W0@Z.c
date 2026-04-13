/*
 * XREFs of ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAH_K0PEB_W0@Z @ 0x180091FC4
 * Callers:
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHAEBV12@@Z @ 0x180091F94 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x180098EFC (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 * Callees:
 *     wmemcmp @ 0x18005F6F8 (wmemcmp.c)
 */

int __fastcall std::wstring::compare(const wchar_t *a1, __int64 a2, size_t a3, const wchar_t *a4, size_t a5)
{
  bool v5; // cf
  size_t v6; // r11
  size_t v7; // r8
  int v8; // r10d
  int result; // eax

  v5 = *((_QWORD *)a1 + 2) < a3;
  v6 = a3;
  v7 = a5;
  if ( v5 )
    v6 = *((_QWORD *)a1 + 2);
  if ( v6 < a5 )
    v7 = v6;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(const wchar_t **)a1;
  v8 = 0;
  if ( !v7 || (result = wmemcmp(a1, a4, v7)) == 0 )
  {
    if ( v6 >= a5 )
    {
      LOBYTE(v8) = v6 != a5;
      return v8;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
