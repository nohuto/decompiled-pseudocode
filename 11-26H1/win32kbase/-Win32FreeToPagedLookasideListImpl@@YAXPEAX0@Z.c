/*
 * XREFs of ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4
 * Callers:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     FreeQueue @ 0x1400B7FDC (FreeQueue.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1401C9A7C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1401C9D24 (NullifyLookasideRef.c)
 * Callees:
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall Win32FreeToPagedLookasideListImpl(char *a1, char *a2, int a3)
{
  char *v3; // rdi
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
  if ( !a1[5] )
  {
    v8 = *(_DWORD *)(UserSessionState + 72016);
    if ( v8 )
    {
      if ( v8 != 2 )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v7 + 72024),
          *(unsigned int *)a1);
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
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 16), v9, v6);
  }
}
