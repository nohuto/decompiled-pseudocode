/*
 * XREFs of sub_1400544D4 @ 0x1400544D4
 * Callers:
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400544D4(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a2 & a1[6];
  v6 = a1[3];
  v7 = 2 * v5;
  v8 = *(_QWORD *)(v6 + 8 * v7);
  if ( v8 == a1[1] )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
LABEL_6:
    *(_QWORD *)(v6 + 8 * v7 + 8) = a4;
    return a4;
  }
  if ( v8 == a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
  }
  else if ( *(_QWORD **)(v6 + 8 * v7 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
