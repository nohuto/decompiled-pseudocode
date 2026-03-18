/*
 * XREFs of MoveAndFlipDisplayingAllocation @ 0x1400BECE0
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254 (Feature_NotifyResidency2__private_ReportDeviceUsage.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x140055978 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 */

void __fastcall MoveAndFlipDisplayingAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 *v6; // r14
  unsigned __int64 v9; // r8
  int v10; // r8d
  unsigned __int16 v11; // ax
  _QWORD v12[4]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v13; // [rsp+78h] [rbp+17h]
  _QWORD v14[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v15; // [rsp+98h] [rbp+37h]
  __int64 v16; // [rsp+A0h] [rbp+3Fh]
  __int128 v17; // [rsp+A8h] [rbp+47h]

  v4 = *((_QWORD *)a2 + 8);
  v6 = *(__int64 **)a2;
  v14[0] = a3;
  v9 = *((_QWORD *)a2 + 2);
  v14[1] = 0LL;
  v12[1] = 0LL;
  v16 = 0LL;
  v15 = (v4 + 8) & -(__int64)(v4 != 0);
  v12[2] = v15;
  v12[0] = a4;
  v12[3] = 0LL;
  v17 = 0LL;
  v13 = 0LL;
  VIDMM_GLOBAL::MemoryTransfer(
    this,
    (struct VIDMM_GLOBAL_ALLOC *)v6,
    v9,
    0LL,
    (struct VIDMM_TRANSFER_PARAMETER *)v14,
    (struct VIDMM_TRANSFER_PARAMETER *)v12,
    0);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, (*((_DWORD *)a2 + 13) >> 2) & 0x3F);
  *((_QWORD *)a2 + 9) = a4;
  if ( (*(_DWORD *)v6[46] & 0x10000) != 0 )
  {
    Feature_NotifyResidency2__private_ReportDeviceUsage();
    if ( *(_QWORD *)(*((_QWORD *)this + 3) + 1776LL) )
    {
      VIDMM_GLOBAL::NotifyResidency2(
        this,
        *(struct VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5040) + 8LL * ((*((_DWORD *)a2 + 13) >> 2) & 0x3F)),
        (void ***)a2,
        1u,
        1,
        0,
        (*((_QWORD *)a2 + 2) >> 12) + ((*((_QWORD *)a2 + 2) & 0xFFFLL) != 0),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 8) + 70LL),
        (*((__int64 *)a2 + 9) >> 12) + ((*((_QWORD *)a2 + 9) & 0xFFFLL) != 0),
        0LL);
    }
    else
    {
      v11 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 8));
      VIDMM_GLOBAL::NotifyResidency(this, (struct VIDMM_GLOBAL_ALLOC *)v6, 1u, v11, *((_QWORD *)a2 + 9));
    }
  }
  VidSchiUpdateFlipQueueEntriesForMove(
    *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
    v6[46],
    v10,
    *(_QWORD *)(*((_QWORD *)a2 + 8) + 24LL),
    *((_QWORD *)a2 + 9));
}
