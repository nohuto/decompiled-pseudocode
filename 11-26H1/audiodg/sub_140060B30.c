/*
 * XREFs of sub_140060B30 @ 0x140060B30
 * Callers:
 *     sub_1400B2107 @ 0x1400B2107 (sub_1400B2107.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140060B30(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( v3 )
    {
      sub_1400B6010(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
    }
  }
  return result;
}
