/*
 * XREFs of ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400FDB74
 * Callers:
 *     _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401B463C (_lambda_7830472d83fd6962041fe396e2298a02_--operator().c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 Pool2; // rbx
  unsigned __int64 *v11; // rax
  char v12; // r15
  unsigned __int64 v13; // rcx
  _DWORD *v14; // rax
  unsigned __int64 i; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = *(_DWORD *)this;
  v5 = a3;
  v6 = a4;
  if ( !*(_DWORD *)this )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)this + 14);
    return Pool2;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      if ( (a4 & *((_DWORD *)this + 20)) != a4 )
        goto LABEL_2;
      v13 = *((unsigned int *)this + 21);
      v14 = (_DWORD *)((char *)this + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= v13 )
          goto LABEL_2;
        if ( *v14 == a4 )
          break;
        ++v14;
      }
      v12 = 0;
      if ( a3 < 0x1000 || (a3 & 0xFFF) != 0 )
      {
        v12 = 1;
        v5 = a3 + 16;
      }
      Pool2 = ExAllocatePool2(a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, v5, a4);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 16);
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)this,
                 (const void *)Pool2,
                 i,
                 (NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     this,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)this + 17);
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(this, a4) || v5 + 16 < v5 )
    return 0LL;
  v11 = (unsigned __int64 *)ExAllocatePool2(a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, v5 + 16, (unsigned int)v6);
  Pool2 = (__int64)v11;
  if ( !v11
    || (_InterlockedIncrement64((volatile signed __int64 *)this + 14),
        *v11 = v6,
        Pool2 = (__int64)(v11 + 2),
        v11 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)this + 1),
      v6);
  }
  return Pool2;
}
