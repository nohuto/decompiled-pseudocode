/*
 * XREFs of sub_140906B5C @ 0x140906B5C
 * Callers:
 *     sub_140906F0C @ 0x140906F0C (sub_140906F0C.c)
 *     sub_140908DF4 @ 0x140908DF4 (sub_140908DF4.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     sub_140A62DF8 @ 0x140A62DF8 (sub_140A62DF8.c)
 */

__int64 __fastcall sub_140906B5C(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // ecx
  __int64 v8; // r9
  size_t v9; // rdx
  int v10; // ebx
  __int64 v12; // r8
  _QWORD *v13; // rsi
  unsigned int v14; // eax

  v7 = a1[2];
  v8 = *a1;
  v9 = v8 * v7;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v12 = v7 + a1[6];
  if ( (unsigned int)v12 < v7 || (unsigned __int64)(v8 * v12) > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    if ( a1[1] + 1 >= v7 )
    {
      v13 = a1 + 4;
      v10 = sub_140A62DF8(*((void **)a1 + 2), v9);
      if ( v10 < 0 )
        return (unsigned int)v10;
      a1[2] += a1[6];
      v7 = a1[2];
    }
    else
    {
      v13 = a1 + 4;
      v10 = 0;
    }
    v14 = a1[1];
    if ( a4 <= v14 && v7 )
    {
      memmove((void *)(*v13 + (a4 + 1) * *a1), (const void *)(*v13 + a4 * *a1), *a1 * (v14 - a4));
      ++a1[1];
      *(_QWORD *)(*a1 * a4 + *v13) = a2;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v10;
}
