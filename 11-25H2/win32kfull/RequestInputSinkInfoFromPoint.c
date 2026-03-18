/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1401CD604
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401CA6D0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x140222650 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall RequestInputSinkInfoFromPoint(_OWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *UserSessionState; // rax
  _OWORD *v11; // rdi
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
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  LONG v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _OWORD v47[7]; // [rsp+38h] [rbp-19h] BYREF
  char v48; // [rsp+C0h] [rbp+6Fh] BYREF

  v3 = 0;
  while ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18744) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v5, v4) + 18788) != 1 )
    {
      *(_BYTE *)(W32GetUserSessionState(v7, v6) + 18788) = 1;
      UserSessionState = (_OWORD *)W32GetUserSessionState(v9, v8);
      v11 = UserSessionState + 1185;
      UserSessionState[1185] = *a1;
      UserSessionState[1186] = a1[1];
      UserSessionState[1187] = a1[2];
      UserSessionState[1188] = a1[3];
      UserSessionState[1189] = a1[4];
      UserSessionState[1190] = a1[5];
      UserSessionState[1191] = a1[6];
      if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 64192) )
      {
        *(_DWORD *)(W32GetUserSessionState(v15, v14) + 64196) = 1;
        v36 = W32GetUserSessionState(v35, v34);
        KeSetEvent(*(PRKEVENT *)(v36 + 18760), 1, 0);
      }
      else
      {
        WakeMIT(2LL);
      }
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v48, 1);
      v18 = W32GetUserSessionState(v17, v16);
      KeWaitForSingleObject(*(PVOID *)(v18 + 18800), UserRequest, 1, 1u, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v48);
      *(_DWORD *)(W32GetUserSessionState(v20, v19) + 64196) = 0;
      v3 = *((_DWORD *)v11 + 4);
      if ( v3 )
      {
        *a1 = *v11;
        a1[1] = v11[1];
        a1[2] = v11[2];
        a1[3] = v11[3];
        a1[4] = v11[4];
        a1[5] = v11[5];
        v28 = v11[6];
      }
      else
      {
        memset_0(v47, 0, sizeof(v47));
        v23 = v47[1];
        *a1 = v47[0];
        v24 = v47[2];
        a1[1] = v23;
        v25 = v47[3];
        a1[2] = v24;
        v26 = v47[4];
        a1[3] = v25;
        v27 = v47[5];
        a1[4] = v26;
        v28 = v47[6];
        a1[5] = v27;
      }
      a1[6] = v28;
      *(_BYTE *)(W32GetUserSessionState(v22, v21) + 18788) = 0;
      if ( *(_DWORD *)(W32GetUserSessionState(v30, v29) + 18784) )
      {
        v41 = *(_DWORD *)(W32GetUserSessionState(v32, v31) + 18784);
        v44 = W32GetUserSessionState(v43, v42);
        KeReleaseSemaphore(*(PRKSEMAPHORE *)(v44 + 18776), 0, v41, 0);
        *(_DWORD *)(W32GetUserSessionState(v46, v45) + 18784) = 0;
      }
      return v3;
    }
    v37 = W32GetUserSessionState(v7, v6);
    ++*(_DWORD *)(v37 + 18784);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v48, 0);
    v40 = W32GetUserSessionState(v39, v38);
    KeWaitForSingleObject(*(PVOID *)(v40 + 18776), UserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v48);
  }
  return v3;
}
