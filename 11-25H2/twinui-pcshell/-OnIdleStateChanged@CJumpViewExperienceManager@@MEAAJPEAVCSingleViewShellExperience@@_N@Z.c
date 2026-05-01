/*
 * XREFs of ?OnIdleStateChanged@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180239250
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x1801B4808 (-TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x18022ECEC (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x1802A1A6C (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1803853FC (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x180385CF8 (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?JumpViewCancelledDueToLock@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x180386314 (-JumpViewCancelledDueToLock@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803876A0 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::OnIdleStateChanged(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        char a3)
{
  CJumpViewExperienceManager *v4; // rbx
  _BYTE v6[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( a3 && **((_DWORD **)this + 94) == 1 )
  {
    v4 = (CJumpViewExperienceManager *)((char *)this - 64);
    CJumpViewExperienceManager::FireCancelledEvent((CJumpViewExperienceManager *)((char *)this - 64));
    JumpViewProvider::ShowJumpViewActivity::TransferToCurrentThread(
      (__int64)this + 480,
      (struct wil::details::IFailureCallback *)v6);
    JumpViewProvider::ShowJumpViewActivity::JumpViewCancelledDueToLock((JumpViewProvider::ShowJumpViewActivity *)v6);
    CJumpViewExperienceManager::DismissImpl(v4, 1);
    CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout(v4);
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v6);
  }
  return 0LL;
}
