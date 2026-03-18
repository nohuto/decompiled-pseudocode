/*
 * XREFs of ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1401B05BC
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140149060 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1402195A0 (-HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z.c)
 */

char __fastcall CPTPProcessor::UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1, struct tagPTPMOUSEEVENT *a2, bool *a3)
{
  struct W32_PUSH_LOCK *v6; // rbp
  char v7; // di
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // r14
  __int64 v16; // r13
  __int64 v17; // rbx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r15
  __int64 v25; // r13
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  unsigned __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rax
  bool v32; // dl
  int v33; // ecx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+60h] [rbp+18h]

  v6 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3) + 3336);
  W32AcquirePushLockExclusiveEx(v6);
  v7 = 0;
  *a3 = 0;
  UserSessionState = W32GetUserSessionState(v9, v8, v10);
  if ( !*(_DWORD *)(UserSessionState + 3332) )
  {
    W32ReleasePushLockExclusiveEx(v6);
    return 0;
  }
  v16 = W32GetUserSessionState(v12, v11, v13);
  v37 = v16;
  v17 = (*(_BYTE *)(v16 + 3328) - *(_BYTE *)(UserSessionState + 3332) + 1) & 0x3F;
  v21 = 136 * v17 + 3352 + W32GetUserSessionState(v19, v18, v20);
  *(_OWORD *)a1 = *(_OWORD *)v21;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v21 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(v21 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(v21 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(v21 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(v21 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(v21 + 96);
  *((_OWORD *)a1 + 7) = *(_OWORD *)(v21 + 112);
  *((_QWORD *)a1 + 16) = *(_QWORD *)(v21 + 128);
  if ( (*((_WORD *)a1 + 6) & 0xF3FF) == 0 )
    goto LABEL_7;
  v24 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v25 = W32GetUserSessionState(0, v24, v23);
  W32GetUserSessionState(v27, v26, v28);
  v29 = v24 - *(_QWORD *)(v25 + 3344);
  if ( v29 >= 0x32 )
  {
    *(_QWORD *)(v25 + 3344) = v24;
    v16 = v37;
LABEL_7:
    v33 = *(_DWORD *)(UserSessionState + 3332) - 1;
    *(_DWORD *)(UserSessionState + 3332) = v33;
    if ( v33 )
    {
      v34 = ((unsigned __int8)*(_DWORD *)(v16 + 3328) - (_BYTE)v33 + 1) & 0x3F;
      v35 = W32GetUserSessionState(v33, v22, v23);
      *a3 = 1;
      v36 = 136 * v34 + v35 + 3352;
      *(_OWORD *)a2 = *(_OWORD *)v36;
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v36 + 16);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v36 + 32);
      *((_OWORD *)a2 + 3) = *(_OWORD *)(v36 + 48);
      *((_OWORD *)a2 + 4) = *(_OWORD *)(v36 + 64);
      *((_OWORD *)a2 + 5) = *(_OWORD *)(v36 + 80);
      *((_OWORD *)a2 + 6) = *(_OWORD *)(v36 + 96);
      *((_OWORD *)a2 + 7) = *(_OWORD *)(v36 + 112);
      *((_QWORD *)a2 + 16) = *(_QWORD *)(v36 + 128);
    }
    v7 = 1;
    goto LABEL_10;
  }
  v30 = 50 - v29;
  v31 = W32GetUserSessionState(v29, v22, v23);
  CHidInput::HandlePTPDeferredMouseInputTimer(*(CHidInput **)(v31 + 16832), v32, v30);
LABEL_10:
  W32ReleasePushLockExclusiveEx(v6);
  return v7;
}
