/*
 * XREFs of sub_1400461D0 @ 0x1400461D0
 * Callers:
 *     sub_140046144 @ 0x140046144 (sub_140046144.c)
 *     sub_14004615C @ 0x14004615C (sub_14004615C.c)
 *     sub_1400AB820 @ 0x1400AB820 (sub_1400AB820.c)
 *     sub_1400AB8E0 @ 0x1400AB8E0 (sub_1400AB8E0.c)
 * Callees:
 *     sub_140038EA0 @ 0x140038EA0 (sub_140038EA0.c)
 *     sub_1400A304C @ 0x1400A304C (sub_1400A304C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400461D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *(_QWORD *)a1 = off_1400BAF88;
  result = sub_140038EA0(a1);
  if ( *(_QWORD *)(a1 + 24) )
  {
    result = sub_1400A304C();
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      result = sub_1400B6010(v3);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
