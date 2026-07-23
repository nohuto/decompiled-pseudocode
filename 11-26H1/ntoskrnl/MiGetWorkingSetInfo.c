/*
 * XREFs of MiGetWorkingSetInfo @ 0x14040E930
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MiGetWorkingSetInfoEx @ 0x14040EB0C (MiGetWorkingSetInfoEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiQueryUpdateBytesWritten @ 0x140923A10 (MiQueryUpdateBytesWritten.c)
 *     MiQueryDetach @ 0x140923A4C (MiQueryDetach.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // r12
  __int64 PoolMm; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  int WorkingSetInfo; // ebx
  __int64 *v10; // r14
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v12[1] = 0LL;
  v5 = 0LL;
  if ( v2 > 0xFFFFFFFF )
  {
    WorkingSetInfo = -1073741306;
  }
  else
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               8 * ((v2 >> 12) + ((v2 & 0xFFF) != 0)) + 56,
               827418957,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v7 = PoolMm;
    if ( PoolMm )
    {
      v8 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)PoolMm = 0LL;
      *(_WORD *)(PoolMm + 10) = 0;
      *(_DWORD *)(PoolMm + 40) = v2;
      *(_QWORD *)(PoolMm + 32) = v8 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(PoolMm + 44) = v8 & 0xFFF;
      *(_WORD *)(PoolMm + 8) = 8 * (((v2 + (v8 & 0xFFF) + 4095) >> 12) + 6);
      v12[0] = *(_BYTE *)(a1 + 32) & 1 | 2LL;
      WorkingSetInfo = MiProbeAndLockPages(PoolMm, v12);
      if ( WorkingSetInfo >= 0 )
      {
        if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
          v10 = *(__int64 **)(v7 + 24);
        else
          v10 = (__int64 *)MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v10 )
        {
          WorkingSetInfo = MiGetWorkingSetInfoEx(*(_QWORD *)(a1 + 80) + 1024LL, a2 | 0x80000000, v10, v2);
          if ( WorkingSetInfo >= 0 )
            v5 = *v10;
        }
        else
        {
          WorkingSetInfo = -1073741670;
        }
        MmUnlockPages((PMDL)v7);
      }
      ExFreePoolWithTag((PVOID)v7, 0);
    }
    else
    {
      WorkingSetInfo = -1073741670;
    }
  }
  MiQueryDetach(a1);
  if ( WorkingSetInfo >= 0 && *(_QWORD *)(a1 + 24) )
    MiQueryUpdateBytesWritten(a1, 8 * v5 + 8);
  return (unsigned int)WorkingSetInfo;
}
