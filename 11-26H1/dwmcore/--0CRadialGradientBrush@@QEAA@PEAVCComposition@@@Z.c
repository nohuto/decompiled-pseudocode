/*
 * XREFs of ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801CB8EC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x18020CD24 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::CRadialGradientBrush(
        CRadialGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CRadialGradientBrush *result; // rax
  __int64 v4; // r8

  CGradientBrush::CGradientBrush(this, a2, 0);
  *(_DWORD *)(v2 + 248) = 1056964608;
  *(_DWORD *)(v2 + 252) = 1056964608;
  *(_DWORD *)(v2 + 256) = 1056964608;
  *(_DWORD *)(v2 + 260) = 1056964608;
  *(_QWORD *)v2 = &CRadialGradientBrush::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 72) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *(_QWORD *)(v2 + 152) = &CRadialGradientBrush::`vftable'{for `IAtlasEntryOwner'};
  *(_QWORD *)(v2 + 160) = &CRadialGradientBrush::`vftable'{for `IDeviceResourceNotify'};
  result = (CRadialGradientBrush *)v2;
  *(_QWORD *)(v2 + 272) = v4;
  *(_BYTE *)(v2 + 280) = 1;
  *(_BYTE *)(v2 + 96) = 1;
  return result;
}
