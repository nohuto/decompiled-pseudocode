/*
 * XREFs of PackTouchpadSettings @ 0x1402171E8
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PackTouchpadSettings(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  _DWORD *UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebp
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  _DWORD *result; // rax
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+24h] [rbp-54h]
  int v44; // [rsp+88h] [rbp+10h]
  int v45; // [rsp+90h] [rbp+18h]
  int v46; // [rsp+98h] [rbp+20h]

  v2 = a1;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  v2[6] = UserSessionState[4192];
  v2[7] = UserSessionState[4194];
  v4 = (unsigned int)UserSessionState[4197];
  v2[8] = v4;
  v2[9] = UserSessionState[4198];
  v42 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v5, v4) + 16780), 4);
  v44 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v7, v6) + 16784), 10);
  v41 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v9, v8) + 16780), 2);
  v46 = -(*(_DWORD *)(W32GetUserSessionState(v11, v10) + 16780) & 1);
  v14 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v13, v12) + 16784), 8);
  v45 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v16, v15) + 16784), 9);
  v19 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v18, v17) + 16784), 3);
  v22 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v21, v20) + 16784), 5);
  v25 = -(*(_DWORD *)(W32GetUserSessionState(v24, v23) + 16784) & 1);
  v28 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v27, v26) + 16784), 6);
  v31 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v30, v29) + 16784), 4);
  v34 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v33, v32) + 16780), 5);
  LODWORD(v2) = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v36, v35) + 16780), 3);
  v39 = (v46 != 0 ? 8 : 0) | (v45 != 0 ? 0x20 : 0) | (v22 != 0 ? 0x80 : 0) | (v42 != 0) | (v31 != 0 ? 0x400 : 0) | (v25 != 0 ? 0x100 : 0) | (v19 != 0 ? 0x40 : 0) | (v28 != 0 ? 0x200 : 0) | (v44 != 0 ? 2 : 0) | (v14 != 0 ? 0x10 : 0) | (v34 != 0 ? 0x800 : 0) | ((_DWORD)v2 != 0 ? 0x1000 : 0) | ((*(_DWORD *)(W32GetUserSessionState(v38, v37) + 16784) & 0x40) << 7);
  result = a1;
  a1[10] = (v41 != 0 ? 4 : 0) | v39;
  return result;
}
