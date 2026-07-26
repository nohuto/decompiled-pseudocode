/*
 * XREFs of ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1400C7E3C
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1400A56B0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?InitializeBase@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ @ 0x140138C30 (-InitializeBase@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x140138EA0 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

void __fastcall ndisStackExpansionAddProcessor(PVOID DeferredContext)
{
  unsigned int v1; // ebx
  _BYTE SystemArgument2[32]; // [rsp+20h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-48h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF

  v1 = (unsigned int)DeferredContext;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex((ULONG)DeferredContext, &ProcNumber);
  memset(&Dpc, 0, sizeof(Dpc));
  KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::InitializeBase(SystemArgument2);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisStackExpansionDpc, (PVOID)v1);
  KeSetTargetProcessorDpcEx(&Dpc, &ProcNumber);
  KeInsertQueueDpc(&Dpc, 0LL, SystemArgument2);
  KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(SystemArgument2);
}
