/*
 * XREFs of ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14015F634 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x14015FD84 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x140160F2C (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401621B8 (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdq @ 0x1402E0B88 (WPP_RECORDER_AND_TRACE_SF_qdq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1402E0E04 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

char __fastcall CRecalcState::NeedsMigration(CRecalcState *this, const struct tagWND *a2)
{
  char v2; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdi
  CMonitorTopology *v9; // rbx
  struct tagRECT *v10; // rax
  __int64 v11; // r15
  unsigned int v12; // edi
  char v13; // bp
  __int64 v14; // r12
  __m128i *v15; // rax
  int left; // ecx
  __m128i v17; // xmm0
  int right; // eax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // xmm0_8
  LONG top; // edx
  LONG bottom; // eax
  unsigned __int64 v23; // r8
  const struct CMonitorTopology::MonitorData *v25; // rax
  char v26; // bp
  char v27; // si
  unsigned __int8 v28; // al
  __int64 v29; // rdi
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  char v48; // si
  unsigned __int8 ThreadId; // al
  __int64 v50; // rdi
  char v51; // bl
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  unsigned int v57; // [rsp+20h] [rbp-88h]
  struct tagRECT i; // [rsp+60h] [rbp-48h] BYREF
  __m128i v59; // [rsp+70h] [rbp-38h] BYREF
  CMonitorTopology *Current; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    if ( MonitorFromRect((__int32 *)(*((_QWORD *)a2 + 5) + 88LL), 0LL, *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL)) )
      v7 = *(_QWORD *)MonitorFromRect(
                        (__int32 *)(*((_QWORD *)a2 + 5) + 88LL),
                        0LL,
                        *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL));
    else
      v7 = 0LL;
    if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 256LL) != v7 )
    {
      v13 = 1;
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      {
        v2 = 1;
      }
      v36 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *((_WORD *)WPP_GLOBAL_Control + 36);
      if ( v2 || v36 )
      {
        PsGetThreadId(**((PETHREAD **)a2 + 2));
        UserSessionState = W32GetUserSessionState(v38, v37);
        LOBYTE(v40) = v36;
        LOBYTE(v41) = v2;
        WPP_RECORDER_AND_TRACE_SF_qqqd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(UserSessionState + 69152));
      }
      return v13;
    }
    v8 = *((_QWORD *)this + 9);
    Current = CTopologyManager::GetCurrent(v6, v5);
    v9 = Current;
    if ( CMonitorTopology::MonitorDataFromId(Current, (const struct CMonitorTopology::MonitorId *)(v8 + 48)) )
    {
      v10 = WindowMargins::ReduceRect(
              (WindowMargins *)&i,
              (struct tagRECT *)a2,
              (CRecalcState *)((char *)this + 28),
              (const struct tagRECT *)((*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF),
              v57);
      v11 = *((_QWORD *)this + 2);
      v12 = 0;
      v13 = 1;
      for ( i = *v10; v12 < *(_DWORD *)(v11 + 4); ++v12 )
      {
        v14 = 9LL * v12;
        v15 = CalculateLogicalMonitorRect(
                &v59,
                (__m128i *)(v11 + 8 * (v14 + 3)),
                *(_WORD *)(v11 + 72LL * v12 + 56),
                (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF,
                *(_WORD *)(v11 + 72LL * v12 + 80));
        left = i.left;
        v17 = *v15;
        right = i.right;
        v19 = v17.m128i_i64[0];
        v20 = _mm_srli_si128(v17, 8).m128i_u64[0];
        if ( (int)v19 > i.left )
          left = v19;
        if ( (int)v20 < i.right )
          right = v20;
        if ( left < right )
        {
          top = i.top;
          bottom = i.bottom;
          v23 = HIDWORD(v19);
          if ( (int)v23 > i.top )
            top = v23;
          if ( SHIDWORD(v20) < i.bottom )
            bottom = HIDWORD(v20);
          if ( top < bottom )
          {
            v25 = CMonitorTopology::MonitorDataFromId(
                    v9,
                    (const struct CMonitorTopology::MonitorId *)(v11 + 8 * (v14 + 8)));
            if ( !v25
              || !CMonitorTopology::MonitorData::Compare(
                    (const struct CMonitorTopology::MonitorData *)(v11 + 8 * (v14 + 2)),
                    v25) )
            {
              break;
            }
          }
        }
        v11 = *((_QWORD *)this + 2);
      }
      if ( v12 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL) )
      {
        if ( v9 )
          CMonitorTopology::Release(v9);
        return v13;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v48 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v13 = 0;
      }
      if ( v48 || v13 )
      {
        ThreadId = (unsigned __int8)PsGetThreadId(**((PETHREAD **)a2 + 2));
        v50 = *(_QWORD *)a2;
        v51 = ThreadId;
        v54 = W32GetUserSessionState(v53, v52);
        LOBYTE(v55) = v13;
        LOBYTE(v56) = v48;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v56,
          v55,
          *(_QWORD *)(v54 + 69152),
          5,
          7,
          20,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v50,
          v51);
      }
      v13 = 0;
    }
    else
    {
      v13 = 1;
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      {
        v2 = 1;
      }
      v42 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *((_WORD *)WPP_GLOBAL_Control + 36);
      if ( v2 || v42 )
      {
        PsGetThreadId(**((PETHREAD **)a2 + 2));
        v45 = W32GetUserSessionState(v44, v43);
        LOBYTE(v46) = v42;
        LOBYTE(v47) = v2;
        WPP_RECORDER_AND_TRACE_SF_qdq(*((_QWORD *)WPP_GLOBAL_Control + 3), v47, v46, *(_QWORD *)(v45 + 69152));
      }
    }
    CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(&Current);
    return v13;
  }
  v26 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v27 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v26 = 0;
  if ( v27 || v26 )
  {
    v28 = (unsigned __int8)PsGetThreadId(**((PETHREAD **)a2 + 2));
    v29 = *(_QWORD *)a2;
    v30 = v28;
    v33 = W32GetUserSessionState(v32, v31);
    LOBYTE(v34) = v26;
    LOBYTE(v35) = v27;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      *(_QWORD *)(v33 + 69152),
      5,
      7,
      17,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v29,
      v30);
  }
  return 0;
}
