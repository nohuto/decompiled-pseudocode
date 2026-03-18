/*
 * XREFs of ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x14018B030
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerBarrelVisualization(PERESOURCE *this, __int16 a2, __int16 a3)
{
  __int64 v6; // rdx
  PERESOURCE i; // rcx
  PERESOURCE *v8[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v8, this + 4, 0LL);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = this[10]; i != (PERESOURCE)(this + 10); i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( LOWORD(i->OwnerTable) == a2 )
    {
      i[2].NumberOfExclusiveWaiters = (a3 << 11) & 0x800 ^ (i[2].NumberOfExclusiveWaiters & 0xFFFFE7FF | 0x1000);
      break;
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v8, v6);
}
