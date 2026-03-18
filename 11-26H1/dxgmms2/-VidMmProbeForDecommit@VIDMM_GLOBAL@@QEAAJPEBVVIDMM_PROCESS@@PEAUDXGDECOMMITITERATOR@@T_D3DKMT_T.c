/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEBVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x140125168
 * Callers:
 *     VidMmProbeForDecommit @ 0x140048380 (VidMmProbeForDecommit.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x14010DEE4 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmProbeForDecommit(
        struct _KTHREAD **this,
        const struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  char v6; // bl
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 *v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-30h] BYREF

  v6 = (char)a4.0;
  v8 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, this + 5152);
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * *((unsigned int *)this[3] + 60));
  if ( v9 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, this + 5031);
    v10 = *(_QWORD *)(v9 + 88);
    *((_QWORD *)a3 + 3) = v10;
    *(_QWORD *)a3 = *(_QWORD *)(v9 + 104);
    if ( (v6 & 2) != 0 )
    {
LABEL_6:
      v8 = -1071775484;
    }
    else
    {
      while ( v10 != v9 + 88 )
      {
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct VIDMM_GLOBAL_ALLOC *)(v10 - 272),
               (v6 & 2) != 0) )
        {
          goto LABEL_6;
        }
        v11 = (__int64 *)*((_QWORD *)a3 + 3);
        v10 = *v11;
        *((_QWORD *)a3 + 3) = *v11;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return v8;
}
