/*
 * XREFs of ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14000F6D0 (NtGdiFastPolyPolyline.c)
 *     DxgkEngAcquireStableVisRgn @ 0x14007A1F0 (DxgkEngAcquireStableVisRgn.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreGradientFill @ 0x1400A0CB0 (GreGradientFill.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1401178F4 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     GreRealizeDefaultPalette @ 0x1401ED05C (GreRealizeDefaultPalette.c)
 *     GreCreateHalftonePalette @ 0x1403107CC (GreCreateHalftonePalette.c)
 *     GreIsDCCurrentPalette @ 0x140310BC4 (GreIsDCCurrentPalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x140300018 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x1403002A0 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, HDC a2, struct Gre::Base::SESSION_GLOBALS *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = a3;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 40);
  XDCOBJ::vLock(this, a2);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>((char *)this + 72);
  v8 = *(_QWORD *)this;
  *((_BYTE *)this + 104) = 1;
  if ( v8 )
  {
    if ( *(_WORD *)(v8 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      if ( *(_QWORD *)this )
        XDCOBJ::vUnlockFast(this);
      *(_QWORD *)this = 0LL;
    }
  }
  return this;
}
