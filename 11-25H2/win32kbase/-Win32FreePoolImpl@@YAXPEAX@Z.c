/*
 * XREFs of ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001E7F0
 * Callers:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001E25C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x14019B0CC (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall Win32FreePoolImpl(char *Buffer)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdi
  int v4; // eax
  char *v5; // rcx
  int v6; // eax
  char *v7; // rax
  unsigned int v8; // ebx
  NSInstrumentation::CPointerHashTable *v9; // rcx
  struct W32_PUSH_LOCK *v10; // rcx
  void *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h]

  UserSessionState = W32GetUserSessionState();
  v3 = UserSessionState;
  if ( Buffer )
  {
    v4 = *(_DWORD *)(UserSessionState + 72032);
    if ( !v4 )
      goto LABEL_3;
    v6 = v4 - 1;
    if ( !v6 )
    {
      v7 = Buffer - 16;
      v8 = *((_DWORD *)Buffer - 4);
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 72152));
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v7);
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(v3 + 72040),
        v8);
      return;
    }
    if ( v6 == 1 )
    {
      v9 = *(NSInstrumentation::CPointerHashTable **)(v3 + 72120);
      if ( v9 )
      {
        if ( ((unsigned __int16)Buffer & 0xFFFu) >= 0x10uLL )
        {
          v11 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v9, (unsigned __int64)(Buffer - 16), &v11) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v3 + 72136));
            _InterlockedIncrement64((volatile signed __int64 *)(v3 + 72168));
            v5 = Buffer - 16;
            goto LABEL_5;
          }
        }
      }
      v10 = *(struct W32_PUSH_LOCK **)(v3 + 72128);
      if ( v10 )
      {
        v12 = 0LL;
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v10) )
        {
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v3 + 72136));
          _InterlockedIncrement64((volatile signed __int64 *)(v3 + 72168));
          goto LABEL_4;
        }
      }
LABEL_3:
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 72152));
LABEL_4:
      v5 = Buffer;
LABEL_5:
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v5);
    }
  }
}
