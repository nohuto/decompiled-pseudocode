/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401FC098
 * Callers:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1401FC760 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140168108 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e9237d413628__unsigned___int64_&_ @ 0x1401FC648 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __m128i *a4)
{
  int v4; // eax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // xmm1_8
  __m128i v12; // xmm1
  unsigned __int64 *v13; // rax
  __int64 v14; // rdi
  char v15; // r14
  __m128i v16; // xmm1
  __m128i v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h]
  __int32 *v19; // [rsp+60h] [rbp-A0h]
  PVOID BackTrace[24]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v21; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp+48h] BYREF

  v22 = a2;
  v4 = *(_DWORD *)a1;
  v6 = a3;
  v7 = a2;
  v8 = (__int64)a1;
  if ( !*(_DWORD *)a1 )
  {
    v9 = *a4;
    v10 = a4[1].m128i_i64[0];
LABEL_3:
    v18 = v10;
    v17 = v9;
    return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_0557cbb2832d1680ca92e9237d413628__unsigned___int64___(
             a1,
             &v17,
             &v22);
  }
  if ( v4 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(a1, a3) && v7 + 16 >= v7 )
    {
      v12 = *a4;
      v19 = (__int32 *)a4[1].m128i_i64[0];
      v17.m128i_i32[3] = 0;
      v17.m128i_i64[0] = 1LL;
      v17.m128i_i32[2] = *v19;
      v13 = (unsigned __int64 *)ExAllocatePool3(
                                  *(_QWORD *)v12.m128i_i64[0] | 2LL,
                                  v7 + 16,
                                  *(unsigned int *)_mm_srli_si128(v12, 8).m128i_u32[0],
                                  &v17,
                                  1);
      v14 = (__int64)v13;
      if ( !v13
        || (_InterlockedAdd64((volatile signed __int64 *)(v8 + 112), 1uLL),
            *v13 = v6,
            v14 = (__int64)(v13 + 2),
            v13 == (unsigned __int64 *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v8 + 8),
          v6);
      }
      return v14;
    }
  }
  else if ( v4 == 2 )
  {
    v21 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(a1, a3, &v21) )
    {
      v9 = *a4;
      a1 = (NSInstrumentation::CLeakTrackingAllocator *)v8;
      v10 = a4[1].m128i_i64[0];
      goto LABEL_3;
    }
    v15 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v15 = 1;
      v7 += 16LL;
    }
    v16 = *a4;
    v19 = (__int32 *)a4[1].m128i_i64[0];
    v17.m128i_i32[3] = 0;
    v17.m128i_i64[0] = 1LL;
    v17.m128i_i32[2] = *v19;
    v14 = ExAllocatePool3(
            *(_QWORD *)v16.m128i_i64[0] | 2LL,
            v7,
            *(unsigned int *)_mm_srli_si128(v16, 8).m128i_u32[0],
            &v17,
            1);
    if ( v14 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 128), 1uLL);
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v15 && (unsigned __int64)(v14 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               v8,
               (const void *)v14,
               v21,
               (NSInstrumentation::CBackTrace *)BackTrace) )
        {
          return v14 + 16;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  v8,
                  v14,
                  v21,
                  (NSInstrumentation::CBackTrace *)BackTrace) )
      {
        return v14;
      }
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 136), 1uLL);
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v14);
    }
  }
  return 0LL;
}
