/*
 * XREFs of bSetDevDragRect @ 0x1401E08E0
 * Callers:
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x14021A81C (-ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14022F508 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AC860 (xxxCancelTrackingForThread.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1401E0B78 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1401E77E0 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1401EDDDC (bMoveDevDragRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bSetDevDragRect(Gre::Base *a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rdi
  unsigned int v7; // r13d
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ebx
  _QWORD *v14; // r14
  __int64 v15; // rdi
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *Sprite; // rax
  bool v20; // r14
  void **v21; // rbx
  void *v22; // rax
  Gre::Base *v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  _BYTE v28[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[48]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-20h]

  v27 = a3;
  v30 = 0LL;
  v4 = (HDEV)((char *)a1 + 80);
  v25 = a1;
  v7 = 1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v29, v8);
  v9 = *(_QWORD *)v8 + 1144LL;
  v26 = v9;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v28, (struct PDEVOBJ *)&v25);
  v20 = *((_QWORD *)v4 + 139) != 0LL;
  bCleanupSpriteStateRects((HDEV)a1, (struct _SPRITESTATE *)v4);
  LOBYTE(v8) = a4;
  v11 = 4LL;
  v12 = (unsigned __int8)v8 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 277) = v12;
    v14 = v4 + 284;
    v15 = 4LL;
    v16 = 1;
    do
    {
      memset_0(v31, 0, 0x88uLL);
      v32 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18656);
      Sprite = GreCreateSprite(a1, 0LL, 0LL, (struct tagMINIWINDOWINFO *)v31, 0x9900u, v12, 1, 0, 0, 0, 0, 0LL);
      *v14++ = Sprite;
      v7 = Sprite != 0LL ? v16 : 0;
      v16 = v7;
      --v15;
    }
    while ( v15 );
    v9 = v26;
    v4 = (HDEV)((char *)a1 + 80);
    if ( v7 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect((HDEV)a1);
    }
  }
  else if ( v20 )
  {
    v22 = (void *)UserReferenceDwmApiPort(v10);
    DwmAsyncSendWindowArrangingData(v22, 0LL);
  }
  if ( !*((_DWORD *)v4 + 276) )
  {
    v21 = (void **)(v4 + 284);
    do
    {
      if ( *v21 )
      {
        GreDeleteSprite(a1, 0LL, *v21, *((_DWORD *)v4 + 277));
        *v21 = 0LL;
      }
      ++v21;
      --v11;
    }
    while ( v11 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v28);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v9);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v29);
  return v7;
}
