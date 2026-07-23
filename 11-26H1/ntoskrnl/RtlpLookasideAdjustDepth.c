/*
 * XREFs of RtlpLookasideAdjustDepth @ 0x140428CC8
 * Callers:
 *     RtlpDynamicLookasideRebalance @ 0x140428B9C (RtlpDynamicLookasideRebalance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLookasideAdjustDepth(__int64 a1, int a2)
{
  int v3; // r8d
  unsigned int v4; // r10d
  int v5; // eax
  unsigned int v6; // ecx
  __int64 result; // rax
  int v8; // r11d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  bool v11; // cc
  unsigned int v12; // ecx
  unsigned int v13; // edx

  LOWORD(v3) = 0;
  v4 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = v5 - *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v5;
  result = *(unsigned int *)(a1 + 28);
  *(_DWORD *)(a1 + 44) = result;
  if ( a2 )
    goto LABEL_2;
  v3 = *(unsigned __int16 *)(a1 + 16);
  v8 = *(unsigned __int16 *)(a1 + 18);
  v9 = v4;
  if ( v6 <= v4 )
    v9 = v6;
  v10 = *(unsigned __int16 *)(a1 + 16);
  if ( !v4 )
    v4 = 1;
  result = 1000 * v9 / v4;
  if ( v4 < 0x19 )
  {
    LOWORD(v3) = v3 - 10;
    v11 = v10 <= 0xE;
LABEL_10:
    if ( v11 )
      LOWORD(v3) = 4;
    goto LABEL_2;
  }
  if ( (unsigned int)result < 5 )
  {
    LOWORD(v3) = v3 - 1;
    v11 = v10 <= 5;
    goto LABEL_10;
  }
  v12 = result * (v8 - v3);
  result = 30LL;
  v13 = v12 / 0x7D0 + 5;
  if ( v13 >= 0x1E )
    v13 = 30;
  v3 += v13;
  if ( v3 >= v8 )
    LOWORD(v3) = *(_WORD *)(a1 + 18);
LABEL_2:
  *(_WORD *)(a1 + 16) = v3;
  return result;
}
