/*
 * XREFs of ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400471AC
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003DB20 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x14011AC68 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14012747C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::IncrementVSyncWaiter(DXGADAPTER *this, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]

  v3 = a2 & (unsigned int)-((*((_DWORD *)this + 754) & 0x10) != 0);
  if ( (unsigned int)v3 < 0x10 )
  {
    v4 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + v3 + 798);
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      v6 = v4;
      v5 = v3;
      McTemplateK0pqq_EtwWriteTransfer(v4, &VSyncWaiterChange, v3, this, v5, v6);
    }
  }
}
