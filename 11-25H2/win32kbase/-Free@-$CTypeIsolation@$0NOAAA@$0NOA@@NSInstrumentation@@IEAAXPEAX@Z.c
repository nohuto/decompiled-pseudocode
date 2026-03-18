/*
 * XREFs of ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400933AC
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140093214 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x14000D3C4 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x140093534 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 *     ?Free@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400935D4 (-Free@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400BD758 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::Free(__int64 *a1, void *a2)
{
  struct W32_PUSH_LOCK *v4; // rbp
  __int64 *i; // rdi
  __int64 v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  struct W32_PUSH_LOCK *v11; // rbx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  struct W32_PUSH_LOCK *v15; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset(a2, 0, 0xDE0uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], a2);
    return;
  }
  v4 = (struct W32_PUSH_LOCK *)a1[2];
  v15 = v4;
  v16 = 0;
  RIMLockShared((__int64)v4);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      W32ReleasePushLockShared(v4);
      KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a2, 0LL, 0LL);
    }
    v6 = i[4];
    v7 = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::CheckAllocationStatus(v6, a2);
    if ( !v7 )
      continue;
    v8 = v7 - 1;
    if ( !v8 )
      break;
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        continue;
      v10 = 2;
    }
    else
    {
      v10 = 1;
    }
    NSInstrumentation::PlatformAbort(v10, (ULONG_PTR)a2, 0LL);
  }
  NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Free(v6, a2);
  if ( i == (__int64 *)*a1 )
    goto LABEL_8;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared(&v15);
  v11 = (struct W32_PUSH_LOCK *)a1[2];
  GreEnterCriticalRegionAndAcquirePushLockExclusive(v11);
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
  W32ReleasePushLockExclusive(v11);
  if ( !v16 )
  {
    v4 = v15;
LABEL_8:
    W32ReleasePushLockShared(v4);
  }
}
