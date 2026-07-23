/*
 * XREFs of MiReturnSystemCacheRegionsToKva @ 0x1402A2E28
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 *     MiDeleteUnmappedSystemCacheViews @ 0x1406FA688 (MiDeleteUnmappedSystemCacheViews.c)
 * Callees:
 *     MiSetSystemCacheReverseMap @ 0x1402A2F40 (MiSetSystemCacheReverseMap.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnSystemCacheRegionsToKva(__int64 a1, _QWORD **a2)
{
  __int64 v4; // r12
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  char v9; // di
  __int64 v10; // rcx
  __int64 v11; // rdx

  v4 = a1 + 22592;
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v5[1] != a2 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *a2 = v6;
    v6[1] = a2;
    v7 = v5[2];
    v8 = (((((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = MiLockWorkingSetShared(v4);
    MiLockPageTableInternal(v4, v8, 0LL);
    MiSetSystemCacheReverseMap(v10, v7, 0LL);
    MiUnlockPageTableInternal(v4, v8);
    LOBYTE(v11) = v9;
    MiUnlockWorkingSetShared(v4, v11);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2768));
    MiReturnSystemVa(v7, v7 + 0x200000, 7LL);
    ExFreePoolWithTag(v5, 0);
  }
}
