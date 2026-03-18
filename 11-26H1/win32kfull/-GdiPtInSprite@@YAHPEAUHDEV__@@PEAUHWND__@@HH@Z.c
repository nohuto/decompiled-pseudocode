/*
 * XREFs of ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1403133D8
 * Callers:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14009C768 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14031489C (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 */

__int64 __fastcall GdiPtInSprite(HDEV a1, HWND a2, int a3, int a4)
{
  unsigned int v7; // ebx
  HDEV v8; // rsi
  const struct _SPRITESTATE *v9; // rcx
  struct _METASPRITE *MetaSprite; // rbp
  unsigned int i; // edi
  __int64 v12; // r9
  struct SPRITE *Sprite; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  HDEV v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v15, (struct PDEVOBJ *)&v16);
  v8 = v16;
  v9 = (const struct _SPRITESTATE *)(v16 + 20);
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
