/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x14001B8FC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1400601D4 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140072F20 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D9DB0 (NtGdiCLIPOBJ_bEnum.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1400DC674 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DC9FC (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1401E15F8 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x14020FAB0 (CLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x14024CA8C (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140265848 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // rsi
  unsigned int v7; // ebx
  int *v8; // rdx
  int v9; // r12d
  int v10; // r13d
  int v11; // ebp
  __int64 v12; // rcx
  _DWORD *v13; // r8
  unsigned int v14; // edi
  _DWORD *v15; // rdx
  int v16; // r8d
  int v17; // edi
  _DWORD *v18; // rbp
  int i; // edx
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  __int64 v27; // rcx
  int v28; // r8d
  unsigned int v29; // r12d
  unsigned int v30; // r8d
  int v31; // edi
  int v32; // r13d
  unsigned int v33; // ebx
  int v34; // ebp
  __int64 v35; // rax

  v4 = a3 + 4;
  if ( a2 >= 0x14 )
  {
    v7 = a2 - 4;
    if ( a4 )
      *a4 = 4;
    *(_DWORD *)a3 = 0;
    v8 = (int *)*((_QWORD *)this + 10);
    if ( !*((_DWORD *)this + 32) )
    {
      v9 = v8[1];
      v10 = v8[2];
      while ( 1 )
      {
        v11 = *((_DWORD *)this + 22);
        if ( !v11 )
          return 0LL;
        v12 = *((unsigned int *)this + 24);
        v13 = (_DWORD *)*((_QWORD *)this + 10);
        if ( (_DWORD)v12 == *((_DWORD *)this + 26) )
        {
          v14 = *((_DWORD *)this + 27);
          if ( v14 >= 2 )
          {
            if ( v13[1] <= *((_DWORD *)this + 17) )
            {
LABEL_31:
              *((_DWORD *)this + 22) = 0;
              return 0LL;
            }
            v15 = (_DWORD *)((char *)v13 - (unsigned int)(4 * *(v13 - 1) + 16));
          }
          else
          {
            if ( v13[2] >= *((_DWORD *)this + 19) )
              goto LABEL_31;
            v15 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
          }
          *((_QWORD *)this + 10) = v15;
          *((_DWORD *)this + 22) = v11 - 1;
          v9 = v15[1];
          v10 = v15[2];
          if ( (v14 & 1) != 0 )
          {
            v27 = (unsigned int)(*v15 - 2);
            *((_DWORD *)this + 26) = -2;
            *((_DWORD *)this + 24) = v27;
            if ( (_DWORD)v27 != -2 )
            {
              v28 = *((_DWORD *)this + 18);
              do
              {
                if ( v15[v27 + 3] < v28 )
                  break;
                v27 = (unsigned int)(v27 - 2);
                *((_DWORD *)this + 24) = v27;
              }
              while ( (_DWORD)v27 != -2 );
            }
          }
          else
          {
            *((_DWORD *)this + 24) = 0;
            v16 = *v15;
            *((_DWORD *)this + 26) = *v15;
            if ( v16 )
            {
              v17 = *((_DWORD *)this + 16);
              v18 = v15;
              for ( i = 0; i != v16; *((_DWORD *)this + 24) = i )
              {
                if ( v18[i + 1 + 3] > v17 )
                  break;
                i += 2;
              }
            }
          }
        }
        else
        {
          v20 = v13[v12 + 3];
          v21 = v13[(unsigned int)(v12 + 1) + 3];
          v22 = *((_DWORD *)this + 16);
          if ( v22 <= v20 )
            v22 = v20;
          *v4 = v22;
          v23 = *((_DWORD *)this + 18);
          if ( v23 >= v21 )
            v23 = v21;
          v4[2] = v23;
          if ( v22 >= v23 )
          {
            *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
          }
          else
          {
            v24 = v9;
            if ( *((_DWORD *)this + 17) > v9 )
              v24 = *((_DWORD *)this + 17);
            v4[1] = v24;
            v25 = v10;
            if ( *((_DWORD *)this + 19) < v10 )
              v25 = *((_DWORD *)this + 19);
            v7 -= 16;
            v4[3] = v25;
            v4 += 4;
            *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
            if ( a4 )
              *a4 += 16;
            ++*(_DWORD *)a3;
            if ( v7 < 0x10 )
              return 1LL;
          }
        }
      }
    }
    v29 = *((_DWORD *)this + 27);
    v30 = *((_DWORD *)this + 24);
    v31 = *((_DWORD *)this + 26);
    v32 = *((_DWORD *)this + 25);
    v33 = v7 >> 4;
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = *((_DWORD *)this + 22);
        if ( !v34 )
          return 0LL;
        if ( v30 == v31 )
          break;
LABEL_52:
        --v33;
        v35 = v30 + 1;
        *v4 = v8[v30 + 3];
        v30 += v32;
        v4[2] = v8[v35 + 3];
        v4[1] = v8[1];
        v4[3] = v8[2];
        v4 += 4;
        ++*(_DWORD *)a3;
        if ( a4 )
          *a4 += 16;
        if ( !v33 )
        {
          *((_DWORD *)this + 24) = v30;
          *((_DWORD *)this + 26) = v31;
          *((_QWORD *)this + 10) = v8;
          return 1LL;
        }
      }
      if ( v29 >= 2 )
        v8 = (int *)((char *)v8 - (unsigned int)(4 * *(v8 - 1) + 16));
      else
        v8 = (int *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
      *((_DWORD *)this + 22) = v34 - 1;
      if ( *v8 )
      {
        if ( (v29 & 1) != 0 )
        {
          v30 = *v8 - 2;
          v31 = -2;
        }
        else
        {
          v30 = 0;
          v31 = *v8;
        }
        goto LABEL_52;
      }
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
