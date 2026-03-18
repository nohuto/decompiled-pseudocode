/*
 * XREFs of ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C4338
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C44D0 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

RustAutoHotpatchLockSH *__fastcall RustAutoHotpatchLockSH::RustAutoHotpatchLockSH(RustAutoHotpatchLockSH *this)
{
  struct W32_PUSH_LOCK *v2; // rcx

  v2 = (struct REGION_CORE *)((char *)qword_1402A10B0 + 8);
  *(_QWORD *)this = (char *)qword_1402A10B0 + 8;
  W32AcquirePushLockSharedEx(v2, 2u);
  return this;
}
