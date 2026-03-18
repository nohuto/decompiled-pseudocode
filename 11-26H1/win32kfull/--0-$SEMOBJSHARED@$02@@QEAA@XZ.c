/*
 * XREFs of ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x140189A40 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

Gre::Base *__fastcall SEMOBJSHARED<3>::SEMOBJSHARED<3>(Gre::Base *a1)
{
  HSEMAPHORE v2; // rcx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  char v6; // cl
  int v8; // edx
  unsigned __int64 i; // rcx
  int v10; // eax

  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 728LL);
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreSharedInternal(v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFDFFFFFFFF8uLL) != 0 && (*(_QWORD *)v3 & 8) == 0 )
    {
      v8 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v10 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v10 = v8;
        v8 = v10;
      }
      if ( v10 > 3 && v10 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v10);
    }
    v6 = *((_BYTE *)v4 + 11);
    *((_BYTE *)v4 + 11) = v6 + 1;
    if ( !v6 )
      *(_QWORD *)v4 |= 8uLL;
  }
  return a1;
}
