/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140024A68
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024A94 (--$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall SEMOBJ<36>::vUnlock(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(a1, *a1);
    *a1 = 0LL;
  }
  return result;
}
