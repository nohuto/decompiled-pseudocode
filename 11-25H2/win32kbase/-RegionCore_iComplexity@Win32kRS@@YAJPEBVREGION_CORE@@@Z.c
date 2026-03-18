/*
 * XREFs of ?RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z @ 0x14008BD58
 * Callers:
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14008BC70 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x14008BCD0 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_iComplexity(Win32kRS *this, const struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rdi
  char *v4; // rbx

  v2 = qword_1402A10B0;
  v4 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(v2) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)v2 + 72LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
