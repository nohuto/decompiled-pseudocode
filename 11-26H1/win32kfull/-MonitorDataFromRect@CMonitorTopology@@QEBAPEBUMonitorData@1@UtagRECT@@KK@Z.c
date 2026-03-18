/*
 * XREFs of ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC
 * Callers:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402C8ECC (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E6284 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E9174 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402E9F0C (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::MonitorDataFromRect(
        CMonitorTopology *this,
        struct tagRECT *a2,
        int a3,
        unsigned int a4)
{
  LONG right; // edi
  unsigned int v6; // r13d
  LONG bottom; // ecx
  unsigned __int64 top; // rdx
  unsigned int *v10; // rsi
  _DWORD *v11; // r15
  char v12; // r14
  unsigned int v13; // r13d
  unsigned __int16 v14; // r12
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  int v18; // ecx
  LONG v19; // r9d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned __int64 v24; // r12
  unsigned int v25; // edi
  LONG v26; // esi
  unsigned __int16 v27; // r13
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  char v36; // r12
  int v37; // edi
  int v38; // ebp
  int v39; // ebx
  int v40; // esi
  __int64 UserSessionState; // rax
  int v42; // r8d
  int v43; // edx
  LONG left; // [rsp+70h] [rbp-78h]
  int v45; // [rsp+74h] [rbp-74h]
  int v46; // [rsp+78h] [rbp-70h]
  LONG v47; // [rsp+78h] [rbp-70h]
  _DWORD *v48; // [rsp+80h] [rbp-68h]
  _BYTE v49[96]; // [rsp+88h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+8h]
  LONG v51; // [rsp+F0h] [rbp+8h]
  int v52; // [rsp+F8h] [rbp+10h]
  LONG v53; // [rsp+F8h] [rbp+10h]

  right = a2->right;
  v6 = a4;
  left = a2->left;
  if ( right == a2->left )
    a2->right = ++right;
  bottom = a2->bottom;
  top = (unsigned int)a2->top;
  v45 = top;
  if ( bottom == (_DWORD)top )
    a2->bottom = bottom + 1;
  v10 = (unsigned int *)((char *)this + 4);
  v11 = 0LL;
  v50 = 0;
  v48 = (_DWORD *)((char *)this + 4);
  v12 = 1;
  if ( *((_DWORD *)this + 1) )
  {
    v13 = 0;
    v14 = (a4 >> 8) & 0x1FF;
    do
    {
      v15 = (unsigned __int64 *)CalculateLogicalMonitorRect(
                                  (unsigned int)v49,
                                  (_DWORD)this + 24 + 72 * v13,
                                  *((unsigned __int16 *)this + 36 * v13 + 28),
                                  v14,
                                  *((_WORD *)this + 36 * v13 + 40));
      v16 = *v15;
      v17 = v15[1];
      top = (unsigned int)v16;
      v18 = v17;
      if ( left > (int)v16 )
        top = (unsigned int)left;
      v52 = top;
      if ( right < (int)v17 )
        v18 = right;
      v46 = v18;
      if ( (int)top < v18 )
      {
        top = (unsigned int)a2->bottom;
        v19 = a2->bottom;
        v20 = HIDWORD(v16);
        if ( v45 > (int)v20 )
          LODWORD(v20) = v45;
        v21 = HIDWORD(v17);
        if ( (int)top >= (int)v21 )
          v19 = v21;
        if ( (int)v20 < v19 )
        {
          v22 = (v19 - v20) * (v18 - v52);
          if ( v22 > v50 )
          {
            v11 = (_DWORD *)((char *)this + 72 * v13 + 16);
            v50 = v22;
          }
          if ( v46 == right - left )
          {
            top = (unsigned int)(top - v45);
            if ( v19 == (_DWORD)top )
              break;
          }
        }
      }
      ++v13;
    }
    while ( v13 < *v10 );
    v6 = a4;
    if ( v11 )
      return (const struct CMonitorTopology::MonitorData *)v11;
    v48 = (_DWORD *)((char *)this + 4);
  }
  if ( a3 )
  {
    v24 = -1LL;
    v25 = 0;
    if ( !*v10 )
    {
LABEL_45:
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v36 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v12 = 0;
      }
      if ( v36 || v12 )
      {
        v37 = v11[5];
        v38 = v11[3];
        v39 = v11[4];
        v40 = v11[2];
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, top);
        LOBYTE(v42) = v12;
        LOBYTE(v43) = v36;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v42,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          7,
          21,
          (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
          v40,
          v38,
          v39,
          v37,
          v39 - v40,
          v37 - v38);
      }
      return (const struct CMonitorTopology::MonitorData *)v11;
    }
    v26 = a2->left;
    v51 = a2->right;
    v53 = a2->bottom;
    v47 = a2->top;
    v27 = (v6 >> 8) & 0x1FF;
    while ( 1 )
    {
      v28 = (unsigned __int64 *)CalculateLogicalMonitorRect(
                                  (unsigned int)v49,
                                  (_DWORD)this + 24 + 72 * v25,
                                  *((unsigned __int16 *)this + 36 * v25 + 28),
                                  v27,
                                  *((_WORD *)this + 36 * v25 + 40));
      top = v28[1];
      v29 = *v28;
      if ( v51 > (int)v29 )
      {
        if ( v26 < (int)top )
        {
          v31 = 0;
          goto LABEL_36;
        }
        v30 = v26 - top;
      }
      else
      {
        v30 = v29 - v51;
      }
      v31 = v30 + 1;
LABEL_36:
      v32 = HIDWORD(v29);
      if ( v53 <= (int)v32 )
      {
        v33 = v32 - v53;
LABEL_41:
        v34 = v33 + 1;
        goto LABEL_42;
      }
      top >>= 32;
      if ( v47 >= (int)top )
      {
        v33 = v47 - top;
        goto LABEL_41;
      }
      v34 = 0;
LABEL_42:
      v35 = v31 * v31 + v34 * v34;
      if ( v35 < v24 )
      {
        v11 = (_DWORD *)((char *)this + 72 * v25 + 16);
        v24 = v35;
      }
      if ( ++v25 >= *v48 )
        goto LABEL_45;
    }
  }
  return 0LL;
}
