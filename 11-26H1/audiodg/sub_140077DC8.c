/*
 * XREFs of sub_140077DC8 @ 0x140077DC8
 * Callers:
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_1400B35A0 @ 0x1400B35A0 (sub_1400B35A0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140077DC8(int *a1)
{
  if ( a1[2] >= 0 )
  {
    sub_1400B6010(*(_QWORD *)a1);
    CoReleaseMarshalData(*(LPSTREAM *)a1);
  }
  return sub_1400125D4((__int64 *)a1);
}
