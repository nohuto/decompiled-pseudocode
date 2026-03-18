/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5CF0
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400F5BF0 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct VIDMM_LOCAL_ALLOC *a2, char a3)
{
  _DWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v9; // rdx
  struct VIDMM_LOCAL_ALLOC **v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rcx

  v3 = (_DWORD *)((char *)a2 + 28);
  v4 = *(_QWORD **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = (unsigned int)*v3;
    WdLogGlobalForLineNumber = 13013;
  }
  if ( !a3 )
  {
    *((_DWORD *)v4 + 8) |= 1u;
    ++*((_DWORD *)a2 + 16);
    ++*((_DWORD *)v4 + 58);
  }
  if ( (*v3)-- != 1 )
    return;
  if ( *((int *)a2 + 17) > 0
    && (v11 = -*((_DWORD *)a2 + 17), (int)(v11 + _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 46, v11)) < 0)
    && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  else
  {
    if ( (v4[4] & 0x20) != 0 )
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, a3);
    --*((_DWORD *)v4 + 32);
    v9 = *((_QWORD *)a2 + 6);
    if ( *(struct VIDMM_LOCAL_ALLOC **)(v9 + 8) != (struct VIDMM_LOCAL_ALLOC *)((char *)a2 + 48)
      || (v10 = (struct VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 7), *v10 != (struct VIDMM_LOCAL_ALLOC *)((char *)a2 + 48)) )
    {
LABEL_23:
      __fastfail(3u);
    }
    *v10 = (struct VIDMM_LOCAL_ALLOC *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( !*((_DWORD *)v4 + 18) )
      goto LABEL_12;
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*v4 + 52LL) >> 2) & 0x3F));
  (*(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(), __int64, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v12 + 104LL))(
    v12,
    *v4,
    SubtractResidencyPerfCountersCB,
    304LL * ((unsigned __int8)*(_DWORD *)(*v4 + 52LL) >> 2)
  + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL)
                          + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
              + 8LL)
  + 8LL,
    0,
    0,
    *(_QWORD *)(*v4 + 16LL) >> 12);
LABEL_12:
  if ( (*(_DWORD *)v4[46] & 0x20000000) != 0 && a2 == (struct VIDMM_LOCAL_ALLOC *)v4[6] && (v4[4] & 4) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 26LL, a2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_23;
  }
  if ( a3 )
  {
    *((_BYTE *)a2 + 24) |= 2u;
    operator delete(a2);
  }
}
