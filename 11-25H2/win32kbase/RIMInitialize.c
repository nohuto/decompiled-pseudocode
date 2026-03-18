/*
 * XREFs of RIMInitialize @ 0x14005E170
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsKeyboardIVEnabled @ 0x14005DFE8 (IsKeyboardIVEnabled.c)
 *     IsPTPIVEnabled @ 0x14005E094 (IsPTPIVEnabled.c)
 *     RIMInitOneCoreEditionData @ 0x14005E0D4 (RIMInitOneCoreEditionData.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     IsPenIVEnabled @ 0x14021B7A4 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x14021B7FC (IsTouchIVEnabled.c)
 */

__int64 __fastcall RIMInitialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(UserSessionState + 40) = 0LL;
  *(_QWORD *)(UserSessionState + 48) = 0LL;
  v5 = W32GetUserSessionState(v4, v3);
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  v8 = W32GetUserSessionState(v7, v6);
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 96) = 0LL;
  v11 = W32GetUserSessionState(v10, v9);
  *(_QWORD *)(v11 + 104) = 0LL;
  *(_QWORD *)(v11 + 112) = 0LL;
  *(_BYTE *)(W32GetUserSessionState(v13, v12) + 184) = 1;
  *(_DWORD *)(W32GetUserSessionState(v15, v14) + 36) = 18;
  v18 = W32GetUserSessionState(v17, v16);
  *(_QWORD *)(v18 + 72) = 0LL;
  *(_QWORD *)(v18 + 80) = 0LL;
  RIMInitOneCoreEditionData(v20, v19);
  *(_DWORD *)(W32GetUserSessionState(v22, v21) + 240) = 0;
  *(_DWORD *)(W32GetUserSessionState(v24, v23) + 244) = 3;
  *(_QWORD *)(W32GetUserSessionState(v26, v25) + 256) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v28, v27) + 272) = 0;
  *(_DWORD *)(W32GetUserSessionState(v30, v29) + 280) = 1;
  v31 = (unsigned __int8)IsMouseIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v33, v32) + 276) = v31;
  *(_DWORD *)(W32GetUserSessionState(v35, v34) + 288) = 2;
  v36 = (unsigned __int8)IsKeyboardIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v38, v37) + 284) = v36;
  *(_DWORD *)(W32GetUserSessionState(v40, v39) + 296) = 16;
  v41 = (unsigned __int8)IsTouchIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v43, v42) + 292) = v41;
  *(_DWORD *)(W32GetUserSessionState(v45, v44) + 304) = 4;
  v46 = (unsigned __int8)IsPenIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v48, v47) + 300) = v46;
  *(_DWORD *)(W32GetUserSessionState(v50, v49) + 312) = 8;
  v51 = (unsigned __int8)IsPTPIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v53, v52) + 308) = v51;
  *(_BYTE *)(W32GetUserSessionState(v55, v54) + 168) = 1;
  return 0LL;
}
