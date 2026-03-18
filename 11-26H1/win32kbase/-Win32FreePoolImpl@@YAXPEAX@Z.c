/*
 * XREFs of ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x140041D84
 * Callers:
 *     ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1400406E8 (-FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 */

void __fastcall Win32FreePoolImpl(_DWORD *Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 UserSessionState; // rax
  __int64 v6; // rdi
  char *v7; // rcx
  char *v8; // rcx
  unsigned int v9; // ebx
  NSInstrumentation::CPointerHashTable *v10; // rcx
  struct W32_PUSH_LOCK *v11; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp+10h]

  UserSessionState = W32GetUserSessionState(Buffer, a2, a3, a4);
  v13 = Buffer;
  v6 = UserSessionState + 72016;
  if ( Buffer )
  {
    switch ( *(_DWORD *)v6 )
    {
      case 0:
        goto LABEL_3;
      case 1:
        v8 = (char *)(Buffer - 4);
        v9 = *(Buffer - 4);
        _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v8);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
          (const void *)v9);
        return;
      case 2:
        v10 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72104);
        if ( v10 )
        {
          if ( ((unsigned __int16)Buffer & 0xFFFu) >= 0x10uLL )
          {
            v12 = 0LL;
            if ( NSInstrumentation::CPointerHashTable::Remove(v10, Buffer - 4, &v12) )
            {
              NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v6 + 104));
              _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
              v7 = (char *)(Buffer - 4);
              goto LABEL_5;
            }
          }
        }
        v11 = *(struct W32_PUSH_LOCK **)(v6 + 96);
        if ( v11 )
        {
          v12 = 0LL;
          if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v11) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v6 + 104));
            _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
            goto LABEL_4;
          }
        }
LABEL_3:
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 120));
LABEL_4:
        v7 = (char *)Buffer;
LABEL_5:
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v7);
        break;
    }
  }
}
