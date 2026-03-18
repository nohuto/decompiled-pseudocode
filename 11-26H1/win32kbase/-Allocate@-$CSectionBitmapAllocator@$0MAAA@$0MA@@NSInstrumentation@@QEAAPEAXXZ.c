/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B7454
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14003240C (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(__int64 a1, unsigned int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  struct _RTL_BITMAP *v4; // r15
  __int64 v5; // r14
  unsigned int v6; // edx
  ULONG ClearBits; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // r12
  void *v12; // r13

  v2 = *(struct W32_PUSH_LOCK **)a1;
  W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1, a2);
  v4 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  v5 = 0LL;
  ClearBits = RtlFindClearBits(v4, 1u, *(_DWORD *)(a1 + 32) < 0xFCu ? *(_DWORD *)(a1 + 32) : 0);
  if ( ClearBits != -1 )
  {
    v8 = *(_DWORD *)(a1 + 36);
    v9 = ClearBits / 0x15;
    if ( v8 >= 0xC || v9 < v8 )
    {
      LODWORD(v10) = v9 << 12;
    }
    else
    {
      v10 = v9 << 12;
      v12 = (void *)(v10 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v12, 4096LL) < 0 )
        goto LABEL_7;
      memset(v12, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
    RtlTestBit(v4, ClearBits);
    RtlSetBit(v4, ClearBits);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xFCu )
      *(_DWORD *)(a1 + 32) = 0;
    v5 = (unsigned int)v10 + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 192 * (ClearBits % 0x15);
  }
LABEL_7:
  W32ReleasePushLockExclusiveEx(v2, v6);
  return v5;
}
