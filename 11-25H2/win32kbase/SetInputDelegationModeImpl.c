/*
 * XREFs of SetInputDelegationModeImpl @ 0x14018CB3C
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     IsAnyDelegationEnabled @ 0x1400B9CA0 (IsAnyDelegationEnabled.c)
 *     DisableDelegation @ 0x14018C880 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x140195AE0 (ApiSetEditionInternalSetCursorPos.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x14020E5DC (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ?SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z @ 0x140215C3C (-SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140216004 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionKeyboardInputDelegationChanged @ 0x140225A14 (ApiSetEditionKeyboardInputDelegationChanged.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 UserSessionState; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  _DWORD *v38; // rcx
  __int64 v39; // rax

  InputTraceLogging::Win32k::SetInputDelegationMode();
  if ( a4 )
  {
    v27 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19600);
    v28 = *(_DWORD *)(v27 + 8);
    if ( (a4 & 2) != 0 )
    {
      if ( (v28 & 2) == 0 )
      {
        UserSessionState = W32GetUserSessionState(v27, v26);
        CCursorClip::OverrideClip(*(CCursorClip **)(UserSessionState + 36240), 1);
        v32 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19184);
        v27 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 19600);
        *(_QWORD *)(v27 + 12) = v32;
      }
    }
    else if ( (v28 & 2) != 0 )
    {
      a4 |= 2u;
    }
    v35 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19600);
    *(_DWORD *)(v35 + 8) = a4;
    v38 = *(_DWORD **)(W32GetUserSessionState(v35, v36) + 19600);
    *v38 = a1;
    if ( (a4 & 1) != 0 )
    {
      v39 = W32GetUserSessionState(v38, v37);
      v25 = 1LL;
      *(_DWORD *)(*(_QWORD *)(v39 + 19600) + 4LL) = a3;
LABEL_17:
      ApiSetEditionKeyboardInputDelegationChanged(a3, v25);
    }
  }
  else if ( IsAnyDelegationEnabled() )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19600);
    v12 = *(_DWORD *)(v11 + 8);
    v14 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v13) + 19600) + 12LL);
    v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19600);
    a3 = *(_DWORD *)(v17 + 4);
    DisableDelegation(v17, v18);
    if ( !(unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline(v19) && (v12 & 2) != 0 )
      ApiSetEditionInternalSetCursorPos((unsigned int)v14, HIDWORD(v14), 1LL);
    if ( (v12 & 1) != 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18888) )
      {
        v24 = W32GetUserSessionState(v23, v22);
        *(_DWORD *)(*(_QWORD *)(v24 + 18888) + 412LL) |= 1u;
      }
      v25 = 0LL;
      goto LABEL_17;
    }
  }
  return 1LL;
}
