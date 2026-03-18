/*
 * XREFs of bSetDevPreviewRect @ 0x1401E068C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1401C3CF0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1401E0B78 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     bMoveDevPreviewRect @ 0x1401E7590 (bMoveDevPreviewRect.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1401E77E0 (DwmAsyncSendWindowArrangingData.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // r12
  HDEV v10; // rbx
  bool v11; // r15
  __int64 v12; // rcx
  int v13; // ebp
  void *Sprite; // rax
  void *v15; // rax
  void *v16; // r8
  HDEV v21; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v24[144]; // [rsp+90h] [rbp-D8h] BYREF

  v7 = 1;
  v21 = a1;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v23, v8);
  v9 = *(_QWORD *)v8 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v21);
  v10 = a1 + 299;
  v11 = *((_DWORD *)a1 + 298) && *(_DWORD *)v10;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 20));
  v13 = a3 & 1;
  if ( a2 )
  {
    *(_DWORD *)v10 = v13;
    memset_0(v24, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v24, 0LL);
    Sprite = GreCreateSprite(
               (Gre::Base *)a1,
               0LL,
               0LL,
               (struct tagMINIWINDOWINFO *)v24,
               0x9900u,
               v13,
               1,
               0,
               0,
               0,
               0,
               0LL);
    *((_QWORD *)a1 + 156) = Sprite;
    if ( Sprite )
    {
      *((_DWORD *)a1 + 298) = 1;
      *(_DWORD *)v10 = v13;
      if ( (a3 & 4) == 0 )
        bMoveDevPreviewRect(a1, a2, 1LL, a4, a5);
    }
    else
    {
      v7 = 0;
    }
  }
  else if ( v11 )
  {
    v15 = (void *)UserReferenceDwmApiPort(v12);
    DwmAsyncSendWindowArrangingData(v15, a5);
  }
  if ( !*((_DWORD *)a1 + 298) )
  {
    v16 = (void *)*((_QWORD *)a1 + 156);
    if ( v16 )
    {
      GreDeleteSprite((Gre::Base *)a1, 0LL, v16, *((_DWORD *)a1 + 299));
      *((_QWORD *)a1 + 156) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v9);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v23);
  return v7;
}
