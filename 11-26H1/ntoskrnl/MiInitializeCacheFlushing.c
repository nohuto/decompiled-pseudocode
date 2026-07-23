/*
 * XREFs of MiInitializeCacheFlushing @ 0x140D0572C
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushCacheForAttributeChange @ 0x140251450 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  int v0; // edx
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rdi
  int v5; // edx
  __int64 CurrentIrql; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // r15
  size_t v12; // rsi
  unsigned int v13; // eax
  void *PoolMm; // r13
  size_t v15; // r15
  LARGE_INTEGER v16; // rbx
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rcx
  unsigned __int64 v19; // r12
  signed __int32 v20[8]; // [rsp+0h] [rbp-70h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-50h] BYREF
  size_t Size; // [rsp+28h] [rbp-48h] BYREF
  __int128 v23; // [rsp+30h] [rbp-40h] BYREF
  _OWORD SystemInformation[2]; // [rsp+40h] [rbp-30h] BYREF

  v23 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0
    && (BYTE8(SystemInformation[0]) & 1) != 0 )
  {
    byte_140E2D899 = 1;
  }
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v23);
  v0 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v23, 1u);
  result = MiGetPage((__int64)&MiSystemPartition, DWORD2(v23) & 0xFFFFFF00 | v0, 0);
  v2 = result;
  if ( result != -1 )
  {
    Size = 0LL;
    v3 = 0LL;
    v4 = 48 * result - 0x220000000000LL;
    MiFinalizePageAttribute(v4, 1LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    v7 = 2LL;
    *(_QWORD *)&v23 = CurrentIrql;
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    v8 = 4LL;
    do
    {
      MiZeroPhysicalPage(0LL, v2, 2, 0);
      PerformanceFrequency.LowPart = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&PerformanceFrequency);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_DWORD *)(v4 + 32) &= 0xFF3FFFFF;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushCacheForAttributeChange(v2, 1LL, 0, &Size);
      PerformanceFrequency.LowPart = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&PerformanceFrequency);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_DWORD *)(v4 + 32) = *(_DWORD *)(v4 + 32) & 0xFF3FFFFF | 0x400000;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      --v8;
    }
    while ( v8 );
    v11 = v23;
    v12 = Size >> 2;
    if ( Size >> 2 )
    {
      v13 = dword_140E2D870;
      if ( !dword_140E2D870 )
        v13 = 256;
      Size = 3 * (v13 >> 2);
      PoolMm = (void *)ExAllocatePoolMm(
                         64LL,
                         Size,
                         538996045,
                         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
      if ( PoolMm )
      {
        v15 = Size;
        do
        {
          memset_0(PoolMm, 0, v15);
          PerformanceFrequency.QuadPart = 0LL;
          v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v16.QuadPart = 10000000 * v16.QuadPart / PerformanceFrequency.QuadPart;
          _InterlockedOr(v20, 0);
          ++dword_140E2D8AC;
          KeInvalidateAllCaches();
          _InterlockedOr(v20, 0);
          PerformanceFrequency.QuadPart = 0LL;
          v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v17.QuadPart = 10000000 * v17.QuadPart / PerformanceFrequency.QuadPart;
          _InterlockedOr(v20, 0);
          v18 = v16;
          if ( v17.QuadPart >= (unsigned __int64)v16.QuadPart )
            v18 = v17;
          v3 += v18.QuadPart - v16.QuadPart;
          --v7;
        }
        while ( v7 );
        ExFreePoolWithTag(PoolMm, 0);
        v11 = v23;
        v19 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
        v9 = v19 % v12;
        dword_140E2D8B4 = v19 / v12;
      }
    }
    MiReleaseFreshPageAtDpc(v4, v9, v10);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    result = v11;
    __writecr8(v11);
  }
  return result;
}
