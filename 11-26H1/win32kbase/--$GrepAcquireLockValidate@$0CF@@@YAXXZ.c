/*
 * XREFs of ??$GrepAcquireLockValidate@$0CF@@@YAXXZ @ 0x140015030
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     ?AcquireLockShared@GreInnermostPushLock@@QEBAXXZ @ 0x140014F80 (-AcquireLockShared@GreInnermostPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ @ 0x140017EF0 (-AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<37>()
{
  __int64 result; // rax
  unsigned __int64 i; // rcx
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFC000000000uLL) != 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5, v3);
    }
    LOBYTE(i) = *(_BYTE *)(v2 + 30);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(v2 + 30) = i + 1;
    if ( !(_BYTE)i )
    {
      result = 0x2000000000LL;
      *(_QWORD *)v2 |= 0x2000000000uLL;
    }
  }
  return result;
}
