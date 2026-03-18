/*
 * XREFs of ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1401138E8
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400CEDF8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14011E6E0 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_DEVICE::AddCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax

  v4 = **(_DWORD ***)a2;
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40320LL) + 8LL * ((*(_DWORD *)(*(_QWORD *)v4 + 52LL) >> 2) & 0x3F));
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = this;
    WdLogGlobalForLineNumber = 1777;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), struct VIDMM_ALLOC *, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v6 + 104LL))(
    v6,
    v5,
    AddCommitmentCb,
    a2,
    0,
    0,
    *(_QWORD *)(v5 + 16) >> 12);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
  ++v4[19];
  *((_DWORD *)a2 + 7) |= 0x10u;
}
