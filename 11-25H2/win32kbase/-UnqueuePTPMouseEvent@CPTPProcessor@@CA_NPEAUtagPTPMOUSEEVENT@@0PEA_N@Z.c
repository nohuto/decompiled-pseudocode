/*
 * XREFs of ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x14018BE18
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109EE0 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline @ 0x1402118AC (Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z @ 0x14021285C (-HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z.c)
 */

char __fastcall CPTPProcessor::UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1, struct tagPTPMOUSEEVENT *a2, bool *a3)
{
  struct W32_PUSH_LOCK *v6; // rbx
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rsi
  _BYTE *v14; // r12
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rax
  bool v29; // dl
  int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE *v34; // [rsp+60h] [rbp+18h]

  v6 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2) + 3336);
  W32AcquirePushLockExclusiveEx(v6, 0);
  v7 = 0;
  *a3 = 0;
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( !*(_DWORD *)(UserSessionState + 3332) )
  {
    W32ReleasePushLockExclusiveEx(v6, 0LL);
    return 0;
  }
  v14 = (_BYTE *)(W32GetUserSessionState(v11, v10) + 3328);
  v34 = v14;
  v15 = (*v14 - *(_BYTE *)(UserSessionState + 3332) + 1) & 0x3F;
  v18 = W32GetUserSessionState(v17, v16) + 3352 + 136LL * v15;
  *(_OWORD *)a1 = *(_OWORD *)v18;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v18 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(v18 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(v18 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(v18 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(v18 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(v18 + 96);
  *((_OWORD *)a1 + 7) = *(_OWORD *)(v18 + 112);
  *((_QWORD *)a1 + 16) = *(_QWORD *)(v18 + 128);
  if ( !(unsigned int)Feature_PTPMouseTiming__private_IsEnabledDeviceUsageNoInline()
    || (*((_WORD *)a1 + 6) & 0xF3FF) == 0 )
  {
    goto LABEL_8;
  }
  v21 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v22 = (v21 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v23 = W32GetUserSessionState(v21, v22);
  W32GetUserSessionState(v25, v24);
  v26 = v22 - *(_QWORD *)(v23 + 3344);
  if ( v26 >= 0x32 )
  {
    *(_QWORD *)(v23 + 3344) = v22;
    v14 = v34;
LABEL_8:
    v30 = *(_DWORD *)(UserSessionState + 3332) - 1;
    *(_DWORD *)(UserSessionState + 3332) = v30;
    if ( v30 )
    {
      v31 = ((unsigned __int8)*(_DWORD *)v14 - (_BYTE)v30 + 1) & 0x3F;
      v32 = W32GetUserSessionState(v20, v19);
      *a3 = 1;
      v33 = v32 + 3352 + 136LL * v31;
      *(_OWORD *)a2 = *(_OWORD *)v33;
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v33 + 16);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v33 + 32);
      *((_OWORD *)a2 + 3) = *(_OWORD *)(v33 + 48);
      *((_OWORD *)a2 + 4) = *(_OWORD *)(v33 + 64);
      *((_OWORD *)a2 + 5) = *(_OWORD *)(v33 + 80);
      *((_OWORD *)a2 + 6) = *(_OWORD *)(v33 + 96);
      *((_OWORD *)a2 + 7) = *(_OWORD *)(v33 + 112);
      *((_QWORD *)a2 + 16) = *(_QWORD *)(v33 + 128);
    }
    v7 = 1;
    goto LABEL_11;
  }
  v27 = 50 - v26;
  v28 = W32GetUserSessionState(v20, v19);
  CHidInput::HandlePTPDeferredMouseInputTimer(*(CHidInput **)(v28 + 16840), v29, v27);
LABEL_11:
  W32ReleasePushLockExclusiveEx(v6, 0LL);
  return v7;
}
