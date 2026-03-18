/*
 * XREFs of ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1401FCF08
 * Callers:
 *     Win32QueryPoolSize @ 0x1401EB560 (Win32QueryPoolSize.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B73C4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x14013589C (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140168108 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 */

SIZE_T __fastcall NSInstrumentation::CLeakTrackingAllocator::QueryPoolSize(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2,
        int a3)
{
  __int64 v6; // rdi
  const void **v7; // rbx
  char *v8; // rcx
  unsigned __int64 QuotaCharged; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_DWORD *)this )
    goto LABEL_8;
  if ( *(_DWORD *)this == 1 )
  {
    v8 = a2 - 16;
    goto LABEL_14;
  }
  if ( *(_DWORD *)this != 2 )
    return 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, a3, &QuotaCharged) )
    goto LABEL_8;
  v6 = *((_QWORD *)this + 11);
  if ( !v6 || ((unsigned __int16)a2 & 0xFFFu) < 0x10uLL )
    goto LABEL_8;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    if ( !*(_DWORD *)(v6 + 28) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v6);
    RIMLockShared(v6);
    W32ReleasePushLockShared((struct W32_PUSH_LOCK *)v6);
  }
  v7 = NSInstrumentation::CPointerHashTable::LookupCommon(
         (NSInstrumentation::CPointerHashTable *)v6,
         (unsigned __int64)(a2 - 16));
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v6);
  if ( !v7 )
  {
LABEL_8:
    LOBYTE(QuotaCharged) = 0;
    return ExQueryPoolBlockSize(a2, (PBOOLEAN)&QuotaCharged);
  }
  v8 = a2 - 16;
LABEL_14:
  LOBYTE(QuotaCharged) = 0;
  return ExQueryPoolBlockSize(v8, (PBOOLEAN)&QuotaCharged) - 16;
}
