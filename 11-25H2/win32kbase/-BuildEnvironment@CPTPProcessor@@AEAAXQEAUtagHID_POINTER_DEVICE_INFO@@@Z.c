/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140062BA4
 * Callers:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1400629B4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401573A4 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400637C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  char *v2; // rdi
  _OWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *UserSessionState; // rbp
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  bool v15; // sf
  int v16; // r9d
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  INT v20; // edx
  int v21; // ebp
  INT v22; // ebx
  int v23; // ebx
  INT v24; // eax
  INT v25; // r8d
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  _OWORD *v30; // rcx

  v2 = (char *)this + 560;
  memset((char *)this + 560, 0, 0xA0uLL);
  v5 = v2 + 16;
  *(_DWORD *)v2 = *((_DWORD *)a2 + 194);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 22) = *((_DWORD *)a2 + 241);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  *((_DWORD *)v2 + 3) = *(_DWORD *)(v8 + 1988) != 0;
  *((union _LARGE_INTEGER *)v2 + 10) = gliQpcFreq;
  UserSessionState = (_DWORD *)W32GetUserSessionState(v8, v9);
  *((_DWORD *)this + 175) = -__CFSHR__(UserSessionState[4196], 3);
  *((_DWORD *)this + 176) = -__CFSHR__(UserSessionState[4196], 5);
  *((_DWORD *)this + 177) = -__CFSHR__(UserSessionState[4196], 4);
  *((_DWORD *)this + 178) = -__CFSHR__(UserSessionState[4196], 6);
  *((_DWORD *)this + 179) = UserSessionState[4197];
  *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 67);
  *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 8) += *((_DWORD *)a2 + 69);
  v11 = *((_DWORD *)v2 + 9) + *((_DWORD *)a2 + 70);
  v12 = *((_DWORD *)v2 + 11);
  v13 = *((_DWORD *)v2 + 8);
  *((_DWORD *)v2 + 9) = v11;
  *((_DWORD *)v2 + 10) -= *((_DWORD *)a2 + 71);
  v14 = v12 - *((_DWORD *)a2 + 72);
  v15 = *((_DWORD *)v2 + 10) - v13 < 0;
  *((_DWORD *)v2 + 11) = v14;
  if ( v15 || v14 - v11 < 0 )
    *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 12) += *((_DWORD *)a2 + 73);
  v16 = *((_DWORD *)v2 + 13) + *((_DWORD *)a2 + 74);
  v17 = *((_DWORD *)v2 + 15);
  v18 = *((_DWORD *)v2 + 12);
  *((_DWORD *)v2 + 13) = v16;
  *((_DWORD *)v2 + 14) -= *((_DWORD *)a2 + 75);
  v19 = v17 - *((_DWORD *)a2 + 76);
  v15 = *((_DWORD *)v2 + 14) - v18 < 0;
  *((_DWORD *)v2 + 15) = v19;
  if ( v15 || v19 - v16 < 0 )
    *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  v20 = UserSessionState[4201];
  if ( !v20 )
    v20 = *((_DWORD *)a2 + 77);
  v21 = UserSessionState[4202];
  if ( !v21 )
    v21 = *((_DWORD *)a2 + 78);
  *((_OWORD *)v2 + 4) = *(_OWORD *)((char *)a2 + 140);
  v22 = *((_DWORD *)a2 + 37);
  v23 = v22 - EngMulDiv(v22, v20, 100);
  *((_DWORD *)v2 + 16) = v23;
  v24 = EngMulDiv(*((_DWORD *)a2 + 38), 100 - v21, 100);
  *((_DWORD *)v2 + 17) = v24;
  v25 = v24;
  v26 = *((_DWORD *)a2 + 37);
  v27 = v23;
  if ( v23 >= v26 )
    v27 = *((_DWORD *)a2 + 37);
  if ( v27 <= *((_DWORD *)a2 + 35) )
  {
    v23 = *((_DWORD *)a2 + 35);
  }
  else if ( v23 >= v26 )
  {
    v23 = *((_DWORD *)a2 + 37);
  }
  *((_DWORD *)v2 + 16) = v23;
  v28 = *((_DWORD *)a2 + 38) - ((*((_DWORD *)a2 + 92) & 8) == 0 ? 0x3E8 : 0);
  v29 = v28;
  if ( v25 < v28 )
    v29 = v25;
  if ( v29 <= *((_DWORD *)a2 + 36) )
  {
    v28 = *((_DWORD *)a2 + 36);
  }
  else if ( v25 < v28 )
  {
    v28 = v25;
  }
  *((_DWORD *)v2 + 17) = v28;
  *(_OWORD *)(v2 + 92) = *(_OWORD *)((char *)a2 + 332);
  *(_OWORD *)(v2 + 108) = *(_OWORD *)((char *)a2 + 348);
  if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)((char *)a2 + 316)) )
    v5 = v30;
  *(_OWORD *)(v2 + 124) = *v5;
  *((_DWORD *)v2 + 2) = *((_DWORD *)a2 + 68);
}
