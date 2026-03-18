/*
 * XREFs of ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790
 * Callers:
 *     ?GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z @ 0x1400100C0 (-GrepProbeAndReadXFROMLFromUntrustedVa@@YA_NPEAU_XFORML@@0@Z.c)
 *     NtGdiExtCreateRegion @ 0x1400101C0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140010C70 (NtGdiPolyPolyDraw.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     NtGdiRectInRegion @ 0x1400A8230 (NtGdiRectInRegion.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1401646C0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x14017BFA0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     NtGdiCreateColorSpace @ 0x1401F26C0 (NtGdiCreateColorSpace.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 */

void __fastcall GreProbeAndReadFromUntrustedVa(void *a1, size_t a2, void *a3, size_t a4, unsigned __int64 a5)
{
  if ( a4 >= a2 )
    a4 = a2;
  if ( a4 && (((_DWORD)a5 - 1) & (unsigned int)a3) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyFromUser(a1, a3, a4);
}
