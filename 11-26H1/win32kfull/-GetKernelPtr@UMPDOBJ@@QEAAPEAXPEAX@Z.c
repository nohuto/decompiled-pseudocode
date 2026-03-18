/*
 * XREFs of ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1402276D0 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140282E80 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x140283760 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x140283BF0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A26C (-BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A334 (-CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A3A8 (-CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14034B250 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x14034C290 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x14034C450 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z @ 0x14034CF40 (-ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D79B4 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

char *__fastcall UMPDOBJ::GetKernelPtr(char **this, char *a2)
{
  int v4; // eax
  __int64 v5; // r8
  char *result; // rax

  v4 = UMPDOBJ::bSandboxedClient((UMPDOBJ *)this);
  v5 = 0LL;
  if ( !v4 )
    return a2;
  result = this[51];
  if ( result )
  {
    if ( a2 )
      return &a2[*((_QWORD *)result + 8)];
    return (char *)v5;
  }
  return result;
}
