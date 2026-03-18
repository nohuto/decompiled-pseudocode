/*
 * XREFs of sub_140028448 @ 0x140028448
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

void __fastcall sub_140028448(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // r8d
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_140009580(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v4 = *(_QWORD *)(a1 + 1104);
    v5 = *(_QWORD *)(a1 + 1664);
    *(_BYTE *)(v4 + 4096) = 10;
    *(_QWORD *)(v4 + 4120) = v5;
    *(_BYTE *)(v4 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = sub_1400283C0;
    sub_1400092F0(a1, a1 + 1016);
    LOBYTE(v6) = a2;
    sub_140008130(a1, a1 + 1016, v6);
    if ( !*(_BYTE *)(a1 + 3752) )
    {
      if ( !*(_DWORD *)(a1 + 64) )
        return;
      *(_BYTE *)(a1 + 3752) = 1;
    }
    v7 = *(_DWORD *)(a1 + 3772);
    if ( v7 )
    {
      if ( v7 > 0x64 )
        v7 = 100;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 64);
    }
    *(_DWORD *)(a1 + 3756) = v7;
    v8 = *(_DWORD *)(a1 + 3776);
    if ( !v8 )
      v8 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 3760) = v8;
    v9 = *(_DWORD *)(a1 + 3780);
    if ( (v9 & 1) == 0 )
    {
      v10 = *(_DWORD *)(a1 + 108) >> 1;
      v11 = *(_DWORD *)(a1 + 3764) ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_DWORD *)(a1 + 3764)) & 2;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)v10) & 4 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(v11 ^ (v11 ^ v10) & 4)) & 8;
      v13 = v12 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v12) & 0x10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(v12 ^ (v10 ^ v12) & 0x10)) & 0x20;
      v9 = v13 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v13) & 0x40 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(v13 ^ (v10 ^ v13) & 0x40)) & 0x80;
    }
    *(_DWORD *)(a1 + 3764) = v9;
  }
}
