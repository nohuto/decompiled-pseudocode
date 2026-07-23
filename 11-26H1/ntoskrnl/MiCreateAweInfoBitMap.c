/*
 * XREFs of MiCreateAweInfoBitMap @ 0x14087EC68
 * Callers:
 *     MiAllocateAweInfo @ 0x14087D964 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x14087F5D8 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiReadHighestPhysicalPage @ 0x1404D023C (MiReadHighestPhysicalPage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateAweInfoBitMap(__int64 a1)
{
  _KPROCESS *Process; // rdi
  __int64 AweInfoPartition; // rax
  __int64 HighestPhysicalPage; // rbx
  __int16 v5; // ax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  ULONG_PTR v8; // rbp
  int CurrentProcessorColor; // eax
  void *PoolMm; // r15
  int v11; // r14d
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  AweInfoPartition = MiGetAweInfoPartition(a1);
  if ( (*(_DWORD *)(a1 + 8) & 4) != 0 )
    HighestPhysicalPage = 0xFFFFFFFFFFLL;
  else
    HighestPhysicalPage = MiReadHighestPhysicalPage(AweInfoPartition);
  if ( Process[1].ReadyTime )
  {
    v5 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( (v5 == 332 || v5 == 452) && (unsigned __int64)(HighestPhysicalPage + 1) > 0x100000000LL )
      HighestPhysicalPage = 0xFFFFFFFFLL;
  }
  v6 = MiPageChainCount(a1);
  if ( v6 == 1 )
    v7 = HighestPhysicalPage + 1;
  else
    v7 = (~(v6 - 1) & (HighestPhysicalPage + v6 - 1)) / v6;
  if ( *(_QWORD *)(a1 + 24) == v7 )
    return 3221225626LL;
  v8 = 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0));
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (void *)ExAllocatePoolMm(64LL, v8, 1281646934, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225626LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v11 = PsChargeProcessNonPagedPoolQuota((__int64)Process, v8);
    if ( v11 < 0 )
    {
      ExFreePoolWithTag(PoolMm, 0);
      return (unsigned int)v11;
    }
    *(_BYTE *)(a1 + 56) = v8 & 0xF0 | ((unsigned __int8)Process >> 4);
  }
  *(_QWORD *)(a1 + 24) = v7;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = PoolMm;
  return result;
}
