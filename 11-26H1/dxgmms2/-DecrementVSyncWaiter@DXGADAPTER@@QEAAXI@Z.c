/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003A3E4
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003DB20 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x14011AC68 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14012747C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, int a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  v4 = a2 & (unsigned int)-((*((_DWORD *)this + 754) & 0x10) != 0);
  if ( (unsigned int)v4 < 0x10 )
  {
    v5 = _InterlockedDecrement((volatile signed __int32 *)this + v4 + 798);
    if ( v5 < 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v4 + 798), 0LL);
      WdLogGlobalForLineNumber = 2783;
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      LODWORD(v7) = v5;
      LODWORD(v6) = v4;
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, &VSyncWaiterChange, a3, this, v6, v7);
    }
  }
}
