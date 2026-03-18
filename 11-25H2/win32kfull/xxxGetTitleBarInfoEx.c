/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x140118784
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14004B5EC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     DwmSyncGetTitleBarInfo @ 0x140118934 (DwmSyncGetTitleBarInfo.c)
 *     xxxCalcCaptionButton @ 0x140118DE4 (xxxCalcCaptionButton.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  __int64 v2; // r15
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  NTSTATUS TitleBarInfo; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  char *v13; // rbx
  int v14; // eax
  int v16; // r8d
  int v17; // r9d
  _DWORD *v18; // rsi
  int v19; // ebx
  int v20; // edi
  ULONG v21; // eax
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF
  int v23; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v2) = 0;
  v4 = 0;
  v23 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_8;
  v8 = (void *)ReferenceDwmApiPort(v7, v6);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v22, 1);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v8);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v22);
  if ( TitleBarInfo < 0 )
  {
    v21 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v21);
    v14 = 1;
  }
  else
  {
    v4 = 1;
    v22 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v10);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v22);
    v13 = (char *)a2 + 44;
    v2 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v13, v13, CurrentThreadDpiAwarenessContext, &v22);
      v13 += 16;
      --v2;
    }
    while ( v2 );
    v14 = v23;
  }
  if ( !v14 )
  {
LABEL_8:
    *(_OWORD *)((char *)a2 + 20) = 0LL;
    *(_QWORD *)((char *)a2 + 36) = 0LL;
    memset_0((char *)a2 + 44, 0, 0x60uLL);
    xxxCommonGetTitleBarInfo(a1, a2, v16, v17);
    v18 = (_DWORD *)((char *)a2 + 28);
    v19 = 2;
    v20 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v18 & 0x8000) == 0 )
      {
        LOWORD(v22) = v2;
        v23 = v2;
        xxxCalcCaptionButton((_DWORD)a1, v19, (unsigned int)&v22, v20, (__int64)&v23, 1);
      }
      ++v19;
      v20 += 16;
      ++v18;
    }
    while ( v19 <= 5 );
    return 1;
  }
  return v4;
}
