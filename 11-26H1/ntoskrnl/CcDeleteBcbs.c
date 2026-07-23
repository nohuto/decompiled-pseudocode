/*
 * XREFs of CcDeleteBcbs @ 0x14039E13C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeductDirtyPages @ 0x1403E611C (CcDeductDirtyPages.c)
 *     CcDeallocateBcb @ 0x14046E164 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x14046FEC0 (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeleteBcbs(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v6; // rcx
  _WORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rbp
  struct _KEVENT *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v6 = v3;
    if ( v3 == v2 )
      break;
    v7 = v3 - 2;
    result = 765LL;
    v3 = (_QWORD *)*v3;
    if ( *v7 == 765 )
    {
      if ( *((_DWORD *)v7 + 16) )
        KeBugCheckEx(0x34u, 0xFFCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v3[1] != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v3;
      v3[1] = v8;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, *((_QWORD *)v7 + 1), 0xFFFFFFFFLL);
      if ( *((_QWORD *)v7 + 23) )
      {
        v9 = *(_QWORD *)(*((_QWORD *)v7 + 7) + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v7 + 7) + 16LL)) )
        {
          v10 = *(struct _KEVENT **)(v9 + 192);
          if ( v10 )
            KeSetEvent(v10, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 552));
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
      if ( *((_BYTE *)v7 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v7 + 1) >> 12);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = CcDeallocateBcb(v7);
    }
  }
  return result;
}
