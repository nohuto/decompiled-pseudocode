/*
 * XREFs of ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z @ 0x180073DB0
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800133E8 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800958D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_F __fastcall CDesktopManager::ClampToMaxTextureSizeImpl(
        CDesktopManager *this,
        float *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  struct D2D_SIZE_F result; // rax

  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 32LL)
                                         + 480LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  if ( a3 > v7 || a4 > v7 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v8 = v7;
  if ( a3 < v7 )
    v8 = a3;
  if ( a4 < v7 )
    v7 = a4;
  *a2 = (float)v8;
  result = (struct D2D_SIZE_F)a2;
  a2[1] = (float)(int)v7;
  return result;
}
