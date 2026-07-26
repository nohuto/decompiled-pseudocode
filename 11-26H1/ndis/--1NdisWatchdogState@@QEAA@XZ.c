/*
 * XREFs of ??1NdisWatchdogState@@QEAA@XZ @ 0x140156510
 * Callers:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 * Callees:
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1401565A0 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall NdisWatchdogState::~NdisWatchdogState(NdisWatchdogState *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  NdisWatchdogState::Disarm(this);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
  v2 = (_QWORD *)((char *)this + 272);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DeferredContext, 0LL);
  KeLeaveCriticalRegion();
}
