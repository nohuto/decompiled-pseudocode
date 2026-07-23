/*
 * XREFs of CcAsyncReadPrefetch @ 0x14038A7BC
 * Callers:
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     CcUpdateReadHistory @ 0x14038A9B8 (CcUpdateReadHistory.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 *     MmProbeAndLockProcessPages @ 0x140A9E250 (MmProbeAndLockProcessPages.c)
 */

char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // r15
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // r12
  int v7; // r11d
  struct _MDL *v8; // r10
  struct _KPROCESS *v9; // rdx
  KPROCESSOR_MODE v10; // r8
  struct _KTHREAD *v11; // r13
  int v12; // ecx
  __int64 v13; // rdx
  _DWORD *v14; // rbx
  __int64 v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+98h] [rbp+10h]
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v18 = v4;
  v5 = *(unsigned int *)(a1 + 40);
  v6 = *(_QWORD **)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 56);
  v17 = v7;
  v8 = *(struct _MDL **)(a1 + 64);
  v9 = *(struct _KPROCESS **)(a1 + 88);
  v10 = *(_BYTE *)(a1 + 112);
  v11 = *(struct _KTHREAD **)(a1 + 96);
  v19 = *(_QWORD *)(a1 + 104);
  v16 = *(_QWORD *)(a1 + 152);
  if ( (v8->MdlFlags & 0x817) == 0 )
  {
    MmProbeAndLockProcessPages(v8, v9, v10, IoWriteAccess);
    v7 = v17;
  }
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  *v6 = 0LL;
  v12 = v5;
  if ( v4 < *(_QWORD *)(v2 + 8) )
  {
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
    v13 = *(_QWORD *)(v2 + 8);
    if ( v4 + v5 > v13 )
      v12 = v13 - v4;
    v1 = MmPrefetchForCacheManager(
           (_DWORD)v3,
           (unsigned int)v4 & 0xFFFFF000,
           0,
           ((v4 + v12 + 4095) & 0xFFFFF000) - (v4 & 0xFFFFF000),
           v7);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  if ( v1 )
    ++CcNumberAsyncReadPrefetches;
  else
    ++CcNumberAsyncReadCacheHits;
  v14 = (_DWORD *)v3[6];
  if ( CcEnableReadAheadInAsyncRead && v1 )
  {
    if ( !v14 )
      return 1;
    if ( (*v14 & 0x20000) == 0 )
      CcScheduleReadAheadNuma(v3, &v18, (unsigned int)v5, v11, v16);
  }
  if ( v14 )
    CcUpdateReadHistory(v3, &v18, (unsigned int)v5);
  return 1;
}
