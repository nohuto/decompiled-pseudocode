/*
 * XREFs of MiFreeBootDriverPages @ 0x140D11120
 * Callers:
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUnmapReturnCharges @ 0x140ACA14C (MiUnmapReturnCharges.c)
 */

void __fastcall MiFreeBootDriverPages(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  PVOID v8; // r15
  int v9; // r9d
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 *v12; // r15
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  ULONG_PTR v15; // r13
  __int64 v16; // rsi
  int v17; // edx
  unsigned __int8 CurrentIrql; // r12
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // [rsp+40h] [rbp-88h]
  __int64 BugCheckParameter2; // [rsp+48h] [rbp-80h]
  _OWORD v24[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v25; // [rsp+80h] [rbp-48h]
  __int64 *ProcessorFlushList; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+20h]

  v5 = a3 + 8 * (a4 - 1);
  memset(v24, 0, sizeof(v24));
  v6 = a4;
  v8 = a2;
  v25 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a3 << 25) >> 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E36F80,
      *((_DWORD *)ProcessorFlushList + 3),
      8,
      1);
    v10 = (_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = 0LL;
    if ( (unsigned __int64)v10 <= v11 )
    {
      v12 = ProcessorFlushList;
      v13 = v9 - 2;
      v28 = (((v11 - (unsigned __int64)v10) >> 3) + 1) << 9;
      v14 = (unsigned int)(v9 - 6);
      do
      {
        v15 = (*v10 >> 12) & 0xFFFFFFFFFFLL;
        *v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v16 = 48 * v15 - 0x220000000000LL;
        BugCheckParameter2 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        MiInsertLargeTbFlushEntry((__int64)v12, 1, (__int64)v10);
        MiFlushTbList((__int64)v12);
        v22 = 512LL;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != (_BYTE)v14 )
          __writecr8(v14);
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = v14;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
        }
        do
        {
          LODWORD(ProcessorFlushList) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&ProcessorFlushList);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          *(_DWORD *)(v16 + 32) = (*(_DWORD *)(v16 + 32) + 1) ^ (*(_DWORD *)(v16 + 32) ^ (*(_DWORD *)(v16 + 32) + 1)) & 0xFFFF0000;
          *(_BYTE *)(v16 + 35) &= ~8u;
          *(_QWORD *)v16 = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 += 48LL;
          --v22;
        }
        while ( v22 );
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        MiFreeLargePageMemory(v15, 1u, v13);
        MiLockAndDecrementShareCount(BugCheckParameter2, 4LL);
        ++v10;
      }
      while ( (unsigned __int64)v10 <= v11 );
      v6 = v28;
      v8 = a2;
    }
    MiReleaseProcessorFlushList();
  }
  else
  {
    v19 = 0;
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 112);
      v21 = 0;
      if ( v20 )
        v19 = MiSectionControlArea(v20);
    }
    else
    {
      v21 = 6;
    }
    MiDecommitPages(a3, v6, v19, 0LL, 0LL, v21, 0LL, (__int64)v24);
    MiUnmapReturnCharges((__int64)&MiSystemPartition, (unsigned __int64 *)v24);
  }
  if ( v8 == PsNtosImageBase || v8 == PsHalImageBase )
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, -v6);
  else
    _InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E366D8.WaitBlockFill11[16], -(int)v6);
}
