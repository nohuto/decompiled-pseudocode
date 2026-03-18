/*
 * XREFs of IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x140193F74
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsvSpDwmMigrateLSurfShapeReferenceSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 656LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
