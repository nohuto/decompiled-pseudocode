/*
 * XREFs of HalpInterruptSendIpiToPhysicalTarget @ 0x140581AC4
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x1405A7B40 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x1405A7C40 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x1405A7D30 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x1405A7E00 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x1405A7EF0 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
