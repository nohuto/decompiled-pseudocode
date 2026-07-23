/*
 * XREFs of HvlpAffinityToHvProcessorSet @ 0x1402F46DC
 * Callers:
 *     HvlpRequestProxyInterruptDoorbellGhcbEx @ 0x1402F2E4C (HvlpRequestProxyInterruptDoorbellGhcbEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1402F2F54 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1402F3854 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402F38FC (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlParkedVirtualProcessors @ 0x1402F4108 (HvlParkedVirtualProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1402F4200 (HvlRetargetDeviceInterrupt.c)
 *     HvlpFastFlushListTbEx @ 0x1402F4568 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x1402F4CD8 (HvlpSlowFlushListTbEx.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     HvlMapDeviceInterrupt @ 0x1405BFEF0 (HvlMapDeviceInterrupt.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlpAffinityToHvProcessorSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v7; // rbp
  unsigned int v8; // r9d
  unsigned __int16 v9; // si
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r15
  char v13; // al
  __int64 v14; // rax
  char v15; // [rsp+50h] [rbp+8h]

  result = 0LL;
  v4 = a3;
  a2[1] = 0LL;
  if ( !a1 )
  {
    *a2 = 1LL;
    return result;
  }
  *a2 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    while ( !v7 )
    {
      if ( ++v9 >= *(_WORD *)a1 )
      {
        if ( v8 )
        {
          if ( v8 == 64 )
          {
            v14 = -1LL;
            goto LABEL_13;
          }
        }
        else
        {
          a2[2] = 0LL;
          v8 = 1;
        }
        v14 = (1LL << v8) - 1;
LABEL_13:
        a2[1] = v14;
        return 8 * v8;
      }
      v7 = *(_QWORD *)(a1 + 8LL * v9 + 8);
    }
    _BitScanForward64(&v10, v7);
    v7 &= ~(1LL << v10);
    v11 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v9].Flink
          + (unsigned __int8)v10);
    v12 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v11];
    v13 = HvlpVirtualProcessorMapping[2 * v11 + 1];
    v15 = v13;
    if ( (unsigned int)v12 < v8 )
      goto LABEL_5;
    if ( 8 * (unsigned __int64)(unsigned int)(v12 + 1) > v4 )
      return 0xFFFFFFFFLL;
    memset_0(&a2[v8 + 2], 0, 8LL * ((unsigned int)v12 - v8 + 1));
    v13 = v15;
    v8 = v12 + 1;
LABEL_5:
    a2[v12 + 2] |= 1LL << v13;
  }
}
