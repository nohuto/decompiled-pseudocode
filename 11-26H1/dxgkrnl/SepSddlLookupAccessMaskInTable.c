/*
 * XREFs of SepSddlLookupAccessMaskInTable @ 0x14023646C
 * Callers:
 *     SepSddlGetAclForString @ 0x1403DF2B8 (SepSddlGetAclForString.c)
 * Callees:
 *     _wcsnicmp_0 @ 0x14006E492 (_wcsnicmp_0.c)
 */

__int64 __fastcall SepSddlLookupAccessMaskInTable(wchar_t *Str1, _DWORD *a2, _QWORD *a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 8; ++i )
  {
    if ( !wcsnicmp_0(Str1, (&off_1401666A0)[2 * i], *((unsigned int *)&off_1401666A0 + 4 * i + 2)) )
    {
      result = 1LL;
      *a2 = *((_DWORD *)&off_1401666A0 + 4 * i + 3);
      *a3 = &Str1[*((unsigned int *)&off_1401666A0 + 4 * i + 2)];
      return result;
    }
  }
  *a2 = 0;
  result = 0LL;
  *a3 = Str1;
  return result;
}
