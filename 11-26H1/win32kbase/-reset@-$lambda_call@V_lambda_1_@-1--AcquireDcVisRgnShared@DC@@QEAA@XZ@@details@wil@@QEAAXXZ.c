/*
 * XREFs of ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x140030690 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rbx
  struct _GRETHREAD *v2; // rax
  struct _GRETHREAD *v3; // rax
  HANDLE CurrentThreadId; // rax
  __int64 v6; // rcx

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = GreGetCurrentThreadCrossSessionCheck();
    if ( v2 )
      *(_QWORD *)v2 &= ~0x4000000000uLL;
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      if ( (*((_BYTE *)v3 + 30))-- == 1 )
        *(_QWORD *)v3 &= ~0x2000000000uLL;
    }
    CurrentThreadId = PsGetCurrentThreadId();
    v6 = v1 + 1112;
    if ( CurrentThreadId == *(HANDLE *)(v1 + 1120) )
    {
      *(_QWORD *)(v1 + 1120) = 0LL;
      ExReleasePushLockExclusiveEx(v6);
    }
    else
    {
      ExReleasePushLockSharedEx(v6, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
