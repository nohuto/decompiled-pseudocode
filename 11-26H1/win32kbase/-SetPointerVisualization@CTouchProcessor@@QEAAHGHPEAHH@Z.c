/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x140161A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(PERESOURCE *this, __int16 a2, int a3, int *a4, int a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ebx
  PERESOURCE i; // r8
  PERESOURCE *v13[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v13, this + 4, 0LL);
  v10 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = this[8]; i != (PERESOURCE)(this + 8); i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( LOWORD(i->SharedWaiters) == a2 )
    {
      v9 = (a3 << 8) ^ (HIDWORD(i[2].CreatorBackTraceIndex) ^ (a3 << 8)) & 0xFFFFFEFF;
      HIDWORD(i[2].CreatorBackTraceIndex) = v9;
      if ( a4 )
        v9 = (*a4 << 9) ^ ((*a4 << 9) ^ (unsigned int)v9) & 0xFFFFFDFF;
      v10 = 1;
      HIDWORD(i[2].CreatorBackTraceIndex) = (a5 << 10) ^ (v9 ^ (a5 << 10)) & 0xFFFFFBFF;
      break;
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13, v9);
  return v10;
}
