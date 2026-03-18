/*
 * XREFs of LinkWindow @ 0x1402B6200
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14004DAC8 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x140152834 (SetWindowGroupBand.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     TrackLayeredZorder @ 0x14004BACC (TrackLayeredZorder.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x14004BF48 (IsMessageParentWindow.c)
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     GetBandOrdinal @ 0x140152AF0 (GetBandOrdinal.c)
 *     DwmAsyncChildLink @ 0x14018ADD0 (DwmAsyncChildLink.c)
 *     HWInsertAfter @ 0x1401A436C (HWInsertAfter.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401AD120 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401AE6EC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401C3CC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *LastTopMostWindow; // rbx
  unsigned int BandOrdinal; // edi
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r8d
  _QWORD *v17; // r10
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // r9
  __int64 v23; // r8
  _QWORD *v24; // r8
  int v25; // eax
  struct tagWND *v26; // rcx
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rdx
  __int64 i; // r12
  int v44; // eax
  int v45; // r14d
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  void *v52; // rax
  __int128 v53; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v54[2]; // [rsp+40h] [rbp-10h] BYREF

  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow((__int64)a1);
    DesktopWindow = GetDesktopWindow((__int64)LastTopMostWindow);
    if ( DesktopWindow != v8 )
    {
      v9 = GetDesktopWindow((__int64)a1);
      if ( v12 == v9 )
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v11, v10);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3134);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3135);
  if ( *(__int16 *)(*((_QWORD *)a1 + 5) + 42LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3136);
  v13 = GetDesktopWindow((__int64)a3);
  v15 = 1LL;
  if ( a3 == (__int64 *)v13 )
    BandOrdinal = GetBandOrdinal(*(_DWORD *)(v14 + 236));
  else
    v16 = 0;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (_QWORD *)v15 )
    {
      LastTopMostWindow = (_QWORD *)a3[14];
      if ( LastTopMostWindow && (*(_BYTE *)(LastTopMostWindow[5] + 20LL) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v17 = (_QWORD *)LastTopMostWindow[11];
          if ( !v17 )
            break;
          if ( v16 && (unsigned int)GetBandOrdinal(*(_DWORD *)(v17[5] + 236LL)) < BandOrdinal )
            goto LABEL_26;
          if ( (*(_BYTE *)(v17[5] + 20LL) & 0x20) != 0 )
            break;
          LastTopMostWindow = v17;
        }
        if ( !v16 )
          goto LABEL_27;
LABEL_26:
        if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(LastTopMostWindow[5] + 236LL)) >= BandOrdinal )
          goto LABEL_27;
      }
    }
    else
    {
      if ( !v16 )
      {
LABEL_27:
        if ( *(char *)(LastTopMostWindow[5] + 19LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3334);
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3335);
        v18 = LastTopMostWindow[11];
        if ( v18 )
        {
          v53 = *(_OWORD *)LockPointer(v54, v18 + 96, (__int64)a1);
          HMAssignmentLock(&v53, 0LL);
          v53 = *(_OWORD *)LockPointer(v54, (__int64)a1 + 88, LastTopMostWindow[11]);
          HMAssignmentLock(&v53, 0LL);
        }
        v53 = *(_OWORD *)LockPointer(v54, (__int64)a1 + 96, (__int64)LastTopMostWindow);
        HMAssignmentLock(&v53, 0LL);
        v19 = LockPointer(v54, (__int64)(LastTopMostWindow + 11), (__int64)a1);
        goto LABEL_52;
      }
      if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(_DWORD *)(LastTopMostWindow[5] + 236LL)) )
      {
        while ( 1 )
        {
          v20 = LastTopMostWindow[11];
          if ( !v20 || (unsigned int)GetBandOrdinal(*(_DWORD *)(*(_QWORD *)(v20 + 40) + 236LL)) <= BandOrdinal )
            break;
          LastTopMostWindow = v21;
        }
        goto LABEL_27;
      }
      while ( 1 )
      {
        LastTopMostWindow = (_QWORD *)LastTopMostWindow[12];
        if ( !LastTopMostWindow )
          break;
        if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(_DWORD *)(LastTopMostWindow[5] + 236LL)) )
          goto LABEL_27;
      }
    }
  }
  v22 = (_QWORD *)a3[14];
  if ( v22 )
  {
    if ( v16 )
    {
      if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(v22[5] + 236LL)) > BandOrdinal )
      {
        for ( LastTopMostWindow = v22; ; LastTopMostWindow = v24 )
        {
          v23 = LastTopMostWindow[11];
          if ( !v23 || (unsigned int)GetBandOrdinal(*(_DWORD *)(*(_QWORD *)(v23 + 40) + 236LL)) <= BandOrdinal )
            break;
        }
        goto LABEL_27;
      }
      LastTopMostWindow = 0LL;
    }
    v53 = *(_OWORD *)LockPointer(v54, (__int64)(v22 + 12), (__int64)a1);
    HMAssignmentLock(&v53, 0LL);
    v53 = *(_OWORD *)LockPointer(v54, (__int64)a1 + 88, a3[14]);
    HMAssignmentLock(&v53, 0LL);
  }
  v19 = LockPointer(v54, (__int64)(a3 + 14), (__int64)a1);
LABEL_52:
  v53 = *(_OWORD *)v19;
  HMAssignmentLock(&v53, 0LL);
  *((_DWORD *)a1 + 95) |= 0x1000000u;
  v25 = 0;
  v26 = (struct tagWND *)a3[14];
  while ( v26 )
  {
    v27 = v26 == a1;
    v26 = (struct tagWND *)*((_QWORD *)v26 + 11);
    if ( v27 )
      v25 = 1;
  }
  if ( v25 )
    *((_DWORD *)a1 + 95) |= 0x2000000u;
  else
    *((_DWORD *)a1 + 95) &= ~0x2000000u;
  if ( (*((_DWORD *)a1 + 95) & 0x2000000) != 0 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      LOBYTE(v28) = IsDesktopWindow((__int64)a1);
      if ( !v28 )
      {
        LOBYTE(v30) = IsMessageParentWindow(v29);
        if ( !v30 && a3 != *(__int64 **)(W32GetUserSessionState(v32, v31) + 68472) )
        {
          DirtyVisRgnTrackers(a1, v33);
          v34 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
          v35 = HWInsertAfter((__int64)LastTopMostWindow);
          v36 = *a3;
          v37 = v35;
          v38 = *(_QWORD *)a1;
          v41 = (void *)ReferenceDwmApiPort(v40, v39);
          DwmAsyncChildLink(v41, v38, v36, v37, v34);
          for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 88) )
          {
            v44 = *(_DWORD *)(i + 380);
            if ( (v44 & 0x2000000) == 0 )
            {
              *(_DWORD *)(i + 380) = v44 | 0x2000000;
              DirtyVisRgnTrackers((struct tagWND *)i, v42);
              v45 = *(_DWORD *)(*(_QWORD *)(i + 40) + 236LL);
              v46 = HWInsertAfter(*(_QWORD *)(i + 96));
              v47 = *a3;
              v48 = v46;
              v49 = *(_QWORD *)i;
              v52 = (void *)ReferenceDwmApiPort(v51, v50);
              DwmAsyncChildLink(v52, v49, v47, v48, v45);
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
}
