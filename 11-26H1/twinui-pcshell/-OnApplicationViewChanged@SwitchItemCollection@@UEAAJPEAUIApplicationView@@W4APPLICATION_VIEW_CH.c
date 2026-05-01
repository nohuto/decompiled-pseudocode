/*
 * XREFs of ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804B0EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B12C4 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804B1590 (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804B16BC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B1768 (-_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804BE3A8 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemCollection::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int updated; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  switch ( a3 )
  {
    case 0:
      updated = SwitchItemCollection::_AddViewItem((SwitchItemCollection *)(a1 - 160), a2);
      if ( updated < 0 )
      {
        v5 = 70LL;
        goto LABEL_20;
      }
      return (unsigned int)updated;
    case 1:
      v6 = a1 - 160;
      SwitchItemCollection::_FindExistingItem(a1 - 160, v10, a2);
      if ( v10[0] )
      {
        v9 = ObservableObjectArray::_RemoveItem(v6 + 8, v10, 1LL);
        updated = v9;
        if ( v9 >= 0 )
          goto LABEL_16;
        v7 = (unsigned int)v9;
        v8 = 182LL;
      }
      else
      {
        updated = -2147024809;
        v7 = 2147942487LL;
        v8 = 181LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)v7);
LABEL_16:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
      if ( updated < 0 )
      {
        v5 = 73LL;
        goto LABEL_20;
      }
      return (unsigned int)updated;
    case 10:
    case 11:
      updated = SwitchItemCollection::_UpdateShowInSwitchers((SwitchItemCollection *)(a1 - 160), a2, a3 == 10);
      if ( updated < 0 )
      {
        v5 = 77LL;
        goto LABEL_20;
      }
      break;
    case 12:
      updated = SwitchItemCollection::_UpdateThumbnailWindow((SwitchItemCollection *)(a1 - 160), a2);
      if ( updated < 0 )
      {
        v5 = 80LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)updated);
      }
      break;
    default:
      return 0LL;
  }
  return (unsigned int)updated;
}
