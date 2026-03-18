/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1400B81B0
 * Callers:
 *     <none>
 * Callees:
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall Win32FreeToPagedLookasideList(unsigned int *a1, char *a2, int a3)
{
  char *v3; // rsi
  __int64 UserSessionState; // rax
  void *v6; // r8
  __int64 v7; // rbx
  int v8; // eax
  char *v9; // rdx
  NSInstrumentation::CPointerHashTable *v10; // rcx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v7 = UserSessionState;
  if ( !*((_BYTE *)a1 + 5) )
  {
    v8 = *(_DWORD *)(UserSessionState + 72016);
    if ( v8 )
    {
      if ( v8 != 2 )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v7 + 72024),
          *a1);
        v3 -= 16;
      }
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 72136));
    v9 = v3;
    goto LABEL_4;
  }
  v10 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72104);
  v11 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v10, v3 - 16, &v11) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v7 + 72120));
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 72152));
    v9 = v3 - 16;
LABEL_4:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 4), v9, v6);
  }
}
