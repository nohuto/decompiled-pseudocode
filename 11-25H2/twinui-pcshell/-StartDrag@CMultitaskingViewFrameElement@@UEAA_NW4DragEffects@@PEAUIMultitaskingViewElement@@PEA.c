/*
 * XREFs of ?StartDrag@CMultitaskingViewFrameElement@@UEAA_NW4DragEffects@@PEAUIMultitaskingViewElement@@PEAUIUnknown@@@Z @ 0x1804B9570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C917C (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 */

char __fastcall CMultitaskingViewFrameElement::StartDrag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 - 132) != 1 )
    return 0;
  v8 = a1 + 176;
  if ( !*(_BYTE *)(a1 + 176) )
    return 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 344));
  Instance = ElementDragData_CreateInstance(*(_QWORD *)(a1 + 256), a1 - 232, a3, a4, v8, a2);
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
