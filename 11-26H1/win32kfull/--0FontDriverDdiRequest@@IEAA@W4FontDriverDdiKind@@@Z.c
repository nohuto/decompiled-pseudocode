/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1400D2A18 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1400D2D30 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1400D31B4 (UmfdUnloadFontFileInternal.c)
 *     UmfdDrvFreeInternal @ 0x1400D3888 (UmfdDrvFreeInternal.c)
 *     UmfdDestroyFont @ 0x1400FC9D0 (UmfdDestroyFont.c)
 *     UmfdQueryFont @ 0x1400FD550 (UmfdQueryFont.c)
 *     UmfdQueryTrueTypeOutline @ 0x1400FD620 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryFontTree @ 0x1401F7D30 (UmfdQueryFontTree.c)
 *     ??0QueryFontFileRequest@@QEAA@_KKKPEAK@Z @ 0x1401F82A0 (--0QueryFontFileRequest@@QEAA@_KKKPEAK@Z.c)
 *     ??0GetTrueTypeFileRequest@@QEAA@_KPEAK@Z @ 0x140223FE8 (--0GetTrueTypeFileRequest@@QEAA@_KPEAK@Z.c)
 *     ??0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140235574 (--0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     UmfdEscape @ 0x14034E5D0 (UmfdEscape.c)
 *     UmfdQueryGlyphAttrs @ 0x14034E680 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
