/*
 * XREFs of ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1401E0B78
 * Callers:
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 * Callees:
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 */

__int64 __fastcall bCleanupSpriteStateRects(Gre::Base *a1, struct _SPRITESTATE *a2)
{
  void *v5; // r8
  void **v6; // rdi
  __int64 v7; // rsi

  if ( *((_DWORD *)a2 + 276) )
  {
    v6 = (void **)((char *)a2 + 1136);
    v7 = 4LL;
    do
    {
      if ( *v6 )
      {
        GreDeleteSprite(a1, 0LL, *v6, *((_DWORD *)a2 + 277));
        *v6 = 0LL;
      }
      ++v6;
      --v7;
    }
    while ( v7 );
    *((_DWORD *)a2 + 276) = 0;
  }
  if ( *((_DWORD *)a2 + 278) )
  {
    v5 = (void *)*((_QWORD *)a2 + 146);
    if ( v5 )
    {
      GreDeleteSprite(a1, 0LL, v5, *((_DWORD *)a2 + 279));
      *((_QWORD *)a2 + 146) = 0LL;
    }
    *((_DWORD *)a2 + 278) = 0;
    *((_DWORD *)a2 + 279) = 0;
    *(_OWORD *)((char *)a2 + 1180) = 0LL;
  }
  return 1LL;
}
