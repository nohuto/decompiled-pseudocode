/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1401048D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14005DEB0 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ProcessKeyboardInjectedInput @ 0x1400FBA78 (ProcessKeyboardInjectedInput.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x14018D324 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ResolveContainerId @ 0x14019F13C (ResolveContainerId.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(__int64 a1, void *a2, volatile void *a3)
{
  int v4; // r12d
  int v5; // ebx
  unsigned int v6; // edi
  _QWORD *UserSessionState; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // r15d
  int v19; // esi
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rax
  int v27; // [rsp+60h] [rbp-108h] BYREF
  int v28; // [rsp+64h] [rbp-104h]
  int v29; // [rsp+68h] [rbp-100h]
  int v30; // [rsp+6Ch] [rbp-FCh]
  void *Src; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v32; // [rsp+90h] [rbp-D8h]
  _OWORD v33[5]; // [rsp+98h] [rbp-D0h] BYREF
  _OWORD v34[4]; // [rsp+F0h] [rbp-78h] BYREF

  Src = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v27 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v8) = 1;
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v8);
  }
  v10 = v9;
  UserSessionState[3] = v9;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v10 )
      goto LABEL_9;
    *(_BYTE *)(v10 + 1708) = 1;
  }
  if ( v10 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  memset(v34, 0, sizeof(v34));
  if ( !IsInputThread(v12, v11) )
  {
    v13 = 5;
LABEL_11:
    UserSetLastError(v13);
    goto LABEL_32;
  }
  memset(v33, 0, 0x40uLL);
  RtlCopyFromUser(v33, Src, 0x40uLL);
  v34[0] = v33[0];
  v34[1] = v33[1];
  v34[2] = v33[2];
  v34[3] = v33[3];
  if ( (v4 & 3) != 0 )
  {
    v27 = 0;
    if ( DWORD1(v33[1]) == 2 )
      ResolveContainerId((char *)&v34[1] + 8, &v27);
    else
      v27 = DWORD2(v33[1]);
    v6 = IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
           v4,
           (IVRootDeliver::Keyboard::Detail *)&v27,
           (__int64 *)v34,
           *((const struct _KEYBOARD_INPUT_DATA **)&v34[2] + 1));
  }
  else
  {
    if ( v4 != 4 )
    {
      if ( v4 != 8 )
        goto LABEL_32;
      v25 = (__int64 *)HMValidateHandleWithDescriptor(*((__int64 *)&v33[2] + 1), 0x13u, 0);
      if ( !*((_QWORD *)&v34[2] + 1) || v25 )
      {
        ProcessKeyboardInjectedInput((__int64)v34, v25, (__int64)&v34[3]);
        v6 = 1;
        goto LABEL_32;
      }
      v6 = 0;
      v13 = 6;
      goto LABEL_11;
    }
    xxxUpdateGlobalsAndSendKeyEvent(
      WORD4(v33[0]),
      LOWORD(v33[0]),
      HIDWORD(v33[0]),
      0,
      *((__int64 *)&v33[2] + 1),
      0LL,
      v33[1],
      DWORD1(v33[0]) != 0,
      0,
      0LL,
      0LL,
      (__int64)&v34[3]);
    v6 = 1;
    if ( a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      LODWORD(Src) = 0;
      v17 = 0;
      v28 = 0;
      v18 = 0;
      v29 = 0;
      v19 = 0;
      v20 = 0;
      v30 = 0;
      while ( v17 < 256 )
      {
        v21 = W32GetUserSessionState(v16, v14);
        LODWORD(Src) = v5 & 3;
        v32 = (unsigned __int64)(unsigned __int8)v5 >> 2;
        v22 = (unsigned int)(2 * (_DWORD)Src);
        v23 = (unsigned int)(1 << (2 * (_BYTE)Src));
        if ( ((unsigned __int8)v23 & *(_BYTE *)(v32 + v21 + 14336)) != 0 )
        {
          LOBYTE(v22) = *((_BYTE *)a3 + v28) | 0x80;
          *((_BYTE *)a3 + v19) = v22;
          v18 = v29;
          v20 = v30;
        }
        v24 = W32GetUserSessionState(v22, v23);
        v14 = (unsigned int)(1 << (2 * (_BYTE)Src + 1));
        v16 = v32;
        if ( ((unsigned __int8)v14 & *(_BYTE *)(v24 + v32 + 14336)) != 0 )
        {
          LOBYTE(v16) = *((_BYTE *)a3 + v18) | 1;
          *((_BYTE *)a3 + v20) = v16;
        }
        v17 = v5 + 1;
        v19 = v17;
        ++v5;
        LODWORD(Src) = v17;
        v28 = v17;
        v18 = v17;
        v29 = v17;
        v20 = v17;
        v30 = v17;
      }
    }
  }
LABEL_32:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v14);
  return v6;
}
