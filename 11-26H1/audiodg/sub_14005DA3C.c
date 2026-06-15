/*
 * XREFs of sub_14005DA3C @ 0x14005DA3C
 * Callers:
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14005F24C @ 0x14005F24C (sub_14005F24C.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 * Callees:
 *     sub_140020994 @ 0x140020994 (sub_140020994.c)
 */

_QWORD *__fastcall sub_14005DA3C(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rbp
  _QWORD *v6; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp

  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *a2 = v6;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( 1 )
    {
      if ( !sub_140020994((__int64)a1, a3, v8 + 2) )
      {
        *a2 = *v8;
        a2[1] = v8;
        return a2;
      }
      if ( v8 == v9 )
        break;
      v8 = (_QWORD *)v8[1];
    }
    *a2 = v8;
  }
  a2[1] = 0LL;
  return a2;
}
