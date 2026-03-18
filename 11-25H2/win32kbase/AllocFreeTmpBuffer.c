/*
 * XREFs of AllocFreeTmpBuffer @ 0x140098060
 * Callers:
 *     NtGdiGetRegionData @ 0x1400207A0 (NtGdiGetRegionData.c)
 *     NtGdiExtCreateRegion @ 0x140096BE0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x140097540 (NtGdiOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140097BD0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BF974 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // rsi
  int v10; // eax
  __int64 Pool2; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v16; // rax
  char v17; // r15
  _QWORD v18[2]; // [rsp+20h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v20; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v21; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v23; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( v1 <= 0x1000 )
  {
    v6 = _InterlockedExchange64(*(volatile __int64 **)(v3 + 2200), 0LL);
    if ( v6 )
      return v6;
  }
  v6 = 0LL;
  if ( v1 >= 0xFFFFEFDF )
    return v6;
  v7 = v1 + 32;
  if ( !(_DWORD)v7 )
    return v6;
  UserSessionState = W32GetUserSessionState(v5, v4);
  v22 = 256LL;
  v20 = 1886213191;
  v23 = v7;
  v9 = UserSessionState + 72032;
  v10 = *(_DWORD *)(UserSessionState + 72032);
  switch ( v10 )
  {
    case 0:
      Pool2 = ExAllocatePool2(258LL, (unsigned int)v7, 1886213191LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
      goto LABEL_8;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v9,
             0x706D5447u)
        && v7 + 16 >= v7 )
      {
        v16 = (_QWORD *)ExAllocatePool2(v22 | 2, v7 + 16, v20);
        Pool2 = (__int64)v16;
        if ( !v16
          || (_InterlockedIncrement64((volatile signed __int64 *)(v9 + 112)),
              *v16 = 1886213191LL,
              Pool2 = (__int64)(v16 + 2),
              v16 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v9 + 8),
            0x706D5447uLL);
        }
        goto LABEL_8;
      }
      break;
    case 2:
      v21 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              (NSInstrumentation::CLeakTrackingAllocator *)v9,
              0x706D5447u,
              &v21) )
      {
        v18[0] = &v22;
        v18[1] = &v20;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                  v9,
                  v18,
                  &v23);
        goto LABEL_8;
      }
      v17 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 += 16LL;
        v17 = 1;
        v23 = v7;
      }
      Pool2 = ExAllocatePool2(258LL, v7, 1886213191LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 128));
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v9,
                                  Pool2,
                                  v21,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_8;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v9,
                                     Pool2,
                                     v21,
                                     BackTrace) )
        {
          goto LABEL_8;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
      break;
  }
  Pool2 = 0LL;
LABEL_8:
  if ( Pool2 )
  {
    v6 = Pool2 + 32;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      v2 = *CurrentThreadNonPaged;
    *(_QWORD *)(Pool2 + 16) = v6;
    *(_QWORD *)(Pool2 + 24) = FreeThreadBufferWithTag;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v13 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v14 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v14 + 8) != v13 )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v14;
      *(_QWORD *)(Pool2 + 8) = v13;
      *(_QWORD *)(v14 + 8) = Pool2;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = Pool2;
    }
    else
    {
      *(_QWORD *)(Pool2 + 8) = Pool2;
      *(_QWORD *)Pool2 = Pool2;
    }
  }
  return v6;
}
