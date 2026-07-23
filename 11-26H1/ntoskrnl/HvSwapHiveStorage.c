/*
 * XREFs of HvSwapHiveStorage @ 0x1408635BC
 * Callers:
 *     CmpSwapHiveStorage @ 0x1408625F4 (CmpSwapHiveStorage.c)
 * Callees:
 *     HvpSwapDual @ 0x140863B90 (HvpSwapDual.c)
 */

__int64 __fastcall HvSwapHiveStorage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rbx
  char v16; // al
  int v17; // edx
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int128 v20; // xmm5
  __int64 v21; // xmm2_8
  __int64 v22; // r14
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v4;
  *(_QWORD *)(a2 + 8) = v2;
  v10 = 2LL;
  *(_QWORD *)(a2 + 16) = v9;
  *(_QWORD *)(a2 + 24) = v6;
  *(_QWORD *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 40) = v8;
  v11 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = v11;
  LODWORD(v11) = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a2 + 108) = v11;
  v12 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 104) = v12;
  v13 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a2 + 112) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 128) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a2 + 132) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a2 + 136) = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v13 ^ (*(_BYTE *)(a2 + 140) ^ v13) & 1;
  LOBYTE(v4) = *(_BYTE *)(a2 + 140) ^ (v13 ^ *(_BYTE *)(a2 + 140)) & 1;
  *(_BYTE *)(a2 + 140) = v4;
  v14 = *(_BYTE *)(a1 + 140);
  v15 = a1 + 280;
  *(_BYTE *)(a1 + 140) = v14 ^ (v14 ^ v4) & 2;
  v16 = *(_BYTE *)(a2 + 141);
  *(_BYTE *)(a2 + 140) ^= (v14 ^ *(_BYTE *)(a2 + 140)) & 2;
  LOBYTE(v13) = *(_BYTE *)(a1 + 141);
  *(_BYTE *)(a1 + 141) = v16;
  *(_BYTE *)(a2 + 141) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a2 + 144) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a2 + 148) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a2 + 152) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a2 + 156) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 160) = v13 & 0xFFE17FEC;
  v17 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 160) = v17 ^ (v13 ^ v17) & 0x1E8013;
  *(_DWORD *)(a1 + 160) |= v17 & 0x1E8013;
  v18 = *(_OWORD *)(a1 + 224);
  v19 = *(_OWORD *)(a1 + 240);
  v20 = *(_OWORD *)(a1 + 256);
  v21 = *(_QWORD *)(a1 + 272);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 256);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  *(_OWORD *)(a2 + 224) = v18;
  *(_OWORD *)(a2 + 240) = v19;
  *(_OWORD *)(a2 + 256) = v20;
  *(_QWORD *)(a2 + 272) = v21;
  v22 = a2 - a1;
  do
  {
    result = HvpSwapDual(v15, v22 + v15);
    v15 += 632LL;
    --v10;
  }
  while ( v10 );
  return result;
}
