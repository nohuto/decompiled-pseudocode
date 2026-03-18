/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172200 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     DrvSetMonitorsDimState @ 0x14000C4E0 (DrvSetMonitorsDimState.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x14000DEAC (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     DxgkEngIsDwmProcess @ 0x14000E360 (DxgkEngIsDwmProcess.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     UserGetSystemDpi @ 0x1401EA6E0 (UserGetSystemDpi.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401F1BC8 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401F9844 (Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline.c)
 *     GreIsInLowBox @ 0x1401FAE70 (GreIsInLowBox.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rsi
  UINT *p_PrivateDriverDataSize; // r15
  __int64 PrivateDriverDataSize; // rcx
  void *v9; // rax
  __int64 Type; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v16; // rcx
  NTSTATUS CurrentDpiInfoFromHDC; // eax
  __int64 v18; // rcx
  __int64 (*v19)(void); // rax
  __int64 (__fastcall *v20)(__int64); // rax
  int v21; // ecx
  __int64 v22; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING v35; // [rsp+40h] [rbp-38h] BYREF
  struct _D3DKMT_ESCAPE *v36; // [rsp+80h] [rbp+8h] BYREF
  void *v37; // [rsp+88h] [rbp+10h]
  UINT *v38; // [rsp+90h] [rbp+18h]

  v36 = a1;
  v5 = 0;
  v6 = 0LL;
  v37 = 0LL;
  p_PrivateDriverDataSize = &a1->PrivateDriverDataSize;
  v38 = &a1->PrivateDriverDataSize;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v9 = (void *)PALLOCMEM(PrivateDriverDataSize, 1886221383LL, a3, a4);
    v6 = (__int64)v9;
    v37 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(6LL, *p_PrivateDriverDataSize);
      WdLogGlobalForLineNumber = 27787;
      return 3221225495LL;
    }
    RtlCopyFromUser(v9, a1->pPrivateDriverData, *p_PrivateDriverDataSize);
  }
  Type = a1->Type;
  v12 = 1030LL;
  if ( (int)Type > 1030 )
  {
    v21 = Type - 1031;
    if ( (_DWORD)Type != 1031 )
    {
      if ( (_DWORD)Type == 1035 )
      {
        v5 = -1073741811;
        if ( *p_PrivateDriverDataSize == 8 )
          v5 = -1073741637;
        goto LABEL_84;
      }
      if ( (_DWORD)Type == 1036 )
      {
        Type = *p_PrivateDriverDataSize;
        if ( (unsigned int)Type < 0x64 )
          goto LABEL_13;
        CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser((char *)v6, Type);
        goto LABEL_25;
      }
      v22 = (unsigned int)(Type - 1037);
      if ( (_DWORD)Type == 1037 )
      {
        if ( gbOSTestSigningEnabled )
        {
          if ( !*p_PrivateDriverDataSize )
            goto LABEL_13;
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          LOBYTE(v22) = *(_BYTE *)v6;
          DrvSetMonitorsDimState(v22, (__int128 *)&DestinationString);
          v5 = 0;
          goto LABEL_84;
        }
      }
      else
      {
        if ( (_DWORD)Type != 1038 )
          goto LABEL_47;
        if ( gbOSTestSigningEnabled )
        {
LABEL_50:
          v5 = -1073741637;
          goto LABEL_84;
        }
      }
LABEL_38:
      v5 = -1073741790;
      goto LABEL_87;
    }
    if ( !gbOSTestSigningEnabled && !(unsigned int)DxgkEngIsDwmProcess() )
    {
      if ( (unsigned int)GreIsInLowBox() )
      {
        LOBYTE(v36) = 0;
        DestinationString = 0LL;
        v35 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
        RtlInitUnicodeString(&v35, L"shellDisplayManagement");
        if ( ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v36) < 0 || !(_BYTE)v36)
          && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v35, &v36) < 0 || !(_BYTE)v36) )
        {
          v5 = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 27959;
          goto LABEL_84;
        }
      }
      else if ( !(unsigned int)Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline() )
      {
        v5 = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        WdLogGlobalForLineNumber = 27967;
        goto LABEL_84;
      }
    }
    if ( *p_PrivateDriverDataSize != 24 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(2LL, *p_PrivateDriverDataSize, -1073741811LL);
      WdLogGlobalForLineNumber = 27975;
      goto LABEL_84;
    }
    if ( *(_DWORD *)(v6 + 20) >= 4u )
    {
      v5 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 27984;
      goto LABEL_84;
    }
    UserSessionState = (_QWORD *)W32GetUserSessionState(v21, Type, v12);
    v24 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v24;
    if ( v24 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v24 + 520), 0, 0) & 0x1000000) == 0
        || *(char *)(v24 + 1360) < 0 )
      {
        v29 = 0;
        goto LABEL_81;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
      if ( CurrentProcessWin32Process )
      {
        v25 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v28 = v25 & CurrentProcessWin32Process;
        if ( v28 )
        {
          v29 = *(_BYTE *)(v28 + 1200);
          if ( v29 == 1 )
          {
LABEL_81:
            if ( v29 )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v25, v26);
              DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
              DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
            }
          }
        }
      }
    }
    xxxDisplayDiagBlackScreenDetected(4u, v6);
    v5 = 0;
    UserSessionSwitchLeaveCritWithNonPaged(v31, v30, v32, v33);
    goto LABEL_84;
  }
  switch ( (_DWORD)Type )
  {
    case 0x406:
      if ( *p_PrivateDriverDataSize != 4 )
        goto LABEL_13;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*(_DWORD *)v6 & 3) == 2 )
        {
          WdLogSingleEntry1(2LL, 1030LL);
          WdLogGlobalForLineNumber = 27923;
          goto LABEL_13;
        }
        g_OutputDuplicationTestControl = *(_DWORD *)v6;
        goto LABEL_84;
      }
      goto LABEL_38;
    case 0x400:
      if ( *p_PrivateDriverDataSize < 4 || *p_PrivateDriverDataSize != *(_DWORD *)v6 )
        goto LABEL_13;
      v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable((unsigned int)(Type - 1024)) + 24);
      v19 = *(__int64 (**)(void))(v18 + 1056);
      if ( v19 )
        v5 = v19();
      else
        v5 = -1073741637;
      if ( v5 < 0 )
        goto LABEL_87;
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 24) + 1064LL);
      if ( !v20 )
      {
        v5 = -1073741637;
        goto LABEL_84;
      }
      CurrentDpiInfoFromHDC = v20(v6);
      goto LABEL_25;
    case 0x401:
      v5 = -1073741637;
      goto LABEL_87;
  }
  v13 = (unsigned int)(Type - 1026);
  if ( (_DWORD)Type == 1026 )
  {
    if ( *p_PrivateDriverDataSize != 104 )
    {
      v5 = -1073741811;
      goto LABEL_17;
    }
    CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v6, (struct _DPI_INFORMATION *const)(v6 + 8));
LABEL_25:
    v5 = CurrentDpiInfoFromHDC;
    goto LABEL_84;
  }
  v13 = (unsigned int)(Type - 1027);
  if ( (_DWORD)Type == 1027 )
  {
LABEL_17:
    if ( *p_PrivateDriverDataSize < 8 )
      goto LABEL_13;
    if ( *(_DWORD *)v6 != 1 )
    {
      if ( *(_DWORD *)v6 == 2 )
      {
        v16 = *(_QWORD *)(W32GetSessionState(v13) + 88);
        if ( gbOSTestSigningEnabled )
        {
          *(_DWORD *)(v16 + 1348) = *(_DWORD *)(v6 + 4);
          goto LABEL_84;
        }
      }
      goto LABEL_48;
    }
    if ( *(_QWORD *)(DxDdGetDxgkWin32kInterface(v13, Type) + 536) )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14, Type);
      *(_DWORD *)(v6 + 4) = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
      goto LABEL_84;
    }
    goto LABEL_50;
  }
  if ( (_DWORD)Type != 1028 )
  {
LABEL_47:
    WdLogSingleEntry1(2LL, Type);
    WdLogGlobalForLineNumber = 28053;
LABEL_48:
    v5 = -1073741811;
    goto LABEL_84;
  }
  if ( *p_PrivateDriverDataSize != 6 )
  {
LABEL_13:
    v5 = -1073741811;
    goto LABEL_87;
  }
  *(_WORD *)v6 = *(_WORD *)(*(_QWORD *)(W32GetSessionState(v13) + 88) + 1168LL);
  UserGetSystemDpi(v6 + 2, v6 + 4);
LABEL_84:
  if ( v5 < 0 )
    goto LABEL_87;
  if ( v6 )
  {
    RtlCopyToUser(a1->pPrivateDriverData, (void *)v6, *p_PrivateDriverDataSize);
LABEL_87:
    if ( v6 )
      GreDeleteFastMutex((char *)v6, Type, v12, a4);
  }
  return (unsigned int)v5;
}
