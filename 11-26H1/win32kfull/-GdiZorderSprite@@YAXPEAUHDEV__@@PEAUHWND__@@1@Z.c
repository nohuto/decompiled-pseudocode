/*
 * XREFs of ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x140186004
 * Callers:
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14009C768 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x140186134 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?vSpZorderMetaSprite@@YAXPEAUHDEV__@@PEAU_METASPRITE@@1@Z @ 0x14031861C (-vSpZorderMetaSprite@@YAXPEAUHDEV__@@PEAU_METASPRITE@@1@Z.c)
 */

void __fastcall GdiZorderSprite(HDEV a1, HWND a2, HWND a3)
{
  HDEV v5; // rdi
  unsigned int v7; // ebx
  __int64 i; // r8
  __int64 j; // rdx
  struct _SPRITESTATE *v10; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v12; // r9
  HDEV v13; // r10
  const struct _SPRITESTATE *v14; // rcx
  bool v15; // r9
  struct _METASPRITE *MetaSprite; // rax
  struct _METASPRITE *v17; // r10
  HDEV v18; // [rsp+40h] [rbp+8h] BYREF
  char v19; // [rsp+58h] [rbp+20h] BYREF

  v18 = a1;
  v5 = a1 + 20;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v19, (struct PDEVOBJ *)&v18);
  v7 = 0;
  if ( *((_DWORD *)v5 + 15) )
  {
    do
    {
      pSpGetSprite((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v5 + 8) + 8LL * v7) + 80LL), a3, 0LL);
      Sprite = pSpGetSprite(v10, a2, 0LL);
      vSpZorderSprite(v13, Sprite, v12);
      ++v7;
    }
    while ( v7 < *((_DWORD *)v5 + 15) );
    pSpGetMetaSprite((const struct _SPRITESTATE *)v5, a3, 0LL, 0);
    MetaSprite = pSpGetMetaSprite(v14, a2, 0LL, v15);
    vSpZorderMetaSprite(a1, MetaSprite, v17);
  }
  else
  {
    i = 0LL;
    if ( a3 )
    {
      for ( i = *((_QWORD *)v5 + 1);
            i && (*(HWND *)(i + 72) != a3 || _bittest((const signed __int32 *)i, 0xAu));
            i = *(_QWORD *)(i + 24) )
      {
        ;
      }
    }
    j = 0LL;
    if ( a2 )
    {
      for ( j = *((_QWORD *)v5 + 1);
            j && (*(HWND *)(j + 72) != a2 || _bittest((const signed __int32 *)j, 0xAu));
            j = *(_QWORD *)(j + 24) )
      {
        ;
      }
    }
    vSpZorderSprite(*(HDEV *)v5, (struct SPRITE *)j, (struct SPRITE *)i);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v19);
}
