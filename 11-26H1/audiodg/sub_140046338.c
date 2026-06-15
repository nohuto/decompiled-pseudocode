/*
 * XREFs of sub_140046338 @ 0x140046338
 * Callers:
 *     sub_1400462E8 @ 0x1400462E8 (sub_1400462E8.c)
 *     sub_1400AB7E0 @ 0x1400AB7E0 (sub_1400AB7E0.c)
 *     sub_1400B431E @ 0x1400B431E (sub_1400B431E.c)
 * Callees:
 *     sub_140038EA0 @ 0x140038EA0 (sub_140038EA0.c)
 *     sub_1400A304C @ 0x1400A304C (sub_1400A304C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140046338(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *(_QWORD *)a1 = off_1400BB070;
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
