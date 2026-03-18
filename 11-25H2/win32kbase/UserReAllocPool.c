/*
 * XREFs of UserReAllocPool @ 0x14001E320
 * Callers:
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU?$Win32RawOptionalLockedItem@PEAUtagTHREADINFO@@$1?Win32FreePool@@YAXPEAX@Z@@PEAUtagKL@@@Z @ 0x1400F4820 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU-$Win32RawOptionalLockedItem@PEAUtagTHREADIN.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z @ 0x1401AD160 (-GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x14022411C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x14019B0CC (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall UserReAllocPool(char *Src, size_t Size, size_t a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  __int64 UserSessionState; // rax
  size_t v9; // rdx
  __int64 v10; // rdi
  int v11; // eax
  __int64 Pool2; // rbx
  __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 *v16; // rax
  int v17; // eax
  unsigned int v18; // edi
  _DWORD *v19; // rax
  unsigned __int64 i; // r13
  NSInstrumentation::CPointerHashTable *v21; // rcx
  struct W32_PUSH_LOCK *v22; // rcx
  char v23; // r12
  void *v24[2]; // [rsp+20h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = a4;
  UserSessionState = W32GetUserSessionState();
  v9 = a3;
  v10 = UserSessionState + 72032;
  v11 = *(_DWORD *)(UserSessionState + 72032);
  if ( !v11 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(256LL, a3, (unsigned int)v4);
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
      v19 = (_DWORD *)(v10 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v10 + 84) )
          goto LABEL_2;
        if ( *v19 == (_DWORD)v4 )
          break;
        ++v19;
      }
      v23 = 0;
      if ( a3 < 0x1000 || (a3 & 0xFFF) != 0 )
      {
        v23 = 1;
        v9 = a3 + 16;
      }
      Pool2 = ExAllocatePool2(256LL, v9, (unsigned int)v4);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v10 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
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
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v10 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v10,
          v4)
    || a3 + 16 < a3 )
  {
    return 0LL;
  }
  v16 = (unsigned __int64 *)ExAllocatePool2(256LL, a3 + 16, (unsigned int)v4);
  Pool2 = (__int64)v16;
  if ( !v16
    || (_InterlockedIncrement64((volatile signed __int64 *)(v10 + 112)),
        *v16 = v4,
        Pool2 = (__int64)(v16 + 2),
        v16 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v10 + 8),
      v4);
  }
LABEL_4:
  if ( Pool2 )
  {
LABEL_5:
    if ( Size <= a3 )
      a3 = Size;
    memmove((void *)Pool2, Src, a3);
    if ( Src )
    {
      v13 = W32GetUserSessionState();
      v14 = *(_DWORD *)(v13 + 72032);
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( !v17 )
        {
          v18 = *((_DWORD *)Src - 4);
          _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72152));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Src - 16);
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v13 + 72040),
            v18);
          return Pool2;
        }
        if ( v17 != 1 )
          return Pool2;
        v21 = *(NSInstrumentation::CPointerHashTable **)(v13 + 72120);
        if ( v21 )
        {
          if ( ((unsigned __int16)Src & 0xFFFu) >= 0x10uLL )
          {
            v24[0] = 0LL;
            if ( NSInstrumentation::CPointerHashTable::Remove(v21, (unsigned __int64)(Src - 16), v24) )
            {
              NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v13 + 72136));
              _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72168));
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Src - 16);
              return Pool2;
            }
          }
        }
        v22 = *(struct W32_PUSH_LOCK **)(v13 + 72128);
        if ( v22 )
        {
          v24[1] = 0LL;
          if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v22) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v13 + 72136));
            _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72168));
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Src);
            return Pool2;
          }
        }
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72152));
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Src);
    }
  }
  return Pool2;
}
