/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreWindowLayoutComplete @ 0x1401F77A0 (GreWindowLayoutComplete.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 *     CheckAndProcessSurfaceComplete @ 0x14023ABE0 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x140344C40 (GreCancelSynchronizedWindowResize.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x14009C7A0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1401D4F90 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x140222F3C (DwmAsyncProcessSurfaceComplete.c)
 *     DwmCheckForDeferredUpdateSpriteCommands @ 0x140251244 (DwmCheckForDeferredUpdateSpriteCommands.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v5; // eax
  _QWORD *v6; // r12
  void *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rax
  SFMLOGICALSURFACE *v10; // rbx
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rbp
  int v14; // esi
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // r14d
  void *v21; // rax
  unsigned int v22; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+18h] BYREF
  int v24; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v6 = (_QWORD *)*((_QWORD *)a1 + 18);
    if ( v6 )
    {
      if ( a2 || !(unsigned int)DwmCheckForDeferredUpdateSpriteCommands(*v6) )
      {
        v10 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 18);
        v24 = 0;
        v23 = 0;
        v22 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v24, &v23, &v22, 0LL, 0LL);
        v11 = *((_DWORD *)v10 + 63);
        v12 = *((_DWORD *)a1 + 34);
        v13 = *((_QWORD *)a1 + 13);
        v14 = *((_DWORD *)a1 + 29);
        v15 = 4 * (v12 & 0xE | 0x20);
        v16 = v12 & 0x40;
        *((_QWORD *)a1 + 13) = 0LL;
        v17 = *(_QWORD *)v10;
        v18 = *(_QWORD *)a1;
        v19 = v12 & 1;
        v20 = v11 & 0xC | v19 | (2 * (v11 & 1 | v16 | v15));
        v21 = (void *)UserReferenceDwmApiPort(v19);
        DwmAsyncUpdateSprite(v21, v18, v17, v20, (__int64)a1 + 72, 0LL, v24, v23, v22, v14 >= 1, v13);
      }
      v9 = (void *)UserReferenceDwmApiPort(v8);
      DwmAsyncProcessSurfaceComplete(v9);
    }
    v7 = (void *)*((_QWORD *)a1 + 12);
    *((_DWORD *)a1 + 29) = 0;
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = 1;
  }
  if ( a3 )
    *a3 = v5;
}
