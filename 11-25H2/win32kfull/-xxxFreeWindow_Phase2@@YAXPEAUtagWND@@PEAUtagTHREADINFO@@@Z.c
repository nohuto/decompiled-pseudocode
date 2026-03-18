/*
 * XREFs of ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     DestroyWindowSmIcon @ 0x14006630C (DestroyWindowSmIcon.c)
 *     SfnDWORD @ 0x1400C48E0 (SfnDWORD.c)
 *     IsSysShadow @ 0x1400E0E50 (IsSysShadow.c)
 *     xxxRemoveShadow @ 0x14017EAD0 (xxxRemoveShadow.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1401B393C (xxxClientFreeWindowClassExtraBytes.c)
 *     ClearDelegationCapture @ 0x1401C4F30 (ClearDelegationCapture.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401C81D4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     CleanupShadow @ 0x14020CF8C (CleanupShadow.c)
 *     zzzInputFocusLostWindowEvent @ 0x140245038 (zzzInputFocusLostWindowEvent.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140259548 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x14025D270 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline @ 0x140288658 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9A8 (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxDDETrackWindowDying @ 0x1402B2AA4 (xxxDDETrackWindowDying.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall xxxFreeWindow_Phase2(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // si
  char v6; // bp
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  Scrollbar::NonClient *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct tagWND **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagWND **v19; // rcx
  struct tagWND **v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct tagWND **v25; // rcx
  struct tagWND **v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 Prop; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // rdi
  __int64 v42; // rax
  struct tagINPUT_MESSAGE_SOURCE *v43; // [rsp+20h] [rbp-88h]
  __int128 v44; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v46[16]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v47; // [rsp+B0h] [rbp+8h] BYREF

  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 130LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  SetOrClrWF(0, a1, 0x440u, 0);
  v4 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 42LL);
  v5 = v4 & 0x2FFF;
  v6 = *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL);
  if ( ((unsigned __int16)v4 & 0x2FFFu) >= 0x29A && (v4 & 0x4000) == 0 )
  {
    if ( v5 > 0x2A0u )
    {
      if ( v5 > 0x2AAu )
        goto LABEL_12;
    }
    else if ( v5 != 666 )
    {
      UserSessionState = W32GetUserSessionState(v4, 666LL);
      v43 = 0LL;
      (*(void (__fastcall **)(struct tagWND *, __int64, _QWORD, _QWORD))(UserSessionState
                                                                       + 8LL * ((v6 + 6) & 0x1F)
                                                                       + 70920))(
        a1,
        112LL,
        0LL,
        0LL);
LABEL_12:
      *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
      goto LABEL_13;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) == 0 )
    {
      if ( v5 == 666 )
        v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 666LL) + 19872) + 7592LL);
      else
        v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 666LL) + 19872) + 8LL * v5 - 4608);
      SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, v8);
    }
    goto LABEL_12;
  }
LABEL_13:
  *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x8000u;
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_QWORD *)(v9 + 296);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)(v9 + 296) = 0LL;
    if ( (*(_DWORD *)(PsGetCurrentProcess() + 500) & 0x40000008) == 0
      && (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) == 0 )
    {
      xxxClientFreeWindowClassExtraBytes(a1, v10);
    }
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = 0;
  if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v12) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 336LL) = 0;
  }
  v13 = *((_QWORD *)a1 + 15);
  if ( v13 )
  {
    v11 = v13 + 200;
    if ( *(struct tagWND **)(v13 + 200) == a1 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      if ( *(char *)(v14 + 19) < 0 || *(char *)(v14 + 20) < 0 )
        v13 = 0LL;
      *(_QWORD *)&v44 = v11;
      *((_QWORD *)&v44 + 1) = v13;
      HMAssignmentLock(&v44, 0LL);
      v44 = *(_OWORD *)LockPointer(v46, *((_QWORD *)a1 + 15) + 200LL, *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(&v44, 0LL);
    }
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(v12, v11) + 19872) & 4) != 0 && a1 == *((struct tagWND **)a2 + 103) )
    HMAssignmentUnlock((char *)a2 + 824);
  if ( *((struct tagWND **)a2 + 198) == a1 )
    HMAssignmentUnlock((char *)a2 + 1584);
  if ( *((struct tagWND **)a2 + 207) == a1 )
    HMAssignmentUnlock((char *)a2 + 1656);
  if ( *((struct tagWND **)a2 + 208) == a1 )
    HMAssignmentUnlock((char *)a2 + 1664);
  v16 = (struct tagWND **)*((_QWORD *)a2 + 59);
  if ( a1 == v16[15] )
  {
    tagQ::UnlockFocusWnd((tagQ *)v16);
    if ( *((_QWORD *)a2 + 59) == *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18888) )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  v19 = (struct tagWND **)(*((_QWORD *)a2 + 59) + 136LL);
  if ( a1 == *v19 )
    HMAssignmentUnlock(v19);
  v20 = (struct tagWND **)*((_QWORD *)a2 + 59);
  if ( a1 == v20[16] )
    tagQ::SetActiveWindow((tagQ *)v20, 0LL);
  v21 = *((_QWORD *)a2 + 59);
  if ( a1 == *(struct tagWND **)(v21 + 144) )
    ClearDelegationCapture();
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState(v21, v15) + 63472) )
  {
    v24 = W32GetUserSessionState(v23, v22);
    HMAssignmentUnlock(v24 + 63472);
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    if ( !(unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
    {
      v25 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 104LL);
      if ( a1 == *v25 )
        HMAssignmentUnlock(v25);
    }
    v26 = (struct tagWND **)*((_QWORD *)a1 + 3);
    if ( a1 == v26[24] )
    {
      v47 = 0LL;
      NotifyShell::HitTestPartUpdate((NotifyShell *)v26, a1, 0LL, (int)&v47, v43);
      xxxOnTrackingWindowDestroyed(a2, *((struct tagDESKTOP **)a1 + 3));
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 192LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFC3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 59) + 112LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
    CleanupShadow(a1);
  else
    xxxRemoveShadow(a1);
  DestroyWindowSmIcon(a1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  v29 = *((_QWORD *)a1 + 18);
  if ( v29 && *(_QWORD *)(v29 + 24) )
  {
    v30 = W32GetUserSessionState(v28, v27);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v30 + 41336), 1u);
    v34 = Prop;
    if ( Prop )
    {
      Win32HM_LockIntoThread<0>((__int64)a2, Prop, BugCheckParameter3);
      xxxDDETrackWindowDying(v35, v34);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v36);
    }
    v37 = W32GetUserSessionState(v33, v32);
    v38 = InternalRemoveProp(a1, *(unsigned __int16 *)(v37 + 41340), 1LL);
    v41 = (void *)v38;
    if ( v38 )
    {
      *(_WORD *)(v38 + 88) = 0;
      if ( !*(_WORD *)(v38 + 90) )
      {
        SeDeleteClientSecurity(v38 + 16);
        Win32FreePool(v41);
      }
    }
    v42 = W32GetUserSessionState(v40, v39);
    InternalRemoveProp(a1, *(unsigned __int16 *)(v42 + 41362), 1LL);
    DeleteStringPropertyAtoms(a1);
  }
  if ( (*((_DWORD *)a1 + 96) & 2) != 0 && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)a1);
}
