/*
 * XREFs of ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1401A0468
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14019FD9C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1401A0704 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1401A07E8 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x1401A0980 (WPP_RECORDER_AND_TRACE_SF_dddddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

void __fastcall MOVESIZEDATA::SHData_StoreShellArrangeInfo(
        MOVESIZEDATA *this,
        const struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  DWM_ARRANGEMENT_DATA *v2; // rbx
  HWND v5; // rdx
  struct MOVESIZEDATA *v6; // r9
  bool v7; // zf
  unsigned int *v8; // r8
  __int64 v9; // rdx
  bool v10; // di
  bool v11; // si
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  bool v14; // r12
  bool v15; // r13
  int v16; // ebp
  int v17; // edi
  int v18; // esi
  int v19; // ebx
  __int64 UserSessionState; // rax
  const char *v21; // r10
  int v22; // r8d
  int v23; // edx
  const char *v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  BOOL v28; // [rsp+B0h] [rbp+8h]

  v2 = (MOVESIZEDATA *)((char *)this + 400);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 18);
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((MOVESIZEDATA *)((char *)this + 400), *((_DWORD *)a2 + 14), this);
  v5 = (HWND)*((_QWORD *)a2 + 8);
  if ( v5 )
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(v2, v5, this);
  v6 = (struct MOVESIZEDATA *)&WPP_GLOBAL_Control;
  v7 = (*((_BYTE *)a2 + 36) & 1) == 0;
  v8 = &WPP_RECORDER_INITIALIZED;
  *((_BYTE *)this + 372) = *((_BYTE *)a2 + 36) & 1;
  if ( !v7 )
  {
    v12 = *(_QWORD *)((char *)this + 260);
    *(_OWORD *)((char *)this + 356) = *(_OWORD *)((char *)a2 + 40);
    v28 = PtInRect((_DWORD *)this + 89, v12);
    *((_BYTE *)this + 373) = v28;
    v14 = WPP_GLOBAL_Control != v6
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v8;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v8 )
    {
      v16 = *((_DWORD *)this + 90);
      v17 = *((_DWORD *)this + 92);
      v18 = *((_DWORD *)this + 89);
      v19 = *((_DWORD *)this + 91);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      v21 = "inside";
      LOBYTE(v22) = v15;
      LOBYTE(v23) = v14;
      if ( !v28 )
        v21 = "outside";
      WPP_RECORDER_AND_TRACE_SF_dddddds(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        11,
        (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
        v18,
        v16,
        v19,
        v17,
        v19 - v18,
        v17 - v16,
        (__int64)v21);
      v8 = &WPP_RECORDER_INITIALIZED;
      v6 = (struct MOVESIZEDATA *)&WPP_GLOBAL_Control;
    }
  }
  v9 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 88) = v9;
  v10 = WPP_GLOBAL_Control != v6
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)v8;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != v8 )
  {
    if ( (_DWORD)v9 )
    {
      v24 = "Arrange";
      if ( (_DWORD)v9 != 1 )
        v24 = "Cancel";
    }
    else
    {
      v24 = "Default";
    }
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v26) = v11;
    LOBYTE(v27) = v10;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 69152),
      4,
      1,
      12,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
      (__int64)v24);
  }
  *((_BYTE *)this + 392) = 1;
}
