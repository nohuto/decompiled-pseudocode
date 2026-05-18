/*
 * XREFs of sub_18002EB04 @ 0x18002EB04
 * Callers:
 *     sub_18002E548 @ 0x18002E548 (sub_18002E548.c)
 *     sub_18002F858 @ 0x18002F858 (sub_18002F858.c)
 *     sub_18002F964 @ 0x18002F964 (sub_18002F964.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180054910 @ 0x180054910 (sub_180054910.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002EB04(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( (unsigned __int64)v4[5] >= *(_QWORD *)(a3 + 8) )
    {
      a2[2] = v4;
      v5 = 1;
    }
    else
    {
      v4 += 2;
      v5 = 0;
    }
    *((_DWORD *)a2 + 2) = v5;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
