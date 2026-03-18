/*
 * XREFs of EngFreeMem @ 0x140044080
 * Callers:
 *     EngDeleteClip @ 0x140121E60 (EngDeleteClip.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140152360 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x140170C6C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401962A0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401F2850 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401F29F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x140044478 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  char *v1; // rbx
  struct _ERESOURCE *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  char **v7; // rax
  struct _GRETHREAD *v8; // rax

  if ( pv )
  {
    v1 = (char *)pv - 32;
    v2 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(pv) + 88) + 1720LL);
    GreAcquireSemaphoreInternal(v2);
    GrepAcquireLockValidate<32>();
    v6 = *(_QWORD *)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v7 = (char **)*((_QWORD *)v1 + 1), *v7 != v1) )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( v2 )
    {
      EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", v2);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
        *(_QWORD *)v8 &= ~0x100000000uLL;
      GreReleaseSemaphoreSharedInternal(v2);
    }
    GreDeleteFastMutex(v1, v3, v4, v5);
  }
}
