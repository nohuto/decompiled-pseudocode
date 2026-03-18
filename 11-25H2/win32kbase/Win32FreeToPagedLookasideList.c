/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1400109D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall Win32FreeToPagedLookasideList(unsigned int *a1, char *a2)
{
  __int64 UserSessionState; // rax
  void *v5; // r8
  __int64 v6; // rbx
  char *v7; // rdx
  NSInstrumentation::CPointerHashTable *v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState();
  v6 = UserSessionState;
  if ( !*((_BYTE *)a1 + 5) )
  {
    if ( (*(_DWORD *)(UserSessionState + 72032) & 0xFFFFFFFD) != 0 )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72040),
        *a1);
      a2 -= 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 72152));
    v7 = a2;
    goto LABEL_5;
  }
  v8 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72120);
  v9 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v8, (unsigned __int64)(a2 - 16), &v9) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v6 + 72136));
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 72168));
    v7 = a2 - 16;
LABEL_5:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 4), v7, v5);
  }
}
