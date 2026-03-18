/*
 * XREFs of xxxEndPaint @ 0x140052E08
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x140050458 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x140052010 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x140052120 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BEEBC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     InternalInvalidate3 @ 0x140032DB8 (InternalInvalidate3.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     zzzInternalShowCaret @ 0x140053124 (zzzInternalShowCaret.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  int v7; // esi
  int v8; // r13d
  int v9; // r15d
  _DWORD *v10; // rax
  int v11; // r14d
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // ebp
  int v15; // eax
  int v16; // r12d
  __int64 v17; // rax
  int v18; // ebx
  int v19; // r12d
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int *v23; // rax
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int v27; // r14d
  int v29; // esi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 UserSessionState; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx

  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 43072) )
    {
      v40 = *(_DWORD *)(W32GetUserSessionState(v39, v38) + 63420);
      UserSessionState = W32GetUserSessionState(v42, v41);
      InternalInvalidate3(a1, *(_QWORD *)(UserSessionState + 43072), v40);
      v46 = W32GetUserSessionState(v45, v44);
      if ( (*(_DWORD *)(v46 + 43268))-- == 1 )
      {
        v50 = W32GetUserSessionState(v48, v47);
        GreDeleteObject(*(_QWORD *)(v50 + 43072));
        *(_QWORD *)(W32GetUserSessionState(v52, v51) + 43072) = 0LL;
        *(_DWORD *)(W32GetUserSessionState(v54, v53) + 63420) = 0;
      }
    }
    SetOrClrWF(0, a1, 0x402u, 1);
  }
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_DWORD *)(v5 + 28);
  v7 = *(_DWORD *)(v5 + 24);
  v8 = *(_DWORD *)(v5 + 232);
  *(_BYTE *)(v5 + 20) &= ~1u;
  v9 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (_DWORD *)*((_QWORD *)a1 + 5);
    v11 = v10[7];
    v12 = v10[6];
    v13 = (unsigned int)v10[58];
    v14 = v7 ^ v12;
    v15 = v8 ^ v10[58];
    v16 = v6 ^ v11;
    if ( v6 == v11 )
    {
      if ( v14 )
        goto LABEL_14;
      if ( !v15 )
        goto LABEL_6;
    }
    if ( (v16 & 0xB9CF0000) != 0 )
    {
      v29 = -16;
      goto LABEL_25;
    }
LABEL_14:
    if ( (v14 & 0x4E27A9) != 0 )
    {
      v29 = -20;
      v11 = v12;
    }
    else
    {
      if ( (v15 & 0x3F2C0) == 0 )
      {
LABEL_26:
        if ( (v16 & 0x1C40000) != 0 || (v14 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(a1, 1LL);
        goto LABEL_6;
      }
      v29 = -268435456;
      v11 = v13;
    }
LABEL_25:
    DirtyVisRgnTrackers(a1, v13);
    v34 = *(_QWORD *)a1;
    v37 = (void *)ReferenceDwmApiPort(v36, v35);
    DwmAsyncChildStyleChange(v37, v34, v29, v11);
    goto LABEL_26;
  }
LABEL_6:
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(_DWORD *)(v17 + 28);
  v19 = *(_DWORD *)(v17 + 24);
  v20 = *(_DWORD *)(v17 + 232);
  *(_BYTE *)(v17 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_10;
  v23 = (unsigned int *)*((_QWORD *)a1 + 5);
  v24 = v23[7];
  v22 = v23[6];
  v21 = v23[58];
  v25 = v19 ^ v23[6];
  v26 = v20 ^ v23[58];
  v27 = v18 ^ v24;
  if ( v18 == v24 )
  {
    if ( v25 )
      goto LABEL_18;
    if ( !v26 )
      goto LABEL_10;
  }
  if ( (v27 & 0xB9CF0000) != 0 )
  {
LABEL_21:
    DirtyVisRgnTrackers(a1, v21);
    v30 = *(_QWORD *)a1;
    v33 = (void *)ReferenceDwmApiPort(v32, v31);
    DwmAsyncChildStyleChange(v33, v30, v9, v24);
    goto LABEL_22;
  }
LABEL_18:
  if ( (v25 & 0x4E27A9) != 0 )
  {
    v9 = -20;
    v24 = v22;
    goto LABEL_21;
  }
  if ( (v26 & 0x3F2C0) != 0 )
  {
    v9 = -268435456;
    v24 = v21;
    goto LABEL_21;
  }
LABEL_22:
  if ( (v27 & 0x1C40000) != 0 || (v25 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_10:
  if ( a1 == *(struct tagWND **)(*((_QWORD *)PtiCurrent(v22, v21) + 59) + 320LL) )
    zzzInternalShowCaret();
  return 1LL;
}
