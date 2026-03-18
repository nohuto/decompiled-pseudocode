/*
 * XREFs of ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14005DB04
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1402596DC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     _lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator() @ 0x1402C3C3C (_lambda_dcff6b42735babe5bbfdec74d1bb422f_--operator().c)
 */

void __fastcall EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(struct MOVESIZEDATA *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // edi
  bool v8; // r14
  bool v9; // r12
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // r12
  bool v17; // r13
  int v18; // r14d
  int v19; // edi
  int v20; // esi
  int v21; // ebx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  int v26; // edi
  int v27; // esi
  bool v28; // bl
  bool v29; // r14
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // [rsp+20h] [rbp-49h]
  __int64 v34; // [rsp+28h] [rbp-41h]
  _QWORD v35[10]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v36; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v38; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *((_DWORD *)a1 + 70);
  v4 = (__int64 *)*((_QWORD *)a1 + 2);
  v36 = v2;
  v5 = *(_DWORD *)(v4[5] + 288);
  v37 = v5;
  if ( v2 != v5 && (*(_BYTE *)(v4[5] + 288) & 0xF) == 3 )
  {
    v6 = v2 >> 8;
    *((_DWORD *)a1 + 70) = v5;
    v7 = v5 >> 8;
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *v4;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v8;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        95,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v10,
        v7,
        v6);
    }
    v14 = *((_QWORD *)a1 + 2);
    *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 56) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    xxxGetMinMaxTrackInfo(a1, a2);
    v38 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
    v35[0] = &v36;
    v35[1] = &v38;
    v35[2] = &v37;
    LogicalToPhysicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v36, &v38, v33, v34);
    PhysicalToLogicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v37, &v38);
    v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = *((_DWORD *)a1 + 35);
      v19 = *((_DWORD *)a1 + 37);
      v20 = *((_DWORD *)a1 + 34);
      v21 = *((_DWORD *)a1 + 36);
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v23) = v17;
      LOBYTE(v24) = v16;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69152),
        4,
        1,
        96,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v20,
        v18,
        v21,
        v19,
        v21 - v20,
        v19 - v18);
    }
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v35, (char *)a1 + 252);
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v35, (char *)a1 + 188);
    if ( *((_DWORD *)a1 + 44) == 9 )
    {
      v26 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 63);
      v27 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 64);
      *((_DWORD *)a1 + 43) = v27;
      *((_DWORD *)a1 + 42) = v26;
      v28 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(v30 + 69152),
          4,
          1,
          97,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
          v26,
          v27);
      }
    }
  }
}
