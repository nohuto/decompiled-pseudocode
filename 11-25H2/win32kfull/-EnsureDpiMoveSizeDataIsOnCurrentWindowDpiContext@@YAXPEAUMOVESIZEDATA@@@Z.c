/*
 * XREFs of ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401E2130
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x14022027C (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     _lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator() @ 0x1402A6998 (_lambda_dcff6b42735babe5bbfdec74d1bb422f_--operator().c)
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
  __int64 v16; // rdx
  bool v17; // r12
  bool v18; // r13
  int v19; // edi
  int v20; // r14d
  int v21; // ebx
  int v22; // esi
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  int v27; // edi
  int v28; // esi
  bool v29; // bl
  bool v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  _QWORD v34[10]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v35; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *((_DWORD *)a1 + 70);
  v4 = (__int64 *)*((_QWORD *)a1 + 2);
  v35 = v2;
  v5 = *(_DWORD *)(v4[5] + 288);
  v36 = v5;
  if ( v2 != v5 && (*(_BYTE *)(v4[5] + 288) & 0xF) == 3 )
  {
    v6 = v2 >> 8;
    *((_DWORD *)a1 + 70) = v5;
    v7 = v5 >> 8;
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *v4;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v8;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        95,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v10,
        v7,
        v6);
    }
    v14 = *((_QWORD *)a1 + 2);
    *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 56) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    xxxGetMinMaxTrackInfo(a1, a2);
    v37 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL), v15);
    v34[0] = &v35;
    v34[1] = &v37;
    v34[2] = &v36;
    LogicalToPhysicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v35, &v37);
    PhysicalToLogicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v36, &v37);
    v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = *((_DWORD *)a1 + 37);
      v20 = *((_DWORD *)a1 + 35);
      v21 = *((_DWORD *)a1 + 36);
      v22 = *((_DWORD *)a1 + 34);
      v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v24) = v18;
      LOBYTE(v25) = v17;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v25,
        v24,
        *(_QWORD *)(v23 + 69160),
        4,
        1,
        96,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v22,
        v20,
        v21,
        v19,
        v21 - v22,
        v19 - v20);
    }
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v34, (char *)a1 + 252);
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v34, (char *)a1 + 188);
    if ( *((_DWORD *)a1 + 44) == 9 )
    {
      v27 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 63);
      v28 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 64);
      *((_DWORD *)a1 + 43) = v28;
      *((_DWORD *)a1 + 42) = v27;
      v29 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v32,
          *(_QWORD *)(v31 + 69160),
          4,
          1,
          97,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
          v27,
          v28);
      }
    }
  }
}
