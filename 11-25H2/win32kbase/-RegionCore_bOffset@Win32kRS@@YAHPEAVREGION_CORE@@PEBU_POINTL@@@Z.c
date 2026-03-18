/*
 * XREFs of ?RegionCore_bOffset@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_POINTL@@@Z @ 0x1400DD318
 * Callers:
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401D2450 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bOffset(Win32kRS *this, struct REGION_CORE *a2, const struct _POINTL *a3)
{
  struct REGION_CORE *v3; // rdi
  char *v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // esi

  v3 = qword_1402A10B0;
  v6 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 2LL);
  v7 = *(_QWORD *)v3;
  v8 = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *))(v7 + 136))(this, a2);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v7 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
  return v8;
}
