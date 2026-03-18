/*
 * XREFs of ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1400229C8 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF26C (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x1401CF2E4 (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdq @ 0x1402C922C (WPP_RECORDER_AND_TRACE_SF_qdq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1402C94A4 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

char __fastcall CRecalcState::NeedsMigration(CRecalcState *this, const struct tagWND *a2)
{
  char v2; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdi
  CMonitorTopology *v9; // rbx
  struct tagRECT *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  char v13; // bp
  __int64 v14; // r15
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
  char v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // r12
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
    if ( MonitorFromRect(*((_QWORD *)a2 + 5) + 88LL, 0LL, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL)) )
      v7 = *(_QWORD *)MonitorFromRect(*((_QWORD *)a2 + 5) + 88LL, 0LL, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL));
    else
      v7 = 0LL;
    if ( *(_QWORD *)(*((_QWORD *)a2 + 5) + 256LL) != v7 )
    {
      v13 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v36 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v2 = 1;
      }
      if ( v36 || v2 )
      {
        PsGetThreadId(**((PETHREAD **)a2 + 2));
        UserSessionState = W32GetUserSessionState(v38, v37);
        LOBYTE(v40) = v2;
        LOBYTE(v41) = v36;
        WPP_RECORDER_AND_TRACE_SF_qqqd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v41,
          v40,
          *(_QWORD *)(UserSessionState + 69160));
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
        v14 = v11 + 72LL * v12;
        v15 = CalculateLogicalMonitorRect(
                &v59,
                (__m128i *)(v14 + 24),
                *(_WORD *)(v14 + 56),
                (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF,
                *(_WORD *)(v14 + 80));
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
            v25 = CMonitorTopology::MonitorDataFromId(v9, (const struct CMonitorTopology::MonitorId *)(v14 + 64));
            if ( !v25
              || !CMonitorTopology::MonitorData::Compare((const struct CMonitorTopology::MonitorData *)(v14 + 16), v25) )
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v48 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
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
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v56,
          v55,
          *(_QWORD *)(v54 + 69160),
          5,
          7,
          20,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v50,
          v51);
      }
      v13 = 0;
    }
    else
    {
      v13 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v42 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v42 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v2 = 1;
      }
      if ( v42 || v2 )
      {
        PsGetThreadId(**((PETHREAD **)a2 + 2));
        v45 = W32GetUserSessionState(v44, v43);
        LOBYTE(v46) = v2;
        LOBYTE(v47) = v42;
        WPP_RECORDER_AND_TRACE_SF_qdq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v47,
          v46,
          *(_QWORD *)(v45 + 69160));
      }
    }
    CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(&Current);
    return v13;
  }
  v26 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v27 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v26 = 0;
  }
  if ( v27 || v26 )
  {
    v28 = (unsigned __int8)PsGetThreadId(**((PETHREAD **)a2 + 2));
    v29 = *(_QWORD *)a2;
    v30 = v28;
    v33 = W32GetUserSessionState(v32, v31);
    LOBYTE(v34) = v26;
    LOBYTE(v35) = v27;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v35,
      v34,
      *(_QWORD *)(v33 + 69160),
      5,
      7,
      17,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v29,
      v30);
  }
  return 0;
}
