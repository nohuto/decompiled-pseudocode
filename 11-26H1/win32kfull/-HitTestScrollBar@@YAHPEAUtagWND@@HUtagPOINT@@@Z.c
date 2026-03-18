/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x14018E024
 * Callers:
 *     FindNCHitEx @ 0x14018DEF8 (FindNCHitEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qddsdddd @ 0x14018DB8C (WPP_RECORDER_AND_TRACE_SF_qddsdddd.c)
 *     GetHitTestCodeString @ 0x14018DDC8 (GetHitTestCodeString.c)
 *     GetWndSBDisableFlags @ 0x14018F5C0 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qldddddddd @ 0x1402F6E0C (WPP_RECORDER_AND_TRACE_SF_qldddddddd.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  unsigned int v3; // edi
  struct tagWND *v4; // r14
  char v5; // r15
  char v6; // al
  char v7; // r13
  LONG y; // esi
  __int64 v9; // rcx
  int v10; // r12d
  int v11; // esi
  __int64 v12; // rdx
  char WndSBDisableFlags; // bl
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // edi
  char v17; // bp
  __int64 v18; // r9
  __int64 UserSessionState; // rax
  int v21; // edx
  int v22; // r8d
  bool v23; // di
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // [rsp+20h] [rbp-F8h]
  int v29; // [rsp+28h] [rbp-F0h]
  int v30; // [rsp+30h] [rbp-E8h]
  int v31; // [rsp+38h] [rbp-E0h]
  _BYTE v32[36]; // [rsp+90h] [rbp-88h] BYREF
  int v33; // [rsp+B4h] [rbp-64h]
  int v34; // [rsp+B8h] [rbp-60h]
  int v35; // [rsp+C0h] [rbp-58h]
  int v36; // [rsp+C4h] [rbp-54h]
  char v40; // [rsp+138h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  memset_0(v32, 0, 0x40uLL);
  v5 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v6 = 0;
  }
  v40 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v7 = 0;
  }
  y = a3.y;
  if ( v6 || v7 )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
    LOBYTE(v21) = v40;
    LOBYTE(v22) = v7;
    v3 = a2;
    y = a3.y;
    WPP_RECORDER_AND_TRACE_SF_qldddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      *(_QWORD *)(UserSessionState + 69152));
    v4 = a1;
  }
  v9 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v9 + 26) & 0x40) == 0 || v3 )
    v10 = a3.x - *(_DWORD *)(v9 + 88);
  else
    v10 = *(_DWORD *)(v9 + 96) - a3.x;
  v11 = y - *(_DWORD *)(v9 + 92);
  WndSBDisableFlags = GetWndSBDisableFlags(v4, v3);
  if ( (WndSBDisableFlags & 3) == 3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v5 = 0;
    }
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = *(_QWORD *)v4;
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v26) = v23;
      LOBYTE(v27) = v5;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 69152),
        3,
        9,
        11,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v24,
        v10,
        v11);
    }
    return 4294967294LL;
  }
  else
  {
    CalcSBStuff(v4, v32, v3);
    v15 = v11;
    if ( !v3 )
      v15 = v10;
    if ( v15 >= v33 )
    {
      if ( v15 >= v34 )
      {
        v16 = (WndSBDisableFlags & 2) != 0 ? -2 : 61;
      }
      else if ( v15 < v36 )
      {
        v16 = 62;
      }
      else
      {
        v16 = (v15 < v35) + 63;
      }
    }
    else
    {
      v16 = (WndSBDisableFlags & 1) != 0 ? -2 : 60;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      GetHitTestCodeString(v16);
      WPP_RECORDER_AND_TRACE_SF_qddsdddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v5, v17, v18, v28, v29, v30, v31);
    }
    return v16;
  }
}
