/*
 * XREFs of sub_14008A858 @ 0x14008A858
 * Callers:
 *     sub_14005D120 @ 0x14005D120 (sub_14005D120.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 */

__int64 __fastcall sub_14008A858(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 *v11; // rax
  int v13; // [rsp+58h] [rbp+20h]

  v3 = *(_DWORD **)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  HIBYTE(v13) = 0;
  v8 = *(_DWORD *)(a3 + 36);
  if ( v8 )
    v9 = 16 * ((unsigned int)(v8 - 1) + 2LL);
  else
    v9 = 32LL;
  *v3 = 1;
  v3[1] = v9;
  if ( *(unsigned int *)(v5 + 8) >= v9 )
  {
    v10 = 0;
    v3[2] = *(_DWORD *)(a3 + 36);
    for ( v3[3] = *(_DWORD *)(a3 + 40); v10 < *(_DWORD *)(a3 + 36); ++v10 )
    {
      BYTE2(v13) = *(_BYTE *)(a3 + 8LL * v10 + 51);
      LOWORD(v13) = *(_WORD *)(a3 + 8LL * v10 + 49);
      v11 = sub_14001F350(a1, v13);
      if ( v11 )
        *(_OWORD *)&v3[4 * v10 + 4] = *(_OWORD *)(v11 + 263);
    }
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v6;
}
