/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214
 * Callers:
 *     NtGdiStretchBlt @ 0x140016260 (NtGdiStretchBlt.c)
 *     NtGdiLineTo @ 0x14006DF40 (NtGdiLineTo.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x140071F20 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007482C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     NtGdiSaveDC @ 0x140076BF0 (NtGdiSaveDC.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     NtGdiSetIcmMode @ 0x1400AEDA0 (NtGdiSetIcmMode.c)
 *     NtGdiExtSelectClipRgn @ 0x1400AEFA0 (NtGdiExtSelectClipRgn.c)
 *     GreGetDCObject @ 0x1400AF38C (GreGetDCObject.c)
 *     NtGdiSelectFont @ 0x1400AF6E0 (NtGdiSelectFont.c)
 *     NtGdiGetDCObject @ 0x1400AFAE0 (NtGdiGetDCObject.c)
 *     NtGdiSetPixel @ 0x1400B0250 (NtGdiSetPixel.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     NtGdiBitBlt @ 0x1400B5500 (NtGdiBitBlt.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     NtGdiGetPixel @ 0x1400BB9B0 (NtGdiGetPixel.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x14016B560 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     NtGdiRestoreDC @ 0x1401AECF0 (NtGdiRestoreDC.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1401D52B8 (-iSetMapMode@DC@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rdx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_QWORD *)this + 122);
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    *(_DWORD *)(v1 + 340) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 340) |= 0x6090u;
}
