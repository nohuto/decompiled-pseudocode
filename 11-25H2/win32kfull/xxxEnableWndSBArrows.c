/*
 * XREFs of xxxEnableWndSBArrows @ 0x1401E8CE0
 * Callers:
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     NtUserEnableScrollBar @ 0x1401E8BE0 (NtUserEnableScrollBar.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     _InitPwSB @ 0x1402E19AC (_InitPwSB.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDlll @ 0x1402E58F0 (WPP_RECORDER_AND_TRACE_SF_qDDlll.c)
 *     xxxDrawScrollBar @ 0x1402E847C (xxxDrawScrollBar.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(struct tagWND *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  char v6; // r15
  bool v7; // r13
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  unsigned int *inited; // rbx
  unsigned int v12; // edi
  HDC DCEx; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rcx
  struct tagWND *v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  struct tagWND *v20; // rcx
  int v22; // [rsp+B0h] [rbp+8h]
  int v23; // [rsp+B8h] [rbp+10h]

  v23 = a2;
  v3 = 0;
  v22 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_qDDlll(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160));
  }
  inited = (unsigned int *)*((_QWORD *)a1 + 19);
  if ( inited )
  {
    v12 = *inited;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v12 = 0;
    inited = (unsigned int *)InitPwSB(a1);
    if ( !inited )
      return 0LL;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( DCEx )
  {
    if ( !v23 || v23 == 3 )
    {
      v14 = *inited & 0xFFFFFFFC;
      if ( a3 )
        v14 = a3 | *inited;
      *inited = v14;
      if ( v14 != v12 )
      {
        v12 = v14;
        v22 = 1;
        v15 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v15 + 16) & 4) != 0 && (*(_BYTE *)(v15 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible((__int64)a1) )
          {
            xxxDrawScrollBar(v16, DCEx, 0);
            if ( inited != *((unsigned int **)a1 + 19) )
              goto LABEL_40;
          }
        }
      }
      if ( ((*(_BYTE *)inited ^ (unsigned __int8)v12) & 1) != 0 )
      {
        xxxWindowEvent(0x800Au, a1, -6, 1u, 1);
        if ( inited != *((unsigned int **)a1 + 19) )
          goto LABEL_40;
      }
      if ( ((*(_BYTE *)inited ^ (unsigned __int8)v12) & 2) != 0 )
      {
        xxxWindowEvent(0x800Au, a1, -6, 5u, 1);
        if ( inited != *((unsigned int **)a1 + 19) )
          goto LABEL_40;
      }
    }
    if ( ((v23 - 1) & 0xFFFFFFFD) == 0 )
    {
      v17 = *inited;
      v18 = a3 ? (4 * a3) | v17 : v17 & 0xFFFFFFF3;
      *inited = v18;
      if ( v18 != v12 )
      {
        v19 = *((_QWORD *)a1 + 5);
        v22 = 1;
        if ( (*(_BYTE *)(v19 + 16) & 2) != 0 && (*(_BYTE *)(v19 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible((__int64)a1) )
          {
            xxxDrawScrollBar(v20, DCEx, 1);
            if ( inited != *((unsigned int **)a1 + 19) )
              goto LABEL_40;
          }
        }
        if ( ((*(_BYTE *)inited ^ (unsigned __int8)v12) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, a1, -5, 1u, 1);
          if ( inited != *((unsigned int **)a1 + 19) )
            goto LABEL_40;
        }
        if ( ((*(_BYTE *)inited ^ (unsigned __int8)v12) & 8) != 0 )
          xxxWindowEvent(0x800Au, a1, -5, 5u, 1);
      }
    }
    v3 = v22;
LABEL_40:
    _ReleaseDC(DCEx);
    return v3;
  }
  return 0LL;
}
