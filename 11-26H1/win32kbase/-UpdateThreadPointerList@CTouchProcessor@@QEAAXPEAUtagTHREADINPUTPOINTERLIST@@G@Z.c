/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x14004B070
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x14004C460 (ApiSetEditionFindThreadPointerData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1401C09E8 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        PERESOURCE *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  unsigned __int16 v3; // r14
  struct tagTHREADINPUTPOINTERLIST *v4; // rdi
  __int64 v6; // r13
  PERESOURCE *v7; // r12
  __int64 v8; // rdx
  __int16 v9; // r8
  int v10; // esi
  struct tagTHREADINPUTPOINTERLIST *v11; // rbx
  struct tagTHREADINPUTPOINTERLIST *v12; // rcx
  struct tagTHREADINPUTPOINTERLIST *v13; // r15
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r14
  _QWORD *v17; // r13
  __int64 v18; // r14
  CTouchProcessor *v19; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rbx
  __int16 v26; // r8
  int v27; // edx
  __int16 v28; // r8
  __int64 ThreadPointerData; // rbx
  int v30; // [rsp+54h] [rbp-25h]
  __int64 v31; // [rsp+58h] [rbp-21h]
  _QWORD v32[2]; // [rsp+60h] [rbp-19h] BYREF
  char v33; // [rsp+80h] [rbp+7h]
  PERESOURCE *v34; // [rsp+88h] [rbp+Fh]

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      111,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v6 = 0LL;
  v7 = this + 4;
  v32[0] = 0LL;
  v33 = 0;
  v34 = this + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(this[4]);
  v10 = 0;
  if ( v3 == 1 )
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( (_BYTE)v8 || (_BYTE)v9 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        112,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    goto LABEL_87;
  }
  if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 != v4 )
  {
    v31 = 0LL;
    if ( v3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, v3);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4875LL);
      v6 = *(_QWORD *)(ThreadPointerData + 24);
      v31 = v6;
    }
    v11 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 != v4 )
    {
      LODWORD(v8) = 1;
      do
      {
        v12 = v11;
        v30 = v10++;
        v13 = v11;
        v11 = *(struct tagTHREADINPUTPOINTERLIST **)v11;
        v14 = *((_QWORD *)v12 + 3);
        v15 = *((_DWORD *)v12 + 12);
        if ( v6 == v14 )
        {
          *((_DWORD *)v12 + 12) = v15 | 2;
        }
        else if ( (v15 & 2) != 0 )
        {
          if ( !v14 || !v6 )
            goto LABEL_23;
          if ( (*(_DWORD *)(v14 + 36) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
          if ( (*(_DWORD *)(v6 + 36) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
          if ( *(_DWORD *)(v14 + 28) != *(_DWORD *)(v6 + 28) )
          {
LABEL_23:
            v16 = *((_QWORD *)v13 + 3);
            if ( v16 && (*(_DWORD *)(v16 + 36) & 0x80u) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
            if ( !ExIsResourceAcquiredSharedLite(*v7) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12723LL);
            v17 = *(_QWORD **)v16;
            if ( *(_QWORD *)v16 == *(_QWORD *)(v16 + 8) )
            {
              if ( *v17 != v16 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12743LL);
              if ( v17[1] != v16 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12744LL);
              if ( *((_WORD *)v17 - 112) != *(_WORD *)(v16 + 16) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12750LL);
              if ( *((_DWORD *)v17 - 50) == 3 && !*((_DWORD *)v17 - 55) )
                goto LABEL_114;
            }
            v18 = *((_QWORD *)v13 + 3);
            if ( v18 && (*(_DWORD *)(v18 + 36) & 0x80u) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
            if ( !ExIsResourceAcquiredSharedLite(*v7) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12703LL);
            if ( (*(_DWORD *)(v18 + 36) & 0x20) != 0 )
            {
LABEL_114:
              ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v13);
              v10 = v30;
            }
            v6 = v31;
          }
          LODWORD(v8) = 1;
        }
      }
      while ( v11 != v4 );
    }
    if ( v10 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4953LL);
    LOBYTE(v8) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( (_BYTE)v8 || (_BYTE)v9 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        114,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_87:
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v32);
    goto LABEL_80;
  }
  v19 = WPP_GLOBAL_Control;
  LOBYTE(v8) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      113,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( v33 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v19, v8);
    if ( CurrentThreadWin32Thread )
      v23 = *CurrentThreadWin32Thread;
    else
      v23 = 0LL;
    *(_QWORD *)(v23 + 376) = v32[1];
    v25 = *(_QWORD *)(W32GetUserSessionState(v23, v21, v22) + 3256);
    LOBYTE(v24) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( (_BYTE)v24 || (_BYTE)v26 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v26,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        301,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 32)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12842LL);
    CTouchProcessor::UnreferenceMsgData(v25, v32[0], 8LL);
    LOBYTE(v27) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( (_BYTE)v27 || (_BYTE)v28 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v28,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        302,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
LABEL_80:
  ExReleaseResourceAndLeaveCriticalRegion(*v34);
}
