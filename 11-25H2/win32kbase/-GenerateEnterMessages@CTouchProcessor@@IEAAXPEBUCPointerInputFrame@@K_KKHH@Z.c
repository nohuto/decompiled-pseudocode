/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140187960
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x140196960 (ApiSetEditionSendCursorSuppressionUpdate.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x14020553C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rdi
  const struct CPointerInputFrame *v9; // rbx
  char v11; // si
  __int64 v12; // r14
  __int64 v13; // rdx
  char v14; // r15
  bool v15; // r12
  __int16 v16; // bx
  int v17; // edi
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  char v22; // r15
  bool v23; // r12
  __int16 v24; // bx
  int v25; // edi
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  void *v29; // r8
  _BYTE v30[112]; // [rsp+58h] [rbp-61h] BYREF
  char v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+C9h] [rbp+10h]
  __int16 v33; // [rsp+CDh] [rbp+14h]
  char v34; // [rsp+CFh] [rbp+16h]

  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v12 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)(v12 + 180) & 1) != 0 )
  {
    v32 = 0;
    v33 = 0;
    v34 = 0;
    memset(v30, 0, sizeof(v30));
    v31 = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v12, a4, v9, 585) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v14 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_WORD *)(v12 + 160);
        v17 = *(_DWORD *)(v12 + 172);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v19) = v15;
        LOBYTE(v20) = v14;
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          a5,
          200,
          a7,
          v17,
          v16);
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v12) )
      ApiSetEditionSendCursorSuppressionUpdate(1LL);
  }
  else
  {
    v21 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 4) == 0 && (v21 & 8) != 0 || (v21 & 0x40) != 0 )
    {
      v32 = 0;
      v33 = 0;
      v34 = 0;
      memset(v30, 0, sizeof(v30));
      v31 = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v12, a4, v9, 585) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v22 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = *(_WORD *)(v12 + 160);
          v25 = *(_DWORD *)(v12 + 172);
          v26 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
          LOBYTE(v27) = v23;
          LOBYTE(v28) = v22;
          WPP_RECORDER_AND_TRACE_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(v26 + 69144),
            2,
            a5,
            201,
            a7,
            v25,
            v24);
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( (_BYTE)a2 || v11 )
  {
    v29 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v29) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v29,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      202,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
}
