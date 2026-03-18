/*
 * XREFs of xxxFlashWindow @ 0x140253F78
 * Callers:
 *     xxxFlashEnabledPopup @ 0x140110684 (xxxFlashEnabledPopup.c)
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     NtUserFlashWindowEx @ 0x1401FA530 (NtUserFlashWindowEx.c)
 *     xxxSystemTimerProc @ 0x140246950 (xxxSystemTimerProc.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402AF590 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _SetSystemTimer @ 0x140158A0C (_SetSystemTimer.c)
 */

__int64 __fastcall xxxFlashWindow(struct tagTHREADINFO **a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r15d
  unsigned int v5; // edi
  __int64 UserSessionState; // rax
  unsigned int Prop; // eax
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  BOOL v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // r12
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v27; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v27 = 0LL;
  v5 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41332), 1u);
  v11 = Prop;
  if ( Prop == 2048 )
  {
    v11 = 18432;
LABEL_3:
    v12 = 0;
LABEL_4:
    v15 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888)
       && *(struct tagTHREADINFO ***)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 18888) + 128LL) == a1;
LABEL_20:
    xxxSendTransformableMessageTimeout(a1, 134LL, v15, 0LL, 0, 0x64u, (unsigned __int64 *)&v27, 1, 0);
    if ( !v12 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( Prop )
  {
    if ( v5 == 1024 )
      v5 = Prop;
  }
  else
  {
    v10 = a1[5];
    if ( (*((_BYTE *)v10 + 16) & 0x40) != 0 || (v5 & 1) != 0 && (*((_BYTE *)v10 + 30) & 0xC0) != 0 )
      v11 = 36864;
  }
  v12 = v5 & 0xFFFF000F;
  v4 = v11 & 0x8000;
  if ( (v11 & 8) != 0 )
  {
    v10 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v10, v9) + 18888);
    if ( v10 == *((struct tagTHREADINFO **)a1[2] + 59) )
      goto LABEL_3;
  }
  if ( !v12 )
    goto LABEL_4;
  v15 = v4 == 0;
  if ( (v12 & 1) != 0 )
    goto LABEL_20;
LABEL_21:
  if ( (v12 & 2) == 0 )
  {
LABEL_28:
    v20 = v12;
    v21 = 0x4000LL;
    if ( HIWORD(v12) )
    {
      v11 |= 0x2000u;
      v12 -= 0x10000;
      if ( ((v11 >> 12) & 1) != v15 )
        v12 = v20;
      if ( (v11 & 0x4000) == 0 )
        v12 |= 4u;
    }
    if ( (v12 & 4) == 0 )
      goto LABEL_38;
    v11 |= 0x4000u;
    if ( !a3 )
      a3 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(0x4000LL, v20) + 19872) + 4984LL);
    if ( SetSystemTimer((__int64)a1, 65528LL, a3, (__int64)xxxSystemTimerProc, 1) )
    {
LABEL_38:
      if ( (v11 & 0x2000) == 0 || HIWORD(v12) )
      {
        if ( v15 )
          v23 = v11 | 0x8000;
        else
          v23 = v11 & 0xFFFF7FFF;
        v22 = (v12 ^ v23) & 0xFFFF000B ^ v23;
      }
      else
      {
        v22 = 2048LL;
      }
      v24 = W32GetUserSessionState(v21, v20);
      InternalSetProp((__int64)a1, *(unsigned __int16 *)(v24 + 41332), v22, 5u);
    }
    return v4;
  }
LABEL_22:
  if ( IsTrayWindow(a1, 1LL) )
  {
    v18 = *a1;
    if ( (v11 & 0x800) != 0 )
      v19 = !v15;
    else
      v19 = v12 != 0 && v15;
    xxxCallHook(6LL, (__int64)*a1, v19, 10);
    PostShellHookMessagesEx((LastWokenThread *)(v19 != 0 ? 32774 : 6), (__int64)v18);
  }
  if ( v12 )
    goto LABEL_28;
  if ( (v11 & 0x4000) != 0 )
    FindTimer((__int64)a1, 65528LL, 2u, 1, 0LL);
  v25 = W32GetUserSessionState(v17, v16);
  InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v25 + 41332), 1u);
  return v4;
}
