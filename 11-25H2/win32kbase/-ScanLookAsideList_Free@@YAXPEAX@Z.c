/*
 * XREFs of ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x14000ED10
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall ScanLookAsideList_Free(char *a1)
{
  unsigned int *v2; // rsi
  __int64 UserSessionState; // rax
  void *v4; // r8
  __int64 v5; // rbx
  char *v6; // rdx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int **)(*(_QWORD *)(W32GetSessionState() + 88) + 4136LL);
  UserSessionState = W32GetUserSessionState();
  v5 = UserSessionState;
  if ( !*((_BYTE *)v2 + 5) )
  {
    if ( (*(_DWORD *)(UserSessionState + 72032) & 0xFFFFFFFD) != 0 )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72040),
        *v2);
      a1 -= 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 72152));
    v6 = a1;
    goto LABEL_5;
  }
  v7 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72120);
  v8 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v7, (unsigned __int64)(a1 - 16), &v8) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v5 + 72136));
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 72168));
    v6 = a1 - 16;
LABEL_5:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v2 + 4), v6, v4);
  }
}
