/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x140156E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(PERESOURCE *this, __int16 a2, unsigned int *a3)
{
  PERESOURCE *v3; // rdi
  bool IsLockedShared; // si
  PERESOURCE i; // rcx
  int CreatorBackTraceIndex_high; // eax
  unsigned int v11; // ebx

  v3 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v3);
  if ( !tagDomLock::IsLockedShared(v3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = this[8]; ; i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( i == (PERESOURCE)(this + 8) )
    {
      if ( !IsLockedShared )
        ExReleaseResourceAndLeaveCriticalRegion(*v3);
      return 1LL;
    }
    if ( LOWORD(i->SharedWaiters) == a2 )
      break;
  }
  if ( a3 )
    *a3 = (HIDWORD(i[2].CreatorBackTraceIndex) & 0x400u) >> 10;
  CreatorBackTraceIndex_high = HIDWORD(i[2].CreatorBackTraceIndex);
  if ( (CreatorBackTraceIndex_high & 0x100) != 0 || (v11 = 0, (CreatorBackTraceIndex_high & 0x200) != 0) )
    v11 = 1;
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  return v11;
}
