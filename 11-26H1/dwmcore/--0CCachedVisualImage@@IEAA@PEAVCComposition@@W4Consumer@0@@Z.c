/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z @ 0x180203D0C
 * Callers:
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x18014BC00 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180203C2C (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_NPEAPEAV1@@Z @ 0x180262030 (-CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_N.c)
 *     ?CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262178 (-CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262ED8 (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180203E84 (--0COcclusionContext@@QEAA@XZ.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedVisualImage(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  int v4; // r11d
  int v5; // r8d
  int v6; // r10d

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 2LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &CCachedVisualImage::`vftable'{for `CResource'};
  *(_QWORD *)(a1 + 72) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *(_QWORD *)(a1 + 80) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  COcclusionContext::COcclusionContext((COcclusionContext *)(a1 + 192));
  *(_QWORD *)(v2 + 1592) = 0LL;
  result = v2;
  *(_WORD *)(v2 + 1600) = v4;
  *(_BYTE *)(v2 + 1602) = v4;
  *(_DWORD *)(v2 + 1604) = v5;
  *(_DWORD *)(v2 + 128) = v4;
  *(_DWORD *)(v2 + 136) = v4;
  *(_DWORD *)(v2 + 152) = v6;
  return result;
}
