/*
 * XREFs of ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x140095580
 * Callers:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14005CC08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B208 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x140095760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400957C0 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpNotifyLSurfaceRedirSurfAssoc(_QWORD *a1, HLSURF a2, struct _SURFOBJ *a3, int a4)
{
  __int64 v4; // rbx
  HSURF hsurf; // rax
  unsigned int v10; // edi
  _QWORD v12[4]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v13[144]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD *v14; // [rsp+100h] [rbp+8h] BYREF

  v4 = a1[6];
  v14 = a1;
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  hsurf = a3->hsurf;
  v12[0] = a3;
  v10 = -1073741822;
  v12[1] = hsurf;
  v12[2] = a2;
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v14) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct PDEVOBJ *)&v14);
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))a1[428])(
            a1[223],
            65543 - (unsigned int)(a4 != 0),
            24LL,
            v12);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v13);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v4);
  return v10;
}
