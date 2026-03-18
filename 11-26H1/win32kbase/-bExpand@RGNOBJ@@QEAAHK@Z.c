/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10
 * Callers:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x14000EC14 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int (__fastcall **v4)(const struct REGION_CORE *); // rdi
  const struct REGION_CORE *v5; // rsi
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v4 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v5 = (const struct REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
    v2 = (*(__int64 (__fastcall **)(const struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 64LL))(v5);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v4, v5);
  }
  else
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7, a2);
    if ( v7 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v7, this);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v7);
      v2 = 1;
    }
    else
    {
      EngSetLastError(8u);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
  }
  return v2;
}
