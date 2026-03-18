/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14003B130
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x14003B0F0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     EtwTraceWakePump @ 0x14003C500 (EtwTraceWakePump.c)
 *     SetWakeBit @ 0x1400948E8 (SetWakeBit.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1400AC7C8 (IsPostIAMShellHookMessageExSupported.c)
 *     PostIAMShellHookMessageEx @ 0x1400AC914 (PostIAMShellHookMessageEx.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140126154 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x14012D0F4 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x14014A2C0 (SetPointer.c)
 *     IsSetPointerSupported @ 0x14014FCB8 (IsSetPointerSupported.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x140196D78 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021F98C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  struct tagWND *UserWindow; // rax
  struct tagWND *v9; // rbx
  __int64 updated; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  CMouseProcessor *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  char v30; // di

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5455LL);
  UserWindow = CInputDest::GetUserWindow(a2);
  v9 = UserWindow;
  if ( UserWindow )
  {
    updated = ApiSetEditionUpdateCursorOnMouseMove(UserWindow, *a3);
    v11 = *((_QWORD *)v9 + 2);
    v12 = (_QWORD *)updated;
    v13 = *(_QWORD *)(v11 + 472);
    if ( v13 != *(_QWORD *)(W32GetUserSessionState(v11, v14) + 19176) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19176) )
      {
        v18 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19176);
        if ( *(_QWORD *)(v18 + 112) )
        {
          UserSessionState = W32GetUserSessionState(v18, v17);
          CMouseProcessor::CoalesceInputSourceMouseMoves(v20, *(struct tagQ **)(UserSessionState + 19176), a4);
          v23 = W32GetUserSessionState(v22, v21);
          EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 19176) + 112LL) + 16LL), 0LL, 512LL);
          v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19176);
          *(_DWORD *)(v26 + 412) |= 0x20u;
          v28 = W32GetUserSessionState(v26, v27);
          SetWakeBit(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 19176) + 112LL) + 16LL), 2LL);
        }
        if ( v12 && *v12 != *(_QWORD *)v9 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(*((_QWORD *)v9 + 3), 39LL, *(_QWORD *)v9);
          v29 = v12[3];
          v18 = 960LL;
          if ( (*(_DWORD *)(v29 + 48) & 0x3C0) != 0 )
          {
            CBaseProcessor::PostQEventWork(960LL, **(_QWORD **)(v29 + 192), 1LL);
            *(_DWORD *)(v29 + 48) &= 0xFFFFFC3F;
          }
        }
      }
      *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19176) = v13;
      zzzUpdateCursorImage();
      W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 4016), 0);
      if ( !*((_BYTE *)this + 4024) || (v30 = 1, !*((_BYTE *)this + 4025)) )
        v30 = 0;
      *((_WORD *)this + 2012) = 0;
      W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 4016), 0);
      if ( v30 )
      {
        if ( (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
      }
    }
  }
}
