/*
 * XREFs of ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14024AD7C
 * Callers:
 *     ??$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1402D054C (--$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 * Callees:
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400D2054 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D21E8 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2214 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Free@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x14024AEF4 (-Free@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x14026E838 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1402950A4 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Free(__int64 *a1, void *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v4; // rbp
  __int64 *i; // rdi
  __int64 v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  NSInstrumentation::CPlatformReaderWriterLock *v11; // rbx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  NSInstrumentation::CPlatformReaderWriterLock *v15; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset_0(a2, 0, 0x60uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], a2);
    return;
  }
  v4 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
  v15 = v4;
  v16 = 0;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v4);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v4);
      KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a2, 0LL, 0LL);
    }
    v6 = i[4];
    v7 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::CheckAllocationStatus(v6, a2);
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
      v10 = 2LL;
    }
    else
    {
      v10 = 1LL;
    }
    NSInstrumentation::PlatformAbort(v10, a2);
  }
  NSInstrumentation::CSectionBitmapAllocator<24576,96>::Free(v6, a2);
  if ( i == (__int64 *)*a1 )
    goto LABEL_19;
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v15);
  v11 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v11);
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
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v11);
  if ( !v16 )
  {
    v4 = v15;
LABEL_19:
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v4);
  }
}
