/*
 * XREFs of ?Free@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6154
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1400B5B90 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 *     ?Free@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400B6340 (-Free@-$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<106496,416>::Free(__int64 *a1, void *a2)
{
  struct W32_PUSH_LOCK *v4; // rbp
  __int64 *i; // rdi
  _QWORD *v6; // r14
  int v7; // eax
  int v8; // eax
  struct W32_PUSH_LOCK *v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset(a2, 0, 0x1A0uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], a2);
    return;
  }
  v4 = (struct W32_PUSH_LOCK *)a1[2];
  RIMLockShared((__int64)v4);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      W32ReleasePushLockShared(v4);
      KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a2, 0LL, 0LL);
    }
    v6 = (_QWORD *)i[4];
    v7 = NSInstrumentation::CSectionBitmapAllocator<106496,416>::CheckAllocationStatus(v6, (unsigned __int64)a2);
    if ( !v7 )
      continue;
    v8 = v7 - 1;
    if ( !v8 )
      break;
    v15 = v8 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        continue;
      v16 = 2LL;
    }
    else
    {
      v16 = 1LL;
    }
    NSInstrumentation::PlatformAbort(v16, a2);
  }
  NSInstrumentation::CSectionBitmapAllocator<106496,416>::Free(v6, a2);
  if ( i == (__int64 *)*a1 )
  {
    W32ReleasePushLockShared(v4);
  }
  else
  {
    W32ReleasePushLockShared(v4);
    v9 = (struct W32_PUSH_LOCK *)a1[2];
    W32AcquirePushLockExclusiveEx(v9, v10);
    v12 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v13 = (__int64 **)i[1], *v13 != i)
      || (*v13 = v12, v12[1] = (__int64)v13, v14 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v14;
    i[1] = (__int64)a1;
    *(_QWORD *)(v14 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusiveEx(v9, v11);
  }
}
