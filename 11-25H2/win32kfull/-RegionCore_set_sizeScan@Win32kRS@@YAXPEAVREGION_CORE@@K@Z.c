/*
 * XREFs of ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x14032079C
 * Callers:
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009C5BC (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14009D0F4 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_set_sizeScan(Win32kRS *this, struct REGION_CORE *a2)
{
  unsigned int v2; // esi
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  struct W32_PUSH_LOCK *v5; // rbx
  __int64 v6; // rdi

  v2 = (unsigned int)a2;
  BaseRustGlobals = GetBaseRustGlobals();
  v5 = (const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8);
  W32AcquirePushLockSharedEx((const struct BaseRustGlobals *)((char *)BaseRustGlobals + 8), 2u);
  v6 = *(_QWORD *)BaseRustGlobals;
  (*(void (__fastcall **)(Win32kRS *, _QWORD))(v6 + 232))(this, v2);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)(v6 + 48), this);
  W32ReleasePushLockSharedEx(v5, 2LL);
}
