/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B63F0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401360D4 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rbp
  unsigned int v4; // edx
  ULONG ClearBits; // esi
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rdi
  void *v11; // r12

  v1 = *(struct W32_PUSH_LOCK **)a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xF0u ? *(_DWORD *)(a1 + 32) : 0);
  if ( ClearBits == -1 )
    goto LABEL_7;
  v6 = *(_DWORD *)(a1 + 36);
  v7 = ClearBits / 0xC;
  if ( ClearBits / 0xC >= v6 && v6 < 0x14 )
  {
    v8 = v7 << 12;
    v11 = (void *)(v8 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
    if ( (int)MmCommitSessionMappedView(v11, 4096LL) >= 0 )
    {
      memset(v11, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
      goto LABEL_4;
    }
LABEL_7:
    W32ReleasePushLockExclusiveEx(v1, v4);
    return 0LL;
  }
  LODWORD(v8) = v7 << 12;
LABEL_4:
  RtlTestBit(v3, ClearBits);
  RtlSetBit(v3, ClearBits);
  if ( ++*(_DWORD *)(a1 + 32) >= 0xF0u )
    *(_DWORD *)(a1 + 32) = 0;
  v9 = (unsigned int)v8 + 320 * (ClearBits % 0xC) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16));
  ExReleasePushLockExclusiveEx(v1);
  KeLeaveCriticalRegion();
  return v9;
}
