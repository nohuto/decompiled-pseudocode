/*
 * XREFs of ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577CF8
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577B80 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall TryGetNameFromPath(__int64 a1, WCHAR *a2)
{
  __int64 v4; // rax
  WCHAR *v5; // rcx
  WCHAR *v6; // rcx
  const WCHAR *v7; // rcx
  LPWSTR FileNameW; // rax
  WCHAR *v9; // rcx

  v4 = *((_QWORD *)a2 + 2);
  if ( !v4 )
    goto LABEL_15;
  v5 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v5 = *(WCHAR **)a2;
  if ( v5[v4 - 1] == 47 )
    goto LABEL_14;
  v6 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v6 = *(WCHAR **)a2;
  if ( v6[v4 - 1] == 92 )
  {
LABEL_14:
    std::wstring::wstring(a1);
    return a1;
  }
  v7 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v7 = *(const WCHAR **)a2;
  FileNameW = PathFindFileNameW(v7);
  v9 = a2;
  if ( *((_QWORD *)a2 + 3) > 7uLL )
    v9 = *(WCHAR **)a2;
  if ( FileNameW == v9 )
  {
LABEL_15:
    std::wstring::wstring(a1, a2);
    return a1;
  }
  std::wstring::wstring(a1, (__int64)FileNameW);
  return a1;
}
