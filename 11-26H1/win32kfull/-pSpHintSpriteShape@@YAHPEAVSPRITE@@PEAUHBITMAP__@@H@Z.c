/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0
 * Callers:
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14009BA38 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1400A5240 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x140313250 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x140314F7C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1403152D0 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x140315410 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x140315814 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x14009C038 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x140213358 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rsi
  __int64 v8; // rax
  SURFOBJ *v9; // rax
  Gre::Base *hsurf_high; // rcx
  SURFOBJ *v11; // rdx
  int v13; // eax
  HDEV hdev; // rsi
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 *v16; // rax
  int v17; // eax
  struct _SPRITESTATE *v18[24]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+100h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v7 - 24)) )
  {
LABEL_3:
    v8 = *((_QWORD *)a1 + 16);
    if ( hsurf )
    {
      if ( v8 && (*(_DWORD *)a1 & 0x40) == 0 )
        vSpDeleteShape(a1);
      if ( !*((_QWORD *)a1 + 16) && (*(_DWORD *)a1 & 0x40) == 0 )
      {
        v9 = EngLockSurface(hsurf);
        v11 = v9;
        if ( v9 )
        {
          if ( v9->iType == 3 )
          {
            hsurf_high = (Gre::Base *)HIDWORD(v9[1].hsurf);
            if ( ((unsigned __int8)hsurf_high & 1) != 0 )
            {
              EngUnlockSurface(v9);
              v11 = 0LL;
            }
          }
          if ( v11 )
          {
            v13 = *(_DWORD *)a1 | 0x40;
            *((_QWORD *)a1 + 16) = v11;
            *(_DWORD *)a1 = v13;
            if ( a3 )
              *(_DWORD *)a1 = v13 | 0x80;
            *((_QWORD *)a1 + 30) = hsurf;
            *((_QWORD *)a1 + 12) = 0LL;
            *((_DWORD *)a1 + 26) = v11->sizlBitmap.cx;
            *((_DWORD *)a1 + 27) = v11->sizlBitmap.cy;
            *((_QWORD *)a1 + 17) = 0LL;
            hdev = v11[1].hdev;
            if ( hdev )
            {
              v15 = Gre::Base::Globals(hsurf_high);
              INC_SHARE_REF_CNT(v15, hdev);
            }
            v16 = (__int64 *)*((_QWORD *)a1 + 2);
            *((_QWORD *)a1 + 18) = hdev;
            v19 = *v16;
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v19);
            bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v18);
          }
        }
      }
    }
    else if ( v8 )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v7 + 248));
  if ( !*(_DWORD *)(v7 + 300) )
  {
    if ( _bittest((const signed __int32 *)a1, 9u) )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v7 + 248));
    goto LABEL_3;
  }
  *(_QWORD *)(v7 + 304) = UserGetHDEV();
  *(_QWORD *)(v7 + 312) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v7 + 320) = hsurf;
  memset_0((void *)(v7 + 328), 0, 0x88uLL);
  v17 = *(_DWORD *)(v7 + 88);
  *(_QWORD *)(v7 + 464) = 0LL;
  if ( (v17 & 0x2000000) == 0 )
    *(_DWORD *)(v7 + 88) = v17 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v7 + 248));
  return 1LL;
}
