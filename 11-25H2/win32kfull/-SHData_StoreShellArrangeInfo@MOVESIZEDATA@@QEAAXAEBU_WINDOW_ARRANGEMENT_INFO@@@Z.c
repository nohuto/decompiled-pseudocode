/*
 * XREFs of ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x14018D658
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14018CF78 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x14018CCC0 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x14018D8FC (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x14018F66C (WPP_RECORDER_AND_TRACE_SF_dddddds.c)
 */

void __fastcall MOVESIZEDATA::SHData_StoreShellArrangeInfo(
        MOVESIZEDATA *this,
        const struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  DWM_ARRANGEMENT_DATA *v2; // rbx
  HWND v5; // rdx
  unsigned int *v6; // r9
  bool v7; // zf
  unsigned int *v8; // r8
  __int64 v9; // rdx
  bool v10; // di
  bool v11; // si
  const char *v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  bool v18; // r12
  bool v19; // r13
  int v20; // edi
  int v21; // ebp
  int v22; // ebx
  int v23; // esi
  __int64 UserSessionState; // rax
  const char *v25; // r10
  int v26; // r8d
  int v27; // edx
  BOOL v28; // [rsp+B0h] [rbp+8h]

  v2 = (MOVESIZEDATA *)((char *)this + 336);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 18);
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((MOVESIZEDATA *)((char *)this + 336), *((_DWORD *)a2 + 14), this);
  v5 = (HWND)*((_QWORD *)a2 + 8);
  if ( v5 )
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(v2, v5, this);
  v6 = &WPP_GLOBAL_Control;
  v7 = (*((_BYTE *)a2 + 36) & 1) == 0;
  v8 = &WPP_RECORDER_INITIALIZED;
  *((_BYTE *)this + 308) = *((_BYTE *)a2 + 36) & 1;
  if ( !v7 )
  {
    v16 = *(_QWORD *)((char *)this + 260);
    *(_OWORD *)((char *)this + 292) = *(_OWORD *)((char *)a2 + 40);
    v28 = PtInRect((_DWORD *)this + 73, v16);
    *((_BYTE *)this + 309) = v28;
    v18 = *(unsigned int **)&WPP_GLOBAL_Control != v6
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v8;
    if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v8 )
    {
      v20 = *((_DWORD *)this + 76);
      v21 = *((_DWORD *)this + 74);
      v22 = *((_DWORD *)this + 75);
      v23 = *((_DWORD *)this + 73);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
      v25 = "inside";
      LOBYTE(v26) = v19;
      LOBYTE(v27) = v18;
      if ( !v28 )
        v25 = "outside";
      WPP_RECORDER_AND_TRACE_SF_dddddds(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        11,
        (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
        v23,
        v21,
        v22,
        v20,
        v22 - v23,
        v20 - v21,
        (__int64)v25);
      v8 = &WPP_RECORDER_INITIALIZED;
      v6 = &WPP_GLOBAL_Control;
    }
  }
  v9 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 72) = v9;
  v10 = *(unsigned int **)&WPP_GLOBAL_Control != v6
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v8;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v8 )
  {
    if ( (_DWORD)v9 )
    {
      v12 = "Arrange";
      if ( (_DWORD)v9 != 1 )
        v12 = "Cancel";
    }
    else
    {
      v12 = "Default";
    }
    v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(v13 + 69160),
      4,
      1,
      12,
      (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
      (__int64)v12);
  }
  *((_BYTE *)this + 328) = 1;
}
