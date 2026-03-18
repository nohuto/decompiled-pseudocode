/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032F13C
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140007408 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1400DE2E0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140008B28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140008C94 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140008D0C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140008FB0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x14026B484 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // rdi
  __int64 v8; // rdx
  struct REGION *v9; // r13
  const struct _RECTL *v10; // rsi
  int v11; // eax
  struct SPRITE *v12; // r14
  int v13; // ebx
  struct RGNOBJ *p_top; // rdx
  struct _SURFOBJ **v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdi
  struct _SURFOBJ **v24; // rsi
  int v25; // ecx
  struct _SURFOBJ *v26; // rax
  PVOID *p_pvScan0; // rbx
  int hsurf; // ecx
  struct REGION *v29; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[96]; // [rsp+80h] [rbp-80h] BYREF
  struct _SPRITESTATE *v38[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v39; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v40; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _CLIPOBJ v41; // [rsp+1C0h] [rbp+C0h] BYREF

  v30 = 0LL;
  v36 = a4;
  v33 = a2;
  v6 = a4;
  v39 = 0LL;
  v40 = 0LL;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v41);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
  v34 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v38, (struct PDEVOBJ *)&v34);
  v9 = 0LL;
  if ( v29 )
  {
    if ( v31 )
    {
      v10 = (const struct _RECTL *)((char *)a1 + 40);
      if ( bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v40) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v37, a1, &v40, 0, 0LL);
        do
        {
          v11 = ENUMAREAS::bEnum((ENUMAREAS *)v37, &v30, &v39);
          v12 = v30;
          v13 = v11;
          v32 = v11;
          if ( v30 )
          {
            if ( !v9 )
            {
              if ( !v6 || (p_top = (struct RGNOBJ *)&v6[2].rclBounds.top, !v6->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v31, v10);
                p_top = (struct RGNOBJ *)&v31;
              }
              v35 = *((_QWORD *)a1 + 130);
              if ( !RGNOBJ::bMerge((RGNOBJ *)&v29, p_top, (struct RGNOBJ *)&v35, 4u) )
                RGNOBJ::vSet((RGNOBJ *)&v29);
              v9 = v29;
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v41, v9, (const struct ERECTL *)&v39, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v41.rclBounds) )
            {
              v15 = (struct _SURFOBJ **)((char *)a1 + 32);
              while ( a5 )
              {
                v16 = *((_QWORD *)a1 + 4);
                v17 = 0LL;
                if ( v16 )
                {
                  v18 = *(_DWORD *)(v16 + 88);
                  if ( (v18 & 0x80004000) != 0 && (v18 & 0x200) == 0 )
                  {
                    v17 = v16 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v16 - 24 + 48));
                  }
                }
                v19 = *((_QWORD *)v12 + 20);
                v20 = 0LL;
                if ( v19 )
                {
                  v21 = *(_DWORD *)(v19 + 88);
                  if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
                  {
                    v20 = v19 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v19 - 24 + 48));
                  }
                }
                INVOKEOFFCOPYBITS(
                  (struct _POINTL *)v12 + 21,
                  *((struct _SURFOBJ **)v12 + 20),
                  v33,
                  *((struct _SURFOBJ **)a1 + 4),
                  &v41,
                  0LL,
                  &v39,
                  (struct _POINTL *)&v39);
                if ( v20 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
                if ( v17 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
                v15 = (struct _SURFOBJ **)((char *)a1 + 32);
                if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v37, &v30) )
                  goto LABEL_43;
                v12 = v30;
              }
              v22 = *((_QWORD *)v12 + 20);
              v23 = 0LL;
              v24 = (struct _SURFOBJ **)((char *)a1 + 32);
              if ( v22 )
              {
                v25 = *(_DWORD *)(v22 + 88);
                if ( (v25 & 0x80004000) != 0 )
                {
                  v24 = v15;
                  if ( (v25 & 0x200) == 0 )
                  {
                    v23 = v22 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v22 - 24 + 48));
                    v24 = (struct _SURFOBJ **)((char *)a1 + 32);
                  }
                }
              }
              v26 = *v24;
              p_pvScan0 = 0LL;
              if ( *v24 )
              {
                hsurf = (int)v26[1].hsurf;
                if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
                {
                  p_pvScan0 = &v26[-1].pvScan0;
                  GreLockDisplayDevice(v26->hdev);
                }
              }
              INVOKEOFFCOPYBITS(
                v33,
                *v24,
                (struct _POINTL *)v12 + 21,
                *((struct _SURFOBJ **)v12 + 20),
                &v41,
                0LL,
                &v39,
                (struct _POINTL *)&v39);
              if ( p_pvScan0 )
                GreUnlockDisplayDevice(p_pvScan0[6]);
              if ( v23 )
                GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
              v10 = (const struct _RECTL *)((char *)a1 + 40);
LABEL_43:
              v6 = v36;
              v13 = v32;
            }
          }
        }
        while ( v13 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v37);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v38, v8);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
}
