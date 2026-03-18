/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400FE0EC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140016244 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(__int64 a1)
{
  struct W32_PUSH_LOCK *v1; // rbx
  struct _RTL_BITMAP *v3; // rbp
  ULONG ClearBits; // eax
  ULONG v5; // esi
  unsigned int v6; // ecx
  ULONG v7; // eax
  __int64 v8; // r14
  __int64 v9; // rdi
  void *v11; // r15

  v1 = *(struct W32_PUSH_LOCK **)a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0x100u ? *(_DWORD *)(a1 + 32) : 0);
  v5 = ClearBits;
  if ( ClearBits == -1 )
  {
    ExReleasePushLockExclusiveEx(v1);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v6 = *(_DWORD *)(a1 + 36);
  v7 = ClearBits >> 5;
  if ( v6 < 8 && v7 >= v6 )
  {
    v8 = v7 << 12;
    v11 = (void *)(v8 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
    if ( (int)MmCommitSessionMappedView(v11, 4096LL) >= 0 )
    {
      memset(v11, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
      goto LABEL_4;
    }
    W32ReleasePushLockExclusiveEx(v1);
    return 0LL;
  }
  LODWORD(v8) = v7 << 12;
LABEL_4:
  RtlTestBit(v3, v5);
  RtlSetBit(v3, v5);
  if ( ++*(_DWORD *)(a1 + 32) >= 0x100u )
    *(_DWORD *)(a1 + 32) = 0;
  v9 = (unsigned int)v8 + ((unsigned __int8)(v5 & 0x1F) << 7) + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8));
  ExReleasePushLockExclusiveEx(v1);
  KeLeaveCriticalRegion();
  return v9;
}
