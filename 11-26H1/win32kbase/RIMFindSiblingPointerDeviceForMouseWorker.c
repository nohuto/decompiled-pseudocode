/*
 * XREFs of RIMFindSiblingPointerDeviceForMouseWorker @ 0x14017B7F0
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1401BDE58 (RIMFindSiblingPointerDeviceForMouse.c)
 * Callees:
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMIsParentCommon @ 0x1400F0828 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouseWorker(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  unsigned int v5; // ebx
  char v6; // di
  bool v7; // si
  _QWORD **v8; // r14
  _QWORD *i; // rsi
  __int64 v10; // rdx
  int v11; // eax
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v4 = (int)WPP_GLOBAL_Control;
  v5 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v14) = v7;
    LOBYTE(v15) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      81,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      a1);
  }
  if ( *(_DWORD *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2437LL);
  *a2 = 0LL;
  v8 = (_QWORD **)(W32GetUserSessionState(a1, (_DWORD)a2, v4) + 136);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( !*((_BYTE *)i - 5)
      && *(_DWORD *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64)) + 0x30) == 2 )
    {
      v11 = *(_DWORD *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                      + 0xA8);
      if ( (v11 & 0x2000) == 0
        && (v11 & 0x400) == 0
        && (*(_DWORD *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                      + 0xB8) & 0x80u) != 0
        && (*(_BYTE *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                     + 0x90C) & 1) != 0 )
      {
        v10 = (unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v10,
                             *(_QWORD *)(v10 + 440),
                             *(_WORD *)(*(_QWORD *)(v10 + 440) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v10 + 440) + 112LL)) )
        {
          RawInputManagerDeviceObjectReference(i - 2);
          *a2 = i - 2;
          return 1;
        }
      }
    }
  }
  return v5;
}
