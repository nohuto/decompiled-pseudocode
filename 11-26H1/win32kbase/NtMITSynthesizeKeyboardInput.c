/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x140143DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleWithDescriptor @ 0x140049640 (HMValidateHandleWithDescriptor.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140123498 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ProcessKeyboardInjectedInput @ 0x140124B80 (ProcessKeyboardInjectedInput.c)
 *     ResolveContainerId @ 0x1401BED74 (ResolveContainerId.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(int a1, void *a2, volatile void *a3)
{
  int v6; // edi
  unsigned int v7; // esi
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcessWow64Process; // rax
  int v21; // eax
  int v22; // r14d
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  __int64 *v27; // rax
  int v29; // [rsp+60h] [rbp-F8h] BYREF
  int i; // [rsp+64h] [rbp-F4h]
  int v31; // [rsp+68h] [rbp-F0h]
  int v32; // [rsp+7Ch] [rbp-DCh]
  unsigned __int64 v33; // [rsp+90h] [rbp-C8h]
  _OWORD v34[4]; // [rsp+98h] [rbp-C0h] BYREF
  _OWORD v35[4]; // [rsp+E0h] [rbp-78h] BYREF

  v6 = 0;
  v7 = 0;
  v32 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, (_DWORD)a2, (_DWORD)a3);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v11);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  memset(v35, 0, sizeof(v35));
  if ( !IsInputThread(v13, v12, v14) )
  {
    v15 = 5;
LABEL_5:
    UserSetLastError(v15);
    goto LABEL_26;
  }
  memset(v34, 0, sizeof(v34));
  RtlCopyFromUser(v34, a2, 0x40uLL);
  v35[0] = v34[0];
  v35[1] = v34[1];
  v35[2] = v34[2];
  v35[3] = v34[3];
  if ( (a1 & 3) != 0 )
  {
    v29 = 0;
    if ( DWORD1(v34[1]) == 2 )
      ResolveContainerId((char *)&v35[1] + 8, &v29);
    else
      v29 = DWORD2(v34[1]);
    v7 = IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
           a1,
           (IVRootDeliver::Keyboard::Detail *)&v29,
           (__int64 *)v35,
           *((const struct _KEYBOARD_INPUT_DATA **)&v35[2] + 1));
  }
  else
  {
    if ( a1 != 4 )
    {
      if ( a1 != 8 )
        goto LABEL_26;
      LOBYTE(v16) = 19;
      v27 = (__int64 *)HMValidateHandleWithDescriptor(*((void **)&v34[2] + 1), v16, 0);
      if ( !*((_QWORD *)&v35[2] + 1) || v27 )
      {
        ProcessKeyboardInjectedInput((__int64)v35, v27, (__int64)&v35[3]);
        v7 = 1;
        goto LABEL_26;
      }
      v7 = 0;
      v15 = 6;
      goto LABEL_5;
    }
    xxxUpdateGlobalsAndSendKeyEvent(
      WORD4(v34[0]),
      v34[0],
      SHIDWORD(v34[0]),
      0LL,
      *((__int64 *)&v34[2] + 1),
      0LL,
      v34[1],
      DWORD1(v34[0]) != 0,
      0,
      0LL,
      0LL,
      (__int64)&v35[3]);
    v7 = 1;
    if ( a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
      ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      v21 = 0;
      v31 = 0;
      for ( i = 0; ; i = v6 )
      {
        v22 = v6;
        if ( v21 >= 256 )
          break;
        v29 = v6 & 3;
        v33 = (unsigned __int64)(unsigned __int8)v6 >> 2;
        v23 = W32GetUserSessionState(v17, v16, v18);
        v25 = v33;
        LOBYTE(v25) = *(_BYTE *)(v23 + v33 + 14328);
        v26 = 2 * v29;
        if ( ((unsigned __int8)v25 & (unsigned __int8)(1 << (2 * v29))) != 0 )
        {
          LOBYTE(v26) = *((_BYTE *)a3 + v6) | 0x80;
          *((_BYTE *)a3 + v31) = v26;
          v22 = i;
        }
        LOBYTE(v16) = *(_BYTE *)(W32GetUserSessionState(v26, v25, v24) + v33 + 14328);
        v17 = (unsigned int)(2 * v29 + 1);
        if ( ((unsigned __int8)v16 & (unsigned __int8)(1 << (2 * v29 + 1))) != 0 )
        {
          LOBYTE(v17) = *((_BYTE *)a3 + v6) | 1;
          *((_BYTE *)a3 + v22) = v17;
        }
        v21 = ++v6;
        v31 = v6;
      }
    }
  }
LABEL_26:
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  return v7;
}
