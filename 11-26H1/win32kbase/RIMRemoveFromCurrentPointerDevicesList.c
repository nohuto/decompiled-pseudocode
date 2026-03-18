/*
 * XREFs of RIMRemoveFromCurrentPointerDevicesList @ 0x14012EB44
 * Callers:
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMRemoveFromCurrentPointerDevicesList(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r10
  unsigned int v3; // r9d
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  v2 = (_QWORD *)(a1 + 432);
  v3 = 0;
  v4 = *(_QWORD **)(a1 + 432);
  while ( 1 )
  {
    v5 = v4;
    if ( v4 == v2 )
      break;
    v6 = v4 - 115;
    v4 = (_QWORD *)*v4;
    if ( v6 == a2 )
    {
      if ( (_QWORD *)v4[1] != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v4;
      v3 = 1;
      v4[1] = v7;
      v5[1] = v5;
      *v5 = v5;
      return v3;
    }
  }
  return v3;
}
