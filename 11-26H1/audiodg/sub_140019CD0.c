/*
 * XREFs of sub_140019CD0 @ 0x140019CD0
 * Callers:
 *     sub_140019C30 @ 0x140019C30 (sub_140019C30.c)
 *     sub_140019C50 @ 0x140019C50 (sub_140019C50.c)
 *     sub_140019C70 @ 0x140019C70 (sub_140019C70.c)
 *     sub_140019C90 @ 0x140019C90 (sub_140019C90.c)
 *     sub_140019CB0 @ 0x140019CB0 (sub_140019CB0.c)
 *     sub_140045430 @ 0x140045430 (sub_140045430.c)
 *     sub_140045450 @ 0x140045450 (sub_140045450.c)
 *     sub_1400454D0 @ 0x1400454D0 (sub_1400454D0.c)
 *     sub_1400454F0 @ 0x1400454F0 (sub_1400454F0.c)
 *     sub_140048790 @ 0x140048790 (sub_140048790.c)
 *     sub_14004E780 @ 0x14004E780 (sub_14004E780.c)
 *     sub_140058260 @ 0x140058260 (sub_140058260.c)
 *     sub_14005EBC0 @ 0x14005EBC0 (sub_14005EBC0.c)
 *     sub_14005EC50 @ 0x14005EC50 (sub_14005EC50.c)
 *     sub_140070070 @ 0x140070070 (sub_140070070.c)
 *     sub_140071370 @ 0x140071370 (sub_140071370.c)
 *     sub_140074EF0 @ 0x140074EF0 (sub_140074EF0.c)
 *     sub_140074F90 @ 0x140074F90 (sub_140074F90.c)
 *     sub_140098CC0 @ 0x140098CC0 (sub_140098CC0.c)
 *     sub_140098D90 @ 0x140098D90 (sub_140098D90.c)
 *     sub_140098F20 @ 0x140098F20 (sub_140098F20.c)
 *     sub_140099070 @ 0x140099070 (sub_140099070.c)
 *     sub_140099100 @ 0x140099100 (sub_140099100.c)
 *     sub_1400991D0 @ 0x1400991D0 (sub_1400991D0.c)
 *     sub_1400A8160 @ 0x1400A8160 (sub_1400A8160.c)
 *     sub_1400A8270 @ 0x1400A8270 (sub_1400A8270.c)
 *     sub_1400A8380 @ 0x1400A8380 (sub_1400A8380.c)
 *     sub_1400A8430 @ 0x1400A8430 (sub_1400A8430.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140019CD0(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  _QWORD *i; // rbx
  __int64 v8; // r10
  _DWORD *v9; // rcx
  int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx

  if ( !a1 || !a2 )
    return 2147942487LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !*a3 && !a3[1] && a3[2] == 192 && a3[3] == 1174405120 )
    {
      v13 = a1 + *(_QWORD *)(a2 + 8);
      sub_1400B6010(v13);
      result = 0LL;
      *a4 = v13;
      return result;
    }
    for ( i = (_QWORD *)(a2 + 8); ; i += 3 )
    {
      v8 = i[1];
      if ( !v8 )
        return 2147500034LL;
      v9 = (_DWORD *)*(i - 1);
      if ( v9 )
      {
        v10 = 0;
        if ( *v9 != *a3 || v9[1] != a3[1] || v9[2] != a3[2] || v9[3] != a3[3] )
          continue;
      }
      else
      {
        v10 = 1;
      }
      if ( v8 == 1 )
      {
        v12 = a1 + *i;
        sub_1400B6010(v12);
        result = 0LL;
        *a4 = v12;
        return result;
      }
      result = sub_1400B6010(a1);
      if ( !(_DWORD)result || !v10 && (int)result < 0 )
        return result;
    }
  }
  return 2147500035LL;
}
