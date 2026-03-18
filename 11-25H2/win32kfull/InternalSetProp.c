/*
 * XREFs of InternalSetProp @ 0x14005BFA8
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetRedrawProp @ 0x14005BDA4 (SetRedrawProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14005BE20 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14005BF5C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     FeedbackSetWindowSetting @ 0x14005DEF8 (FeedbackSetWindowSetting.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     NtUserShutdownBlockReasonCreate @ 0x140130090 (NtUserShutdownBlockReasonCreate.c)
 *     SetDisplayAffinity @ 0x1401CB8D8 (SetDisplayAffinity.c)
 *     _SetTargetingWindowValue @ 0x1401E0588 (_SetTargetingWindowValue.c)
 *     NtUserfnDDEINIT @ 0x1401E2A50 (NtUserfnDDEINIT.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140229844 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetBrokeredForeground @ 0x140230CD8 (_SetBrokeredForeground.c)
 *     NtUserSetProp @ 0x14024DFD0 (NtUserSetProp.c)
 *     NtUserSetProp2 @ 0x14024E0E0 (NtUserSetProp2.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     FeedbackClearWindowSetting @ 0x140266414 (FeedbackClearWindowSetting.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     _SetTouchWindowFlags @ 0x14026C2F4 (_SetTouchWindowFlags.c)
 *     UserAssociateHwnd @ 0x140287DC0 (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x14029DEE0 (NtUserSetAppImeLevel.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402AE8D8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1402B1150 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402B183C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14001DD30 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x14005BDF8 (UserGetGlobalAtomTableOfWindow.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400C8628 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140143710 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     SetSharedPropForFilteredProcesses @ 0x1402C0DAC (SetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 GlobalAtomTableOfWindow; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  int v14; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v17[48]; // [rsp+50h] [rbp-78h] BYREF

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v17,
    *(tagObjLock **)(a1 + 144));
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( !*(_WORD *)(UserSessionState + 69116) )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      *(_WORD *)(UserSessionState + 69116) = UserFindAtomFromAtomTable(
                                               GlobalAtomTableOfWindow,
                                               L"Microsoft.Windows.WindowFactory.ViewId");
  }
  v12 = 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_10;
  LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == *(_WORD *)(UserSessionState + 69116) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
LABEL_10:
    v12 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4);
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(a1 + 384) & 1) == 0 )
    goto LABEL_10;
  v13 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(v13 + 464), &ApcState);
  v14 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v14 != 1 )
    goto LABEL_10;
LABEL_11:
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v17);
  return v12;
}
