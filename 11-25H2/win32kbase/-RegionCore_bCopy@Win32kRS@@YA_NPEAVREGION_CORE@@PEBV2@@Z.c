/*
 * XREFs of ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C44D0
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x14000DEB0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017D7A8 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C4338 (--0RustAutoHotpatchLockSH@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

bool __fastcall Win32kRS::RegionCore_bCopy(Win32kRS *this, struct REGION_CORE *a2, const struct REGION_CORE *a3)
{
  struct REGION_CORE *v3; // rbx
  __int64 v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = qword_1402A10B0;
  RustAutoHotpatchLockSH::RustAutoHotpatchLockSH((RustAutoHotpatchLockSH *)&v8);
  v6 = *(_QWORD *)v3;
  LOBYTE(v3) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *))(*(_QWORD *)v3 + 96LL))(this, a2);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v6 + 48), this);
  ExReleasePushLockSharedEx(v8, 2LL);
  KeLeaveCriticalRegion();
  return (char)v3;
}
