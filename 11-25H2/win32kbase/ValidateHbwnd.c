/*
 * XREFs of ValidateHbwnd @ 0x140121970
 * Callers:
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1401AC2C0 (ValidateHbwndOwnedByCallingThread.c)
 *     NtUserGetInputContainerId @ 0x1401BD5F0 (NtUserGetInputContainerId.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F701C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x14021BBEC (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(__int64 a1, __int64 a2)
{
  __int16 v2; // edi^2
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int16 v15; // di
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  char v22; // al
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v24; // r8
  __int16 v25; // ax
  _QWORD *v26; // rax
  __int64 v27; // rax

  v2 = WORD1(a1);
  v3 = (unsigned __int16)a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( v3 >= *(_QWORD *)(v4 + 8) )
    goto LABEL_4;
  UserSessionState = W32GetUserSessionState(v5, v4);
  v9 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v8, v7) + 19896) * v3);
  v10 = v9 + *(_QWORD *)(UserSessionState + 19888);
  v12 = W32GetUserSessionState(v9, v11);
  v14 = *(_QWORD *)(v12 + 19832);
  v15 = v2 & 0x7FFF;
  v16 = (unsigned int)((v10 - *(_QWORD *)(v12 + 19888)) >> 5);
  v17 = 5 * v16;
  if ( (v2 & 0x7FFF) != *(_WORD *)(v10 + 26) && v15 != 0x7FFF && (v15 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_4;
  if ( *(_BYTE *)(v10 + 24) != 23 )
    goto LABEL_4;
  v19 = W32GetUserSessionState(v16, v13);
  v20 = (unsigned int)((v10 - *(_QWORD *)(v19 + 19888)) >> 5);
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 19832) + 40 * v20);
  if ( !v21 )
    goto LABEL_4;
  v22 = *(_BYTE *)(v10 + 25);
  if ( (v22 & 1) != 0 )
    goto LABEL_4;
  if ( v22 >= 0 )
    return v21;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v20);
  v24 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return v21;
  v25 = *((_WORD *)&unk_14024703C + 12 * *(unsigned __int8 *)(v10 + 24));
  if ( (v25 & 2) != 0 )
  {
    v26 = *(_QWORD **)(v14 + 8 * v17 + 8);
  }
  else
  {
    if ( (v25 & 1) == 0 )
      return v21;
    v27 = *(_QWORD *)(v14 + 8 * v17 + 8);
    if ( !v27 )
      return v21;
    v26 = *(_QWORD **)(v27 + 464);
  }
  if ( v26 && v26 != v24 )
  {
LABEL_4:
    UserSetLastError(1400);
    return 0LL;
  }
  return v21;
}
