/*
 * XREFs of ?AcquireLockShared@GreInnermostPushLock@@QEBAXXZ @ 0x140014F80
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepAcquireLockValidate@$0CF@@@YAXXZ @ 0x140015030 (--$GrepAcquireLockValidate@$0CF@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall GreInnermostPushLock::AcquireLockShared(GreInnermostPushLock *this)
{
  struct _GRETHREAD *v2; // rax
  unsigned __int64 v3; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  GrepAcquireLockValidate<37>();
  v2 = GreGetCurrentThreadCrossSessionCheck();
  v3 = 0LL;
  v4 = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)v2;
    if ( (*(_QWORD *)v2 & 0xFFFFFFC000000000uLL) != 0 && (v5 & 0x4000000000LL) == 0 )
    {
      v6 = 38;
      do
      {
        v7 = v3;
        if ( ((1LL << v3) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v7 = v6;
        ++v3;
        v6 = v7;
      }
      while ( v3 < 0x40 );
      if ( v7 > 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v5, (unsigned int)v7);
    }
    *(_QWORD *)v4 |= 0x4000000000uLL;
  }
}
