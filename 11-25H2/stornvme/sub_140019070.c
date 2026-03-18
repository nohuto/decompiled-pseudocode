/*
 * XREFs of sub_140019070 @ 0x140019070
 * Callers:
 *     sub_14001A0DC @ 0x14001A0DC (sub_14001A0DC.c)
 * Callees:
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

_OWORD *__fastcall sub_140019070(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rcx
  _OWORD *result; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1

  sub_140032C80(a2, 0LL, 688LL);
  *(_DWORD *)a2 = 4;
  *(_DWORD *)(a2 + 4) = 4;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
  v4 = 3LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 144);
  *(_DWORD *)(a2 + 144) = *(_DWORD *)(a1 + 160);
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(a2 + 160) = *(_DWORD *)(a1 + 184);
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 && *(_DWORD *)(a1 + 28) != 3 )
  {
    *(_DWORD *)(a2 + 176) = *(_DWORD *)(v5 + 20);
    *(_DWORD *)(a2 + 180) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL);
    *(_DWORD *)(a2 + 188) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 60LL);
  }
  *(_OWORD *)(a2 + 192) = *(_OWORD *)(a1 + 200);
  *(_OWORD *)(a2 + 208) = *(_OWORD *)(a1 + 216);
  *(_WORD *)(a2 + 224) = *(_WORD *)(a1 + 232);
  *(_WORD *)(a2 + 226) = *(_WORD *)(a1 + 234);
  *(_DWORD *)(a2 + 228) = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a2 + 232) = *(_DWORD *)(a1 + 240);
  *(_DWORD *)(a2 + 236) = *(_DWORD *)(a1 + 244);
  *(_WORD *)(a2 + 240) = *(_WORD *)(a1 + 272);
  *(_WORD *)(a2 + 244) = *(_WORD *)(a1 + 334);
  *(_WORD *)(a2 + 246) = *(_WORD *)(a1 + 330);
  *(_WORD *)(a2 + 248) = *(_WORD *)(a1 + 332);
  if ( (*(_DWORD *)(a1 + 1600) & 1) != 0 )
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1584) + 12LL);
  else
    v6 = 0;
  *(_DWORD *)(a2 + 252) = v6;
  v7 = 0LL;
  result = (_OWORD *)*(unsigned int *)(a1 + 28);
  *(_DWORD *)(a2 + 256) = (_DWORD)result;
  while ( (unsigned int)v7 < *(_DWORD *)(a1 + 224) )
  {
    result = *(_OWORD **)(a1 + 8 * v7 + 1672);
    if ( result )
    {
      v9 = (_OWORD *)(a2 + 264);
      do
      {
        *v9 = *result;
        v9[1] = result[1];
        v9[2] = result[2];
        v9[3] = result[3];
        v9[4] = result[4];
        v9[5] = result[5];
        v9[6] = result[6];
        v9 += 8;
        v10 = result[7];
        result += 8;
        *(v9 - 1) = v10;
        --v4;
      }
      while ( v4 );
      *v9 = *result;
      v9[1] = result[1];
      result = (_OWORD *)*((_QWORD *)result + 4);
      *((_QWORD *)v9 + 4) = result;
      return result;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  return result;
}
