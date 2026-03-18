/*
 * XREFs of ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314760
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror24(stretch *this, struct SURFACE *a2)
{
  int v2; // r9d
  __int16 *v4; // r10
  int v5; // r11d
  __int64 i; // rsi
  __int16 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int16 v10; // cx
  char v11; // dl

  v2 = *((_DWORD *)this + 14);
  v4 = (__int16 *)*((_QWORD *)this + 10);
  v5 = 0;
  for ( i = (unsigned int)(v2 / 2); v5 < *((_DWORD *)this + 15); v4 = (__int16 *)((char *)v4 + *((int *)this + 22)) )
  {
    v7 = v4;
    v8 = (__int64)&v4[v2 - 1] + v2 - 1;
    if ( (int)i > 0 )
    {
      v9 = i;
      do
      {
        v10 = *v7;
        v11 = *((_BYTE *)v7 + 2);
        *v7 = *(_WORD *)v8;
        v7 = (__int16 *)((char *)v7 + 3);
        *((_BYTE *)v7 - 1) = *(_BYTE *)(v8 + 2);
        *(_WORD *)v8 = v10;
        *(_BYTE *)(v8 + 2) = v11;
        v8 -= 3LL;
        --v9;
      }
      while ( v9 );
      v2 = *((_DWORD *)this + 14);
    }
    ++v5;
  }
}
