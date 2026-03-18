/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x14010A208
 * Callers:
 *     UmfdQueryTrueTypeOutline @ 0x1401090A0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x140109170 (UmfdTrueTypeFreeGlyphset.c)
 *     ??0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z @ 0x140109528 (--0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ??0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401095A8 (--0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     UmfdDestroyFont @ 0x1401097A0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x140109870 (UmfdQueryGlyphMetricsPlusBits.c)
 *     ??0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x14010A29C (--0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ??0QueryFontFileRequest@@QEAA@_KKKPEAK@Z @ 0x14010A314 (--0QueryFontFileRequest@@QEAA@_KKKPEAK@Z.c)
 *     UmfdUnloadFontFileInternal @ 0x14010A388 (UmfdUnloadFontFileInternal.c)
 *     UmfdDrvFreeInternal @ 0x14010ACF8 (UmfdDrvFreeInternal.c)
 *     UmfdGetTrueTypeFile @ 0x14010ADA0 (UmfdGetTrueTypeFile.c)
 *     ??0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14010AF84 (--0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     UmfdEscape @ 0x140341020 (UmfdEscape.c)
 *     UmfdQueryGlyphAttrs @ 0x1403410C0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
