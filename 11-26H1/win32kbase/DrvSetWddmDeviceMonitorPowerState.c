/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x140181390
 * Callers:
 *     DrvSetMonitorPowerState @ 0x140181340 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     UserSetMonitorPowerWaiterEvent @ 0x140188260 (UserSetMonitorPowerWaiterEvent.c)
 *     UserResetMonitorPowerWaiterEvent @ 0x140196230 (UserResetMonitorPowerWaiterEvent.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, const struct _GUID *a4)
{
  __int64 v5; // rdi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ebx
  char *v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // edi
  unsigned int i; // edx
  __int64 v22; // rdx
  void *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  unsigned int v32; // r14d
  char *v33; // rbx
  int v34; // eax
  unsigned int v35; // r15d
  _QWORD *UserSessionState; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 j; // rbx
  __int64 k; // rax
  int v47; // eax
  unsigned int v48; // edi
  unsigned int v49; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 v50; // [rsp+58h] [rbp-11h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // [rsp+60h] [rbp-9h] BYREF
  int InputBuffer; // [rsp+68h] [rbp-1h] BYREF
  __int128 v53; // [rsp+6Ch] [rbp+3h]

  v5 = a2;
  v8 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)UserIsWddmConnectedSession(v10, v9, v11, v12) )
  {
    v50 = 0;
    v13 = 0LL;
    v51 = 0LL;
    if ( a4 )
    {
      v50 = DisplayScenarioContextFindAndAddRef(a4, &v51);
      v13 = v51;
    }
    InputBuffer = v5;
    v53 = 0LL;
    if ( v13 )
      v53 = *(_OWORD *)v13;
    else
      v53 = 0LL;
    WdLogSingleEntry2(5LL, a1, v5);
    WdLogGlobalForLineNumber = 6995;
    if ( !a3 )
    {
      v16 = *(_QWORD *)(v8 + 1184);
      v17 = 0;
      while ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 160) & 0x800000) != 0 && *(_QWORD *)(v16 + 224) && (!a1 || *(_QWORD *)(v16 + 144) == a1) )
          ++v17;
        v16 = *(_QWORD *)(v16 + 128);
      }
      v18 = (char *)PALLOCMEM(24 * v17, 1886221383LL, v14, v15);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v8 + 1184);
        v20 = 0;
        while ( v19 )
        {
          if ( (*(_DWORD *)(v19 + 160) & 0x800000) != 0
            && *(_QWORD *)(v19 + 224)
            && (!a1 || *(_QWORD *)(v19 + 144) == a1) )
          {
            for ( i = 0; i < v20; ++i )
            {
              if ( *(_QWORD *)&v18[24 * i + 16] == *(_QWORD *)(v19 + 144) )
                break;
            }
            if ( v20 == i )
            {
              v22 = 3LL * v20;
              *(_QWORD *)&v18[8 * v22] = *(_QWORD *)(v19 + 136);
              v23 = *(void **)(v19 + 224);
              *(_QWORD *)&v18[8 * v22 + 8] = v23;
              *(_QWORD *)&v18[8 * v22 + 16] = *(_QWORD *)(v19 + 144);
              ObfReferenceObject(v23);
              ++v20;
            }
          }
          v19 = *(_QWORD *)(v19 + 128);
        }
        UserResetMonitorPowerWaiterEvent();
        *(_BYTE *)(W32GetUserGdiSessionState(v24) + 1) = 1;
        UserSessionSwitchLeaveCritWithNonPaged(v26, v25, v27, v28);
        v32 = 0;
        if ( v20 )
        {
          v33 = v18;
          do
          {
            DrvDxgkLogCodePointPacket(90LL, v32, v20, 0);
            v34 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v33, 0x23200Fu, &InputBuffer, 0x14u, 0LL, 0, &v49, 1u, 1);
            v35 = v34;
            if ( v34 < 0 )
            {
              WdLogSingleEntry2(2LL, *(_QWORD *)v33, v34);
              WdLogGlobalForLineNumber = 7116;
            }
            ObfDereferenceObject(*((PVOID *)v33 + 1));
            DrvDxgkLogCodePointPacket(91LL, v35, 0, 0);
            ++v32;
            v33 += 24;
          }
          while ( v32 < v20 );
        }
        UserSessionState = (_QWORD *)W32GetUserSessionState(v30, v29, v31);
        v37 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        UserSessionState[3] = v37;
        v38 = v37;
        if ( v37 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v37 + 520), 0, 0) & 0x1000000) != 0
            && *(char *)(v37 + 1360) >= 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
              {
                DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v40, v41);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
              }
            }
          }
        }
        *(_BYTE *)(W32GetUserGdiSessionState(v38) + 1) = 0;
        UserSetMonitorPowerWaiterEvent(0);
        GreDeleteFastMutex(v18, v42, v43, v44);
LABEL_42:
        if ( v50 )
          DisplayScenarioContextRelease(&v51);
        return;
      }
      WdLogSingleEntry1(6LL, v17);
      WdLogGlobalForLineNumber = 7148;
    }
    for ( j = *(_QWORD *)(v8 + 1184); j; j = *(_QWORD *)(j + 128) )
    {
      if ( (*(_DWORD *)(j + 160) & 0x800000) != 0 && *(_QWORD *)(j + 136) && (!a1 || *(_QWORD *)(j + 144) == a1) )
      {
        for ( k = *(_QWORD *)(v8 + 1184); k; k = *(_QWORD *)(k + 128) )
        {
          if ( *(_QWORD *)(k + 144) == *(_QWORD *)(j + 144) )
            break;
        }
        if ( k == j )
        {
          DrvDxgkLogCodePointPacket(90LL, 0LL, 0, 0);
          v47 = GreDeviceIoControlImpl(
                  *(PDEVICE_OBJECT *)(j + 136),
                  0x23200Fu,
                  &InputBuffer,
                  0x14u,
                  0LL,
                  0,
                  &v49,
                  1u,
                  1);
          v48 = v47;
          if ( v47 < 0 )
          {
            WdLogSingleEntry2(2LL, j, v47);
            WdLogGlobalForLineNumber = 7204;
          }
          DrvDxgkLogCodePointPacket(91LL, v48, 0, 0);
        }
      }
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 7212;
    goto LABEL_42;
  }
}
