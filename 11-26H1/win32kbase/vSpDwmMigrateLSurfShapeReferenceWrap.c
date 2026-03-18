/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x140248D00
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vSpDwmMigrateLSurfShapeReferenceWrap(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24)
                                                               + 664LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1, a2, a3);
  return result;
}
