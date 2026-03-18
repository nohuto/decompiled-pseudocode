/*
 * XREFs of RIMInitialize @ 0x14010F990
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsPTPIVEnabled @ 0x14008A078 (IsPTPIVEnabled.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     RIMInitOneCoreEditionData @ 0x14010FB88 (RIMInitOneCoreEditionData.c)
 *     IsKeyboardIVEnabled @ 0x14010FD58 (IsKeyboardIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1401C3E68 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1401C3EA8 (IsPenIVEnabled.c)
 */

__int64 __fastcall RIMInitialize(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // ebx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // ebx
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // ebx
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // ebx
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  int v72; // ebx
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  int v76; // edx
  int v77; // ecx
  int v78; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(UserSessionState + 40) = 0LL;
  *(_QWORD *)(UserSessionState + 48) = 0LL;
  v7 = W32GetUserSessionState(v5, v4, v6);
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  v11 = W32GetUserSessionState(v9, v8, v10);
  *(_QWORD *)(v11 + 88) = 0LL;
  *(_QWORD *)(v11 + 96) = 0LL;
  v15 = W32GetUserSessionState(v13, v12, v14);
  *(_QWORD *)(v15 + 104) = 0LL;
  *(_QWORD *)(v15 + 112) = 0LL;
  *(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 184) = 1;
  *(_DWORD *)(W32GetUserSessionState(v20, v19, v21) + 36) = 18;
  v25 = W32GetUserSessionState(v23, v22, v24);
  *(_QWORD *)(v25 + 72) = 0LL;
  *(_QWORD *)(v25 + 80) = 0LL;
  RIMInitOneCoreEditionData();
  *(_DWORD *)(W32GetUserSessionState(v27, v26, v28) + 240) = 0;
  *(_DWORD *)(W32GetUserSessionState(v30, v29, v31) + 244) = 3;
  *(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 256) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v36, v35, v37) + 272) = 0;
  *(_DWORD *)(W32GetUserSessionState(v39, v38, v40) + 280) = 1;
  v44 = (unsigned __int8)IsMouseIVEnabled(v42, v41, v43);
  *(_DWORD *)(W32GetUserSessionState(v46, v45, v47) + 276) = v44;
  *(_DWORD *)(W32GetUserSessionState(v49, v48, v50) + 288) = 2;
  v51 = (unsigned __int8)IsKeyboardIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v53, v52, v54) + 284) = v51;
  *(_DWORD *)(W32GetUserSessionState(v56, v55, v57) + 296) = 16;
  v58 = (unsigned __int8)IsTouchIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v60, v59, v61) + 292) = v58;
  *(_DWORD *)(W32GetUserSessionState(v63, v62, v64) + 304) = 4;
  v65 = (unsigned __int8)IsPenIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v67, v66, v68) + 300) = v65;
  *(_DWORD *)(W32GetUserSessionState(v70, v69, v71) + 312) = 8;
  v72 = (unsigned __int8)IsPTPIVEnabled();
  *(_DWORD *)(W32GetUserSessionState(v74, v73, v75) + 308) = v72;
  *(_BYTE *)(W32GetUserSessionState(v77, v76, v78) + 168) = 1;
  return 0LL;
}
