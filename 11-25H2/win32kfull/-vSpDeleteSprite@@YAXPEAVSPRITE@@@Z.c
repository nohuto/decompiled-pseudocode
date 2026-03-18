/*
 * XREFs of ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400E16A0
 * Callers:
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1400DFD0C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     vSpDynamicModeChange @ 0x1400E0040 (vSpDynamicModeChange.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1400E064C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@@Z @ 0x1400E144C (-vSpDisableSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140174944 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14020F548 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x140329EEC (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032C3A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x14032C6DC (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032C81C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x14032CC30 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1400DC19C (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1400E1628 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400E188C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1400E18C8 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpDeleteSprite(struct SPRITE *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  struct _SURFOBJ **v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  struct _SPRITESTATE *v12[27]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD *v13; // [rsp+100h] [rbp+8h] BYREF
  __int64 v14; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = (__int64 *)*((_QWORD *)a1 + 2);
    v13 = (_QWORD *)*v1;
    if ( !*((_DWORD *)Gre::Base::Globals(a1) + 758) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v13);
      bSpUpdatePosition(a1, 0LL, 0, 0);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v12, v3);
    }
    if ( (struct SPRITE *)v1[1] == a1 )
    {
      v1[1] = *((_QWORD *)a1 + 3);
      v4 = *((_QWORD *)a1 + 3);
      if ( v4 )
        *(_QWORD *)(v4 + 32) = 0LL;
      if ( !v1[1] )
        v1[2] = 0LL;
    }
    else
    {
      v11 = *((_QWORD *)a1 + 4);
      if ( (struct SPRITE *)v1[2] == a1 )
        v1[2] = v11;
      else
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) = v11;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *((_QWORD *)a1 + 3);
    }
    v5 = *((_QWORD *)a1 + 5);
    v6 = *((_QWORD *)a1 + 6);
    if ( v5 )
      *(_QWORD *)(v5 + 48) = v6;
    if ( v6 )
      *(_QWORD *)(v6 + 40) = v5;
    else
      v1[3] = v5;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      vSpDeleteExMirror((_QWORD *)*v1);
    vSpFreeClipResources(a1);
    v14 = *((_QWORD *)a1 + 24);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    vSpDeleteShape(a1);
    vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
    v7 = *((_QWORD *)a1 + 15);
    if ( v7 )
    {
      bDeleteSurface(*(_QWORD *)(v7 + 8));
      *((_QWORD *)a1 + 15) = 0LL;
    }
    v8 = (void *)*((_QWORD *)a1 + 31);
    if ( v8 )
      Win32FreePool(v8);
    v9 = (struct _SURFOBJ **)(v1 + 20);
    v10 = 64LL;
    do
    {
      vSpDeleteSurface(*v9);
      *v9++ = 0LL;
      --v10;
    }
    while ( v10 );
    RtlClearAllBits((PRTL_BITMAP)v1 + 42);
    Win32FreePool(a1);
  }
}
