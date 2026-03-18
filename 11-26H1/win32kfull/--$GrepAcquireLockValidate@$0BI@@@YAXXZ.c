/*
 * XREFs of ??$GrepAcquireLockValidate@$0BI@@@YAXXZ @ 0x1400EF45C
 * Callers:
 *     ?vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EE780 (-vSrcOpaqCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEA00 (-vSrcOpaqCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEB20 (-vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEF80 (-vSrcOpaqCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ??0?$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400EF238 (--0-$SEMOBJ@$0BI@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EF340 (-vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x140289B80 (-vSrcOpaqCopyS4D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<24>()
{
  __int64 result; // rax
  unsigned __int64 v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // r8
  unsigned int v4; // edx

  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v1 = 0LL;
  v2 = (_QWORD *)result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    result = 0xFFFFFFDFFF000000uLL;
    if ( (v3 & 0xFFFFFFDFFF000000uLL) != 0 && (v3 & 0x1000000) == 0 )
    {
      v4 = 38;
      do
      {
        result = (unsigned int)v1;
        if ( ((1LL << v1) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          result = v4;
        ++v1;
        v4 = result;
      }
      while ( v1 < 0x40 );
      if ( (int)result > 24 && (_DWORD)result != 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, (unsigned int)result);
    }
    *v2 |= 0x1000000uLL;
  }
  return result;
}
