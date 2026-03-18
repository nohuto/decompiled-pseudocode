/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1400DE2E0
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1400DF610 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     vSpDynamicModeChange @ 0x1400E0040 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x1400DD220 (-vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032F13C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpRemoveAllSpriteOverlapPresents(HDEV a1)
{
  _QWORD *v1; // rbx
  int v2; // r14d
  _QWORD *v4; // rbp
  struct _POINTL v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)a1 + 20);
  v2 = 0;
  v5 = 0LL;
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)v1[1];
      if ( !v2 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)(a1 + 20), &v5, (struct _RECTL *)(a1 + 30), 0LL, 1);
        v2 = 1;
      }
      Win32FreePool(v1);
      v1 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)a1 + 20) = 0LL;
  vSpUpdateSpriteOverlapPresent(a1, 0);
}
