/*
 * XREFs of ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x14009BA8C
 * Callers:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14007FBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x14009AD7C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x14009BA2C (-bRectl@RGNOBJ@@QEBAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_is_rect(Win32kRS *this, const struct REGION_CORE *a2)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rdi
  char *v4; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v4 = (char *)BaseRustGlobals + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)BaseRustGlobals + 8, 2LL);
  LODWORD(BaseRustGlobals) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)BaseRustGlobals + 64LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)BaseRustGlobals;
}
