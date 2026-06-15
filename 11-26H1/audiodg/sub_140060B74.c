/*
 * XREFs of sub_140060B74 @ 0x140060B74
 * Callers:
 *     sub_1400B20F5 @ 0x1400B20F5 (sub_1400B20F5.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140060B74(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v3 )
    {
      sub_1400B6010(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 24LL) = 0LL;
    }
  }
  return result;
}
