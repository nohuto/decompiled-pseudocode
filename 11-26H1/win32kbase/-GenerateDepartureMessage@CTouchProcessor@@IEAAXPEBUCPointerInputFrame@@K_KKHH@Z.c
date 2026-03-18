/*
 * XREFs of ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A3748
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x14015E9A4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x140227ED8 (ApiSetEditionSendCursorSuppressionUpdate.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateDepartureMessage(
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
  char v11; // bp
  char v12; // si
  __int64 v13; // r14
  int v14; // edx
  int v15; // r8d
  bool v16; // r15
  __int16 v17; // bx
  int v18; // edi
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  void *v22; // r8
  int v23; // [rsp+28h] [rbp-D0h]
  int v24; // [rsp+38h] [rbp-C0h]
  _BYTE v25[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v26; // [rsp+C1h] [rbp-37h]
  __int16 v27; // [rsp+C5h] [rbp-33h]
  char v28; // [rsp+C7h] [rbp-31h]

  v8 = a3;
  v9 = a2;
  v11 = 0;
  v12 = 1;
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
      213,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v13 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)(v13 + 180) & 2) == 0 )
  {
    if ( (*(_DWORD *)v13 & 0x1000) == 0 )
    {
      v26 = 0;
      v27 = 0;
      v28 = 0;
      memset(v25, 0, sizeof(v25));
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                            (__int64)this,
                            v13,
                            a4,
                            v9,
                            586,
                            a5,
                            a6,
                            a7,
                            (CInputDest *)v25) )
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        {
          v11 = 1;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(_WORD *)(v13 + 160);
          v18 = *(_DWORD *)(v13 + 172);
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
          LOBYTE(v20) = v16;
          LOBYTE(v21) = v11;
          WPP_RECORDER_AND_TRACE_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 69136),
            2,
            v23,
            214,
            v24,
            v18,
            v17);
        }
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v13) )
      ApiSetEditionSendCursorSuppressionUpdate(0LL);
    CTouchProcessor::UnreferenceMsgData((__int64)this, a4, 1);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)a2 || v12 )
  {
    v22 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v22) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      215,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
}
