/*
 * XREFs of ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x14009EC1C
 * Callers:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpNotifyLSurfaceRedirSurfAssoc(_QWORD *a1, HLSURF a2, struct _SURFOBJ *a3, int a4)
{
  HSEMAPHORE v4; // rbx
  HSURF hsurf; // rax
  unsigned int v10; // edi
  struct _GRETHREAD *v11; // rax
  _QWORD v14[4]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v15[160]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v16; // [rsp+110h] [rbp+8h] BYREF

  v4 = (HSEMAPHORE)a1[6];
  v16 = a1;
  GreAcquireSemaphoreInternal(v4);
  GrepAcquireLockValidate<8>();
  hsurf = a3->hsurf;
  v14[0] = a3;
  v10 = -1073741822;
  v14[1] = hsurf;
  v14[2] = a2;
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v16) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct PDEVOBJ *)&v16);
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))a1[428])(
            a1[223],
            65543 - (unsigned int)(a4 != 0),
            24LL,
            v14);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v4);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
    {
      if ( (*((_BYTE *)v11 + 16))-- == 1 )
        *(_QWORD *)v11 &= ~0x100uLL;
      if ( !*(_QWORD *)v11 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v4);
  }
  return v10;
}
