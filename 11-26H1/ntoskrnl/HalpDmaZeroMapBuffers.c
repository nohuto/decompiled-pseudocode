/*
 * XREFs of HalpDmaZeroMapBuffers @ 0x14058BC68
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalpMapTransferV3 @ 0x140438870 (HalpMapTransferV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x140488F0C (HalpDmaReleaseBufferMappings.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall HalpDmaZeroMapBuffers(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  char v9; // r15
  unsigned __int64 v10; // rbp
  __int64 i; // rcx
  __int64 j; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebx
  _OWORD v15[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  memset(v15, 0, sizeof(v15));
  v6 = a2;
  v16 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = a3 & 0xFFF;
  v9 = 0;
  v10 = (v8 + (unsigned __int64)a4 + 4095) >> 12;
  if ( CurrentIrql <= 2u )
  {
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      v9 = 1;
    }
    HalpDmaAcquireBufferMappings(v8, v6, v10, (__int64)v15);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; i = (unsigned int)(i + 1) )
    {
      if ( (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF06uLL, 0LL, 0LL);
      a2 = *(_QWORD *)(a2 + 8);
    }
  }
  for ( j = v6; v4; v4 -= v14 )
  {
    v13 = v4;
    if ( v4 >= 4096 - v5 )
      v13 = 4096 - v5;
    v14 = v13;
    memset_0((void *)(v5 + (*(_QWORD *)(j + 48) & 0xFFFFFFFFFFFFF000uLL)), 0, v13);
    j = *(_QWORD *)(j + 8);
    v5 = 0;
  }
  if ( CurrentIrql <= 2u )
    HalpDmaReleaseBufferMappings(i, v6, v10, (__int64)v15);
  if ( v9 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
