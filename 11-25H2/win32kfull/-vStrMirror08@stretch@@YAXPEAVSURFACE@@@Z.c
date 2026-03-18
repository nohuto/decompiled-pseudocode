/*
 * XREFs of ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140314650
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror08(stretch *this, struct SURFACE *a2)
{
  int v2; // r8d
  char *v4; // r11
  int v5; // ebx
  __int64 i; // rdi
  char *v7; // r10
  char *v8; // rdx
  __int64 v9; // r8
  char v10; // cl

  v2 = *((_DWORD *)this + 14);
  v4 = (char *)*((_QWORD *)this + 10);
  v5 = 0;
  for ( i = (unsigned int)(v2 / 2); v5 < *((_DWORD *)this + 15); v4 += *((int *)this + 22) )
  {
    v7 = &v4[v2 - 1];
    v8 = v4;
    if ( (int)i > 0 )
    {
      v9 = i;
      do
      {
        v10 = *v8;
        *v8++ = *v7;
        *v7-- = v10;
        --v9;
      }
      while ( v9 );
      v2 = *((_DWORD *)this + 14);
    }
    ++v5;
  }
}
