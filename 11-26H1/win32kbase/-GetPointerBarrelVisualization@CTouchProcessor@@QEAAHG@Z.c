/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x140159CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(PERESOURCE *this, __int16 a2)
{
  PERESOURCE *v2; // rdi
  PERESOURCE i; // rax
  int v7; // ebx
  PERESOURCE *v8; // [rsp+20h] [rbp-28h] BYREF
  bool IsLockedShared; // [rsp+28h] [rbp-20h]

  v2 = this + 4;
  v8 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v2);
  if ( !tagDomLock::IsLockedShared(v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = this[8]; ; i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( i == (PERESOURCE)(this + 8) )
    {
      if ( !IsLockedShared )
        ExReleaseResourceAndLeaveCriticalRegion(*v2);
      return 1LL;
    }
    if ( LOWORD(i->SharedWaiters) == a2 )
      break;
  }
  if ( (i[2].CreatorBackTraceIndex & 0x100000000000LL) != 0 )
  {
    v7 = (i[2].CreatorBackTraceIndex & 0x80000000000LL) != 0 ? 2 : 0;
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v2);
    return (unsigned int)(v7 - 1);
  }
  else
  {
    CInpLockGuardShared::~CInpLockGuardShared(&v8);
    return 0LL;
  }
}
