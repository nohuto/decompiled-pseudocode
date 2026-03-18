/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A10 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     DrvSetMonitorsDimState @ 0x140080510 (DrvSetMonitorsDimState.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1400EC01C (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     DxgkEngIsDwmProcess @ 0x1400EC544 (DxgkEngIsDwmProcess.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 *     UserGetSystemDpi @ 0x1401C1B80 (UserGetSystemDpi.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401CB96C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401CFF30 (Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline.c)
 *     GreIsInLowBox @ 0x1401D1A60 (GreIsInLowBox.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1)
{
  int v2; // edi
  _BYTE *v3; // rsi
  int *p_PrivateDriverDataSize; // r15
  __int64 PrivateDriverDataSize; // rcx
  size_t v7; // r8
  char *pPrivateDriverData; // rdx
  __int64 Type; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v13; // rcx
  NTSTATUS CurrentDpiInfoFromHDC; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  __int64 (__fastcall *v18)(_BYTE *); // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *UserSessionState; // r14
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  size_t v25; // r8
  char *v26; // rcx
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING v29; // [rsp+50h] [rbp-38h] BYREF
  struct _D3DKMT_ESCAPE *v30; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v31; // [rsp+98h] [rbp+10h]
  UINT *v32; // [rsp+A0h] [rbp+18h]

  v30 = a1;
  v2 = 0;
  v3 = 0LL;
  v31 = 0LL;
  p_PrivateDriverDataSize = (int *)&a1->PrivateDriverDataSize;
  v32 = &a1->PrivateDriverDataSize;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v3 = (_BYTE *)PALLOCMEM(PrivateDriverDataSize, 1886221383LL);
    v31 = v3;
    if ( !v3 )
    {
      WdLogSingleEntry1(6LL, (unsigned int)*p_PrivateDriverDataSize);
      WdLogGlobalForLineNumber = 29136;
      return 3221225495LL;
    }
    v7 = (unsigned int)*p_PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v7] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v7] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v3, pPrivateDriverData, v7);
  }
  Type = a1->Type;
  if ( (int)Type > 1030 )
  {
    v19 = (unsigned int)(Type - 1031);
    if ( (_DWORD)Type != 1031 )
    {
      if ( (_DWORD)Type == 1035 )
      {
        v2 = -1073741811;
        if ( *p_PrivateDriverDataSize == 8 )
          v2 = -1073741637;
        goto LABEL_87;
      }
      if ( (_DWORD)Type == 1036 )
      {
        if ( (unsigned int)*p_PrivateDriverDataSize < 0x64 )
          goto LABEL_16;
        CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser(v3, *p_PrivateDriverDataSize);
        goto LABEL_28;
      }
      v20 = (unsigned int)(Type - 1037);
      if ( (_DWORD)Type == 1037 )
      {
        if ( gbOSTestSigningEnabled )
        {
          if ( !*p_PrivateDriverDataSize )
            goto LABEL_16;
          v27 = 0uLL;
          LOBYTE(v20) = *v3;
          DrvSetMonitorsDimState(v20, &v27);
          v2 = 0;
          goto LABEL_87;
        }
      }
      else
      {
        if ( (_DWORD)Type != 1038 )
          goto LABEL_51;
        if ( gbOSTestSigningEnabled )
        {
LABEL_54:
          v2 = -1073741637;
          goto LABEL_87;
        }
      }
LABEL_41:
      v2 = -1073741790;
      goto LABEL_93;
    }
    if ( !gbOSTestSigningEnabled && !(unsigned int)DxgkEngIsDwmProcess(v19, Type) )
    {
      if ( (unsigned int)GreIsInLowBox() )
      {
        LOBYTE(v30) = 0;
        DestinationString = 0LL;
        v29 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
        RtlInitUnicodeString(&v29, L"shellDisplayManagement");
        if ( ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v30) < 0 || !(_BYTE)v30)
          && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v29, &v30) < 0 || !(_BYTE)v30) )
        {
          v2 = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 29308;
          goto LABEL_87;
        }
      }
      else if ( !(unsigned int)Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline() )
      {
        v2 = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        WdLogGlobalForLineNumber = 29316;
        goto LABEL_87;
      }
    }
    if ( *p_PrivateDriverDataSize != 24 )
    {
      v2 = -1073741811;
      WdLogSingleEntry2(2LL, (unsigned int)*p_PrivateDriverDataSize, -1073741811LL);
      WdLogGlobalForLineNumber = 29324;
      goto LABEL_87;
    }
    if ( *((_DWORD *)v3 + 5) >= 4u )
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 29333;
      goto LABEL_87;
    }
    UserSessionState = (_QWORD *)W32GetUserSessionState(v19, Type);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v22 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v22 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v23 = v22;
    UserSessionState[3] = v22;
    if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v23 )
      {
LABEL_86:
        xxxDisplayDiagBlackScreenDetected(4u, (__int64)v3);
        v2 = 0;
        UserSessionSwitchLeaveCritWithNonPaged(0LL, v24);
        goto LABEL_87;
      }
      *(_BYTE *)(v23 + 1708) = 1;
    }
    if ( v23 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v23) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
    goto LABEL_86;
  }
  switch ( (_DWORD)Type )
  {
    case 0x406:
      if ( *p_PrivateDriverDataSize != 4 )
        goto LABEL_16;
      if ( gbOSTestSigningEnabled )
      {
        if ( (*(_DWORD *)v3 & 2) != 0 && (*(_DWORD *)v3 & 1) == 0 )
        {
          WdLogSingleEntry1(2LL, Type);
          WdLogGlobalForLineNumber = 29272;
          goto LABEL_16;
        }
        g_OutputDuplicationTestControl = *(_DWORD *)v3;
        goto LABEL_87;
      }
      goto LABEL_41;
    case 0x400:
      if ( (unsigned int)*p_PrivateDriverDataSize < 4 || *p_PrivateDriverDataSize != *(_DWORD *)v3 )
        goto LABEL_16;
      v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable((unsigned int)(Type - 1024), Type) + 24);
      v17 = *(__int64 (**)(void))(v16 + 1056);
      if ( v17 )
        v2 = v17();
      else
        v2 = -1073741637;
      if ( v2 < 0 )
        goto LABEL_93;
      v18 = *(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24) + 1064LL);
      if ( !v18 )
      {
        v2 = -1073741637;
        goto LABEL_87;
      }
      CurrentDpiInfoFromHDC = v18(v3);
      goto LABEL_28;
    case 0x401:
      v2 = -1073741637;
      goto LABEL_93;
  }
  v10 = (unsigned int)(Type - 1026);
  if ( (_DWORD)Type == 1026 )
  {
    if ( *p_PrivateDriverDataSize != 104 )
    {
      v2 = -1073741811;
      goto LABEL_20;
    }
    CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v3, (struct _DPI_INFORMATION *const)(v3 + 8));
LABEL_28:
    v2 = CurrentDpiInfoFromHDC;
    goto LABEL_87;
  }
  v10 = (unsigned int)(Type - 1027);
  if ( (_DWORD)Type == 1027 )
  {
LABEL_20:
    if ( (unsigned int)*p_PrivateDriverDataSize < 8 )
      goto LABEL_16;
    if ( *(_DWORD *)v3 != 1 )
    {
      if ( *(_DWORD *)v3 == 2 )
      {
        v13 = *(_QWORD *)(W32GetSessionState(v10) + 88);
        if ( gbOSTestSigningEnabled )
        {
          *(_DWORD *)(v13 + 1260) = *((_DWORD *)v3 + 1);
          goto LABEL_87;
        }
      }
      goto LABEL_52;
    }
    if ( *(_QWORD *)(DxDdGetDxgkWin32kInterface(v10) + 536) )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11);
      *((_DWORD *)v3 + 1) = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
      goto LABEL_87;
    }
    goto LABEL_54;
  }
  if ( (_DWORD)Type != 1028 )
  {
LABEL_51:
    WdLogSingleEntry1(2LL, Type);
    WdLogGlobalForLineNumber = 29402;
LABEL_52:
    v2 = -1073741811;
    goto LABEL_87;
  }
  if ( *p_PrivateDriverDataSize != 6 )
  {
LABEL_16:
    v2 = -1073741811;
    goto LABEL_93;
  }
  *(_WORD *)v3 = *(_WORD *)(*(_QWORD *)(W32GetSessionState(v10) + 88) + 1080LL);
  UserGetSystemDpi(v3 + 2, v3 + 4);
LABEL_87:
  if ( v2 < 0 )
  {
LABEL_93:
    if ( v3 )
      GreDeleteFastMutex(v3);
    return (unsigned int)v2;
  }
  if ( v3 )
  {
    v25 = (unsigned int)*p_PrivateDriverDataSize;
    v26 = (char *)a1->pPrivateDriverData;
    if ( (unsigned __int64)&v26[v25] > MmUserProbeAddress || &v26[v25] <= v26 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, v3, v25);
    goto LABEL_93;
  }
  return (unsigned int)v2;
}
