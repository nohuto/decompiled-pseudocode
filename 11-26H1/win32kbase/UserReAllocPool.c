/*
 * XREFs of UserReAllocPool @ 0x140043400
 * Callers:
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x14011C7C0 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401CF2F0 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall UserReAllocPool(char *Src, size_t Size, size_t a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  size_t v5; // rsi
  __int64 UserSessionState; // rax
  size_t v9; // rdx
  __int64 v10; // rdi
  int v11; // eax
  __int64 Pool2; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // eax
  unsigned __int64 *v20; // rax
  char v21; // r12
  int v22; // eax
  unsigned int v23; // edi
  _DWORD *v24; // rax
  unsigned __int64 i; // r13
  NSInstrumentation::CPointerHashTable *v26; // rcx
  struct W32_PUSH_LOCK *v27; // rcx
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF
  void *v29; // [rsp+110h] [rbp+18h] BYREF

  v4 = (unsigned int)a4;
  v5 = a3;
  UserSessionState = W32GetUserSessionState(Src, Size, a3, a4);
  v9 = v5;
  v10 = UserSessionState + 72016;
  v11 = *(_DWORD *)(UserSessionState + 72016);
  if ( !v11 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(256LL, v5, (unsigned int)v4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v10 + 112));
    goto LABEL_4;
  }
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      if ( ((unsigned int)v4 & *(_DWORD *)(v10 + 80)) != (_DWORD)v4 )
        goto LABEL_2;
      v24 = (_DWORD *)(v10 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v10 + 84) )
          goto LABEL_2;
        if ( *v24 == (_DWORD)v4 )
          break;
        ++v24;
      }
      v21 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v21 = 1;
        v9 = v5 + 16;
      }
      Pool2 = ExAllocatePool2(256LL, v9, (unsigned int)v4);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v10 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v10,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v10,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          goto LABEL_6;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v10 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v10,
          v4)
    || v5 + 16 < v5 )
  {
    return 0LL;
  }
  v20 = (unsigned __int64 *)ExAllocatePool2(256LL, v5 + 16, (unsigned int)v4);
  Pool2 = (__int64)v20;
  if ( !v20
    || (_InterlockedIncrement64((volatile signed __int64 *)(v10 + 112)),
        *v20 = v4,
        Pool2 = (__int64)(v20 + 2),
        v20 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v10 + 8),
      (const void *)v4);
  }
LABEL_4:
  if ( Pool2 )
  {
LABEL_6:
    if ( Size <= v5 )
      v5 = Size;
    memmove((void *)Pool2, Src, v5);
    if ( Src )
    {
      v18 = W32GetUserSessionState(v15, v14, v16, v17);
      v19 = *(_DWORD *)(v18 + 72016);
      if ( v19 )
      {
        v22 = v19 - 1;
        if ( !v22 )
        {
          v23 = *((_DWORD *)Src - 4);
          _InterlockedIncrement64((volatile signed __int64 *)(v18 + 72136));
          _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(Src - 16);
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v18 + 72024),
            (const void *)v23);
          return Pool2;
        }
        if ( v22 != 1 )
          return Pool2;
        v26 = *(NSInstrumentation::CPointerHashTable **)(v18 + 72104);
        if ( v26 )
        {
          if ( ((unsigned __int16)Src & 0xFFFu) >= 0x10uLL )
          {
            v29 = 0LL;
            if ( NSInstrumentation::CPointerHashTable::Remove(v26, Src - 16, &v29) )
            {
              NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v18 + 72120));
              _InterlockedIncrement64((volatile signed __int64 *)(v18 + 72152));
              _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(Src - 16);
              return Pool2;
            }
          }
        }
        v27 = *(struct W32_PUSH_LOCK **)(v18 + 72112);
        if ( v27 )
        {
          v29 = 0LL;
          if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v27) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v18 + 72120));
            _InterlockedIncrement64((volatile signed __int64 *)(v18 + 72152));
            _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(Src);
            return Pool2;
          }
        }
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v18 + 72136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(Src);
    }
  }
  return Pool2;
}
