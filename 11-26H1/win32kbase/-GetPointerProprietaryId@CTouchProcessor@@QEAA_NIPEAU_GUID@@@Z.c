/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x140161764
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1401616B0 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(PERESOURCE *this, __int16 a2, struct _GUID *a3)
{
  PERESOURCE *v3; // rbx
  PERESOURCE i; // rcx
  char *v9; // rdx
  PERESOURCE *v10; // [rsp+20h] [rbp-28h] BYREF
  bool IsLockedShared; // [rsp+28h] [rbp-20h]

  v3 = this + 4;
  v10 = this + 4;
  *a3 = 0LL;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v3);
  if ( !tagDomLock::IsLockedShared(v3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = this[8]; i != (PERESOURCE)(this + 8); i = (PERESOURCE)i->SystemResourcesList.Flink )
  {
    if ( LOWORD(i->SharedWaiters) == a2 )
    {
      v9 = (char *)i->ExclusiveWaiters - *(_QWORD *)&a3->Data1;
      if ( !v9 )
        v9 = (char *)(i->OwnerEntry.OwnerThread - *(_QWORD *)a3->Data4);
      if ( v9 )
      {
        *a3 = *(struct _GUID *)&i->ExclusiveWaiters;
        CInpLockGuardShared::~CInpLockGuardShared(&v10);
        return 1;
      }
      break;
    }
  }
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  return 0;
}
