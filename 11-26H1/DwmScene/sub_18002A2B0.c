/*
 * XREFs of sub_18002A2B0 @ 0x18002A2B0
 * Callers:
 *     sub_18002AE68 @ 0x18002AE68 (sub_18002AE68.c)
 *     sub_18006F6BC @ 0x18006F6BC (sub_18006F6BC.c)
 * Callees:
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 *     sub_18002A334 @ 0x18002A334 (sub_18002A334.c)
 */

__int64 __fastcall sub_18002A2B0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  char v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax

  *(_QWORD *)(*a1 + 8LL) = sub_18002A334(a1, *(_QWORD *)(*a2 + 8LL), *a1);
  v4 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v5 = v4[1];
  if ( *(_BYTE *)(v5 + 25) )
  {
    *v4 = v4;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v6 = sub_18001DEF0((_QWORD *)v5);
    *v8 = v6;
    v9 = *(_QWORD *)(*a1 + 8LL);
    for ( result = *(_QWORD *)(v9 + 16); *(_BYTE *)(result + 25) == v7; result = *(_QWORD *)(result + 16) )
      v9 = result;
    *(_QWORD *)(*a1 + 16LL) = v9;
  }
  return result;
}
