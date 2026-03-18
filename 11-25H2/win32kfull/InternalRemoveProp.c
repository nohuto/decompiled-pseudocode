/*
 * XREFs of InternalRemoveProp @ 0x14005BEB0
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14005BE20 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14005C114 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     NtUserShutdownBlockReasonCreate @ 0x140130090 (NtUserShutdownBlockReasonCreate.c)
 *     UserRemoveWindowedSwapChain @ 0x140172570 (UserRemoveWindowedSwapChain.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140181470 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     SetDisplayAffinity @ 0x1401CB8D8 (SetDisplayAffinity.c)
 *     _SetTargetingWindowValue @ 0x1401E0588 (_SetTargetingWindowValue.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x140201A40 (-DDEImpDecRefInitWorker@@YAXPEAX@Z.c)
 *     NtUserModifyWindowTouchCapability @ 0x140202A50 (NtUserModifyWindowTouchCapability.c)
 *     NtUserShutdownReasonDestroy @ 0x140212460 (NtUserShutdownReasonDestroy.c)
 *     NtUserRemoveProp @ 0x14024C800 (NtUserRemoveProp.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     _SetTouchWindowFlags @ 0x14026C2F4 (_SetTouchWindowFlags.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14026E4E4 (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     UserAssociateHwnd @ 0x140287DC0 (UserAssociateHwnd.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402B183C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1402C5680 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14001DD30 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400C8628 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140143710 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-58h] BYREF

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v10,
    *(tagObjLock **)(a1 + 144));
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == *(_WORD *)(W32GetUserSessionState(v7, v6) + 69116) )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v8 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v10);
  return v8;
}
