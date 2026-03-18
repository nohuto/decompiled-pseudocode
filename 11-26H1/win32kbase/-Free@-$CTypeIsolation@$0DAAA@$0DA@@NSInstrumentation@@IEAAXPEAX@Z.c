/*
 * XREFs of ?Free@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140187078
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B7414 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1400B7B38 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1401871DC (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x140187278 (-Free@-$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<12288,48>::Free(__int64 *a1, _OWORD *a2)
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
  struct W32_PUSH_LOCK *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
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
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
      NSInstrumentation::PlatformAbort(3, (ULONG_PTR)a2, 0LL);
      return;
    }
    v6 = i[4];
    v7 = NSInstrumentation::CSectionBitmapAllocator<12288,48>::CheckAllocationStatus(v6, a2);
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
  NSInstrumentation::CSectionBitmapAllocator<12288,48>::Free(v6, a2);
  if ( i == (__int64 *)*a1 )
  {
LABEL_19:
    W32ReleasePushLockShared(v4);
    return;
  }
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
  v11 = (struct W32_PUSH_LOCK *)a1[2];
  W32AcquirePushLockExclusiveEx(v11);
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
  W32ReleasePushLockExclusiveEx(v11);
  if ( !v16 )
  {
    v4 = v15;
    goto LABEL_19;
  }
}
