/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x140184C84
 * Callers:
 *     FindNCHitEx @ 0x140184990 (FindNCHitEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     CalcSBStuff @ 0x14025FAB8 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x14026006C (GetWndSBDisableFlags.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddsdddd @ 0x1402E5E70 (WPP_RECORDER_AND_TRACE_SF_qddsdddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qldddddddd @ 0x1402E67F8 (WPP_RECORDER_AND_TRACE_SF_qldddddddd.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  unsigned int v3; // edi
  struct tagWND *v4; // r14
  char v5; // r15
  char v6; // al
  char v7; // r13
  LONG y; // esi
  __int64 *v9; // rcx
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // esi
  __int64 v16; // rdx
  char WndSBDisableFlags; // bl
  bool v18; // di
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // edi
  bool v27; // bp
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  _BYTE v31[36]; // [rsp+A0h] [rbp-88h] BYREF
  int v32; // [rsp+C4h] [rbp-64h]
  int v33; // [rsp+C8h] [rbp-60h]
  int v34; // [rsp+D0h] [rbp-58h]
  int v35; // [rsp+D4h] [rbp-54h]
  char v39; // [rsp+148h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  memset_0(v31, 0, 0x40uLL);
  v5 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v6 = 0;
  }
  v39 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v7 = 0;
  }
  y = a3.y;
  if ( v6 || v7 )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v11) = v39;
    LOBYTE(v12) = v7;
    v3 = a2;
    y = a3.y;
    WPP_RECORDER_AND_TRACE_SF_qldddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69160));
    v9 = (__int64 *)((char *)v4 + 40);
    v4 = a1;
  }
  else
  {
    v9 = (__int64 *)((char *)v4 + 40);
  }
  v13 = *v9;
  if ( (*(_BYTE *)(v13 + 26) & 0x40) == 0 || v3 )
    v14 = a3.x - *(_DWORD *)(v13 + 88);
  else
    v14 = *(_DWORD *)(v13 + 96) - a3.x;
  v15 = y - *(_DWORD *)(v13 + 92);
  WndSBDisableFlags = GetWndSBDisableFlags(v4, v3);
  if ( (WndSBDisableFlags & 3) == 3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v5 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = *(_QWORD *)v4;
      v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v21) = v18;
      LOBYTE(v22) = v5;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(v20 + 69160),
        3,
        9,
        11,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v19,
        v14,
        v15);
    }
    return 4294967294LL;
  }
  else
  {
    CalcSBStuff(v4, v31, v3);
    v25 = v15;
    if ( !v3 )
      v25 = v14;
    if ( v25 >= v32 )
    {
      if ( v25 < v33 )
      {
        if ( v25 >= v35 )
          v26 = (v25 < v34) + 63;
        else
          v26 = 62;
      }
      else
      {
        v26 = (WndSBDisableFlags & 2) != 0 ? -2 : 61;
      }
    }
    else
    {
      v26 = (WndSBDisableFlags & 1) != 0 ? -2 : 60;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v5 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v5;
      WPP_RECORDER_AND_TRACE_SF_qddsdddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(v28 + 69160));
    }
    return v26;
  }
}
