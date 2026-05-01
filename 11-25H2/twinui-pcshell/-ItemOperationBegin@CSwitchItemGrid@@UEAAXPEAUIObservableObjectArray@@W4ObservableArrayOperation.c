/*
 * XREFs of ?ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1804B4960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804BABD0 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 *     ?SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C5670 (-SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSwitchItemGrid::ItemOperationBegin(__int64 a1, __int64 a2, int a3)
{
  const struct _GUID *v4; // rdx
  int v5; // eax
  _QWORD *RootElement; // rax
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 1 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
    v5 = SwitchItemCloseAnimationCoordinator_CreateInstance(*(struct ISwitchThumbnailFactory **)(a1 + 632), v4, &v7);
    if ( v5 >= 0 )
    {
      RootElement = (_QWORD *)ElementHelpers::GetRootElement(v8, a1 - 224);
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*RootElement + 392LL))(*RootElement, v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x255,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  }
}
