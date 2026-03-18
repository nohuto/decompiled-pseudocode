/*
 * XREFs of PackTouchpadSettings @ 0x14019C5F0
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C628 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PackTouchpadSettings(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  _DWORD *UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r15d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r12d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r14d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r13d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // esi
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // ebp
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edi
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // ecx
  _DWORD *result; // rax
  int v56; // [rsp+20h] [rbp-58h]
  int v57; // [rsp+24h] [rbp-54h]
  int v59; // [rsp+88h] [rbp+10h]
  int v60; // [rsp+90h] [rbp+18h]
  int v61; // [rsp+98h] [rbp+20h]

  v3 = a1;
  UserSessionState = (_DWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v3[6] = UserSessionState[4190];
  v3[7] = UserSessionState[4192];
  v5 = UserSessionState[4195];
  v3[8] = v5;
  v3[9] = UserSessionState[4196];
  v8 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 16772), 4);
  v59 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 16776), 10);
  v15 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 16772), 2);
  v57 = -(*(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 16772) & 1);
  v61 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v20, v19, v21) + 16776), 8);
  v60 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v23, v22, v24) + 16776), 9);
  v28 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v26, v25, v27) + 16776), 3);
  v56 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v30, v29, v31) + 16776), 5);
  v35 = -(*(_DWORD *)(W32GetUserSessionState(v33, v32, v34) + 16776) & 1);
  v39 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v37, v36, v38) + 16776), 6);
  v43 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v41, v40, v42) + 16776), 4);
  v47 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v45, v44, v46) + 16772), 5);
  LODWORD(v3) = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v49, v48, v50) + 16772), 3);
  v54 = (v56 != 0 ? 0x80 : 0) | (v35 != 0 ? 0x100 : 0) | (v43 != 0 ? 0x400 : 0) | (v61 != 0 ? 0x10 : 0) | (v60 != 0 ? 0x20 : 0) | (v28 != 0 ? 0x40 : 0) | (v39 != 0 ? 0x200 : 0) | (v47 != 0 ? 0x800 : 0) | (v15 != 0 ? 4 : 0) | (v59 != 0 ? 2 : 0) | ((_DWORD)v3 != 0 ? 0x1000 : 0) | (v8 != 0) | ((*(_DWORD *)(W32GetUserSessionState(v52, v51, v53) + 16776) & 0x40) << 7);
  result = a1;
  a1[10] = (v57 != 0 ? 8 : 0) | v54;
  return result;
}
