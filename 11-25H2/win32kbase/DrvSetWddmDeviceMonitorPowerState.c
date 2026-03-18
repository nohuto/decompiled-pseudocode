/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0
 * Callers:
 *     DrvSetMonitorPowerState @ 0x14006A8A0 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     UserSetMonitorPowerWaiterEvent @ 0x14014EBD0 (UserSetMonitorPowerWaiterEvent.c)
 *     UserResetMonitorPowerWaiterEvent @ 0x140157A90 (UserResetMonitorPowerWaiterEvent.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, const struct _GUID *a4)
{
  __int64 v4; // rdi
  __int64 v8; // r15
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  char *v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // edi
  unsigned int i; // edx
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r14d
  char *v22; // rbx
  int v23; // eax
  unsigned int v24; // r15d
  __int64 UserSessionState; // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 j; // rbx
  __int64 k; // rax
  int v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 v33; // [rsp+58h] [rbp-11h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v34; // [rsp+60h] [rbp-9h] BYREF
  int InputBuffer; // [rsp+68h] [rbp-1h] BYREF
  __int128 v36; // [rsp+6Ch] [rbp+3h]

  v4 = a2;
  v32 = 0;
  v8 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v33 = 0;
    v9 = 0LL;
    v34 = 0LL;
    if ( a4 )
    {
      v33 = DisplayScenarioContextFindAndAddRef(a4, &v34);
      v9 = v34;
    }
    InputBuffer = v4;
    v36 = 0LL;
    if ( v9 )
      v36 = *(_OWORD *)v9;
    else
      v36 = 0LL;
    WdLogSingleEntry2(5LL, a1, v4);
    WdLogGlobalForLineNumber = 7207;
    if ( !a3 )
    {
      v10 = *(_QWORD *)(v8 + 1096);
      v11 = 0;
      while ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 160) & 0x800000) != 0 && *(_QWORD *)(v10 + 224) && (!a1 || *(_QWORD *)(v10 + 144) == a1) )
          ++v11;
        v10 = *(_QWORD *)(v10 + 128);
      }
      v12 = (char *)PALLOCMEM(24 * v11, 1886221383LL);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v8 + 1096);
        v14 = 0;
        while ( v13 )
        {
          if ( (*(_DWORD *)(v13 + 160) & 0x800000) != 0
            && *(_QWORD *)(v13 + 224)
            && (!a1 || *(_QWORD *)(v13 + 144) == a1) )
          {
            for ( i = 0; i < v14; ++i )
            {
              if ( *(_QWORD *)&v12[24 * i + 16] == *(_QWORD *)(v13 + 144) )
                break;
            }
            if ( v14 == i )
            {
              v16 = 3LL * v14;
              *(_QWORD *)&v12[8 * v16] = *(_QWORD *)(v13 + 136);
              v17 = *(void **)(v13 + 224);
              *(_QWORD *)&v12[8 * v16 + 8] = v17;
              *(_QWORD *)&v12[8 * v16 + 16] = *(_QWORD *)(v13 + 144);
              ObfReferenceObject(v17);
              ++v14;
            }
          }
          v13 = *(_QWORD *)(v13 + 128);
        }
        UserResetMonitorPowerWaiterEvent();
        *(_BYTE *)(W32GetUserGdiSessionState() + 1) = 1;
        UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
        v21 = 0;
        if ( v14 )
        {
          v22 = v12;
          do
          {
            DrvDxgkLogCodePointPacket(90LL, v21, v14, 0LL);
            v23 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v22, 0x23200Fu, &InputBuffer, 0x14u, 0LL, 0, &v32, 1u, 1);
            v24 = v23;
            if ( v23 < 0 )
            {
              WdLogSingleEntry2(2LL, *(_QWORD *)v22, v23);
              WdLogGlobalForLineNumber = 7328;
            }
            ObfDereferenceObject(*((PVOID *)v22 + 1));
            DrvDxgkLogCodePointPacket(91LL, v24, 0LL, 0LL);
            ++v21;
            v22 += 24;
          }
          while ( v21 < v14 );
        }
        UserSessionState = W32GetUserSessionState(v20, v19);
        if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
          v26 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                  UserSessionState,
                  1LL,
                  0LL,
                  _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        else
          v26 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
        v27 = v26;
        *(_QWORD *)(UserSessionState + 24) = v26;
        if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( v27 )
          {
LABEL_41:
            if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v27) )
            {
              DestroySharedUserCritDeferredUnlockList(UserSessionState + 19688);
              DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19744);
              DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19728);
            }
          }
        }
        else if ( v27 )
        {
          *(_BYTE *)(v27 + 1708) = 1;
          goto LABEL_41;
        }
        *(_BYTE *)(W32GetUserGdiSessionState() + 1) = 0;
        UserSetMonitorPowerWaiterEvent(0);
        GreDeleteFastMutex(v12);
LABEL_60:
        if ( v33 )
          DisplayScenarioContextRelease(&v34);
        return;
      }
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 7360;
    }
    for ( j = *(_QWORD *)(v8 + 1096); j; j = *(_QWORD *)(j + 128) )
    {
      if ( (*(_DWORD *)(j + 160) & 0x800000) != 0 && *(_QWORD *)(j + 136) && (!a1 || *(_QWORD *)(j + 144) == a1) )
      {
        for ( k = *(_QWORD *)(v8 + 1096); k; k = *(_QWORD *)(k + 128) )
        {
          if ( *(_QWORD *)(k + 144) == *(_QWORD *)(j + 144) )
            break;
        }
        if ( k == j )
        {
          DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL, 0LL);
          v30 = GreDeviceIoControlImpl(
                  *(PDEVICE_OBJECT *)(j + 136),
                  0x23200Fu,
                  &InputBuffer,
                  0x14u,
                  0LL,
                  0,
                  &v32,
                  1u,
                  1);
          v31 = v30;
          if ( v30 < 0 )
          {
            WdLogSingleEntry2(2LL, j, v30);
            WdLogGlobalForLineNumber = 7416;
          }
          DrvDxgkLogCodePointPacket(91LL, v31, 0LL, 0LL);
        }
      }
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 7424;
    goto LABEL_60;
  }
}
