/*
 * XREFs of sub_140083ED8 @ 0x140083ED8
 * Callers:
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140083ED8(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rcx

  v4 = 0LL;
  if ( !a2[1] )
    return 2289827866LL;
  while ( *(_QWORD *)(*a2 + 8 * v4) != a3 )
  {
    if ( (unsigned __int64)++v4 >= a2[1] )
      return 2289827866LL;
  }
  *a4 = v4;
  return 0LL;
}
