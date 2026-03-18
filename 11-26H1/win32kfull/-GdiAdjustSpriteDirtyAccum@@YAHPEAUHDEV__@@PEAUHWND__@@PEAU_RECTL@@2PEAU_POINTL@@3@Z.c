/*
 * XREFs of ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140312EA8
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x140040DCC (GreAdjustSpriteDirtyAccum.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x14009C768 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140255B38 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x14031602C (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 */

__int64 __fastcall GdiAdjustSpriteDirtyAccum(
        Gre::Base *a1,
        HWND a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  Gre::Base *v9; // rbx
  const struct _SPRITESTATE *v10; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v12; // r10d
  __int64 v13; // rdi
  struct _POINTL *v14; // r14
  struct SPRITE *v15; // rcx
  __int64 v16; // r8
  struct _RECTL *v17; // rdx
  struct SPRITE *Sprite; // rcx
  _BYTE v20[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h] BYREF
  struct _POINTL v22; // [rsp+60h] [rbp+8h] BYREF
  Gre::Base *v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = a1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v21, v8);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v23);
  v9 = v23;
  v10 = (Gre::Base *)((char *)v23 + 80);
  if ( *((_DWORD *)v23 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v10, a2, 0LL, 0);
    if ( MetaSprite )
    {
      v13 = 0LL;
      if ( v12 )
      {
        v14 = a6;
        do
        {
          v15 = (struct SPRITE *)*((_QWORD *)MetaSprite + v13 + 3);
          v16 = *(_QWORD *)(*((_QWORD *)v9 + 18) + 8 * v13);
          v22.x = v14->x - *(_DWORD *)(v16 + 2576);
          v22.y = v14->y - *(_DWORD *)(v16 + 2580);
          vSpAdjustSpriteDirtyAccum(v15, (struct _RECTL *)(unsigned int)v22.y, a3, a5, &v22);
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *((_DWORD *)v9 + 35) );
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v10, a2, 0LL);
    if ( Sprite )
      vSpAdjustSpriteDirtyAccum(Sprite, v17, a3, a5, a6);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  if ( v21 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v21);
  return 1LL;
}
