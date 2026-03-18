/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14012981C
 * Callers:
 *     VidMmCreateProcess @ 0x14003F240 (VidMmCreateProcess.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140038588 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmCalculateHeapPerNumaNodeArraySize@@YAKXZ @ 0x1400A4BFC (-VidMmCalculateHeapPerNumaNodeArraySize@@YAKXZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x14011688C (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x140118A50 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(struct VIDMM_PARTITION **this, struct DXGPROCESS *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  struct VIDMM_PARTITION *v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  __int64 v17; // rax
  struct VIDMM_PARTITION *v18; // rcx
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rax
  DXGGLOBAL *Global; // rax
  __int64 v23; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr10_8
  __int64 v25; // rax
  int v26; // eax

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 269;
  }
  v5 = *((_DWORD *)a2 + 102);
  if ( (v5 & 0x100) != 0 )
  {
    v6 = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 74) + 608LL);
  }
  else if ( (v5 & 0x80u) != 0 )
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 76);
  }
  else
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 7);
  }
  this[2] = v6;
  this[3] = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 8) + 80LL);
  this[9] = a2;
  v7 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(136LL, 0x34346956u, 64LL);
  if ( v7 )
    v8 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v7, (struct VIDMM_PROCESS *)this);
  else
    v8 = 0LL;
  this[10] = v8;
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_14008A76C);
    WdLogSingleEntry0(6LL);
    v10 = 287;
LABEL_13:
    WdLogGlobalForLineNumber = v10;
    DxgkLogInternalTriageEvent(v9, 262145LL);
    return 3221225495LL;
  }
  if ( (*((_DWORD *)a2 + 102) & 0x100) != 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a2 + 74) + 64LL);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 8);
    else
      v13 = 0LL;
    this[5] = *(struct VIDMM_PARTITION **)(v13 + 40);
    this[7] = *(struct VIDMM_PARTITION **)(v13 + 56);
    *((_DWORD *)this + 16) = *(_DWORD *)(v13 + 64);
    this[6] = *(struct VIDMM_PARTITION **)(v13 + 48);
  }
  else
  {
    v14 = VidMmCalculateHeapPerNumaNodeArraySize();
    *((_DWORD *)this + 16) = v14;
    v16 = v14;
    v15 = 8LL * v14;
    if ( !is_mul_ok(v16, 8uLL) )
      v15 = -1LL;
    v17 = operator new[](v15, 0x30316956u, 64LL);
    this[5] = (struct VIDMM_PARTITION *)v17;
    if ( !v17 )
    {
      _InterlockedIncrement(&dword_14008A7C4);
      WdLogSingleEntry0(6LL);
      v10 = 323;
      goto LABEL_13;
    }
    if ( (*((_DWORD *)a2 + 102) & 0x80) != 0 )
    {
      v18 = (struct VIDMM_PARTITION *)operator new(16LL, 0x61326956u, 64LL);
      if ( v18 )
      {
        *((_QWORD *)v18 + 1) = 0LL;
        *(_QWORD *)v18 = &VIDMM_PARAVIRTUALIZATION_HEAP::`vftable';
      }
      else
      {
        v18 = 0LL;
      }
      this[6] = v18;
      if ( !v18 )
      {
        _InterlockedIncrement(&dword_14008A8E4);
        WdLogSingleEntry0(6LL);
        v10 = 338;
        goto LABEL_13;
      }
      v19 = (*(__int64 (__fastcall **)(struct VIDMM_PARTITION *, struct VIDMM_PARTITION **, _QWORD))(*(_QWORD *)v18 + 8LL))(
              v18,
              this,
              0LL);
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(3LL, this);
        result = (unsigned int)v19;
        WdLogGlobalForLineNumber = 345;
        return result;
      }
      v20 = 8LL * *((unsigned int *)this + 16);
      if ( !is_mul_ok(*((unsigned int *)this + 16), 8uLL) )
        v20 = -1LL;
      v21 = operator new[](v20, 0x63316956u, 64LL);
      this[7] = (struct VIDMM_PARTITION *)v21;
      if ( !v21 )
      {
        _InterlockedIncrement(&dword_14008A8CC);
        WdLogSingleEntry0(6LL);
        v10 = 357;
        goto LABEL_13;
      }
    }
    else
    {
      this[7] = (struct VIDMM_PARTITION *)g_ppSystemHeapPerNumaNode;
      this[6] = 0LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v23 = 8 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 8uLL) )
    v23 = -1LL;
  v25 = operator new[](v23, 0x33316956u, 256LL);
  this[4] = (struct VIDMM_PARTITION *)v25;
  if ( !v25 )
  {
    _InterlockedIncrement(&dword_14008A758);
    WdLogSingleEntry0(6LL);
    v10 = 383;
    goto LABEL_13;
  }
  if ( (*((_DWORD *)a2 + 102) & 2) != 0 )
  {
    *((_DWORD *)this + 34) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v26 = VidMmiOpenCurrentPartition((struct VIDMM_PROCESS *)this, this + 42);
  if ( v26 < 0 )
    return (unsigned int)v26;
  return v2;
}
