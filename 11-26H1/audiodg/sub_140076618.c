/*
 * XREFs of sub_140076618 @ 0x140076618
 * Callers:
 *     sub_140079F60 @ 0x140079F60 (sub_140079F60.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140076618(unsigned int *a1, __int64 a2, __int64 a3, _QWORD ***a4)
{
  unsigned int v4; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v4 = sub_1400B6010(*(_QWORD *)(*(_QWORD *)a3 + 40LL));
    sub_140075EC0(&v9, a2);
    if ( a1[1] != v9 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
