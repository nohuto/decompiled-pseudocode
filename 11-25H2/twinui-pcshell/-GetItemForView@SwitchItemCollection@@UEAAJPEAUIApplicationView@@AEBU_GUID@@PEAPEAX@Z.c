/*
 * XREFs of ?GetItemForView@SwitchItemCollection@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18049FAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804A02D4 (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemCollection::GetItemForView(
        SwitchItemCollection *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  SwitchItemCollection::_FindExistingItem((char *)this - 168, &v10, a2);
  if ( v10 )
  {
    v7 = (**v10)(v10, a3, a4);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v6 = -2147023728;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return v6;
}
