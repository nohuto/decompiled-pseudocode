/*
 * XREFs of MiQueryPtePrepare @ 0x140A95A04
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryPtePrepare(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  _KPROCESS *v8; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  char *v11; // r14
  size_t v12; // rbx
  void *v13; // rdx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  int v16; // r14d
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp+20h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 > 0xFFFFFFFF )
    return 3221225990LL;
  v6 = v5 >> 4;
  if ( !(v5 >> 4) )
    return 3221225476LL;
  if ( (a3 & 0x3FFFFFFC) != 0 || (a3 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_KPROCESS **)(a1 + 80);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v6 > 8 )
  {
    v17[1] = 0LL;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(
               64LL,
               8 * ((v5 >> 12) + ((v5 & 0xFFF) != 0) + 7LL),
               844196173,
               CurrentProcessorColor | 0x80000000);
    v10 = PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    *(_QWORD *)PoolMm = 0LL;
    *(_WORD *)(PoolMm + 8) = 8 * (((v5 + (v9 & 0xFFF) + 4095) >> 12) + 6);
    *(_WORD *)(PoolMm + 10) = 0;
    *(_QWORD *)(PoolMm + 32) = v9 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(PoolMm + 44) = v9 & 0xFFF;
    *(_DWORD *)(PoolMm + 40) = v5;
    v17[0] = *(_BYTE *)(a1 + 32) & 1 | 2LL;
    v16 = MiProbeAndLockPages(PoolMm, v17);
    if ( v16 >= 0 )
    {
      if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
        v11 = *(char **)(v10 + 24);
      else
        v11 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( v11 )
      {
        v12 = 16 * v6;
        goto LABEL_10;
      }
      MmUnlockPages((PMDL)v10);
      v16 = -1073741670;
    }
    ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)v16;
  }
  v10 = 0LL;
  v11 = (char *)(a2 + 120);
  v12 = 16 * v6;
  v13 = *(void **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 32) )
    RtlCopyFromUser(v11, v13, v12);
  else
    RtlCopyVolatileMemory(v11, v13, v12);
LABEL_10:
  *(_QWORD *)(a2 + 24) = v10;
  *(_QWORD *)(a2 + 8) = v11;
  *(_QWORD *)(a2 + 16) = &v11[v12];
  if ( CurrentThread->ApcState.Process != v8 )
  {
    *(_BYTE *)(a2 + 51) = 1;
    KiStackAttachProcess(v8, 0, a2 + 56);
  }
  *(_QWORD *)a2 = (char *)v8 + 1024;
  *(_BYTE *)(a2 + 48) = 17;
  return 0LL;
}
