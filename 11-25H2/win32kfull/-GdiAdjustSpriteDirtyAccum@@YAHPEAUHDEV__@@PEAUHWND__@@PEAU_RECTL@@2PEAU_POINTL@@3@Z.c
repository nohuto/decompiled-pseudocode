/*
 * XREFs of ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x140329D94
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1400579A0 (GreAdjustSpriteDirtyAccum.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1400DED28 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x14021AD7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x14032D464 (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
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
  __int64 v16; // rax
  LONG v17; // r8d
  struct _RECTL *v18; // rdx
  struct SPRITE *Sprite; // rax
  struct _RECTL *v20; // rdx
  _BYTE v22[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h] BYREF
  struct _POINTL v24; // [rsp+60h] [rbp+8h] BYREF
  Gre::Base *v25; // [rsp+78h] [rbp+20h] BYREF

  v25 = a1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v23, v8);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v25);
  v9 = v25;
  v10 = (Gre::Base *)((char *)v25 + 80);
  if ( *((_DWORD *)v25 + 35) )
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
          v17 = v14->x - *(_DWORD *)(v16 + 2576);
          v18 = (struct _RECTL *)*(unsigned int *)(v16 + 2580);
          LODWORD(v16) = v14->y - (_DWORD)v18;
          v24.x = v17;
          v24.y = v16;
          vSpAdjustSpriteDirtyAccum(v15, v18, a3, a5, &v24);
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
      vSpAdjustSpriteDirtyAccum(Sprite, v20, a3, a5, a6);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  if ( v23 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v23);
  return 1LL;
}
