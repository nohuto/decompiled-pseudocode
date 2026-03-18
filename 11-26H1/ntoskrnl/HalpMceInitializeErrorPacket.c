/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x140C0AF38
 * Callers:
 *     HalpMceInitProcessor @ 0x140C0A268 (HalpMceInitProcessor.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     HalpGetMcaPcrContext @ 0x140453A54 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140C0AFC4 (HalpMceInitializeErrorPacketContents.c)
 */

void __fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  volatile __int64 *McaPcrContext; // rbx
  __int64 v9; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 2168LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x878uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x73EuLL);
  HalpMceInitializeErrorPacketContents(v4);
  McaPcrContext = (volatile __int64 *)HalpGetMcaPcrContext(a2, v6);
  v9 = _InterlockedExchange64(McaPcrContext, v5);
  if ( v9 )
    HalpMmAllocCtxFree(v7, v9);
  _InterlockedExchange64(McaPcrContext + 1, a1);
}
