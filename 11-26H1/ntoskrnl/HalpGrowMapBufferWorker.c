/*
 * XREFs of HalpGrowMapBufferWorker @ 0x1404E7B80
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1404374EC (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B3305C (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B65DD0 (HalpDmaGrowContiguousMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpGrowMapBufferWorker(_QWORD *P)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // di
  int v7; // eax

  v2 = P[4];
  v3 = (*((_DWORD *)P + 11) + 16) & 0xFFFFF;
  if ( *((_BYTE *)P + 40) )
    HalpDmaGrowScatterMapBuffers(v2, v3);
  else
    HalpDmaGrowContiguousMapBuffers(v2, v3);
  v5 = *((_BYTE *)P + 40) != 0 ? 4 : 0;
  *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v5) = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, v4);
  }
  v7 = *((_DWORD *)P + 12);
  if ( v7 == 2 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV2(v2, v4);
  }
  else if ( v7 == 3 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV3(v2, v4);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(P, 0);
}
