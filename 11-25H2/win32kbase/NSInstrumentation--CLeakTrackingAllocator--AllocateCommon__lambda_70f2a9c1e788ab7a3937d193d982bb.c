/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401D2DE8
 * Callers:
 *     Win32AllocPoolWithPriorityZInit @ 0x1401C1DC0 (Win32AllocPoolWithPriorityZInit.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64_&_ @ 0x1401D3184 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___(
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
  __m128i v12; // xmm2
  _DWORD *v13; // xmm0_8
  __m128i v14; // xmm1
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  __int64 v18; // rdi
  char v19; // r14
  __m128i v20; // xmm2
  _DWORD *v21; // xmm0_8
  __m128i v22; // xmm1
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+3Ch] [rbp-C4h]
  _DWORD *v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v32; // [rsp+60h] [rbp-A0h]
  __m128i v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  PVOID BackTrace[24]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v36; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v37; // [rsp+168h] [rbp+68h] BYREF

  v37 = a2;
  v4 = *(_DWORD *)a1;
  v6 = a3;
  v7 = a2;
  v8 = (__int64)a1;
  if ( !*(_DWORD *)a1 )
  {
    v9 = *a4;
    v10 = a4[1].m128i_i64[0];
LABEL_3:
    v34 = v10;
    v33 = v9;
    return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64___(
             a1,
             &v33,
             &v37);
  }
  if ( v4 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(a1, a3) && v7 + 16 >= v7 )
    {
      v12 = *a4;
      v13 = (_DWORD *)a4[1].m128i_i64[0];
      v14 = *a4;
      v27 = 0;
      v32 = v13;
      v25 = 1LL;
      v15 = *(unsigned int *)_mm_srli_si128(v14, 8).m128i_u32[0];
      v16 = *(_QWORD *)v12.m128i_i64[0] & 0xFFFFFFFFFFFFFFFDuLL;
      v26 = *v13;
      v17 = (unsigned __int64 *)ExAllocatePool3(v16, v7 + 16, v15, &v25, 1);
      v18 = (__int64)v17;
      if ( !v17
        || (_InterlockedAdd64((volatile signed __int64 *)(v8 + 112), 1uLL),
            *v17 = v6,
            v18 = (__int64)(v17 + 2),
            v17 == (unsigned __int64 *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v8 + 8),
          v6);
      }
      return v18;
    }
  }
  else if ( v4 == 2 )
  {
    v36 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(a1, a3, &v36) )
    {
      v9 = *a4;
      a1 = (NSInstrumentation::CLeakTrackingAllocator *)v8;
      v10 = a4[1].m128i_i64[0];
      goto LABEL_3;
    }
    v19 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v7 += 16LL;
      v19 = 1;
      v37 = v7;
    }
    v20 = *a4;
    v21 = (_DWORD *)a4[1].m128i_i64[0];
    v22 = *a4;
    v31 = 0;
    v28 = v21;
    v29 = 1LL;
    v23 = *(unsigned int *)_mm_srli_si128(v22, 8).m128i_u32[0];
    v24 = *(_QWORD *)v20.m128i_i64[0] & 0xFFFFFFFFFFFFFFFDuLL;
    v30 = *v21;
    v18 = ExAllocatePool3(v24, v7, v23, &v29, 1);
    if ( v18 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 128), 1uLL);
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v19 && (unsigned __int64)(v18 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               v8,
               (const void *)v18,
               v36,
               (NSInstrumentation::CBackTrace *)BackTrace) )
        {
          return v18 + 16;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  v8,
                  v18,
                  v36,
                  (NSInstrumentation::CBackTrace *)BackTrace) )
      {
        return v18;
      }
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 136), 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v18);
    }
  }
  return 0LL;
}
