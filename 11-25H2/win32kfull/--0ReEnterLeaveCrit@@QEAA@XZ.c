/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x14021DA40 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     FreeDesktop @ 0x140243E30 (FreeDesktop.c)
 *     UnmapDesktop @ 0x140243FD0 (UnmapDesktop.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x140276F60 (EditionIsUsermodeRIMAccessAllowed.c)
 *     UserSetTimer @ 0x1402DE08C (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140325BAC (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  bool v2; // al

  v2 = IS_USERCRIT_OWNED_EXCLUSIVE();
  *(_BYTE *)this = v2;
  if ( !v2 )
    EnterCrit(1LL, 0LL);
  return this;
}
