/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x14005CDF0
 * Callers:
 *     GreWindowLayoutComplete @ 0x140023DA8 (GreWindowLayoutComplete.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14005B174 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     CheckAndProcessSurfaceComplete @ 0x1402280B0 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x140322A3C (GreCancelSynchronizedWindowResize.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x14017B36C (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1401A02F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1401F3278 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmCheckForDeferredUpdateSpriteCommands @ 0x140216484 (DwmCheckForDeferredUpdateSpriteCommands.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v5; // eax
  _QWORD *v6; // r12
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rcx
  SFMLOGICALSURFACE *v10; // rdi
  int v11; // edx
  __int64 v12; // r14
  int v13; // ebp
  void *v14; // rax
  unsigned int v15; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+18h] BYREF
  int v17; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v6 = (_QWORD *)*((_QWORD *)a1 + 18);
    if ( v6 )
    {
      if ( a2 || !(unsigned int)DwmCheckForDeferredUpdateSpriteCommands(*v6) )
      {
        v10 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 18);
        v17 = 0;
        v16 = 0;
        v15 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v17, &v16, &v15, 0LL, 0LL);
        v11 = *((_DWORD *)v10 + 63);
        v12 = *((_QWORD *)a1 + 13);
        v13 = *((_DWORD *)a1 + 29);
        *((_QWORD *)a1 + 13) = 0LL;
        v14 = (void *)UserReferenceDwmApiPort(v11 & 1);
        DwmAsyncUpdateSprite(v14, (__int64)a1 + 72, 0LL, v17, v16, v15, v13 >= 1, v12);
      }
      v8 = (void *)UserReferenceDwmApiPort(v7);
      DwmAsyncProcessSurfaceComplete(v8);
    }
    v9 = (void *)*((_QWORD *)a1 + 12);
    *((_DWORD *)a1 + 29) = 0;
    if ( v9 )
    {
      ObfDereferenceObject(v9);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = 1;
  }
  if ( a3 )
    *a3 = v5;
}
