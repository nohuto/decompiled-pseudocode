/*
 * XREFs of ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400D6250
 * Callers:
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14009A2B8 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z @ 0x1400D570C (-newpathrec@PATH_CORE@@QEAA_NPEAPEAUPATHRECORD@@PEAKK@Z.c)
 *     pprFlattenRec @ 0x1400D5820 (pprFlattenRec.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct PATHALLOC *__fastcall newpathalloc(__int64 a1)
{
  __int64 v1; // rsi
  struct _ERESOURCE *v2; // rbx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  struct _GRETHREAD *v8; // rax
  struct _GRETHREAD *v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // r8d
  int v13; // eax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88) + 3808LL;
  v2 = *(struct _ERESOURCE **)v1;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v1);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFF800000000uLL) != 0 && (v5 & 0x800000000LL) == 0 )
    {
      v11 = 0LL;
      v12 = 37;
      do
      {
        v13 = v11;
        if ( !_bittest64(&v5, v11) )
          v13 = v12;
        ++v11;
        v12 = v13;
      }
      while ( v11 < 0x40 );
      if ( v13 > 35 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v4 |= 0x800000000uLL;
  }
  v6 = *(_QWORD *)(v1 + 8);
  if ( v6 )
  {
    v7 = *(_QWORD *)v6;
    --*(_DWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 8) = v7;
LABEL_6:
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = v6 + 24;
    *(_DWORD *)(v6 + 16) = 4032;
    if ( v2 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v2);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
        *(_QWORD *)v8 &= ~0x800000000uLL;
      GreReleaseSemaphoreSharedInternal(v2);
    }
    return (struct PATHALLOC *)v6;
  }
  v6 = PALLOCMEM(4032LL, 1952542791LL);
  if ( v6 )
  {
    ++*(_DWORD *)(v1 + 20);
    goto LABEL_6;
  }
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"PATHALLOC_FreeList", (int)v2);
    v10 = GreGetCurrentThreadCrossSessionCheck();
    if ( v10 )
      *(_QWORD *)v10 &= ~0x800000000uLL;
    GreReleaseSemaphoreSharedInternal(v2);
  }
  return 0LL;
}
