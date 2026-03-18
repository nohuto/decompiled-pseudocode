/*
 * XREFs of ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D3B70
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E9E4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011C0EC (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D498C (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2, bool a3)
{
  __int64 *v6; // rsi
  __int64 v7; // rbp
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rax

  v6 = *(__int64 **)*a2;
  v7 = *v6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 13153;
  }
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, a3);
  if ( !*((_DWORD *)v6 + 19) )
  {
    v8 = (_DWORD *)v6[46];
    if ( (*v8 & 0x40000000) == 0 && !v8[4] && (*(_DWORD *)v6[46] & 0x20000) == 0 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*v6 + 52) >> 2) & 0x3F));
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 256LL))(v9, v7);
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0x_EtwWriteTransfer(v10, &EventMarkAllocation, v11, a2);
      v12 = *(_QWORD *)(v7 + 16);
      _InterlockedIncrement((volatile signed __int32 *)this + 1804);
      _InterlockedAdd64((volatile signed __int64 *)this + 903, v12);
    }
  }
}
