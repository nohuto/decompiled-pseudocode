/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x140067994
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x14006A8A0 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  int v8; // ebp
  const struct CPointerInputFrame *v9; // r15
  CTouchProcessor *v10; // rbx
  char v11; // si
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned __int64 i; // r14
  CTouchProcessor *v16; // rcx
  int v17; // r8d
  char v18; // bp
  bool v19; // r12
  __int16 v20; // bx
  __int16 v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  void *v25; // r8
  int v26; // [rsp+28h] [rbp-F0h]
  _BYTE v27[113]; // [rsp+58h] [rbp-C0h] BYREF
  int v28; // [rsp+C9h] [rbp-4Fh]
  __int16 v29; // [rsp+CDh] [rbp-4Bh]
  char v30; // [rsp+CFh] [rbp-49h]
  int v32; // [rsp+130h] [rbp+18h]

  v32 = a3;
  v8 = a3;
  v9 = a2;
  v10 = this;
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
      210,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)v10 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7287LL);
  v13 = *((unsigned int *)v9 + 12);
  v14 = 0;
  for ( i = *((_QWORD *)v9 + 30); v14 < (unsigned int)v13; ++v14 )
  {
    v16 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v13);
    if ( i >= (unsigned __int64)v16 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7294LL);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v16, v9, (const struct CPointerInfoNode *)i, a8) )
    {
      if ( (*(_DWORD *)i & 0x1000) == 0 )
      {
        v12 = *(_DWORD *)(i + 180);
        if ( (a6 & v12) == a6 && (v12 & a7) == 0 )
        {
          if ( (*(_DWORD *)i & 0x80000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7304LL);
          if ( (*(_DWORD *)i & 0x80000) == 0 )
          {
            v28 = 0;
            v29 = 0;
            v30 = 0;
            memset(v27, 0, sizeof(v27));
            v26 = v8;
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(v10, i, *(_QWORD *)(i + 16), v9, 0) )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
              {
                v18 = 0;
              }
              v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v20 = *(_WORD *)(i + 160);
                v21 = *(_WORD *)(i + 172);
                UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v17);
                LOBYTE(v23) = v19;
                LOBYTE(v24) = v18;
                WPP_RECORDER_AND_TRACE_SF_LL(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v24,
                  v23,
                  *(_QWORD *)(UserSessionState + 69136),
                  2,
                  v26,
                  211,
                  a5,
                  v21,
                  v20);
                v10 = this;
              }
              v8 = v32;
            }
          }
        }
      }
    }
    v13 = *((unsigned int *)v9 + 12);
    i += 480LL;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v11 = 0;
  if ( (_BYTE)v12 || v11 )
  {
    v25 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v25) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      (_DWORD)v25,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      212,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
}
