/*
 * XREFs of sub_1400A93A8 @ 0x1400A93A8
 * Callers:
 *     sub_1400A95C8 @ 0x1400A95C8 (sub_1400A95C8.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400A5BFC @ 0x1400A5BFC (sub_1400A5BFC.c)
 *     sub_1400A6544 @ 0x1400A6544 (sub_1400A6544.c)
 *     sub_1400AA0F0 @ 0x1400AA0F0 (sub_1400AA0F0.c)
 */

__int64 __fastcall sub_1400A93A8(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  v2 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = -2147467259;
  *(_BYTE *)(a1 + 28) = 0;
  v5 = sub_1400A5BFC(v13, a2);
  v6 = v5;
  if ( *(_QWORD *)a1 )
  {
    v7 = -2147024891;
  }
  else
  {
    sub_1400A6544(v2, v5);
    v8 = *v2;
    if ( *v2 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)a1 = 100LL * (unsigned int)sub_1400AA0F0(v8 + 12, v9, a1 + 28) + v9 + 4;
      v7 = 0;
    }
    else
    {
      v7 = -2147024809;
    }
  }
  *(_DWORD *)(a1 + 24) = v7;
  v10 = v6[1];
  if ( v10 )
    sub_140007588(v10);
  v11 = a2[1];
  if ( v11 )
    sub_140007588(v11);
  return a1;
}
