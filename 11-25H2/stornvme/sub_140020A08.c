/*
 * XREFs of sub_140020A08 @ 0x140020A08
 * Callers:
 *     sub_140020E0C @ 0x140020E0C (sub_140020E0C.c)
 * Callees:
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140020A08(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // eax
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rax

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 32);
  v7 = 424 * *(_DWORD *)(a1 + 212) + 8704;
  if ( v4 >= v7 )
  {
    v8 = a2 + 40;
    if ( (v4 & 3) != 0 )
    {
      if ( v4 )
        sub_140032C80(v8, 0LL, *(unsigned int *)(a2 + 32));
    }
    else
    {
      v9 = v4 >> 2;
      if ( v9 )
        sub_140032C80(v8, 0LL, 4LL * v9);
    }
    *(_DWORD *)v8 = v7;
    *(_DWORD *)(v8 + 4) = 1;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)a1;
    *(_WORD *)(v8 + 12) = *(_WORD *)(a1 + 4);
    *(_WORD *)(v8 + 14) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(v8 + 16) = *(_BYTE *)(a1 + 8);
    *(_DWORD *)(v8 + 20) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(v8 + 28) = *(_BYTE *)(a1 + 20);
    *(_BYTE *)(v8 + 29) = *(_BYTE *)(a1 + 21) & 1;
    *(_BYTE *)(v8 + 30) = (*(_BYTE *)(a1 + 21) & 0x20) != 0;
    *(_BYTE *)(v8 + 31) = *(_BYTE *)(a1 + 22);
    *(_BYTE *)(v8 + 32) = (*(_BYTE *)(a1 + 21) & 0x40) != 0;
    *(_BYTE *)(v8 + 33) = *(_BYTE *)(a1 + 21) >> 7;
    *(_DWORD *)(v8 + 36) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 28);
    *(_OWORD *)(v8 + 44) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v8 + 60) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v8 + 76) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v8 + 92) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v8 + 108) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v8 + 124) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v8 + 140) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v8 + 156) = *(_OWORD *)(a1 + 144);
    *(_DWORD *)(v8 + 172) = *(_DWORD *)(a1 + 160);
    *(_QWORD *)(v8 + 176) = *(_QWORD *)(a1 + 168);
    *(_DWORD *)(v8 + 184) = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(v8 + 192) = *(_QWORD *)(a1 + 192);
    *(_DWORD *)(v8 + 200) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL);
    *(_DWORD *)(v8 + 204) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    *(_DWORD *)(v8 + 208) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL);
    *(_DWORD *)(v8 + 212) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 60LL);
    *(_OWORD *)(v8 + 216) = *(_OWORD *)(a1 + 200);
    *(_OWORD *)(v8 + 232) = *(_OWORD *)(a1 + 216);
    *(_OWORD *)(v8 + 248) = *(_OWORD *)(a1 + 232);
    *(_OWORD *)(v8 + 264) = *(_OWORD *)(a1 + 248);
    *(_OWORD *)(v8 + 280) = *(_OWORD *)(a1 + 264);
    *(_OWORD *)(v8 + 296) = *(_OWORD *)(a1 + 280);
    *(_OWORD *)(v8 + 312) = *(_OWORD *)(a1 + 296);
    *(_QWORD *)(v8 + 328) = *(_QWORD *)(a1 + 312);
    sub_140032980(v8 + 336, a1 + 1560, 4096LL);
    *(_OWORD *)(v8 + 4432) = *(_OWORD *)(a1 + 1584);
    *(_OWORD *)(v8 + 4448) = *(_OWORD *)(a1 + 1600);
    *(_OWORD *)(v8 + 4464) = *(_OWORD *)(a1 + 1616);
    *(_OWORD *)(v8 + 4480) = *(_OWORD *)(a1 + 1632);
    *(_QWORD *)(v8 + 4496) = *(_QWORD *)(a1 + 1648);
    sub_140032980(v8 + 4504, a1 + 3712, 4096LL);
    *(_OWORD *)(v8 + 8600) = *(_OWORD *)(a1 + 3728);
    *(_DWORD *)(v8 + 8616) = *(_DWORD *)(a1 + 3744);
    *(_OWORD *)(v8 + 8620) = *(_OWORD *)(a1 + 3752);
    *(_OWORD *)(v8 + 8636) = *(_OWORD *)(a1 + 3768);
    *(_QWORD *)(v8 + 8656) = *(_QWORD *)(a1 + 3784);
    *(_DWORD *)(v8 + 8664) = *(_DWORD *)(a1 + 3792);
    *(_WORD *)(v8 + 8672) = *(_WORD *)(a1 + 320);
    *(_WORD *)(v8 + 8674) = *(_WORD *)(a1 + 322);
    *(_WORD *)(v8 + 8676) = *(_WORD *)(a1 + 324);
    *(_WORD *)(v8 + 8678) = *(_WORD *)(a1 + 326);
    *(_WORD *)(v8 + 8680) = *(_WORD *)(a1 + 328);
    *(_WORD *)(v8 + 8682) = *(_WORD *)(a1 + 330);
    *(_WORD *)(v8 + 8684) = *(_WORD *)(a1 + 332);
    *(_WORD *)(v8 + 8686) = *(_WORD *)(a1 + 334);
    *(_WORD *)(v8 + 8688) = *(_WORD *)(a1 + 952);
    *(_WORD *)(v8 + 8690) = *(_WORD *)(a1 + 954);
    *(_WORD *)(v8 + 8692) = *(_WORD *)(a1 + 976);
    *(_WORD *)(v8 + 8694) = *(_WORD *)(a1 + 978);
    *(_WORD *)(v8 + 8696) = *(_WORD *)(a1 + 980);
    *(_WORD *)(v8 + 8698) = *(_WORD *)(a1 + 982);
    v10 = *(unsigned int *)(a1 + 212);
    *(_DWORD *)(v8 + 8700) = v10;
    if ( (_DWORD)v10 )
      sub_140032980(v8 + 8704, a1 + 1672, 424 * v10);
    *(_DWORD *)(a2 + 32) = v7;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v7;
    v3 = -1056964604;
    *(_DWORD *)(a3 + 20) = 6;
  }
  return v3;
}
