/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848
 * Callers:
 *     xxxProcessHidInput @ 0x14001EB20 (xxxProcessHidInput.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140251FAC (-xxxUserBeep@@YAHKK_N@Z.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x14029CF80 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1402A5110 (FreeDesktop.c)
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 *     UserSetTimer @ 0x1402F02D0 (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140347F18 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)this) == 2 )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    EnterCrit(1LL, 0LL);
  }
  return this;
}
