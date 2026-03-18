/*
 * XREFs of ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400430A0
 * Callers:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x140185044 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401EAFB8 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Free(
        NSInstrumentation::CLeakTrackingAllocator *this,
        _DWORD *a2)
{
  unsigned int v4; // edi
  NSInstrumentation::CPointerHashTable *v5; // rcx
  struct W32_PUSH_LOCK *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( *(_DWORD *)this )
    {
      if ( *(_DWORD *)this == 1 )
      {
        v4 = *(a2 - 4);
        _InterlockedIncrement64((volatile signed __int64 *)this + 15);
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(a2 - 4);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)this + 1),
          (const void *)v4);
      }
      else if ( *(_DWORD *)this == 2 )
      {
        v5 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
        if ( v5
          && ((unsigned __int16)a2 & 0xFFFu) >= 0x10uLL
          && (v7 = 0LL, NSInstrumentation::CPointerHashTable::Remove(v5, a2 - 4, &v7)) )
        {
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
          _InterlockedIncrement64((volatile signed __int64 *)this + 17);
          _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(a2 - 4);
        }
        else
        {
          v6 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 12);
          if ( v6 && (v7 = 0LL, (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v6)) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*((NSInstrumentation::CPrioritizedWriterLock **)this + 13));
            _InterlockedIncrement64((volatile signed __int64 *)this + 17);
            _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(a2);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)this + 15);
            _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(a2);
          }
        }
      }
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 15);
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(a2);
    }
  }
}
