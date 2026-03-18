/*
 * XREFs of ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054064
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::CGradientBrushMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  *(_QWORD *)(a1 + 72) = 2LL;
  *(_QWORD *)a1 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 80) = 1;
  return result;
}
