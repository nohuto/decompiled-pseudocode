/*
 * XREFs of ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1400B8270
 * Callers:
 *     Win32UAFMFreeToPagedLookasideList @ 0x1401EAD50 (Win32UAFMFreeToPagedLookasideList.c)
 * Callees:
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
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
    if ( *(_DWORD *)this )
    {
      if ( *(_DWORD *)this != 2 )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)this + 1),
          *(unsigned int *)a2);
        v3 -= 16;
      }
    }
    _InterlockedIncrement64((volatile signed __int64 *)this + 15);
    v6 = v3;
    goto LABEL_4;
  }
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
  v8 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v7, a3 - 16, &v8) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
    _InterlockedIncrement64((volatile signed __int64 *)this + 17);
    v6 = v3 - 16;
LABEL_4:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a2 + 16), v6, a3);
  }
}
