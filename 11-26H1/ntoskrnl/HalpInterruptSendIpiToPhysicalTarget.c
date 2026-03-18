/*
 * XREFs of HalpInterruptSendIpiToPhysicalTarget @ 0x14057F5A4
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x1405A5330 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x1405A5430 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x1405A5520 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x1405A55F0 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x1405A56E0 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptSendIpiToPhysicalTarget()
{
  bool v0; // bl
  __int64 result; // rax
  int v2; // [rsp+78h] [rbp+20h] BYREF
  int v3; // [rsp+7Ch] [rbp+24h]

  v3 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v2 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v0 = HalpDisableInterrupts();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v2);
  if ( v0 )
    _enable();
  return result;
}
