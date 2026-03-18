/*
 * XREFs of ??0?$SEMOBJ@$02@@QEAA@XZ @ 0x140268C8C
 * Callers:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FD860 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

Gre::Base *__fastcall SEMOBJ<3>::SEMOBJ<3>(Gre::Base *a1)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)Gre::Base::Globals(a1) + 728LL;
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v2);
  return a1;
}
