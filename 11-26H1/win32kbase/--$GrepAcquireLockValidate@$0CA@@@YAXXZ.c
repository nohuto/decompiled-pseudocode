/*
 * XREFs of ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x140044478
 * Callers:
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x140044510 (MultiUserGreTrackRemoveEngResource.c)
 *     MultiUserGreTrackAddEngResource @ 0x140045220 (MultiUserGreTrackAddEngResource.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<32>()
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
    result = 0xFFFFFFDF00000000uLL;
    if ( (v3 & 0xFFFFFFDF00000000uLL) != 0 && (v3 & 0x100000000LL) == 0 )
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
      if ( (int)result > 32 && (_DWORD)result != 38 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, (unsigned int)result, v3);
    }
    *v2 |= 0x100000000uLL;
  }
  return result;
}
