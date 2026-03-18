/*
 * XREFs of SetInputDelegationModeImpl @ 0x14021C0D0
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     IsAnyDelegationEnabled @ 0x140167930 (IsAnyDelegationEnabled.c)
 *     ?SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z @ 0x140180394 (-SetInputDelegationMode@Win32k@InputTraceLogging@@SAXIIIW4INPUTDELEGATION_MODE_FLAGS@@@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x1401B4A74 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1401B7950 (ApiSetEditionInternalSetCursorPos.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x140217F8C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     DisableDelegation @ 0x14021B3F0 (DisableDelegation.c)
 *     ApiSetEditionKeyboardInputDelegationChanged @ 0x1402278F8 (ApiSetEditionKeyboardInputDelegationChanged.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v5; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // edi
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rbx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // eax
  __int64 UserSessionState; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rbx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rcx
  int v45; // edx
  int v46; // r8d
  int v47; // edx
  int *v48; // rcx
  int v49; // r8d
  __int64 v50; // rax

  v4 = a4;
  v5 = a3;
  InputTraceLogging::Win32k::SetInputDelegationMode(a1, a2, a3, a4);
  if ( v4 )
  {
    v33 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19632);
    v35 = *(_DWORD *)(v33 + 8);
    if ( (v4 & 2) != 0 )
    {
      if ( (v35 & 2) == 0 )
      {
        UserSessionState = W32GetUserSessionState(v33, v32, v34);
        CCursorClip::OverrideClip(*(CCursorClip **)(UserSessionState + 36272), 1u);
        v40 = *(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 19216);
        v33 = *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 19632);
        *(_QWORD *)(v33 + 12) = v40;
      }
    }
    else if ( (v35 & 2) != 0 )
    {
      v4 |= 2u;
    }
    v44 = *(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 19632);
    *(_DWORD *)(v44 + 8) = v4;
    v48 = *(int **)(W32GetUserSessionState(v44, v45, v46) + 19632);
    *v48 = a1;
    if ( (v4 & 1) != 0 )
    {
      v50 = W32GetUserSessionState((_DWORD)v48, v47, v49);
      v31 = 1LL;
      *(_DWORD *)(*(_QWORD *)(v50 + 19632) + 4LL) = v5;
LABEL_17:
      ApiSetEditionKeyboardInputDelegationChanged(v5, v31);
    }
  }
  else if ( IsAnyDelegationEnabled(v8, v7, v9) )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 19632);
    v14 = *(_DWORD *)(v13 + 8);
    v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v15, v16) + 19632) + 12LL);
    v21 = *(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 19632);
    v5 = *(_DWORD *)(v21 + 4);
    DisableDelegation(v21, v22, v23);
    if ( !(unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() && (v14 & 2) != 0 )
      ApiSetEditionInternalSetCursorPos((unsigned int)v17, HIDWORD(v17), 1u);
    if ( (v14 & 1) != 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v25, v24, v26) + 18928) )
      {
        v30 = W32GetUserSessionState(v28, v27, v29);
        *(_DWORD *)(*(_QWORD *)(v30 + 18928) + 436LL) |= 1u;
      }
      v31 = 0LL;
      goto LABEL_17;
    }
  }
  return 1LL;
}
