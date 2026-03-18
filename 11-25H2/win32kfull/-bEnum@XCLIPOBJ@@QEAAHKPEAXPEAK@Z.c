/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C
 * Callers:
 *     EngTextOut @ 0x140012BD0 (EngTextOut.c)
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x140081DA8 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x14008B768 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x14008C6BC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D5C80 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400DB37C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DF7B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     EngTransparentBlt @ 0x1400F62F0 (EngTransparentBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400F8750 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1401B1B34 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x1401E1FA0 (CLIPOBJ_bEnum.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x140308588 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140314E34 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140315154 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // rsi
  unsigned int v8; // edi
  _DWORD **v9; // r14
  int *v10; // rdx
  int v11; // r12d
  int v12; // r13d
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // r8d
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // r8d
  __int64 v19; // r9
  int v20; // edx
  int v21; // ebp
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  __int64 v29; // rax
  _DWORD *v30; // rcx
  int v31; // edx
  unsigned int v32; // r12d
  unsigned int v33; // r8d
  int v34; // r9d
  int v35; // r13d
  unsigned int v36; // edi
  int v37; // ebp
  __int64 v38; // rax

  v4 = a3 + 4;
  if ( a2 >= 0x14 )
  {
    v8 = a2 - 4;
    if ( a4 )
      *a4 = 4;
    *(_DWORD *)a3 = 0;
    v9 = (_DWORD **)((char *)this + 80);
    v10 = (int *)*((_QWORD *)this + 10);
    if ( !*((_DWORD *)this + 32) )
    {
      v11 = v10[1];
      v12 = v10[2];
      while ( 1 )
      {
        v13 = *((_DWORD *)this + 22);
        if ( !v13 )
          return 0LL;
        v14 = *((unsigned int *)this + 24);
        if ( (_DWORD)v14 == *((_DWORD *)this + 26) )
        {
          v15 = *((_DWORD *)this + 27);
          v16 = *v9;
          if ( v15 >= 2 )
          {
            if ( v16[1] <= *((_DWORD *)this + 17) )
            {
LABEL_31:
              *((_DWORD *)this + 22) = 0;
              return 0LL;
            }
            v17 = (_DWORD *)((char *)v16 - (unsigned int)(4 * *(v16 - 1) + 16));
          }
          else
          {
            if ( v16[2] >= *((_DWORD *)this + 19) )
              goto LABEL_31;
            v17 = (_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
          }
          *v9 = v17;
          *((_DWORD *)this + 22) = v13 - 1;
          v11 = v17[1];
          v12 = v17[2];
          if ( (v15 & 1) != 0 )
          {
            v29 = (unsigned int)(*v17 - 2);
            *((_DWORD *)this + 26) = -2;
            *((_DWORD *)this + 24) = v29;
            if ( (_DWORD)v29 != -2 )
            {
              v30 = *v9;
              v31 = *((_DWORD *)this + 18);
              do
              {
                if ( v30[v29 + 3] < v31 )
                  break;
                v29 = (unsigned int)(v29 - 2);
                *((_DWORD *)this + 24) = v29;
              }
              while ( (_DWORD)v29 != -2 );
            }
          }
          else
          {
            *((_DWORD *)this + 24) = 0;
            v18 = *v17;
            *((_DWORD *)this + 26) = *v17;
            if ( v18 )
            {
              v19 = *((_QWORD *)this + 10);
              v20 = 0;
              v21 = *((_DWORD *)this + 16);
              do
              {
                if ( *(_DWORD *)(v19 + 4LL * (unsigned int)(v20 + 1) + 12) > v21 )
                  break;
                v20 += 2;
                *((_DWORD *)this + 24) = v20;
              }
              while ( v20 != v18 );
            }
          }
        }
        else
        {
          v22 = (*v9)[v14 + 3];
          v23 = (*v9)[(unsigned int)(v14 + 1) + 3];
          v24 = *((_DWORD *)this + 16);
          if ( v24 <= v22 )
            v24 = v22;
          *v4 = v24;
          v25 = *((_DWORD *)this + 18);
          if ( v25 >= v23 )
            v25 = v23;
          v4[2] = v25;
          if ( v24 >= v25 )
          {
            *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
          }
          else
          {
            v26 = v11;
            if ( *((_DWORD *)this + 17) > v11 )
              v26 = *((_DWORD *)this + 17);
            v4[1] = v26;
            v27 = v12;
            if ( *((_DWORD *)this + 19) < v12 )
              v27 = *((_DWORD *)this + 19);
            v8 -= 16;
            v4[3] = v27;
            v4 += 4;
            *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
            if ( a4 )
              *a4 += 16;
            ++*(_DWORD *)a3;
            if ( v8 < 0x10 )
              return 1LL;
          }
        }
      }
    }
    v32 = *((_DWORD *)this + 27);
    v33 = *((_DWORD *)this + 24);
    v34 = *((_DWORD *)this + 26);
    v35 = *((_DWORD *)this + 25);
    v36 = v8 >> 4;
    while ( 1 )
    {
      while ( 1 )
      {
        v37 = *((_DWORD *)this + 22);
        if ( !v37 )
          return 0LL;
        if ( v33 == v34 )
          break;
LABEL_52:
        --v36;
        v38 = v33 + 1;
        *v4 = v10[v33 + 3];
        v33 += v35;
        v4[2] = v10[v38 + 3];
        v4[1] = v10[1];
        v4[3] = v10[2];
        v4 += 4;
        ++*(_DWORD *)a3;
        if ( a4 )
          *a4 += 16;
        if ( !v36 )
        {
          *((_DWORD *)this + 24) = v33;
          *((_DWORD *)this + 26) = v34;
          *((_QWORD *)this + 10) = v10;
          return 1LL;
        }
      }
      if ( v32 >= 2 )
        v10 = (int *)((char *)v10 - (unsigned int)(4 * *(v10 - 1) + 16));
      else
        v10 = (int *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
      *((_DWORD *)this + 22) = v37 - 1;
      if ( *v10 )
      {
        if ( (v32 & 1) != 0 )
        {
          v33 = *v10 - 2;
          v34 = -2;
        }
        else
        {
          v33 = 0;
          v34 = *v10;
        }
        goto LABEL_52;
      }
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
