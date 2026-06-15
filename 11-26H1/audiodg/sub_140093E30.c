/*
 * XREFs of sub_140093E30 @ 0x140093E30
 * Callers:
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

_QWORD *__fastcall sub_140093E30(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // rdi
  _DWORD *v8; // r15
  _DWORD *v9; // rsi
  signed __int64 v10; // r12
  signed __int64 v11; // r13
  _QWORD *result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(_DWORD **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      v10 = (char *)a4 - (char *)a3;
      v11 = (char *)a3 - (char *)a4;
      do
      {
        *v9 = *v4;
        sub_14004591C((__int64)v4 + v11 + 8, (__int64 *)((char *)v4 + v11 + v10 + 8));
        v9 += 4;
        v4 += 4;
      }
      while ( v4 != v8 );
    }
    sub_14008B52C((__int64)v9, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
