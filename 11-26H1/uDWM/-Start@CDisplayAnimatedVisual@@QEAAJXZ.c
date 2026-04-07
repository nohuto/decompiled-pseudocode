/*
 * XREFs of ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18008CC00
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002A1A4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?ConfigureBackground@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18004B0EC (-ConfigureBackground@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180070FF0 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x180074004 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?InitializeConfigData@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18008CEA8 (-InitializeConfigData@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::Start(CDisplayAnimatedVisual *this)
{
  CDisplayAnimatedVisual *v2; // rcx
  int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // rax

  CDisplayAnimatedVisual::InitializeConfigData(this);
  CDisplayAnimatedVisual::InitializeTelemetry(v2);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
  v3 = CDisplayAnimatedVisual::ConfigureBackground(this);
  if ( v3 < 0 )
  {
    v4 = 118;
  }
  else
  {
    v3 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
    if ( v3 < 0 )
    {
      v4 = 123;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *))(*(_QWORD *)this + 184LL))(this);
      if ( v3 >= 0 )
        goto LABEL_8;
      v4 = 125;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v4, 0LL);
  CDisplayAnimatedVisual::Stop(this, 0LL);
LABEL_8:
  *((_QWORD *)this + 30) = 0LL;
  v5 = *((_QWORD *)this + 31);
  if ( v5 != *((_QWORD *)this + 32) )
    *((_QWORD *)this + 32) = v5;
  return (unsigned int)v3;
}
