/*
 * XREFs of ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNMEMOBJ::vInit(RGNMEMOBJ *this)
{
  PVOID DeferredContext; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  const struct REGION_CORE *v10; // rdi
  const struct BaseRustExports *v11; // rbx

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v3 = *(_QWORD *)this;
  v4 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v10 = (const struct REGION_CORE *)(v4 & -(__int64)(v3 != 0));
    v11 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
    (*(void (__fastcall **)(const struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 120LL))(v10);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v11, v10);
  }
  else
  {
    v5 = -v3;
    v6 = v4 & -(__int64)(v5 != 0);
    v7 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 0x10) = 16LL;
    if ( v7 < 0x10 )
    {
      *(_QWORD *)((v4 & -(__int64)(v5 != 0)) + 0x10) = v7;
      RustOnZeroSizedScanCallback();
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    *(_DWORD *)(v6 + 24) = 1;
    *(_OWORD *)(v6 + 28) = 0LL;
    if ( DeferredContext )
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 208LL))(v6);
    else
      v8 = *(_QWORD *)v6;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0x80000000;
    *(_QWORD *)(v8 + 8) = 0x7FFFFFFFLL;
  }
  *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
  v9 = (_QWORD *)(*(_QWORD *)this + 80LL);
  v9[1] = v9;
  *v9 = v9;
}
