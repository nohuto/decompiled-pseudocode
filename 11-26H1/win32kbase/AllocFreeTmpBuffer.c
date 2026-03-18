/*
 * XREFs of AllocFreeTmpBuffer @ 0x1400110D0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1400101C0 (NtGdiExtCreateRegion.c)
 *     NtGdiGetRegionData @ 0x1400102B0 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140010C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *Pool2; // rax
  char v14; // r12
  _DWORD *v15; // rax
  unsigned __int64 i; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( v1 <= 0x1000 )
  {
    v4 = _InterlockedExchange64(*(volatile __int64 **)(v3 + 2288), 0LL);
    if ( v4 )
      return v4;
  }
  v4 = 0LL;
  if ( v1 >= 0xFFFFEFDF )
    return v4;
  v5 = v1 + 32;
  if ( !(_DWORD)v5 )
    return v4;
  v6 = W32GetUserSessionState() + 72016;
  v7 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
    goto LABEL_6;
  if ( v7 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
           (NSInstrumentation::CLeakTrackingAllocator *)v6,
           0x706D5447u)
      && v5 + 16 >= v5 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(258LL, v5 + 16, 1886213191LL);
      v8 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
            *Pool2 = 1886213191LL,
            v8 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
          (const void *)0x706D5447);
      }
      goto LABEL_8;
    }
LABEL_32:
    v8 = 0LL;
    goto LABEL_8;
  }
  if ( v7 != 2 )
    goto LABEL_32;
  if ( (*(_DWORD *)(v6 + 80) & 0x706D5447) != 0x706D5447 )
  {
LABEL_6:
    v8 = ExAllocatePool2(258LL, v5, 1886213191LL);
    if ( v8 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    goto LABEL_8;
  }
  v15 = (_DWORD *)(v6 + 48);
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(unsigned int *)(v6 + 84) )
      goto LABEL_6;
    if ( *v15 == 1886213191 )
      break;
    ++v15;
  }
  v14 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v14 = 1;
    v5 += 16LL;
  }
  v8 = ExAllocatePool2(258LL, v5, 1886213191LL);
  if ( !v8 )
    goto LABEL_32;
  _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v14 || (unsigned __int64)(v8 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v6,
                            v8,
                            i,
                            BackTrace) )
      goto LABEL_8;
    goto LABEL_31;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v6,
                           v8,
                           i,
                           BackTrace) )
  {
LABEL_31:
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
    _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v8);
    goto LABEL_32;
  }
  v8 += 16LL;
LABEL_8:
  if ( v8 )
  {
    v4 = v8 + 32;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *(_QWORD *)(v8 + 16) = v4;
    *(_QWORD *)(v8 + 24) = FreeThreadBufferWithTag;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v10 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v11 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v11 + 8) != v10 )
        __fastfail(3u);
      *(_QWORD *)v8 = v11;
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)(v11 + 8) = v8;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = v8;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = v8;
      *(_QWORD *)v8 = v8;
    }
  }
  return v4;
}
