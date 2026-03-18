/*
 * XREFs of ?MakeOneVirtualAddressRangeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_K1PEAPEAU2@PEA_N@Z @ 0x14009FFB8
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x14002FE80 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     FlushTlbFromContext @ 0x140038EC8 (FlushTlbFromContext.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeResident(
        VIDMM_GLOBAL *this,
        __int64 ***a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned int v7; // r13d
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  struct VIDMM_ALLOC **v11; // rcx
  struct VIDMM_ALLOC *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  _QWORD *v15; // rbx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // eax
  _BYTE v26[24]; // [rsp+40h] [rbp-88h] BYREF
  bool *v27; // [rsp+58h] [rbp-70h] BYREF
  __int128 v28; // [rsp+60h] [rbp-68h]
  char v29; // [rsp+70h] [rbp-58h]
  int v30; // [rsp+78h] [rbp-50h] BYREF
  __m128i si128; // [rsp+80h] [rbp-48h]
  __int64 v32; // [rsp+D0h] [rbp+8h]
  __int64 v33; // [rsp+D8h] [rbp+10h]
  struct VIDMM_ALLOC **v36; // [rsp+F0h] [rbp+28h]
  bool *VirtualAddressAllocator; // [rsp+F8h] [rbp+30h]

  v7 = 0;
  v8 = **a2;
  v33 = *v8;
  v9 = (*(_DWORD *)(*v8 + 52) >> 2) & 0x3F;
  VirtualAddressAllocator = (bool *)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      (VIDMM_PROCESS *)(*a2)[1],
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      (*(_DWORD *)(*v8 + 52) >> 2) & 0x3F);
  v10 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8 * v9);
  v28 = 0LL;
  v27 = VirtualAddressAllocator;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v29 = 0;
  v30 = 0;
  v32 = v10;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v26,
    (struct DXGPUSHLOCK *const)(VirtualAddressAllocator + 64),
    *((_QWORD *)VirtualAddressAllocator + 9) != (_QWORD)KeGetCurrentThread());
  v11 = (struct VIDMM_ALLOC **)(a2 + 81);
  v12 = (struct VIDMM_ALLOC *)a2[81];
  v36 = (struct VIDMM_ALLOC **)(a2 + 81);
  if ( v12 != (struct VIDMM_ALLOC *)(a2 + 81) )
  {
    v13 = a4;
    v14 = a3 + a4;
    do
    {
      v15 = (_QWORD *)((char *)v12 - 32);
      v16 = *((_DWORD *)v12 + 12);
      v17 = *((_DWORD *)v12 + 20) + v16 - *((_DWORD *)v12 + 18);
      v18 = *((_QWORD *)v12 + 9);
      v19 = *((_QWORD *)v12 + 10);
      v20 = *((_QWORD *)v12 + 6);
      if ( !v13 )
        goto LABEL_13;
      if ( a3 >= v20 )
      {
        if ( a3 < v20 + v19 - v18 )
        {
          v15[10] = a3;
          v21 = v19;
          v22 = a3 + v18 - v20;
          v23 = v22 + v13;
          v15[13] = v22;
          if ( v19 >= v23 )
            v21 = v23;
          goto LABEL_12;
        }
      }
      else if ( v14 > v20 )
      {
        v21 = *((_QWORD *)v12 + 10);
        if ( v19 >= v14 + v18 - v20 )
          v21 = v14 + v18 - v20;
LABEL_12:
        v15[14] = v21;
LABEL_13:
        *(_QWORD *)&v28 = (char *)v12 - 32;
        v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, _QWORD *), bool **, int, unsigned int, unsigned int))(*(_QWORD *)v32 + 104LL))(
                v32,
                v33,
                CommitAllocationVirtualAddressCb,
                &v27,
                2,
                v16 >> 12,
                v17 >> 12);
        v15[13] = v18;
        v7 = v24;
        v15[14] = v19;
        v15[10] = v20;
        if ( v24 < 0 )
          break;
        v13 = a4;
        v11 = v36;
      }
      v12 = *(struct VIDMM_ALLOC **)v12;
    }
    while ( v12 != (struct VIDMM_ALLOC *)v11 );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  FlushTlbFromContext((CVirtualAddressAllocator *)VirtualAddressAllocator, (__int64)&v30);
  return v7;
}
