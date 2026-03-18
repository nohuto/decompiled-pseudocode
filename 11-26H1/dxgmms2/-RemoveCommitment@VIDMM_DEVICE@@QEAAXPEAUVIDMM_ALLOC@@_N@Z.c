/*
 * XREFs of ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D498C
 * Callers:
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D3B70 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D47A8 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14012500C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140126BC0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::RemoveCommitment(VIDMM_GLOBAL **this, struct VIDMM_ALLOC *a2, char a3)
{
  _DWORD *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 **v12; // rdx

  v6 = **(_DWORD ***)a2;
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(*((_QWORD *)*this + 5040) + 8LL * ((*(_DWORD *)(*(_QWORD *)v6 + 52LL) >> 2) & 0x3F));
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = this;
    WdLogGlobalForLineNumber = 1848;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), struct VIDMM_ALLOC *, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v8 + 104LL))(
    v8,
    v7,
    RemoveCommitmentCb,
    a2,
    0,
    0,
    *(_QWORD *)(v7 + 16) >> 12);
  --v6[19];
  *((_DWORD *)a2 + 7) &= 0xFFFFFFEC;
  if ( dword_14008A5D0 )
    VIDMM_GLOBAL::ForceUncommitVirtualAddress(*this, (struct VIDMM_DEVICE *)this, a2);
  if ( a3 )
  {
    v10 = (__int64 *)((char *)a2 + 56);
    v11 = (__int64)*this + 3720;
    v12 = (__int64 **)*((_QWORD *)*this + 466);
    if ( *v12 != (__int64 *)v11 )
      __fastfail(3u);
    *v10 = v11;
    *((_QWORD *)a2 + 8) = v12;
    *v12 = v10;
    *(_QWORD *)(v11 + 8) = v10;
  }
}
