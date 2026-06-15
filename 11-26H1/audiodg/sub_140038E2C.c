/*
 * XREFs of sub_140038E2C @ 0x140038E2C
 * Callers:
 *     sub_140038DD8 @ 0x140038DD8 (sub_140038DD8.c)
 *     sub_1400A2F10 @ 0x1400A2F10 (sub_1400A2F10.c)
 *     sub_1400B005F @ 0x1400B005F (sub_1400B005F.c)
 * Callees:
 *     sub_140038EA0 @ 0x140038EA0 (sub_140038EA0.c)
 *     sub_1400A304C @ 0x1400A304C (sub_1400A304C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140038E2C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  *(_QWORD *)a1 = off_1400BAA18;
  LOBYTE(a2) = 1;
  result = sub_140038EA0(a1, a2);
  if ( *(_QWORD *)(a1 + 24) )
  {
    result = sub_1400A304C();
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      result = sub_1400B6010(v4);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
