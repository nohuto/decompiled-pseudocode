/*
 * XREFs of sub_140089DC8 @ 0x140089DC8
 * Callers:
 *     sub_1400589FC @ 0x1400589FC (sub_1400589FC.c)
 *     sub_140098228 @ 0x140098228 (sub_140098228.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140089DC8(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  _OWORD *v6; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_OWORD **)(a2 + 24);
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  v10 = sub_1400143E0(64LL, 44LL, 1918067026LL, a1);
  if ( v10 )
  {
    *(_DWORD *)v10 = 28;
    *(_QWORD *)(v10 + 4) = 0x54504D4554544553LL;
    *(_DWORD *)(v10 + 16) = 3002880;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1392);
    else
      v11 = *(_DWORD *)(v9 + 4124);
    *(_DWORD *)(v10 + 12) = v11;
    *(_DWORD *)(v10 + 24) = 16;
    *(_OWORD *)(v10 + 28) = *v6;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = v10;
  result = v5;
  *a4 = 44;
  return result;
}
