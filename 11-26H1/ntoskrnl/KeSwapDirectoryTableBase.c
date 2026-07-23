/*
 * XREFs of KeSwapDirectoryTableBase @ 0x14047D69C
 * Callers:
 *     MiTradeForPageTablePage @ 0x14033D4EC (MiTradeForPageTablePage.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     KeFlushProcessTb @ 0x14047DA1C (KeFlushProcessTb.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405F6CF0 (KiCpuPartitionCheckGenericDpc.c)
 */

__int64 __fastcall KeSwapDirectoryTableBase(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+30h] [rbp-20h] BYREF
  __int16 v7; // [rsp+31h] [rbp-1Fh]
  char v8; // [rsp+33h] [rbp-1Dh]
  int v9; // [rsp+34h] [rbp-1Ch]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]

  v3 = 0LL;
  v10 = a1;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v9 = a2;
  v11 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 = *(_QWORD *)(a1 + 344);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
  }
  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc(KiSwapDirectoryTableBaseTarget);
  v5[0] = KiSwapDirectoryTableBaseTarget;
  v5[1] = &v6;
  KeGenericProcessorCallback(0LL, (__int64)KiGenericCallDpcInitiatorWorker, (__int64)v5, 1);
  return KeFlushProcessTb(v3);
}
