/*
 * XREFs of ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180553BD0
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180553A28 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall TryGetNameFromPath(__int64 a1, const WCHAR *a2)
{
  __int64 v4; // rax
  const WCHAR *v5; // rcx
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rcx
  LPWSTR FileNameW; // rax
  WCHAR *v9; // rcx

  v4 = *((_QWORD *)a2 + 2);
  if ( !v4 )
    goto LABEL_15;
  v5 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v5 = *(const WCHAR **)a2;
  if ( v5[v4 - 1] == 47 )
    goto LABEL_14;
  v6 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v6 = *(const WCHAR **)a2;
  if ( v6[v4 - 1] == 92 )
  {
LABEL_14:
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    return a1;
  }
  v7 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v7 = *(const WCHAR **)a2;
  FileNameW = PathFindFileNameW(v7);
  v9 = (WCHAR *)a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v9 = *(WCHAR **)a2;
  if ( FileNameW == v9 )
  {
LABEL_15:
    std::wstring::wstring(a1, (__int64)a2);
    return a1;
  }
  std::wstring::wstring((char **)a1, FileNameW);
  return a1;
}
