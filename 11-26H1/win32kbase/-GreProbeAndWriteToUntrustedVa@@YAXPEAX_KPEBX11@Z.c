/*
 * XREFs of ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0
 * Callers:
 *     NtGdiGetRegionData @ 0x1400102B0 (NtGdiGetRegionData.c)
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     NtGdiGetRgnBox @ 0x1400230D0 (NtGdiGetRgnBox.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14003DB50 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     NtGdiGetCurrentDpiInfo @ 0x140087710 (NtGdiGetCurrentDpiInfo.c)
 *     NtGdiRectInRegion @ 0x1400A8230 (NtGdiRectInRegion.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1400FE9C4 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     NtGdiGetEntry @ 0x1401433C0 (NtGdiGetEntry.c)
 * Callees:
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

void __fastcall GreProbeAndWriteToUntrustedVa(void *a1, size_t a2, void *a3, size_t a4, unsigned __int64 a5)
{
  if ( a4 >= a2 )
    a4 = a2;
  if ( a4 && (((_DWORD)a5 - 1) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyToUser(a1, a3, a4);
}
