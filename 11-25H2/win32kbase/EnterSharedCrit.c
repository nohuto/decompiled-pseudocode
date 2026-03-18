/*
 * XREFs of EnterSharedCrit @ 0x14008A250
 * Callers:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A038 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x140088E70 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     DrvGetCurrentDpiInfo @ 0x14008A19C (DrvGetCurrentDpiInfo.c)
 *     ??0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z @ 0x14008A1FC (--0MaybeEnterLeaveCritSharedOnly@@QEAA@_N@Z.c)
 *     UserEnterUserCritSecShared @ 0x14008A230 (UserEnterUserCritSecShared.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1400EC7B0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserCheckProcessSession @ 0x14016ECA0 (NtUserCheckProcessSession.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1401700F0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401ABFC0 (--0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401D0420 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A480 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x14003CB40 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquireExclusiveUserCrit @ 0x14003CDD0 (EtwTraceAcquireExclusiveUserCrit.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall EnterSharedCrit(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8

  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    return UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             UserSessionState,
             a1,
             a2,
             lambda_458e1681217b8f4af03ab89c30ee8cb2_::_lambda_invoker_cdecl_);
  }
  else
  {
    EtwTraceAcquireExclusiveUserCrit();
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    KeEnterCriticalRegion();
    v11 = (_QWORD *)W32GetUserSessionState(v10, v9);
    LOBYTE(v12) = 1;
    ExAcquireFastResourceShared(*v11, CurrentThreadWin32Thread + 32, v12);
    EtwTraceAcquiredSharedUserCrit();
    if ( CurrentThreadWin32Thread )
      return *(_QWORD *)CurrentThreadWin32Thread;
    else
      return 0LL;
  }
}
