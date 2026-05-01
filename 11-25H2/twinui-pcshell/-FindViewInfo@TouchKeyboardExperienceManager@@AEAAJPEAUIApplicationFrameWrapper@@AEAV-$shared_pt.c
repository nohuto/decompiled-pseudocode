/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1804602DC
 * Callers:
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180462A74 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180097D88 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, struct IUnknown *a2, _QWORD *a3)
{
  KBViewInfo **Ptr; // rbx
  KBViewInfo **v7; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, a1 + 53);
  Ptr = (KBViewInfo **)a1[54].Ptr;
  v7 = (KBViewInfo **)a1[55].Ptr;
  while ( Ptr != v7 && (!KBViewInfo::IsValid(*Ptr) || !SHIsSameObject(*((struct IUnknown **)*Ptr + 1), a2)) )
    Ptr += 2;
  if ( Ptr == a1[55].Ptr )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1603,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 2147943568LL;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(a3, Ptr);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0LL;
  }
}
