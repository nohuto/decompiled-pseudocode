/*
 * XREFs of ?StartDrag@CMultitaskingViewFrameElement@@UEAA_NW4DragEffects@@PEAUIMultitaskingViewElement@@PEAUIUnknown@@@Z @ 0x1804CB430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DB29C (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 */

char __fastcall CMultitaskingViewFrameElement::StartDrag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v9; // rsi
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a1 - 232;
  if ( *(_DWORD *)(a1 - 232 + 100) != 1 )
    return 0;
  v9 = a1 + 176;
  if ( !*(_BYTE *)(a1 + 176) )
    return 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 344));
  Instance = ElementDragData_CreateInstance(*(_QWORD *)(a1 + 256), v4, a3, a4, v9, a2);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)Instance);
    return 0;
  }
  return 1;
}
