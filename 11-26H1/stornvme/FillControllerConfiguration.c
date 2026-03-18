/*
 * XREFs of FillControllerConfiguration @ 0x140012268
 * Callers:
 *     NVMeLogEtwControllerInfo @ 0x1400131FC (NVMeLogEtwControllerInfo.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 */

_OWORD *__fastcall FillControllerConfiguration(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rcx
  _OWORD *result; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1

  memset(a2, 0, 0x2B0uLL);
  *a2 = 4;
  a2[1] = 4;
  a2[2] = *(_DWORD *)a1;
  v4 = 3LL;
  a2[3] = *(_DWORD *)(a1 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)a2 + 4) = *(_OWORD *)(a1 + 80);
  *((_OWORD *)a2 + 5) = *(_OWORD *)(a1 + 96);
  *((_OWORD *)a2 + 6) = *(_OWORD *)(a1 + 112);
  *((_OWORD *)a2 + 7) = *(_OWORD *)(a1 + 128);
  *((_OWORD *)a2 + 8) = *(_OWORD *)(a1 + 144);
  a2[36] = *(_DWORD *)(a1 + 160);
  *((_QWORD *)a2 + 19) = *(_QWORD *)(a1 + 168);
  a2[40] = *(_DWORD *)(a1 + 184);
  *((_QWORD *)a2 + 21) = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 && *(_DWORD *)(a1 + 28) != 3 )
  {
    a2[44] = *(_DWORD *)(v5 + 20);
    a2[45] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    a2[46] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL);
    a2[47] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 60LL);
  }
  *((_OWORD *)a2 + 12) = *(_OWORD *)(a1 + 200);
  *((_OWORD *)a2 + 13) = *(_OWORD *)(a1 + 216);
  *((_WORD *)a2 + 112) = *(_WORD *)(a1 + 232);
  *((_WORD *)a2 + 113) = *(_WORD *)(a1 + 234);
  a2[57] = *(_DWORD *)(a1 + 236);
  a2[58] = *(_DWORD *)(a1 + 240);
  a2[59] = *(_DWORD *)(a1 + 244);
  *((_WORD *)a2 + 120) = *(_WORD *)(a1 + 272);
  *((_WORD *)a2 + 122) = *(_WORD *)(a1 + 334);
  *((_WORD *)a2 + 123) = *(_WORD *)(a1 + 330);
  *((_WORD *)a2 + 124) = *(_WORD *)(a1 + 332);
  if ( (*(_DWORD *)(a1 + 1600) & 1) != 0 )
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1584) + 12LL);
  else
    v6 = 0;
  a2[63] = v6;
  v7 = 0LL;
  result = (_OWORD *)*(unsigned int *)(a1 + 28);
  a2[64] = (_DWORD)result;
  while ( (unsigned int)v7 < *(_DWORD *)(a1 + 224) )
  {
    result = *(_OWORD **)(a1 + 8 * v7 + 1672);
    if ( result )
    {
      v9 = a2 + 66;
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
