/*
 * XREFs of SetSysColor @ 0x14003405C
 * Callers:
 *     xxxSetSysColors @ 0x1401B7328 (xxxSetSysColors.c)
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     LeaveRenderCrit @ 0x140034320 (LeaveRenderCrit.c)
 *     GreSetBrushGlobal @ 0x14003470C (GreSetBrushGlobal.c)
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     GreMarkUndeletableBrush @ 0x140035460 (GreMarkUndeletableBrush.c)
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(unsigned int a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 UserSessionState; // rax
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 SolidBrushInternal; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edi
  int v57; // edi
  int v58; // edi
  int v59; // edi
  int v60; // edi

  v4 = a1;
  PsEnterPriorityRegion();
  KeEnterCriticalRegion();
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7, v6);
  UserSessionState = W32GetUserSessionState(v10, v9, v11, v12);
  LOBYTE(v14) = 1;
  ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104, v14);
  v15 = (unsigned int)v4;
  v21 = *(_QWORD *)(W32GetUserSessionState(v17, v16, v18, v19) + 19904);
  *(_DWORD *)(v21 + 4 * v4 + 4444) = NearestColor;
  if ( (a3 & 4) != 0 )
  {
    v21 = *(_QWORD *)(W32GetUserSessionState(v21, v20, v22, v23) + 56968);
    if ( (*(_DWORD *)(v21 + 132) & 2) != 0
      && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
    {
      v55 = W32GetUserSessionState(v21, v20, v22, v23);
      GreSetMagicColors(*(HDC *)(*(_QWORD *)(v55 + 56968) + 56LL), (struct tagPALETTEENTRY)NearestColor);
    }
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (v56 = v4 - 1) != 0
    && (v57 = v56 - 9) != 0
    && (v58 = v57 - 1) != 0
    && (v59 = v58 - 1) != 0
    && (v60 = v59 - 12) != 0
    && (unsigned int)(v60 - 3) >= 2 )
  {
    v24 = W32GetUserSessionState(v21, v20, v22, v23);
    NearestColor = GreGetNearestColor(*(HDC *)(*(_QWORD *)(v24 + 56968) + 56LL));
  }
  v25 = *(_QWORD *)(W32GetUserSessionState(v21, v20, v22, v23) + 19904);
  *(_DWORD *)(v25 + 4 * v15 + 4568) = NearestColor;
  v30 = *(_QWORD *)(W32GetUserSessionState(v25, v26, v27, v28) + 19904);
  if ( *(_QWORD *)(v30 + 8 * v15 + 4696) )
  {
    v33 = W32GetUserSessionState(v30, v29, v31, v32);
    GreSetSolidBrushInternal(*(HBRUSH *)(*(_QWORD *)(v33 + 19904) + 8 * v15 + 4696), NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(NearestColor, 0, 0LL);
    v40 = *(_QWORD *)(W32GetUserSessionState(v37, v36, v38, v39) + 19904);
    *(_QWORD *)(v40 + 8 * v15 + 4696) = SolidBrushInternal;
    v44 = W32GetUserSessionState(v40, v41, v42, v43);
    GreMarkUndeletableBrush(*(_QWORD *)(*(_QWORD *)(v44 + 19904) + 8 * v15 + 4696));
    v49 = W32GetUserSessionState(v46, v45, v47, v48);
    GreSetBrushOwner(*(HBRUSH *)(*(_QWORD *)(v49 + 19904) + 8 * v15 + 4696), 0);
    v54 = W32GetUserSessionState(v51, v50, v52, v53);
    GreSetBrushGlobal(*(HBRUSH *)(*(_QWORD *)(v54 + 19904) + 8 * v15 + 4696));
  }
  return LeaveRenderCrit();
}
