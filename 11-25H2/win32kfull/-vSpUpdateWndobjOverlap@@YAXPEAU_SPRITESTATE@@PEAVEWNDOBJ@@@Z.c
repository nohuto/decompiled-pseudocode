/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032F540
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1402192B0 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032D6E8 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032DF68 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140302010 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14030229C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x14032D824 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 i; // rdi
  __int64 v7; // rdx
  unsigned __int8 v8; // cf
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 j; // rdx
  __int64 k; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 m; // rcx
  __int64 v18; // rcx
  int v19; // esi
  struct RGNOBJ *v20; // r8
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v26; // [rsp+80h] [rbp+38h] BYREF
  struct _POINTL v27; // [rsp+88h] [rbp+40h] BYREF
  __int64 v28; // [rsp+90h] [rbp+48h] BYREF
  __int64 v29; // [rsp+98h] [rbp+50h] BYREF

  if ( !_bittest((const signed __int32 *)a2 + 46, 9u)
    || (v4 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL), (v5 = *(_QWORD *)(v4 + 48)) == 0)
    || v4 != *(_QWORD *)(v5 + 2544)
    || v5 == *(_QWORD *)a1 )
  {
    v23 = *((_QWORD *)a1 + 89);
    v25[0] = *((_QWORD *)a2 + 24);
    RGNOBJ::vSet((RGNOBJ *)&v23);
    for ( i = *((_QWORD *)a1 + 1); i; i = *(_QWORD *)(i + 24) )
    {
      if ( ((unsigned int)bIntersect((char *)a2 + 4, i + 80) || _bittest((const signed __int32 *)a2 + 46, 9u))
        && (RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) == 2
         || _bittest((const signed __int32 *)a2 + 46, 9u)
         && v25[0]
         && RGNOBJ::bInside((RGNOBJ *)v25, (struct _RECTL *)(i + 80)) == 2) )
      {
        v8 = _bittest((const signed __int32 *)a2 + 46, 9u);
        v9 = *(_QWORD *)(i + 184);
        v28 = v9;
        if ( v8 )
        {
          if ( (*(_DWORD *)i & 1) == 0 && *(_QWORD *)(i + 72) )
          {
            for ( j = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v9, v7) + 96) + 4824LL); j; j = *(_QWORD *)(j + 8) )
            {
              for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 160) )
              {
                if ( _bittest((const signed __int32 *)(k + 184), 9u) && *(_QWORD *)(k + 176) == *(_QWORD *)(i + 72) )
                  goto LABEL_54;
              }
            }
            v15 = *(_QWORD *)(i + 16);
            if ( *(_QWORD *)(i + 72) )
            {
              v16 = *(_QWORD *)(v15 + 8);
              for ( m = *(_QWORD *)(v15 + 1128); v16 != m; v16 = *(_QWORD *)(v16 + 24) )
              {
                if ( *(_QWORD *)(v16 + 72) == *((_QWORD *)a2 + 22) )
                  break;
              }
              v18 = 0LL;
              if ( v16 != *(_QWORD *)(v15 + 1128) )
                v18 = v16;
              if ( !v18 || *(_DWORD *)(i + 64) > *(_DWORD *)(v18 + 64) )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
                if ( v29 && v24 && v26 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v24, (const struct _RECTL *const)(i + 80));
                  v19 = 1;
                  if ( v28 )
                  {
                    if ( RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)&v28, (struct RGNOBJ *)v25, 8u)
                      && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v29) == 1
                      || !RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)&v28)
                      || (v27.x = -*(_DWORD *)(i + 80),
                          v27.y = -*(_DWORD *)(i + 84),
                          RGNOBJ::bOffset((RGNOBJ *)&v26, &v27),
                          vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)&v26),
                          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v26) == 1) )
                    {
                      v19 = 0;
                    }
                    else
                    {
                      v27.x = -v27.x;
                      v27.y = -v27.y;
                      RGNOBJ::bOffset((RGNOBJ *)&v26, &v27);
                    }
                  }
                  if ( !v28 || v19 == 1 )
                  {
                    v20 = (struct RGNOBJ *)&v24;
                    if ( v28 )
                      v20 = (struct RGNOBJ *)&v26;
                    if ( RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)&v23, v20, 0xEu) )
                    {
                      RGNOBJ::vSwap((RGNOBJ *)&v29, (struct RGNOBJ *)&v23);
                      *((_QWORD *)a1 + 89) = v23;
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
              }
            }
          }
        }
        else if ( !v9 || RGNOBJ::bInside((RGNOBJ *)&v28, (struct _RECTL *)((char *)a2 + 4)) == 2 )
        {
          v10 = *((_DWORD *)a2 + 46);
          if ( (v10 & 0x2000000) == 0 )
          {
            v11 = v10 | 0x2000000;
            *((_DWORD *)a2 + 46) = v11;
            if ( (v11 & 0x80u) != 0 )
            {
              v12 = 128;
LABEL_58:
              TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a2 + 21), a2, v12);
              goto LABEL_59;
            }
          }
          goto LABEL_59;
        }
      }
LABEL_54:
      ;
    }
    v21 = *((_DWORD *)a2 + 46);
    if ( (v21 & 0x2000000) != 0 )
    {
      v22 = v21 & 0xFDFFFFFF;
      *((_DWORD *)a2 + 46) = v22;
      if ( (v22 & 0x80u) != 0 )
      {
        v12 = 256;
        goto LABEL_58;
      }
    }
LABEL_59:
    if ( _bittest((const signed __int32 *)a2 + 46, 9u) )
    {
      vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v23);
      *((_QWORD *)a1 + 89) = v23;
    }
  }
}
