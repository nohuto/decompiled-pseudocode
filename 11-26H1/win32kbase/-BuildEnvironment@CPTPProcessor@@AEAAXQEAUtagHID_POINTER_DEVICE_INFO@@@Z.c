/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14008145C
 * Callers:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140081264 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140173804 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  char *v2; // rbx
  _OWORD *v5; // r14
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  _DWORD *UserSessionState; // rbp
  int v13; // r9d
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  bool v17; // sf
  int v18; // r9d
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  INT v22; // edx
  int v23; // ebp
  INT v24; // ebx
  int v25; // ebx
  INT v26; // eax
  INT v27; // r8d
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  _OWORD *v32; // rcx

  v2 = (char *)this + 560;
  memset((char *)this + 560, 0, 0xA0uLL);
  v5 = v2 + 16;
  *(_DWORD *)v2 = *((_DWORD *)a2 + 194);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 22) = *((_DWORD *)a2 + 241);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 19904);
  *((_DWORD *)this + 143) = *(_DWORD *)(v9 + 1988) != 0;
  *((union _LARGE_INTEGER *)this + 80) = gliQpcFreq;
  UserSessionState = (_DWORD *)W32GetUserSessionState(v9, v10, v11);
  *((_DWORD *)this + 175) = -__CFSHR__(UserSessionState[4194], 3);
  *((_DWORD *)this + 176) = -__CFSHR__(UserSessionState[4194], 5);
  *((_DWORD *)this + 177) = -__CFSHR__(UserSessionState[4194], 4);
  *((_DWORD *)this + 178) = -__CFSHR__(UserSessionState[4194], 6);
  *((_DWORD *)this + 179) = UserSessionState[4195];
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 67);
  *((_OWORD *)this + 37) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)this + 148) += *((_DWORD *)a2 + 69);
  v13 = *((_DWORD *)this + 149) + *((_DWORD *)a2 + 70);
  v14 = *((_DWORD *)this + 151);
  v15 = *((_DWORD *)this + 148);
  *((_DWORD *)this + 149) = v13;
  *((_DWORD *)this + 150) -= *((_DWORD *)a2 + 71);
  v16 = v14 - *((_DWORD *)a2 + 72);
  v17 = *((_DWORD *)this + 150) - v15 < 0;
  *((_DWORD *)this + 151) = v16;
  if ( v17 || v16 - v13 < 0 )
    *((_OWORD *)this + 37) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)this + 38) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)this + 152) += *((_DWORD *)a2 + 73);
  v18 = *((_DWORD *)this + 153) + *((_DWORD *)a2 + 74);
  v19 = *((_DWORD *)this + 155);
  v20 = *((_DWORD *)this + 152);
  *((_DWORD *)this + 153) = v18;
  *((_DWORD *)this + 154) -= *((_DWORD *)a2 + 75);
  v21 = v19 - *((_DWORD *)a2 + 76);
  v17 = *((_DWORD *)this + 154) - v20 < 0;
  *((_DWORD *)this + 155) = v21;
  if ( v17 || v21 - v18 < 0 )
    *((_OWORD *)this + 38) = *(_OWORD *)((char *)a2 + 140);
  v22 = UserSessionState[4199];
  if ( !v22 )
    v22 = *((_DWORD *)a2 + 77);
  v23 = UserSessionState[4200];
  if ( !v23 )
    v23 = *((_DWORD *)a2 + 78);
  *((_OWORD *)this + 39) = *(_OWORD *)((char *)a2 + 140);
  v24 = *((_DWORD *)a2 + 37);
  v25 = v24 - EngMulDiv(v24, v22, 100);
  *((_DWORD *)this + 156) = v25;
  v26 = EngMulDiv(*((_DWORD *)a2 + 38), 100 - v23, 100);
  *((_DWORD *)this + 157) = v26;
  v27 = v26;
  v28 = *((_DWORD *)a2 + 37);
  v29 = v25;
  if ( v25 >= v28 )
    v29 = *((_DWORD *)a2 + 37);
  if ( v29 <= *((_DWORD *)a2 + 35) )
  {
    v25 = *((_DWORD *)a2 + 35);
  }
  else if ( v25 >= v28 )
  {
    v25 = *((_DWORD *)a2 + 37);
  }
  *((_DWORD *)this + 156) = v25;
  v30 = *((_DWORD *)a2 + 38) - ((*((_DWORD *)a2 + 92) & 8) == 0 ? 0x3E8 : 0);
  v31 = v30;
  if ( v27 < v30 )
    v31 = v27;
  if ( v31 <= *((_DWORD *)a2 + 36) )
  {
    v30 = *((_DWORD *)a2 + 36);
  }
  else if ( v27 < v30 )
  {
    v30 = v27;
  }
  *((_DWORD *)this + 157) = v30;
  *(_OWORD *)((char *)this + 652) = *(_OWORD *)((char *)a2 + 332);
  *(_OWORD *)((char *)this + 668) = *(_OWORD *)((char *)a2 + 348);
  if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)((char *)a2 + 316)) )
    v5 = v32;
  *(_OWORD *)((char *)this + 684) = *v5;
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 68);
}
