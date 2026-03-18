/*
 * XREFs of ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1402153E0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x14004D4C0 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x140065934 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedToMessages(
        PERESOURCE *this,
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
  int v13; // edx
  int v14; // r8d
  char v15; // bp
  char v16; // r15
  __int64 UserSessionState; // rax
  CInputDest *v18; // rbp
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget **v20; // rdi
  struct tagCPointerRoutedAwayTarget **v21; // rbx
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
      216,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v12 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)v12 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(v12 + 180) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 7440);
    v26 = 0;
    v27 = 0;
    v28 = 0;
    memset(v25, 0, sizeof(v25));
    if ( !(unsigned int)CTouchProcessor::GenerateMessage((__int64)this, v12, a4, v9, 593, a5, a6, a7, (CInputDest *)v25) )
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
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v16,
          *(_QWORD *)(UserSessionState + 69136),
          2u,
          v23,
          0xD9u,
          v24);
      }
    }
    v18 = CInputDest::CInputDest((CInputDest *)v25, (const struct CInputDest *)(v12 + 352));
    NodeById = CTouchProcessor::FindNodeById(this, *(_WORD *)(v12 + 172), 0, 0);
    if ( NodeById )
    {
      v20 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280);
      v21 = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 35);
      if ( v21 != (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280) )
      {
        while ( v21 != v20 )
        {
          if ( CInputDest::operator==((__int64)(v21 + 2), (__int64)v18) )
          {
            CTouchProcessor::FreeRoutedAwayTarget(this, (struct tagCPointerRoutedAwayTarget ***)v21);
            break;
          }
          v21 = (struct tagCPointerRoutedAwayTarget **)*v21;
        }
      }
    }
    CInputDest::~CInputDest(v18);
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
    v22 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v22) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      218,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
}
