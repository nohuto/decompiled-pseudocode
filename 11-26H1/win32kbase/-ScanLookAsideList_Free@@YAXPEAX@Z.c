/*
 * XREFs of ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x1400B8010
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall ScanLookAsideList_Free(char *a1)
{
  char *v1; // rdi
  __int64 v2; // rcx
  unsigned int *v3; // rsi
  int v4; // edx
  int v5; // r8d
  __int64 UserSessionState; // rax
  void *v7; // r8
  __int64 v8; // rbx
  int v9; // eax
  char *v10; // rdx
  NSInstrumentation::CPointerHashTable *v11; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = *(unsigned int **)(v2 + 4240);
  UserSessionState = W32GetUserSessionState(v2, v4, v5);
  v8 = UserSessionState;
  if ( !*((_BYTE *)v3 + 5) )
  {
    v9 = *(_DWORD *)(UserSessionState + 72016);
    if ( v9 )
    {
      if ( v9 != 2 )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v8 + 72024),
          *v3);
        v1 -= 16;
      }
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72136));
    v10 = v1;
    goto LABEL_4;
  }
  v11 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72104);
  v12 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v11, v1 - 16, &v12) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v8 + 72120));
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72152));
    v10 = v1 - 16;
LABEL_4:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v3 + 4), v10, v7);
  }
}
