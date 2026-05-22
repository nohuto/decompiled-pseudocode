/*
 * XREFs of ?Create@HapticProcessor@@SA?AV?$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ @ 0x1800C812C
 * Callers:
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A622C (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A6364 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@@Z @ 0x1800C7A74 (--$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall HapticProcessor::Create(__int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<HapticProcessor,HapticProcessor,>((HapticProcessor **)a1);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
