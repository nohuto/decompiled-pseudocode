/*
 * XREFs of ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140071CD0
 * Callers:
 *     DxgkEngAcquireStableVisRgn @ 0x14007E270 (DxgkEngAcquireStableVisRgn.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphoreShared<3,>(_QWORD *a1)
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax

  EtwTraceGreLockAcquireSemaphoreShared(L"DCVisRgn", *a1 + 728LL);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*a1 + 728LL));
  result = GreGetCurrentThreadCrossSessionCheck();
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFF8uLL) != 0 && (*(_QWORD *)result & 8) == 0 )
    {
      v6 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 3 && v7 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v7);
    }
    LOBYTE(i) = *((_BYTE *)v4 + 11);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v4 + 11) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v4 |= 8uLL;
  }
  return result;
}
