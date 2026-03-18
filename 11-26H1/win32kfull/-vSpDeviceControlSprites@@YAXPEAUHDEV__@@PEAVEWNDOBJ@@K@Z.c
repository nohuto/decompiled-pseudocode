/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x140316884
 * Callers:
 *     EngControlSprites @ 0x140318840 (EngControlSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140290818 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140312B4C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x140312C04 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, int a3)
{
  HDEV v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  struct SPRITE *v10; // rdx
  int v11; // ebx
  struct SPRITE *v12; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v13; // [rsp+48h] [rbp-B8h] BYREF
  HDEV v14; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v15; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[96]; // [rsp+80h] [rbp-80h] BYREF
  struct _SPRITESTATE *v18[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v19; // [rsp+1A0h] [rbp+A0h] BYREF

  v14 = a1;
  v12 = 0LL;
  v13 = 0LL;
  v19 = 0LL;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v14);
  v5 = v14 + 20;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v16, a2, (struct _SPRITESTATE *)(v14 + 20));
  v6 = *((_DWORD *)a2 + 46);
  v15 = 0LL;
  if ( a3 == 1 )
  {
    v7 = v6 | 0x1000000;
    *((_DWORD *)a2 + 46) = v7;
    if ( (v7 & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v19) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v17, (struct _SPRITESTATE *)v5, &v19, 0, 0LL);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v17, &v12, &v13);
        if ( v12 )
          INVOKEOFFCOPYBITS(
            &v15,
            *((struct _SURFOBJ **)v5 + 4),
            (struct _POINTL *)v12 + 21,
            *((struct _SURFOBJ **)v12 + 20),
            (struct _CLIPOBJ *)a2,
            0LL,
            &v13,
            (struct _POINTL *)&v13);
      }
      while ( v8 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v17);
    }
    vSpComputeUnlockedRegion((HDEV *)v5);
  }
  else
  {
    *((_DWORD *)a2 + 46) = v6 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion((HDEV *)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v19) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v17, (struct _SPRITESTATE *)v5, &v19, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v17, &v12, &v13);
        v10 = v12;
        v11 = v9;
        if ( v12 )
        {
          while ( 1 )
          {
            INVOKEOFFCOPYBITS(
              (struct _POINTL *)v10 + 21,
              *((struct _SURFOBJ **)v10 + 20),
              &v15,
              *((struct _SURFOBJ **)v5 + 4),
              (struct _CLIPOBJ *)a2,
              0LL,
              &v13,
              (struct _POINTL *)&v13);
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v17, &v12) )
              break;
            v10 = v12;
          }
        }
      }
      while ( v11 );
      vSpRedrawArea((struct _SPRITESTATE *)v5, &v19, 1);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v17);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v16);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v18);
}
