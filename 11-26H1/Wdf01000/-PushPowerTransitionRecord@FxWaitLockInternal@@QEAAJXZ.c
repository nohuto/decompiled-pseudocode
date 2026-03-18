/*
 * XREFs of ?PushPowerTransitionRecord@FxWaitLockInternal@@QEAAJXZ @ 0x1400417E8
 * Callers:
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1400427F0 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxWaitLockInternal::PushPowerTransitionRecord(FxWaitLockInternal *this)
{
  _PO_TRANSITION_RECORD_REQUEST record; // [rsp+30h] [rbp-48h] BYREF

  record.Header = (_POWER_INFORMATION_INTERNAL_HEADER)88LL;
  *(_QWORD *)&record.Operation = 0LL;
  *((_DWORD *)&record.RecordType + 1) = 0;
  record.Thread = KeGetCurrentThread();
  record.RecordType = PoTransitionRecordWithResolverCallback;
  record.Process = IoGetCurrentProcess();
  record.Context = this;
  record.u.ResolverCallback = FxPowerTransitionRecordCallback;
  return ZwPowerInformation(PowerInformationInternal, &record, 0x38u, 0LL, 0);
}
