/*
 * XREFs of DiagAllDiagnosticData @ 0x140019DA0
 * Callers:
 *     DiagGeneric @ 0x14001A1B8 (DiagGeneric.c)
 * Callees:
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall DiagAllDiagnosticData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned int v7; // r14d
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rax

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 32);
  v7 = 424 * *(_DWORD *)(a1 + 212) + 8712;
  if ( v4 >= v7 )
  {
    v8 = (unsigned int *)(a2 + 40);
    if ( (v4 & 3) != 0 )
    {
      if ( v4 )
        memset(v8, 0, *(unsigned int *)(a2 + 32));
    }
    else
    {
      v9 = v4 >> 2;
      if ( v9 )
        memset(v8, 0, 4LL * v9);
    }
    *v8 = v7;
    v8[1] = 1;
    v8[2] = *(_DWORD *)a1;
    *((_WORD *)v8 + 6) = *(_WORD *)(a1 + 4);
    *((_WORD *)v8 + 7) = *(_WORD *)(a1 + 6);
    *((_BYTE *)v8 + 16) = *(_BYTE *)(a1 + 8);
    v8[5] = *(_DWORD *)(a1 + 12);
    v8[6] = *(_DWORD *)(a1 + 16);
    *((_BYTE *)v8 + 28) = *(_BYTE *)(a1 + 20);
    *((_BYTE *)v8 + 29) = *(_BYTE *)(a1 + 21) & 1;
    *((_BYTE *)v8 + 30) = (*(_BYTE *)(a1 + 21) & 0x20) != 0;
    *((_BYTE *)v8 + 31) = *(_BYTE *)(a1 + 22);
    *((_BYTE *)v8 + 32) = (*(_BYTE *)(a1 + 21) & 0x40) != 0;
    *((_BYTE *)v8 + 33) = *(_BYTE *)(a1 + 21) >> 7;
    v8[9] = *(_DWORD *)(a1 + 24);
    v8[10] = *(_DWORD *)(a1 + 28);
    *(_OWORD *)(v8 + 11) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v8 + 15) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v8 + 19) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v8 + 23) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v8 + 27) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v8 + 31) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v8 + 35) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v8 + 39) = *(_OWORD *)(a1 + 144);
    v8[43] = *(_DWORD *)(a1 + 160);
    *((_QWORD *)v8 + 22) = *(_QWORD *)(a1 + 168);
    v8[46] = *(_DWORD *)(a1 + 184);
    *((_QWORD *)v8 + 24) = *(_QWORD *)(a1 + 192);
    v8[50] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL);
    v8[51] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    v8[52] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL);
    v8[53] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 60LL);
    *(_OWORD *)(v8 + 54) = *(_OWORD *)(a1 + 200);
    *(_OWORD *)(v8 + 58) = *(_OWORD *)(a1 + 216);
    *(_OWORD *)(v8 + 62) = *(_OWORD *)(a1 + 232);
    *(_OWORD *)(v8 + 66) = *(_OWORD *)(a1 + 248);
    *(_OWORD *)(v8 + 70) = *(_OWORD *)(a1 + 264);
    *(_OWORD *)(v8 + 74) = *(_OWORD *)(a1 + 280);
    *(_OWORD *)(v8 + 78) = *(_OWORD *)(a1 + 296);
    *((_QWORD *)v8 + 41) = *(_QWORD *)(a1 + 312);
    memmove(v8 + 84, (const void *)(a1 + 1560), 0x1000uLL);
    *((_OWORD *)v8 + 277) = *(_OWORD *)(a1 + 1584);
    *((_OWORD *)v8 + 278) = *(_OWORD *)(a1 + 1600);
    *((_OWORD *)v8 + 279) = *(_OWORD *)(a1 + 1616);
    *((_OWORD *)v8 + 280) = *(_OWORD *)(a1 + 1632);
    *((_QWORD *)v8 + 562) = *(_QWORD *)(a1 + 1648);
    memmove(v8 + 1126, (const void *)(a1 + 3712), 0x1000uLL);
    *(_OWORD *)(v8 + 2150) = *(_OWORD *)(a1 + 3728);
    v8[2154] = *(_DWORD *)(a1 + 3744);
    *(_OWORD *)(v8 + 2155) = *(_OWORD *)(a1 + 3752);
    *(_OWORD *)(v8 + 2159) = *(_OWORD *)(a1 + 3768);
    *(_QWORD *)(v8 + 2163) = *(_QWORD *)(a1 + 3784);
    *((_QWORD *)v8 + 1083) = *(_QWORD *)(a1 + 3792);
    v8[2168] = *(_DWORD *)(a1 + 3800);
    *((_WORD *)v8 + 4340) = *(_WORD *)(a1 + 320);
    *((_WORD *)v8 + 4341) = *(_WORD *)(a1 + 322);
    *((_WORD *)v8 + 4342) = *(_WORD *)(a1 + 324);
    *((_WORD *)v8 + 4343) = *(_WORD *)(a1 + 326);
    *((_WORD *)v8 + 4344) = *(_WORD *)(a1 + 328);
    *((_WORD *)v8 + 4345) = *(_WORD *)(a1 + 330);
    *((_WORD *)v8 + 4346) = *(_WORD *)(a1 + 332);
    *((_WORD *)v8 + 4347) = *(_WORD *)(a1 + 334);
    *((_WORD *)v8 + 4348) = *(_WORD *)(a1 + 952);
    *((_WORD *)v8 + 4349) = *(_WORD *)(a1 + 954);
    *((_WORD *)v8 + 4350) = *(_WORD *)(a1 + 976);
    *((_WORD *)v8 + 4351) = *(_WORD *)(a1 + 978);
    *((_WORD *)v8 + 4352) = *(_WORD *)(a1 + 980);
    *((_WORD *)v8 + 4353) = *(_WORD *)(a1 + 982);
    v10 = *(unsigned int *)(a1 + 212);
    v8[2177] = v10;
    if ( (_DWORD)v10 )
      memmove(v8 + 2178, (const void *)(a1 + 1672), 424 * v10);
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
