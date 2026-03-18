/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z @ 0x1400B84FC
 * Callers:
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734 (-HMAllocateIsolatedType@@YAPEAXE_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(unsigned __int64 a1, __int16 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 *Pool2; // rax
  char v10; // r14
  _DWORD *v11; // rax
  unsigned __int64 i; // rbp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1;
  if ( (a2 & 0x200) == 0 )
  {
    v4 = *((unsigned int *)&unk_140255528 + 6 * a3);
    v5 = W32GetUserSessionState(3 * (unsigned int)a3, a2, a3) + 72016;
    v6 = *(_DWORD *)v5;
    if ( !*(_DWORD *)v5 )
      goto LABEL_3;
    if ( v6 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v5,
             v4)
        && v3 + 16 >= v3 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v3 + 16, (unsigned int)v4);
        v7 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v5 + 112)),
              *Pool2 = v4,
              v7 = (__int64)(Pool2 + 2),
              Pool2 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
            v4);
        }
        return (void *)v7;
      }
    }
    else if ( v6 == 2 )
    {
      if ( ((unsigned int)v4 & *(_DWORD *)(v5 + 80)) != (_DWORD)v4 )
      {
LABEL_3:
        v7 = ExAllocatePool2(256LL, v3, (unsigned int)v4);
        if ( v7 )
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
        return (void *)v7;
      }
      v11 = (_DWORD *)(v5 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v5 + 84) )
          goto LABEL_3;
        if ( *v11 == (_DWORD)v4 )
          break;
        ++v11;
      }
      v10 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v10 = 1;
        v3 += 16LL;
      }
      v7 = ExAllocatePool2(256LL, v3, (unsigned int)v4);
      if ( v7 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v10 && (unsigned __int64)(v7 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 v5,
                 (const void *)v7,
                 i,
                 (NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v7 += 16LL;
            return (void *)v7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v5,
                                     v7,
                                     i,
                                     BackTrace) )
        {
          return (void *)v7;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v7);
      }
    }
    return 0LL;
  }
  return HMAllocateIsolatedType(a3, a1);
}
