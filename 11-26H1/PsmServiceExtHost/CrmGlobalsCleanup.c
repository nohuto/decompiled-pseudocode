/*
 * XREFs of CrmGlobalsCleanup @ 0x180075274
 * Callers:
 *     PsmCrmCleanup @ 0x180074500 (PsmCrmCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     CrmGlobalsCleanupWorkers @ 0x180075360 (CrmGlobalsCleanupWorkers.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800754E0 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmGlobalsCleanupCrmRegistrations @ 0x1800776F8 (CrmGlobalsCleanupCrmRegistrations.c)
 *     CrmGlobalsCleanupTelemetry @ 0x1800777A0 (CrmGlobalsCleanupTelemetry.c)
 *     TlgUnregisterAggregateProvider @ 0x18008CF44 (TlgUnregisterAggregateProvider.c)
 */

int CrmGlobalsCleanup()
{
  int result; // eax
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_1800B9A90, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_1800B9A90, 0LL, 0);
  }
  CrmGlobalsCleanupTelemetry(&CrmGlobals);
  CrmGlobalsCleanupCrmRegistrations(&CrmGlobals);
  CrmGlobalsRegistrationRemoveAll();
  if ( hObject )
  {
    CempLockAcquireExclusive((__int64)&unk_1800E3978);
    SetEvent(hObject);
    dword_1800E3980 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3978);
  }
  CrmGlobalsCleanupWorkers(&CrmGlobals);
  result = TlgUnregisterAggregateProvider();
  if ( hObject )
    return CloseHandle(hObject);
  return result;
}
