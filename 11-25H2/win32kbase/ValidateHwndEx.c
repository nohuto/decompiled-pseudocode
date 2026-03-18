/*
 * XREFs of ValidateHwndEx @ 0x1400BAF40
 * Callers:
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     ValidateHwnd @ 0x1400BAF20 (ValidateHwnd.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x14016D040 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x14016D900 (EtwTraceMessageCheckDelay.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ValidateHwndStrict @ 0x1401AC320 (ValidateHwndStrict.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     IsHandleEntrySecure @ 0x1400A2040 (IsHandleEntrySecure.c)
 *     EtwTraceUIPIHandleValidationError @ 0x14010D040 (EtwTraceUIPIHandleValidationError.c)
 *     GetDesktopView @ 0x1401222AC (GetDesktopView.c)
 *     IsGetDesktopViewSupported @ 0x140124B58 (IsGetDesktopViewSupported.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  int v5; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int16 v17; // ax
  __int64 *CurrentThreadWin32Thread; // rax
  const struct tagUIPI_INFO *v19; // r8
  bool v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 UserGdiSessionState; // rax
  _QWORD *v25; // rdx
  int v26; // ecx
  bool HasUILimit; // al

  v4 = (unsigned __int16)a1;
  v5 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 8LL) )
    goto LABEL_34;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v12 = *(_QWORD *)(UserSessionState + 19888)
      + (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v11, v10) + 19896) * v4);
  v15 = W32GetUserSessionState(v14, v13);
  v16 = (__int64 *)(*(_QWORD *)(v15 + 19832) + 40LL * (unsigned int)((v12 - *(_QWORD *)(v15 + 19888)) >> 5));
  v17 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v12 + 26) && v17 != 0x7FFF && (v17 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_34;
  if ( *(_BYTE *)(v12 + 24) != 1
    || ((CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread()) == 0LL
      ? (v21 = 0LL)
      : (v21 = *CurrentThreadWin32Thread),
        (v22 = *v16) == 0
     || (v23 = *(_QWORD *)(v22 + 16), (*(_BYTE *)(v12 + 25) & 1) != 0)
     || v5
     && v23 != v21
     && *(_QWORD *)(v22 + 24) != *(_QWORD *)(v21 + 496)
     && (_InterlockedCompareExchange((volatile signed __int32 *)(v21 + 528), 0, 0) & 4) == 0
     && ((int)IsGetDesktopViewSupported() < 0 || !GetDesktopView(*(_QWORD *)(v21 + 464), *(_QWORD *)(v22 + 24)))) )
  {
LABEL_34:
    v26 = 1400;
    goto LABEL_35;
  }
  if ( a3 && *(_DWORD *)(*(_QWORD *)(v23 + 464) + 876LL) != 1 )
    a3 = 0;
  if ( *(_BYTE *)(v21 + 1708) != 1
    || !v23
    || (LOBYTE(v19) = a3 != 0,
        UIPrivilegeIsolation::CheckAccessEx(
          (UIPrivilegeIsolation *)(*(_QWORD *)(v21 + 464) + 864LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v23 + 464) + 864LL),
          v19,
          v20))
    || (UserGdiSessionState = W32GetUserGdiSessionState(),
        v25 = *(_QWORD **)(v23 + 464),
        *v25 == *(_QWORD *)(UserGdiSessionState + 40)) )
  {
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v21 + 464), 1u);
    }
    else
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v21 + 528), 0, 0) & 0x20000000) == 0 )
        return v22;
      HasUILimit = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 464) + 752LL) + 24LL) & 1;
    }
    if ( HasUILimit && !(unsigned int)IsHandleEntrySecure(a1, v12) )
    {
      UserSetLastError(1400);
      return 0LL;
    }
    return v22;
  }
  EtwTraceUIPIHandleValidationError(*(_QWORD *)(v21 + 464), v25, a1, *(unsigned __int8 *)(v12 + 24));
  v26 = 5;
LABEL_35:
  UserSetLastError(v26);
  return 0LL;
}
