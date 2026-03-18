/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x140161940 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     PostIAMShellHookMessageEx @ 0x14007F2C0 (PostIAMShellHookMessageEx.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x14007F3A8 (IsPostIAMShellHookMessageExSupported.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     SetWakeBit @ 0x1400B9C7C (SetWakeBit.c)
 *     EtwTraceWakePump @ 0x1400E6270 (EtwTraceWakePump.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1401625DC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x140167748 (zzzUpdateCursorImage.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x14016E904 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14016F764 (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     SetPointer @ 0x1401853CC (SetPointer.c)
 *     IsSetPointerSupported @ 0x14018D104 (IsSetPointerSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  struct tagWND *UserWindow; // rax
  __int64 *v9; // rbx
  __int64 updated; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 UserSessionState; // rax
  CMouseProcessor *v23; // rcx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // edx
  unsigned int v39; // edx
  char v40; // di
  __int64 v41; // rdx
  __int64 v42; // rcx

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5466LL);
  UserWindow = CInputDest::GetUserWindow(a2);
  v9 = (__int64 *)UserWindow;
  if ( UserWindow )
  {
    updated = ApiSetEditionUpdateCursorOnMouseMove(UserWindow, *a3);
    v11 = v9[2];
    v12 = (_QWORD *)updated;
    v13 = *(_QWORD *)(v11 + 464);
    if ( v13 != *(_QWORD *)(W32GetUserSessionState(v11, v14, v15) + 19208) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 19208) )
      {
        v20 = *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 19208);
        if ( *(_QWORD *)(v20 + 112) )
        {
          UserSessionState = W32GetUserSessionState(v20, v19, v21);
          CMouseProcessor::CoalesceInputSourceMouseMoves(v23, *(struct tagQ **)(UserSessionState + 19208), a4);
          v27 = W32GetUserSessionState(v25, v24, v26);
          EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 19208) + 112LL) + 16LL), 0LL, 512LL);
          v31 = *(_QWORD *)(W32GetUserSessionState(v29, v28, v30) + 19208);
          *(_DWORD *)(v31 + 436) |= 0x20u;
          v34 = W32GetUserSessionState(v31, v32, v33);
          SetWakeBit(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 19208) + 112LL) + 16LL), 2LL);
        }
        if ( v12 && *v12 != *v9 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported(v20) >= 0 )
            PostIAMShellHookMessageEx(v9[3], 0x27u, *v9);
          v35 = v12[3];
          LODWORD(v20) = 960;
          if ( (*(_DWORD *)(v35 + 48) & 0x3C0) != 0 )
          {
            CBaseProcessor::PostQEventWork(960LL, **(_QWORD **)(v35 + 192), 1LL);
            *(_DWORD *)(v35 + 48) &= 0xFFFFFC3F;
          }
        }
      }
      *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 19208) = v13;
      zzzUpdateCursorImage(v37, v36);
      W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 4024), v38);
      if ( !*((_BYTE *)this + 4032) || (v40 = 1, !*((_BYTE *)this + 4033)) )
        v40 = 0;
      *((_WORD *)this + 2016) = 0;
      W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 4024), v39);
      if ( v40 )
      {
        if ( (int)IsSetPointerSupported(v42, v41) >= 0 )
          SetPointer(1LL);
      }
    }
  }
}
