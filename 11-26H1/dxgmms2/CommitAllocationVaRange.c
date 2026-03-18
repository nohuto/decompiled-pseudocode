/*
 * XREFs of CommitAllocationVaRange @ 0x140038DCC
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1400A351C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     FlushTlbFromContext @ 0x140038EC8 (FlushTlbFromContext.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CommitAllocationVaRange(
        __int64 a1,
        CVirtualAddressAllocator *a2,
        __int64 ***a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // rdx
  int (__fastcall *v9)(__int64, __int64, int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *), _QWORD *, int, _DWORD, _DWORD); // rax
  __int64 v10; // rdi
  _QWORD v12[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  char v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  __m128i si128; // [rsp+68h] [rbp-20h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v8 = ***a3;
  v9 = *(int (__fastcall **)(__int64, __int64, int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *), _QWORD *, int, _DWORD, _DWORD))(*(_QWORD *)a1 + 104LL);
  v12[1] = a4;
  v12[0] = a2;
  v10 = v9(a1, v8, CommitAllocationVirtualAddressCb, v12, 2, 0, *(_QWORD *)(v8 + 16) >> 12);
  FlushTlbFromContext(a2);
  if ( (int)v10 < 0 )
  {
    WdLogSingleEntry3(3LL, v10, a3, a4);
    WdLogGlobalForLineNumber = 563;
    *a5 = v13;
  }
  return (unsigned int)v10;
}
