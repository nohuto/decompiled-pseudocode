/*
 * XREFs of SetSysColor @ 0x1400AADC8
 * Callers:
 *     xxxSetSysColors @ 0x1400AAAB0 (xxxSetSysColors.c)
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140071190 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400715A4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     hCreateSolidBrushInternal @ 0x140087280 (hCreateSolidBrushInternal.c)
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 *     GreMarkUndeletableBrush @ 0x14010C360 (GreMarkUndeletableBrush.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     LeaveRenderCrit @ 0x140167840 (LeaveRenderCrit.c)
 */

__int64 __fastcall SetSysColor(unsigned int a1, struct tagPALETTEENTRY NearestColor, char a3)
{
  __int64 v4; // rdi
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 SolidBrushInternal; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD v41[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1;
  PsEnterPriorityRegion();
  KeEnterCriticalRegion();
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  UserSessionState = W32GetUserSessionState(v8, v7);
  LOBYTE(v10) = 1;
  ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104, v10);
  v11 = (unsigned int)v4;
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19872);
  *(struct tagPALETTEENTRY *)(v15 + 4 * v4 + 4444) = NearestColor;
  if ( (a3 & 4) != 0 )
  {
    v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 56968);
    if ( (*(_DWORD *)(v15 + 140) & 2) != 0
      && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
    {
      v16 = W32GetUserSessionState(v15, v14);
      GreSetMagicColors(*(HDC *)(*(_QWORD *)(v16 + 56968) + 64LL), NearestColor);
    }
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (v17 = v4 - 1) != 0
    && (v18 = v17 - 9) != 0
    && (v19 = v18 - 1) != 0
    && (v20 = v19 - 1) != 0
    && (v21 = v20 - 12) != 0
    && (unsigned int)(v21 - 3) >= 2 )
  {
    v22 = W32GetUserSessionState(v15, v14);
    NearestColor = (struct tagPALETTEENTRY)GreGetNearestColor(
                                             *(HDC *)(*(_QWORD *)(v22 + 56968) + 64LL),
                                             *(_DWORD *)&NearestColor);
  }
  v23 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19872);
  *(struct tagPALETTEENTRY *)(v23 + 4 * v11 + 4568) = NearestColor;
  v26 = *(_QWORD *)(W32GetUserSessionState(v23, v24) + 19872);
  if ( *(_QWORD *)(v26 + 8 * v11 + 4696) )
  {
    v39 = W32GetUserSessionState(v26, v25);
    GreSetSolidBrushInternal(*(HBRUSH *)(*(_QWORD *)(v39 + 19872) + 8 * v11 + 4696), *(_DWORD *)&NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(*(_DWORD *)&NearestColor, 0, 0LL, 0);
    v30 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19872);
    *(_QWORD *)(v30 + 8 * v11 + 4696) = SolidBrushInternal;
    v32 = W32GetUserSessionState(v30, v31);
    GreMarkUndeletableBrush(*(_QWORD *)(*(_QWORD *)(v32 + 19872) + 8 * v11 + 4696));
    v35 = W32GetUserSessionState(v34, v33);
    GreSetBrushOwner(*(HBRUSH *)(*(_QWORD *)(v35 + 19872) + 8 * v11 + 4696), 0);
    v38 = W32GetUserSessionState(v37, v36);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v41, *(_QWORD *)(*(_QWORD *)(v38 + 19872) + 8 * v11 + 4696));
    if ( v41[0] )
      *(_DWORD *)(v41[0] + 40LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v41);
  }
  return LeaveRenderCrit();
}
