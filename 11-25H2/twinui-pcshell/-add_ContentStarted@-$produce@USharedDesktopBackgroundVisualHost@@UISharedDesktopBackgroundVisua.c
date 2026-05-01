/*
 * XREFs of ?add_ContentStarted@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1805EA870
 * Callers:
 *     <none>
 * Callees:
 *     ?ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@3@@Z @ 0x1805E5708 (-ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA-AUevent_token@winrt@@AEBU-$TypedEventHan.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::add_ContentStarted(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  *a3 = *(_QWORD *)SharedDesktopBackgroundVisualHost::ContentStarted((a1 - 16) & -(__int64)(a1 != 0), (__int64)&v4, &v5);
  return 0LL;
}
