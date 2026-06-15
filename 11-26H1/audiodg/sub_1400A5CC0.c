/*
 * XREFs of sub_1400A5CC0 @ 0x1400A5CC0
 * Callers:
 *     sub_1400A68A0 @ 0x1400A68A0 (sub_1400A68A0.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400A5BFC @ 0x1400A5BFC (sub_1400A5BFC.c)
 *     sub_1400A6544 @ 0x1400A6544 (sub_1400A6544.c)
 *     sub_1400A8FD0 @ 0x1400A8FD0 (sub_1400A8FD0.c)
 *     sub_1400A90C4 @ 0x1400A90C4 (sub_1400A90C4.c)
 */

__int64 __fastcall sub_1400A5CC0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = -2147467259;
  v5 = sub_1400A5BFC(v11, a2);
  v6 = v5;
  if ( *(_QWORD *)a1 )
  {
    v7 = -2147024891;
  }
  else
  {
    sub_1400A6544(v2, v5);
    if ( *v2 )
    {
      v7 = sub_1400A8FD0(*v2, a1);
      if ( v7 < 0 )
        sub_1400A90C4(v2);
    }
    else
    {
      v7 = -2147024809;
    }
  }
  *(_DWORD *)(a1 + 24) = v7;
  v8 = v6[1];
  if ( v8 )
    sub_140007588(v8);
  v9 = a2[1];
  if ( v9 )
    sub_140007588(v9);
  return a1;
}
