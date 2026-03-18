/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@@Z @ 0x14009BC18
 * Callers:
 *     vSpDisableSpritesWrap @ 0x14009BC00 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x14009C0C0 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSpDisableSprites(_QWORD *a1)
{
  HDEV v1; // rdi
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF
  __int64 v7; // [rsp+48h] [rbp+28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF

  v1 = (HDEV)(a1 + 10);
  v2 = a1[151];
  *((_QWORD *)v1 + 140) = 0LL;
  *((_QWORD *)v1 + 141) = 0LL;
  *((_DWORD *)v1 + 273) = 0;
  if ( v2 )
  {
    do
    {
      v5 = *(_QWORD *)(v2 + 24);
      vSpDeleteSprite((struct SPRITE *)v2);
      v2 = v5;
    }
    while ( v5 );
  }
  vSpDeleteExMirror(*(HDEV *)v1);
  vSpDeleteSurface(*((struct _SURFOBJ **)v1 + 129));
  v6 = *((_QWORD *)v1 + 88);
  v7 = *((_QWORD *)v1 + 89);
  v8 = *((_QWORD *)v1 + 109);
  *((_QWORD *)v1 + 129) = 0LL;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  GreDeleteObject(*((_QWORD *)v1 + 133));
  v3 = (void *)*((_QWORD *)v1 + 18);
  if ( v3 )
    Win32FreePool(v3);
  v4 = (void *)*((_QWORD *)v1 + 8);
  if ( v4 )
    EngFreeMem(v4);
  if ( *((_QWORD *)v1 + 130) )
  {
    v9 = *((_QWORD *)v1 + 130);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
  }
  if ( *((_QWORD *)v1 + 131) )
  {
    v9 = *((_QWORD *)v1 + 131);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
  }
  if ( *((_QWORD *)v1 + 132) )
  {
    v9 = *((_QWORD *)v1 + 132);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
  }
  if ( *((_QWORD *)v1 + 15) )
    GreDeleteSemaphore();
  if ( *((_QWORD *)v1 + 17) )
    GreDeleteSemaphore();
  memset_0(v1, 0, 0x548uLL);
}
