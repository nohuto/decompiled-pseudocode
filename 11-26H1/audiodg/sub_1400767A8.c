/*
 * XREFs of sub_1400767A8 @ 0x1400767A8
 * Callers:
 *     sub_14007A580 @ 0x14007A580 (sub_14007A580.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400767A8(unsigned int *a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  unsigned int v4; // ebx
  __int64 v8; // r8
  _DWORD *v9; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v4 = sub_1400B6010(*(_QWORD *)(*(_QWORD *)a3 + 40LL));
    sub_140075EC0(&v11, a2);
    if ( a1[1] != v11 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v8 = 0LL;
        v9 = (_DWORD *)**a4;
        if ( *v9 )
        {
          do
          {
            *(_QWORD *)(*a4[1] + 8 * v8) = 0LL;
            v8 = (unsigned int)(v8 + 1);
            v9 = (_DWORD *)**a4;
          }
          while ( (unsigned int)v8 < *v9 );
        }
        *v9 = 0;
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
