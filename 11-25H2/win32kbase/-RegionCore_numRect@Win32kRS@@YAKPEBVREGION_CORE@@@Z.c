/*
 * XREFs of ?RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140026FA4
 * Callers:
 *     ?GetRegionData@CRegion@@UEAAJPEAKPEAUtagRECT@@PEAW4Type@IRegion@@@Z @ 0x140026C10 (-GetRegionData@CRegion@@UEAAJPEAKPEAUtagRECT@@PEAW4Type@IRegion@@@Z.c)
 *     ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x140026E1C (-sizeSave@RGNCOREOBJ@@QEBAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_numRect(Win32kRS *this, const struct REGION_CORE *a2)
{
  struct REGION_CORE *v2; // rdi
  char *v4; // rbx

  v2 = qword_1402A10B0;
  v4 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(v2) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)v2 + 280LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
