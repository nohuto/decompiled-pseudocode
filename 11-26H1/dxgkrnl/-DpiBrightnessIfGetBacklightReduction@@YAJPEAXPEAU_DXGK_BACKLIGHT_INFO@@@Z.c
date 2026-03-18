/*
 * XREFs of ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x14024E0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetBacklightReduction(_QWORD *a1, struct _DXGK_BACKLIGHT_INFO *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v7; // ebx

  v2 = a1[8];
  v3 = 0LL;
  if ( *(_WORD *)(v2 + 4810) == 2 )
    v3 = v2 + 4808;
  if ( !v3 )
    return 3221225659LL;
  v7 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4536), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v3 + 32) )
  {
    v7 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_BACKLIGHT_INFO *))(v3 + 80))(*(_QWORD *)(v3 + 8), a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4536), 0);
  return (unsigned int)v7;
}
