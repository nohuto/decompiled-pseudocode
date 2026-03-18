/*
 * XREFs of ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14001D774
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14009BB1C (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_get_sizeScan(Win32kRS *this, const struct REGION_CORE *a2)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  char *v4; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v4 = (char *)BaseRustGlobals + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)BaseRustGlobals + 216LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)BaseRustGlobals;
}
