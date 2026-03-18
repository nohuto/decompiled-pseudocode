/*
 * XREFs of ??1MaybeEnterLeaveCrit@@QEAA@XZ @ 0x140047520
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016ED70 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1401700F0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x14018A660 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 */

void __fastcall MaybeEnterLeaveCrit::~MaybeEnterLeaveCrit(MaybeEnterLeaveCrit *this)
{
  if ( *(_BYTE *)this )
    UserSessionSwitchLeaveCritWithNonPaged(0LL);
}
