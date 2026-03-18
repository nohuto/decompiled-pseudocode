/*
 * XREFs of ?Free@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400D131C
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400D12E0 (--$FreeIsolatedType@V-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400D1228 (-Free@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D21E8 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2214 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1400D2974 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAA-AW4Alloc.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x14026E838 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<237568,928>::Free(__int64 *a1, void *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v4; // rbp
  __int64 *i; // rdi
  __int64 v6; // r14
  int v7; // eax
  int v8; // eax
  NSInstrumentation::CPlatformReaderWriterLock *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset_0(a2, 0, 0x3A0uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], a2);
    return;
  }
  v4 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v4);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v4);
      KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a2, 0LL, 0LL);
    }
    v6 = i[4];
    v7 = NSInstrumentation::CSectionBitmapAllocator<237568,928>::CheckAllocationStatus(v6, a2);
    if ( !v7 )
      continue;
    v8 = v7 - 1;
    if ( !v8 )
      break;
    v13 = v8 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        continue;
      v14 = 2LL;
    }
    else
    {
      v14 = 1LL;
    }
    NSInstrumentation::PlatformAbort(v14, a2);
  }
  NSInstrumentation::CSectionBitmapAllocator<237568,928>::Free(v6, a2);
  if ( i == (__int64 *)*a1 )
  {
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v4);
  }
  else
  {
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v4);
    v9 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v9);
    v10 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v11 = (__int64 **)i[1], *v11 != i)
      || (*v11 = v10, v10[1] = (__int64)v11, v12 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v12;
    i[1] = (__int64)a1;
    *(_QWORD *)(v12 + 8) = i;
    *a1 = (__int64)i;
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v9);
  }
}
