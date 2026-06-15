/*
 * XREFs of sub_140046284 @ 0x140046284
 * Callers:
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 *     sub_1400AB7A0 @ 0x1400AB7A0 (sub_1400AB7A0.c)
 *     sub_1400B430C @ 0x1400B430C (sub_1400B430C.c)
 * Callees:
 *     sub_140038EA0 @ 0x140038EA0 (sub_140038EA0.c)
 *     sub_1400A304C @ 0x1400A304C (sub_1400A304C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140046284(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *(_QWORD *)a1 = off_1400BB020;
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
