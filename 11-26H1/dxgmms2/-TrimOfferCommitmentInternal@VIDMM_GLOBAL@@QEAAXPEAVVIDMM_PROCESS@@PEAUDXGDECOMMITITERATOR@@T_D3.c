/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010DC98
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x14010DEE4 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        struct VIDMM_GLOBAL_ALLOC *a5,
        unsigned __int64 *a6)
{
  char v7; // bl
  unsigned __int64 v8; // rbp
  struct DXGDECOMMITITERATOR *v9; // r15
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  bool v17; // r15
  bool v18; // zf
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _BYTE v21[24]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v22[80]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v23; // [rsp+90h] [rbp+8h]
  struct VIDMM_GLOBAL_ALLOC *v25; // [rsp+B0h] [rbp+28h]

  v7 = (char)a4.0;
  v8 = (unsigned __int64)a5;
  v9 = a3;
  v12 = 0LL;
  v13 = *(_BYTE *)&a4.0 & 1;
  WdLogSingleEntry1(4LL, v13);
  WdLogGlobalForLineNumber = 27376;
  if ( (v7 & 1) != 0 )
  {
    v8 = (unsigned int)(dword_14008A610 << 20);
    if ( (unsigned __int64)a5 < v8 )
      v8 = (unsigned __int64)a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v21, this + 5152);
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * *((unsigned int *)this[3] + 60));
  if ( v14 && *(_QWORD *)(v14 + 104) == *(_QWORD *)v9 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, this + 5031);
    v15 = (_QWORD *)(v14 + 88);
    v23 = (_QWORD *)(v14 + 88);
    while ( 1 )
    {
      v16 = (_QWORD *)*((_QWORD *)v9 + 3);
      if ( v16 == v15 )
        break;
      v17 = 0;
      v25 = (struct VIDMM_GLOBAL_ALLOC *)(v16 - 34);
      *((_QWORD *)a3 + 3) = *v16;
      v18 = !VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct VIDMM_GLOBAL_ALLOC *)(v16 - 34),
               (v7 & 2) != 0);
      v15 = v23;
      if ( !v18 )
      {
        this[5654] = (struct _KTHREAD *)(v16 - 34);
        v19 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v20 = (_QWORD *)v16[1], (_QWORD *)*v20 != v16) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        *v16 = 0LL;
        this[5032] = 0LL;
        ExReleasePushLockExclusiveEx(this + 5031, 0LL);
        KeLeaveCriticalRegion();
        if ( VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, v25) )
        {
          v12 += *(_QWORD *)(*(_QWORD *)v25 + 16LL);
          v17 = v12 >= v8;
        }
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 5031));
        this[5654] = 0LL;
        if ( v17 )
          break;
        v15 = v23;
      }
      v9 = a3;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    *a6 = v12;
    WdLogSingleEntry3(4LL, a5, v12, v13);
    WdLogGlobalForLineNumber = 27460;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
}
