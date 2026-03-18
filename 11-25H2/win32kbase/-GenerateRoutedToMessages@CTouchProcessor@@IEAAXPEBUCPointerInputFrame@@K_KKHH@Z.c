/*
 * XREFs of ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140201C90
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F46E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1402092F0 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedToMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rbx
  const struct CPointerInputFrame *v9; // rdi
  char v11; // si
  __int64 v12; // r14
  __int64 v13; // rdx
  char v14; // bp
  bool v15; // r15
  __int16 v16; // bx
  int v17; // edi
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  CInputDest *v21; // rax
  void *v22; // r8
  int v23; // [rsp+28h] [rbp-D0h]
  int v24; // [rsp+38h] [rbp-C0h]
  _BYTE v25[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v26; // [rsp+C1h] [rbp-37h]
  __int16 v27; // [rsp+C5h] [rbp-33h]
  char v28; // [rsp+C7h] [rbp-31h]

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
      216,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v12 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)v12 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(v12 + 180) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7457);
    v26 = 0;
    v27 = 0;
    v28 = 0;
    memset(v25, 0, sizeof(v25));
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                          (__int64)this,
                          v12,
                          a4,
                          v9,
                          0x251u,
                          a5,
                          a6,
                          a7,
                          (CInputDest *)v25) )
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
          v23,
          217,
          v24,
          v17,
          v16);
      }
    }
    v21 = CInputDest::CInputDest((CInputDest *)v25, (const struct CInputDest *)(v12 + 352));
    CTouchProcessor::RemoveRoutedAwayTarget(this, *(unsigned __int16 *)(v12 + 172), v21);
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
    v22 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v22) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      218,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
}
