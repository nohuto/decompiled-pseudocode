/*
 * XREFs of ?vUnlock@?$SEMOBJ@$06@@QEAAXXZ @ 0x1400C7108
 * Callers:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJ<7>::vUnlock(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *v5; // rax

  v3 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (int)*a1, a3);
    v5 = GreGetCurrentThreadCrossSessionCheck();
    if ( v5 )
    {
      if ( (*((_BYTE *)v5 + 15))-- == 1 )
        *(_QWORD *)v5 &= ~0x80uLL;
    }
    GreReleaseSemaphoreSharedInternal(v3);
    *a1 = 0LL;
  }
}
