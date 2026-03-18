/*
 * XREFs of ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x140030690 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0CF@@@YAXXZ @ 0x140015030 (--$GrepAcquireLockValidate@$0CF@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(DC *this, __int64 a2)
{
  struct _GRETHREAD *v4; // rax
  unsigned __int64 v5; // rcx
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // r8d
  int v10; // eax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 1112, 0LL);
  GrepAcquireLockValidate<37>();
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFC000000000uLL) != 0 && (v7 & 0x4000000000LL) == 0 )
    {
      v9 = 38;
      do
      {
        v10 = v5;
        if ( ((1LL << v5) & 0xFFFFFFDFFFFFFFFFuLL & v7) == 0 )
          v10 = v9;
        ++v5;
        v9 = v10;
      }
      while ( v5 < 0x40 );
      if ( v10 > 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, (unsigned int)v10);
    }
    *(_QWORD *)v6 |= 0x4000000000uLL;
  }
  result = a2;
  *(_QWORD *)a2 = this;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
