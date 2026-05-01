/*
 * XREFs of ?GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI@Z @ 0x18046BD8C
 * Callers:
 *     ?OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUDismissShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E798 (-OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18046EC30 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18046EDC8 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v8 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v3 + 128LL))(v3, a2, a3, &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      v6);
  return v8 != 0;
}
