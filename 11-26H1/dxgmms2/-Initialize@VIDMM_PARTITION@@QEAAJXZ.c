/*
 * XREFs of ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1400AC184
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x140118A50 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140038588 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003F480 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall VIDMM_PARTITION::Initialize(VIDMM_PARTITION *this)
{
  DXGGLOBAL *Global; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // rdi
  __int64 v4; // rax
  bool v5; // cf
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx

  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v4 = 384 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 0x180uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = operator new[](v6, 0x63356956u, 256LL);
  if ( v7 )
  {
    v8 = v7 + 8;
    *(_QWORD *)v7 = MaximumGlobalAdapterCount;
    `vector constructor iterator'(
      (char *)(v7 + 8),
      384LL,
      (unsigned int)MaximumGlobalAdapterCount,
      (void (__fastcall *)(char *))VIDMM_PARTITION_ADAPTER_INFO::VIDMM_PARTITION_ADAPTER_INFO);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 5) = v8;
  if ( v8 )
    return 0LL;
  _InterlockedIncrement(&dword_14008A858);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 436;
  DxgkLogInternalTriageEvent(v9, 262145LL);
  return 3221225495LL;
}
