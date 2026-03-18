/*
 * XREFs of ValidateHwndEx @ 0x14006E370
 * Callers:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x14006C7BC (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ValidateHwndStrict @ 0x14006E310 (ValidateHwndStrict.c)
 *     ValidateHwnd @ 0x14006E350 (ValidateHwnd.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1400DB7E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1400DCB00 (EtwTraceMessageCheckDelay.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwTraceUIPIHandleValidationError @ 0x14014C6B4 (EtwTraceUIPIHandleValidationError.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CE7F4 (Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     IsHandleEntrySecure @ 0x1401CE84C (IsHandleEntrySecure.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r14
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int16 v23; // ax
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rcx
  const struct tagUIPI_INFO *v26; // r8
  __int64 v27; // rdi
  struct tagTHREADINFO *v28; // rbx
  struct tagTHREADINFO *v29; // rbp
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 (__fastcall *v32)(__int64, __int64); // rax
  __int64 UserGdiSessionState; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // eax
  bool HasUILimit; // al

  v3 = a3;
  v4 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904)
                                                           + 8LL) )
    goto LABEL_34;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  v14 = *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 19928) * v4;
  v15 = v14 + *(_QWORD *)(UserSessionState + 19920);
  v18 = W32GetUserSessionState(v14, v16, v17);
  v20 = *(_QWORD *)(v18 + 19864);
  v21 = 5LL * (unsigned int)((v15 - *(_QWORD *)(v18 + 19920)) >> 5);
  v22 = 0x7FFFLL;
  v23 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v15 + 26)
    && v23 != 0x7FFF
    && (v23 || !PsGetCurrentProcessWow64Process(0x7FFFLL, v19)) )
  {
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v15 + 24) != 1
    || (v24 = PtiCurrent(v22, v19), v27 = *(_QWORD *)(v20 + 8 * v21), v28 = v24, !v27)
    || (v29 = *(struct tagTHREADINFO **)(v27 + 16), (*(_BYTE *)(v15 + 25) & 1) != 0)
    || a2
    && v29 != v24
    && *(_QWORD *)(v27 + 24) != *((_QWORD *)v24 + 61)
    && (_InterlockedCompareExchange((volatile signed __int32 *)v24 + 130, 0, 0) & 4) == 0
    && ((v30 = *(_QWORD *)(v27 + 24),
         v31 = *((_QWORD *)v24 + 57),
         (v32 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48) + 472LL)) == 0LL)
     || !v32(v31, v30)) )
  {
LABEL_34:
    v35 = 1400LL;
    goto LABEL_35;
  }
  if ( v3 && *(_DWORD *)(*((_QWORD *)v29 + 57) + 876LL) != 1 )
    v3 = 0;
  if ( *((_BYTE *)v28 + 1708) != 1
    || !v29
    || (LOBYTE(v26) = v3 != 0,
        UIPrivilegeIsolation::CheckAccessEx(
          (UIPrivilegeIsolation *)(*((_QWORD *)v28 + 57) + 864LL),
          (const struct tagUIPI_INFO *)(*((_QWORD *)v29 + 57) + 864LL),
          v26))
    || (UserGdiSessionState = W32GetUserGdiSessionState(),
        v34 = (_QWORD *)*((_QWORD *)v29 + 57),
        *v34 == *(_QWORD *)(UserGdiSessionState + 40)) )
  {
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !(unsigned int)Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline() )
      {
        HasUILimit = tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v28 + 57), 1u);
        goto LABEL_30;
      }
      v36 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v28 + 130, 0, 0) >> 29;
    }
    else
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v28 + 130, 0, 0) & 0x20000000) == 0 )
        return v27;
      LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v28 + 57) + 752LL) + 32LL);
    }
    HasUILimit = v36 & 1;
LABEL_30:
    if ( HasUILimit && !(unsigned int)IsHandleEntrySecure(a1, v15) )
    {
      UserSetLastError(1400LL);
      return 0LL;
    }
    return v27;
  }
  EtwTraceUIPIHandleValidationError(*((_QWORD *)v28 + 57), v34, a1, *(unsigned __int8 *)(v15 + 24));
  v35 = 5LL;
LABEL_35:
  UserSetLastError(v35);
  return 0LL;
}
