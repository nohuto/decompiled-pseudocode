/*
 * XREFs of EngFreeMem @ 0x14001D0A0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14006E15C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteClip @ 0x140129970 (EngDeleteClip.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401338F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x14015A9F0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14015BE70 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401D29F0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C124 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046B64 (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  _QWORD *v1; // rbx
  struct _ERESOURCE *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax

  if ( pv )
  {
    v1 = (char *)pv - 32;
    v2 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(pv) + 88) + 1720LL);
    GreAcquireSemaphoreInternal(v2);
    GrepAcquireLockValidate<32>();
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( v2 )
      GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(v3, v2);
    GreDeleteFastMutex(v1);
  }
}
