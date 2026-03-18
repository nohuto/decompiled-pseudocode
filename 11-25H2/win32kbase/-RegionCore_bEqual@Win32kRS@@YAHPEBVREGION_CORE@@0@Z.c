/*
 * XREFs of ?RegionCore_bEqual@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x1400960E0
 * Callers:
 *     GreEqualRgn @ 0x140095FC0 (GreEqualRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bEqual(
        Win32kRS *this,
        const struct REGION_CORE *a2,
        const struct REGION_CORE *a3)
{
  struct REGION_CORE *v3; // rdi
  char *v6; // rbx

  v3 = qword_1402A10B0;
  v6 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 2LL);
  LODWORD(v3) = (*(__int64 (__fastcall **)(Win32kRS *, const struct REGION_CORE *))(*(_QWORD *)v3 + 128LL))(this, a2);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
