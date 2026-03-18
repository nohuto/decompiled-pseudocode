/*
 * XREFs of ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001EA70
 * Callers:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14006D974 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401C24D8 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x14019B0CC (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Free(
        NSInstrumentation::CLeakTrackingAllocator *this,
        _DWORD *a2)
{
  unsigned int v3; // edi
  NSInstrumentation::CPointerHashTable *v4; // rcx
  struct W32_PUSH_LOCK *v5; // rcx
  char *v6; // rdi
  void *v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h]

  if ( a2 )
  {
    if ( *(_DWORD *)this )
    {
      if ( *(_DWORD *)this == 1 )
      {
        v3 = *(a2 - 4);
        _InterlockedIncrement64((volatile signed __int64 *)this + 15);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2 - 4);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)this + 1),
          v3);
      }
      else if ( *(_DWORD *)this == 2 )
      {
        v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
        if ( v4
          && ((unsigned __int16)a2 & 0xFFFu) >= 0x10uLL
          && (v6 = (char *)(a2 - 4),
              v8 = 0LL,
              NSInstrumentation::CPointerHashTable::Remove(v4, (unsigned __int64)(a2 - 4), &v8)) )
        {
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
          _InterlockedIncrement64((volatile signed __int64 *)this + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v6);
        }
        else
        {
          v5 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 12);
          if ( v5 && (v9 = 0LL, (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v5)) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
            _InterlockedIncrement64((volatile signed __int64 *)this + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)this + 15);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2);
          }
        }
      }
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 15);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(a2);
    }
  }
}
