/*
 * XREFs of ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403FC814
 * Callers:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402830B8 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1403D3C10 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall BLTENTRY::ReleaseRenderingDoneEvent(BLTENTRY *this)
{
  if ( *((_QWORD *)this + 3) && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&BltQueueDisplayOnlyWarpRenderComplete);
  ObfDereferenceObject(*((PVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
