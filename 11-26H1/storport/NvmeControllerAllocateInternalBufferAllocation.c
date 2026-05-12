/*
 * XREFs of NvmeControllerAllocateInternalBufferAllocation @ 0x1400799F4
 * Callers:
 *     NvmeControllerAllocateInternalBuffer @ 0x1400F0620 (NvmeControllerAllocateInternalBuffer.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x140072258 (RaidDmaAllocateUncachedExtension.c)
 *     RaidDmaGetAdapterInfo @ 0x1400722BC (RaidDmaGetAdapterInfo.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x140187DDC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall NvmeControllerAllocateInternalBufferAllocation(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp-68h] BYREF
  int v11; // [rsp+44h] [rbp-64h] BYREF
  char v12; // [rsp+50h] [rbp-58h]

  v6 = 0x80000000;
  memset_0(&v11, 0, 0x54uLL);
  v7 = a2 + 1624;
  if ( *(_DWORD *)(v7 + 16) )
    return 0LL;
  if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 1160) )
  {
    result = RaidInitializeDma(v8, *(_QWORD *)(a1 + 32), a1 + 176);
    if ( (int)result < 0 )
      return result;
    v10 = 1;
    if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1160), (__int64)&v10) >= 0 && (v12 & 2) != 0 )
      *(_DWORD *)(a1 + 992) |= 8u;
  }
  v10 = 1;
  if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1160), (__int64)&v10) >= 0 && (v12 & 2) != 0 )
    *(_DWORD *)(a1 + 992) |= 8u;
  if ( !a3 )
    goto LABEL_22;
  if ( (*(_DWORD *)(a3 + 220) & 4) != 0 )
    v6 = *(_DWORD *)(a1 + 1024);
  if ( *(_BYTE *)(a3 + 144) == 2 )
  {
    if ( *(_QWORD *)(a1 + 1376) < 0x100000000uLL )
      *(_QWORD *)(a1 + 1376) = -1LL;
    *(_QWORD *)(a1 + 1392) = 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(a3 + 144) == 3 )
  {
    if ( *(_QWORD *)(a1 + 1376) < 0x100000000uLL )
      *(_QWORD *)(a1 + 1376) = -1LL;
    *(_QWORD *)(a1 + 1392) = 0LL;
LABEL_21:
    *(_QWORD *)(a1 + 1408) = -1LL;
  }
LABEL_22:
  result = RaidDmaAllocateUncachedExtension(
             a1 + 1160,
             0x2000,
             *(_QWORD *)(a1 + 1384),
             *(_QWORD *)(a1 + 1376),
             *(_QWORD *)(a1 + 1392),
             *(_DWORD *)(a1 + 1368),
             v6,
             v7);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 != 0x80000000 )
  {
    result = RaidDmaAllocateUncachedExtension(
               a1 + 1160,
               0x2000,
               *(_QWORD *)(a1 + 1384),
               *(_QWORD *)(a1 + 1376),
               *(_QWORD *)(a1 + 1392),
               *(_DWORD *)(a1 + 1368),
               0x80000000,
               v7);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
