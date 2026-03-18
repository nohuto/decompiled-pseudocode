/*
 * XREFs of HalpCmciInitializeErrorPacket @ 0x140454B28
 * Callers:
 *     HalpInitializeCmc @ 0x140BE9DA8 (HalpInitializeCmc.c)
 *     HalpCmciInit @ 0x140C08ECC (HalpCmciInit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpGetMcaPcrContext @ 0x140453A54 (HalpGetMcaPcrContext.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x140454C00 (HalpCmcInitializeErrorPacketContents.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpCmciInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 McaPcrContext; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  v3 = 0LL;
  McaPcrContext = HalpGetMcaPcrContext(a2, a2);
  if ( !*(_QWORD *)(McaPcrContext + 16) )
  {
    v3 = HalpMmAllocCtxAlloc(v4, 2168LL);
    if ( !v3 )
      KeBugCheckEx(0xACu, 0x878uLL, 0xDA00uLL, 0LL, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 15LL);
  }
  if ( v3 )
    *(_QWORD *)(McaPcrContext + 16) = v3;
  HalpCmcInitializeErrorPacketContents(*(_QWORD *)(McaPcrContext + 16));
  *(_OWORD *)(*(_QWORD *)(McaPcrContext + 16) + 32LL) = CMCI_NOTIFY_TYPE_GUID;
  *(_QWORD *)(McaPcrContext + 24) = a1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
