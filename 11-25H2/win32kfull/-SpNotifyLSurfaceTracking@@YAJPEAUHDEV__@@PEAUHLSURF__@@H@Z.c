/*
 * XREFs of ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140322798
 * Callers:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x14017B5E4 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1401CD9F0 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x140095760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpNotifyLSurfaceTracking(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD, _QWORD),
        HLSURF a2,
        int a3)
{
  unsigned int v6; // edi
  HSEMAPHORE v7; // rbx
  struct _GRETHREAD *v8; // rax
  HLSURF v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]
  __int64 (__fastcall **v14)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp+8h] BYREF
  HSEMAPHORE v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a1;
  SEMOBJ<8>::SEMOBJ<8>(&v15, (__int64)&v14);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v14) )
  {
    v13 = 0;
    v11 = a2;
    v12 = a3;
    v6 = ((__int64 (__fastcall **)(_QWORD, __int64, __int64, HLSURF *))a1)[428](a1[223], 65544LL, 16LL, &v11);
  }
  else
  {
    v6 = -1073741822;
  }
  v7 = v15;
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v15);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      if ( (*((_BYTE *)v8 + 16))-- == 1 )
        *(_QWORD *)v8 &= ~0x100uLL;
      if ( !*(_QWORD *)v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
  return v6;
}
