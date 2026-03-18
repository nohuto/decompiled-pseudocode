/*
 * XREFs of ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8
 * Callers:
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14009BA38 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@@Z @ 0x14009BC18 (-vSpDisableSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x14009CE1C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14018532C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     vSpDynamicModeChange @ 0x140185A00 (vSpDynamicModeChange.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140186F80 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x140313000 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x140314F7C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1403152D0 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x140315410 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x140315814 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x14008018C (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x14009C038 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x14009C0C0 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 */

void __fastcall vSpDeleteSprite(struct SPRITE *a1)
{
  __int64 v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  struct _SURFOBJ **v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  _BYTE v12[216]; // [rsp+20h] [rbp-D8h] BYREF
  HDEV v13; // [rsp+100h] [rbp+8h] BYREF
  __int64 v14; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = *((_QWORD *)a1 + 2);
    v13 = *(HDEV *)v1;
    v3 = Gre::Base::Globals(a1);
    if ( !*((_DWORD *)v3 + 778) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v13);
      bSpUpdatePosition(a1, 0LL, 0, 0);
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v12);
    }
    if ( *(struct SPRITE **)(v1 + 8) == a1 )
    {
      *(_QWORD *)(v1 + 8) = *((_QWORD *)a1 + 3);
      v4 = *((_QWORD *)a1 + 3);
      if ( v4 )
        *(_QWORD *)(v4 + 32) = 0LL;
      if ( !*(_QWORD *)(v1 + 8) )
        *(_QWORD *)(v1 + 16) = 0LL;
    }
    else
    {
      v11 = *((_QWORD *)a1 + 4);
      if ( *(struct SPRITE **)(v1 + 16) == a1 )
        *(_QWORD *)(v1 + 16) = v11;
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
      *(_QWORD *)(v1 + 24) = v5;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      vSpDeleteExMirror(*(HDEV *)v1);
    vSpFreeClipResources(a1);
    v14 = *((_QWORD *)a1 + 24);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
    vSpDeleteShape(a1);
    vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
    v7 = *((_QWORD *)a1 + 15);
    if ( v7 )
    {
      bDeleteSurface(v3, *(HSURF *)(v7 + 8));
      *((_QWORD *)a1 + 15) = 0LL;
    }
    v8 = *((_QWORD *)a1 + 31);
    if ( v8 )
      GreDeleteKMutex(v8);
    v9 = (struct _SURFOBJ **)(v1 + 160);
    v10 = 64LL;
    do
    {
      vSpDeleteSurface(*v9);
      *v9++ = 0LL;
      --v10;
    }
    while ( v10 );
    RtlClearAllBits((PRTL_BITMAP)(v1 + 672));
    Win32FreePool(a1);
  }
}
