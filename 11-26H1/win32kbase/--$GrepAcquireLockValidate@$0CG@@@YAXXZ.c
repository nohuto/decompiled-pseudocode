/*
 * XREFs of ??$GrepAcquireLockValidate@$0CG@@@YAXXZ @ 0x1400132C8
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<38>()
{
  __int64 result; // rax
  unsigned __int64 v1; // rcx
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  unsigned int v4; // r8d

  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v1 = 0LL;
  v2 = (_QWORD *)result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    result = 0xFFFFFFC000000000uLL;
    if ( (v3 & 0xFFFFFFC000000000uLL) != 0 && (v3 & 0x4000000000LL) == 0 )
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
      if ( (int)result > 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v3, (unsigned int)result);
    }
    *v2 |= 0x4000000000uLL;
  }
  return result;
}
