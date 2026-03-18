/*
 * XREFs of ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x14032A2C0
 * Callers:
 *     GrePtInSprite @ 0x14008CE90 (GrePtInSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1400DED28 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x14021AD7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14032BCD8 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 */

__int64 __fastcall GdiPtInSprite(Gre::Base *a1, HWND a2, int a3, int a4)
{
  unsigned int v7; // ebx
  Gre::Base *v8; // rsi
  const struct _SPRITESTATE *v9; // rcx
  struct _METASPRITE *MetaSprite; // rbp
  unsigned int i; // edi
  __int64 v12; // rax
  struct SPRITE *Sprite; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  Gre::Base *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v7 = 0;
  Gre::Base::Globals(a1);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v15, (struct PDEVOBJ *)&v16);
  v8 = v16;
  v9 = (Gre::Base *)((char *)v16 + 80);
  if ( *((_DWORD *)v16 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL, 0);
    if ( MetaSprite )
    {
      for ( i = 0; i < *((_DWORD *)v8 + 35); ++i )
      {
        v12 = *(_QWORD *)(*((_QWORD *)v8 + 18) + 8LL * i);
        if ( (unsigned int)bSpPtInSprite(
                             *((struct SPRITE **)MetaSprite + i + 3),
                             a3 - *(_DWORD *)(v12 + 2576),
                             a4 - *(_DWORD *)(v12 + 2580)) )
        {
          v7 = 1;
          break;
        }
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v9, a2, 0LL);
    if ( Sprite )
      v7 = bSpPtInSprite(Sprite, a3, a4);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v15);
  return v7;
}
