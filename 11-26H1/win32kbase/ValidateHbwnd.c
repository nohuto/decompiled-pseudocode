/*
 * XREFs of ValidateHbwnd @ 0x1400533C0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x14006C7BC (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1401CEAB0 (ValidateHbwndOwnedByCallingThread.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(int a1, int a2, int a3)
{
  __int16 v3; // edi^2
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rbp
  __int16 v20; // di
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  char v27; // al
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v29; // r8
  __int16 v30; // ax
  _QWORD *v31; // rax
  __int64 v32; // rax

  v3 = HIWORD(a1);
  v4 = (unsigned __int16)a1;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
  if ( v4 >= *(_QWORD *)(v5 + 8) )
    goto LABEL_4;
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  v12 = *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 19928) * v4;
  v13 = v12 + *(_QWORD *)(UserSessionState + 19920);
  v16 = W32GetUserSessionState(v12, v14, v15);
  v19 = *(_QWORD *)(v16 + 19864);
  v20 = v3 & 0x7FFF;
  v21 = (unsigned int)((v13 - *(_QWORD *)(v16 + 19920)) >> 5);
  v22 = 5 * v21;
  if ( (v3 & 0x7FFF) != *(_WORD *)(v13 + 26) && v20 != 0x7FFF && (v20 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_4;
  if ( *(_BYTE *)(v13 + 24) != 23 )
    goto LABEL_4;
  v24 = W32GetUserSessionState(v21, v17, v18);
  v25 = (unsigned int)((v13 - *(_QWORD *)(v24 + 19920)) >> 5);
  v26 = *(_QWORD *)(*(_QWORD *)(v24 + 19864) + 40 * v25);
  if ( !v26 )
    goto LABEL_4;
  v27 = *(_BYTE *)(v13 + 25);
  if ( (v27 & 1) != 0 )
    goto LABEL_4;
  if ( v27 >= 0 )
    return v26;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v25);
  v29 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return v26;
  v30 = *((_WORD *)&unk_14025552C + 12 * *(unsigned __int8 *)(v13 + 24));
  if ( (v30 & 2) != 0 )
  {
    v31 = *(_QWORD **)(v19 + 8 * v22 + 8);
  }
  else
  {
    if ( (v30 & 1) == 0 )
      return v26;
    v32 = *(_QWORD *)(v19 + 8 * v22 + 8);
    if ( !v32 )
      return v26;
    v31 = *(_QWORD **)(v32 + 456);
  }
  if ( v31 && v31 != v29 )
  {
LABEL_4:
    UserSetLastError(1400LL);
    return 0LL;
  }
  return v26;
}
