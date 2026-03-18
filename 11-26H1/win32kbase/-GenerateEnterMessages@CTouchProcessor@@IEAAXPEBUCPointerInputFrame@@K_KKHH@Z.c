/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A26D4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x14015E9A4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x140227ED8 (ApiSetEditionSendCursorSuppressionUpdate.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rdi
  const struct CPointerInputFrame *v9; // rbx
  char v11; // si
  __int64 v12; // r14
  int v13; // eax
  int v14; // r8d
  char v15; // r15
  bool v16; // r12
  __int16 v17; // bx
  int v18; // edi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  char v24; // r15
  bool v25; // r12
  __int16 v26; // bx
  int v27; // edi
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  void *v31; // r8
  int v32; // [rsp+30h] [rbp-89h]
  int v33; // [rsp+30h] [rbp-89h]
  int v34; // [rsp+40h] [rbp-79h]
  int v35; // [rsp+40h] [rbp-79h]
  _BYTE v36[112]; // [rsp+58h] [rbp-61h] BYREF
  char v37; // [rsp+C8h] [rbp+Fh]
  int v38; // [rsp+C9h] [rbp+10h]
  __int16 v39; // [rsp+CDh] [rbp+14h]
  char v40; // [rsp+CFh] [rbp+16h]

  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      199,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v12 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)(v12 + 180) & 1) != 0 )
  {
    v38 = 0;
    v39 = 0;
    v40 = 0;
    memset(v36, 0, sizeof(v36));
    v37 = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage((__int64)this, v12, a4, v9, 585, a5, a6, a7, (CInputDest *)v36) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = *(_WORD *)(v12 + 160);
        v27 = *(_DWORD *)(v12 + 172);
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
        LOBYTE(v29) = v25;
        LOBYTE(v30) = v24;
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          v33,
          200,
          v35,
          v27,
          v26);
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v12) )
      ApiSetEditionSendCursorSuppressionUpdate(1LL);
  }
  else
  {
    v13 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 4) == 0 && (v13 & 8) != 0 || (v13 & 0x40) != 0 )
    {
      v38 = 0;
      v39 = 0;
      v40 = 0;
      memset(v36, 0, sizeof(v36));
      v37 = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                            (__int64)this,
                            v12,
                            a4,
                            v9,
                            585,
                            a5,
                            a6,
                            a7,
                            (CInputDest *)v36) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v15 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(_WORD *)(v12 + 160);
          v18 = *(_DWORD *)(v12 + 172);
          v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, v14);
          LOBYTE(v20) = v16;
          LOBYTE(v21) = v15;
          WPP_RECORDER_AND_TRACE_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 69136),
            2,
            v32,
            201,
            v34,
            v18,
            v17);
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( (_BYTE)a2 || v11 )
  {
    v31 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v31) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v31,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      202,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
}
