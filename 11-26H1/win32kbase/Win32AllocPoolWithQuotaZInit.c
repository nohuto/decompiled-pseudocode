/*
 * XREFs of Win32AllocPoolWithQuotaZInit @ 0x1400B5830
 * Callers:
 *     <none>
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall Win32AllocPoolWithQuotaZInit(unsigned __int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdi
  unsigned __int64 *Pool2; // rax
  _DWORD *v10; // rax
  unsigned __int64 i; // r14
  char v12; // r15
  __int64 v13; // rsi
  PVOID BackTrace[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = W32GetUserSessionState(a1, a2, a3) + 72016;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
  {
    if ( v6 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v5,
             v3)
        && v4 + 16 >= v4 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(257LL, v4 + 16, (unsigned int)v3);
        v7 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v5 + 112)),
              *Pool2 = v3,
              v7 = (__int64)(Pool2 + 2),
              Pool2 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
            (const void *)v3);
        }
      }
      else
      {
        return 0LL;
      }
    }
    else if ( v6 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v5 + 80)) == (_DWORD)v3 )
      {
        v10 = (_DWORD *)(v5 + 48);
        v7 = 0LL;
        for ( i = 0LL; ; ++i )
        {
          if ( i >= *(unsigned int *)(v5 + 84) )
            goto LABEL_14;
          if ( *v10 == (_DWORD)v3 )
            break;
          ++v10;
        }
        v12 = 0;
        if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
        {
          v12 = 1;
          v4 += 16LL;
        }
        v13 = ExAllocatePool2(257LL, v4, (unsigned int)v3);
        if ( v13 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v12 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   v5,
                   (const void *)v13,
                   i,
                   (NSInstrumentation::CBackTrace *)BackTrace) )
            {
              return v13 + 16;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v5,
                                       v13,
                                       i,
                                       BackTrace) )
          {
            return v13;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
          _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v13);
        }
      }
      else
      {
LABEL_14:
        v7 = ExAllocatePool2(257LL, v4, (unsigned int)v3);
        if ( v7 )
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v7 = ExAllocatePool2(257LL, v4, (unsigned int)v3);
    if ( v7 )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
  }
  return v7;
}
