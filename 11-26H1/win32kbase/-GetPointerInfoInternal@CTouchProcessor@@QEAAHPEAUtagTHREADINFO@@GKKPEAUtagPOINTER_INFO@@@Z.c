/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x14004F53C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x14004F7EC (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x14004FA00 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  struct _LIST_ENTRY *v6; // rbx
  int v10; // edx
  int v11; // r8d
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  __int64 v13; // rsi
  char v14; // bl
  int v15; // edx
  int v16; // r8d
  bool v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx

  v6 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( (ThreadPointerHookData || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v6, a3)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0
    && (v13 = *((_QWORD *)ThreadPointerHookData + 3)) != 0 )
  {
    v14 = 1;
    if ( a4 != 1 && a4 != *((_DWORD *)ThreadPointerHookData + 5) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v14 = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          4,
          329,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v22 = 1629LL;
      goto LABEL_22;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerData(this, *((_QWORD *)ThreadPointerHookData + 3), a4, a5, a6) )
      return 1LL;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v14 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v14;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69136),
        2,
        4,
        330,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
        v13);
    }
  }
  else
  {
    v23 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 69136),
        2,
        4,
        328,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
        a3);
    }
  }
  v22 = 87LL;
LABEL_22:
  UserSetLastError(v22);
  return 0LL;
}
