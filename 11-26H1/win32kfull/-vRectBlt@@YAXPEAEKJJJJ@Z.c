/*
 * XREFs of ?vRectBlt@@YAXPEAEKJJJJ@Z @ 0x14031E9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRectBlt(unsigned __int8 *a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int8 *v10; // rbx
  __int64 v11; // r11
  unsigned __int8 *v12; // r8
  __int16 v13; // ax
  unsigned __int8 *v14; // rdi
  unsigned __int64 v15; // rcx

  v6 = a6 - a4;
  v7 = a4 * a2;
  v8 = (unsigned int)((a5 >> 4) - ((a3 + 15) >> 4));
  v9 = a5 & 0xF;
  v10 = &a1[(((__int64)a3 >> 3) & 0xFFFFFFFFFFFFFFFEuLL) + v7];
  v11 = a3 & 0xF;
  do
  {
    v12 = v10;
    v10 += a2;
    if ( (int)v8 < 0 )
    {
      v13 = word_1403704D0[v11] & word_1403704B0[v9];
LABEL_12:
      *(_WORD *)v12 |= v13;
      goto LABEL_13;
    }
    if ( (_DWORD)v11 )
    {
      *(_WORD *)v12 |= word_1403704D0[v11];
      v12 += 2;
    }
    if ( (int)v8 > 0 )
    {
      v14 = v12;
      v15 = (unsigned __int64)(2 * v8) >> 1;
      v12 += 2 * v8;
      while ( v15 )
      {
        *(_WORD *)v14 = -1;
        v14 += 2;
        --v15;
      }
    }
    if ( (a5 & 0xF) != 0 )
    {
      v13 = word_1403704B0[v9];
      goto LABEL_12;
    }
LABEL_13:
    --v6;
  }
  while ( v6 );
}
