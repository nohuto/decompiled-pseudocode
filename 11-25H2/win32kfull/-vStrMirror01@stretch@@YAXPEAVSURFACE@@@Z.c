/*
 * XREFs of ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x14017C180
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror01(unsigned int **this, struct SURFACE *a2)
{
  stretch *v2; // rbp
  unsigned int *v3; // r13
  int v4; // edx
  int v5; // r8d
  int v6; // ebx
  unsigned int v7; // r15d
  int v8; // edi
  int v9; // r12d
  int v10; // ebx
  unsigned int *v11; // r14
  int *v12; // rsi
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // rbp
  int v16; // edx
  int v17; // r10d
  unsigned int v18; // r11d
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // r10d
  unsigned int v22; // r11d
  int v23; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  unsigned int *v25; // [rsp+10h] [rbp-58h]
  int v26; // [rsp+78h] [rbp+10h]
  int v27; // [rsp+80h] [rbp+18h]
  int v28; // [rsp+88h] [rbp+20h]

  v2 = (stretch *)this;
  v3 = this[10];
  v25 = v3;
  v4 = 0;
  v5 = *((_DWORD *)this + 14) / 2;
  v23 = v5;
  v28 = 0;
  if ( *((int *)this + 15) > 0 )
  {
    do
    {
      v6 = *((_DWORD *)v2 + 14) - 1;
      v7 = *v3;
      v8 = v6 >> 5;
      v9 = 0;
      v10 = v6 & 0x1F;
      v27 = 0;
      v11 = v3;
      v12 = (int *)&v3[v8];
      v13 = *v12;
      v26 = *v12;
      if ( v5 > 0 )
      {
        v14 = 0LL;
        v24 = (unsigned int)v5;
        v15 = (unsigned int)v10;
        do
        {
          if ( v9 == v8 )
          {
            v19 = dword_140355080[v14];
            v20 = dword_140363A90[v14];
            v21 = v7 & ~v19 | ((v7 & dword_140355080[v15]) >> dword_140363A90[v15] << v20);
            v22 = (v7 & v19) >> v20;
            v13 = v26;
            v7 = (v22 << dword_140363A90[v15]) | ~dword_140355080[v15] & v21;
          }
          else
          {
            v16 = dword_140363A90[v14];
            v17 = dword_140355080[v15];
            v18 = (v7 & dword_140355080[v14]) >> v16 << dword_140363A90[v15];
            v7 = v7 & ~dword_140355080[v14] | ((v26 & (unsigned int)v17) >> dword_140363A90[v15] << v16);
            v13 = v18 | v26 & ~v17;
            v26 = v13;
          }
          ++v14;
          --v10;
          --v15;
          if ( (++v27 & 0x20) != 0 )
          {
            *v11 = v7;
            ++v9;
            ++v11;
            if ( v9 == v8 )
              *v12 = v13;
            v7 = *v11;
            v27 = 0;
            v14 = 0LL;
          }
          if ( v10 < 0 )
          {
            *v12 = v13;
            --v8;
            --v12;
            if ( v8 == v9 )
            {
              *v11 = v7;
            }
            else
            {
              v13 = *v12;
              v26 = *v12;
            }
            v10 = 31;
            v15 = 31LL;
          }
          --v24;
        }
        while ( v24 );
        v2 = (stretch *)this;
        v3 = v25;
        v4 = v28;
        v5 = v23;
      }
      *v11 = v7;
      if ( v9 != v8 )
        *v12 = v13;
      ++v4;
      v3 = (unsigned int *)((char *)v3 + *((int *)v2 + 22));
      v28 = v4;
      v25 = v3;
    }
    while ( v4 < *((_DWORD *)v2 + 15) );
  }
}
