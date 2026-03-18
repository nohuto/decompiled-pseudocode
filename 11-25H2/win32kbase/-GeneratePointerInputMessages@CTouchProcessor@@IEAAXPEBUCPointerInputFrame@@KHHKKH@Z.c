/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x14020112C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DEC04 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  int v8; // edi
  unsigned int v9; // ebp
  const struct CPointerInputFrame *v10; // r13
  CTouchProcessor *v11; // rbx
  char v12; // si
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int64 i; // r14
  CTouchProcessor *v17; // rcx
  char v18; // bp
  bool v19; // r15
  __int16 v20; // bx
  __int16 v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  void *v25; // r8
  int v26; // [rsp+28h] [rbp-F0h]
  int v27; // [rsp+38h] [rbp-E0h]
  _BYTE v28[113]; // [rsp+58h] [rbp-C0h] BYREF
  int v29; // [rsp+C9h] [rbp-4Fh]
  __int16 v30; // [rsp+CDh] [rbp-4Bh]
  char v31; // [rsp+CFh] [rbp-49h]
  unsigned int v33; // [rsp+130h] [rbp+18h]

  v33 = a3;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = this;
  v12 = 1;
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
      210,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)v11 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7304);
  v14 = *((unsigned int *)v10 + 12);
  v15 = 0;
  for ( i = *((_QWORD *)v10 + 30); v15 < (unsigned int)v14; ++v15 )
  {
    v17 = (CTouchProcessor *)(*((_QWORD *)v10 + 30) + 480 * v14);
    if ( i >= (unsigned __int64)v17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7311);
    if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(v17, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      LODWORD(v13) = *(_DWORD *)i;
      if ( (*(_DWORD *)i & 0x1000) == 0 && (a6 & *(_DWORD *)(i + 180)) == a6 && (*(_DWORD *)(i + 180) & a7) == 0 )
      {
        if ( (v13 & 0x80000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7321);
        if ( (*(_DWORD *)i & 0x80000) == 0 )
        {
          v29 = 0;
          v30 = 0;
          v31 = 0;
          memset(v28, 0, sizeof(v28));
          if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                (__int64)v11,
                                i,
                                *(_QWORD *)(i + 16),
                                v10,
                                0,
                                v9,
                                v8,
                                a5,
                                (CInputDest *)v28) )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
              LOBYTE(v23) = v19;
              LOBYTE(v24) = v18;
              WPP_RECORDER_AND_TRACE_SF_LL(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v24,
                v23,
                *(_QWORD *)(UserSessionState + 69144),
                2,
                v26,
                211,
                v27,
                v21,
                v20);
              v11 = this;
              v8 = a4;
            }
            v9 = v33;
          }
        }
      }
    }
    v14 = *((unsigned int *)v10 + 12);
    i += 480LL;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)v13 || v12 )
  {
    v25 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v25) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      (_DWORD)v25,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      212,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
}
