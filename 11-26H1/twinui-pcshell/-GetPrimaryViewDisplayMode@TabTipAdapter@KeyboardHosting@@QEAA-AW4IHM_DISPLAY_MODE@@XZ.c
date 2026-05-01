/*
 * XREFs of ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180289A3C
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BA190 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18028992C (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[11]; // [rsp+20h] [rbp-68h] BYREF
  char v4; // [rsp+4Ch] [rbp-3Ch]
  char v5; // [rsp+4Dh] [rbp-3Bh]

  memset_0(v3, 0, 0x48uLL);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 128) + 304LL))(*(_QWORD *)(a1 + 128), v3);
  result = 2LL;
  if ( v3[0] != 2 )
  {
    if ( v3[0] == 1 )
    {
      if ( !v4 && !v5 )
        return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
