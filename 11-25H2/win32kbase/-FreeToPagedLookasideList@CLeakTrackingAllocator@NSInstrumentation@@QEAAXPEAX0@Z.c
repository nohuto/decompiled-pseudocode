/*
 * XREFs of ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x140010A90
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     Win32UAFMFreeToPagedLookasideList @ 0x1401C2170 (Win32UAFMFreeToPagedLookasideList.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2,
        char *a3)
{
  char *v3; // rsi
  char *v6; // rdx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2[5] )
  {
    if ( (*(_DWORD *)this & 0xFFFFFFFD) != 0 )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)this + 1),
        *(unsigned int *)a2);
      v3 -= 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)this + 15);
    v6 = v3;
    goto LABEL_5;
  }
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
  v8 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v7, (unsigned __int64)(a3 - 16), &v8) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
    _InterlockedIncrement64((volatile signed __int64 *)this + 17);
    v6 = v3 - 16;
LABEL_5:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a2 + 16), v6, a3);
  }
}
