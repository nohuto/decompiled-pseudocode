/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400B3E34
 * Callers:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400B3D24 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1400B3D64 (DirectComposition--Memory--Allocate_0.c)
 *     Win32AllocPoolWithQuota @ 0x1400B3DD0 (Win32AllocPoolWithQuota.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x1400B4084 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___(
        int *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __m128i *a4)
{
  int v4; // eax
  const void *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rax
  unsigned __int64 i; // rbp
  _QWORD *v13; // rax
  __int64 Pool2; // rdi
  char v15; // si
  __m128i v16; // [rsp+20h] [rbp-C8h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+F8h] [rbp+10h] BYREF

  v18 = a2;
  v4 = *a1;
  v6 = (const void *)a3;
  v7 = a2;
  if ( !*a1 )
  {
    result = ExAllocatePool2(
               *(_QWORD *)a4->m128i_i64[0] | 3LL,
               a2,
               *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
    if ( result )
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 14);
    return result;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      if ( (a3 & a1[20]) != a3 )
      {
LABEL_8:
        v16 = *a4;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                 a1,
                 &v16,
                 &v18);
      }
      v10 = (unsigned int)a1[21];
      v11 = a1 + 12;
      for ( i = 0LL; ; ++i )
      {
        if ( i >= v10 )
          goto LABEL_8;
        if ( *v11 == a3 )
          break;
        ++v11;
      }
      v15 = 0;
      if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
      {
        v15 = 1;
        v7 = a2 + 16;
      }
      Pool2 = ExAllocatePool2(
                *(_QWORD *)a4->m128i_i64[0] | 3LL,
                v7,
                *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)a1 + 16);
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  a1,
                                  Pool2,
                                  i,
                                  BackTrace) )
            return Pool2 + 16;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     a1,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)a1 + 17);
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)a1,
          a3)
    || v7 + 16 < v7 )
  {
    return 0LL;
  }
  v13 = (_QWORD *)ExAllocatePool2(
                    *(_QWORD *)a4->m128i_i64[0] | 3LL,
                    v7 + 16,
                    *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
  Pool2 = (__int64)v13;
  if ( !v13
    || (_InterlockedIncrement64((volatile signed __int64 *)a1 + 14),
        *v13 = v6,
        Pool2 = (__int64)(v13 + 2),
        v13 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)a1 + 1),
      v6);
  }
  return Pool2;
}
