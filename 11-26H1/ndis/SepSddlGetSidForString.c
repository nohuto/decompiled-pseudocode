/*
 * XREFs of SepSddlGetSidForString @ 0x140150FDC
 * Callers:
 *     SepSddlGetAclForString @ 0x140150C6C (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *Str1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int i; // edi
  bool v8; // zf
  __int64 result; // rax

  v3 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xE )
    {
      result = 3221225587LL;
      goto LABEL_10;
    }
    if ( !_wcsnicmp(Str1, (const wchar_t *)&unk_14011CE80 + 12 * i + 6, *((unsigned int *)&unk_14011CE80 + 6 * i + 5)) )
      break;
  }
  v8 = *((_DWORD *)&unk_14011CE80 + 6 * i + 2) == 1;
  *a3 = &Str1[*((unsigned int *)&unk_14011CE80 + 6 * i + 5)];
  if ( !v8 || IoIsWdmVersionAvailable(1u, 0x20u) )
  {
    _mm_lfence();
    v3 = *(__int64 *)((char *)&SeExports->SeCreateTokenPrivilege + *((_QWORD *)&unk_14011CE80 + 3 * i));
  }
  result = 0LL;
LABEL_10:
  *a2 = v3;
  return result;
}
