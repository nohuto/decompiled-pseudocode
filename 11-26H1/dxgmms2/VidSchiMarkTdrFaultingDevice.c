/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1400C45C0
 * Callers:
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) )
  {
    *(_BYTE *)(a1 + 212) = 1;
    VidSchMarkDeviceAsError(a1, 7);
  }
}
