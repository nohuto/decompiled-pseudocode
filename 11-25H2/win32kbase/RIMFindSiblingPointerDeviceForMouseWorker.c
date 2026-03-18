/*
 * XREFs of RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401E06B0
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1401E0654 (RIMFindSiblingPointerDeviceForMouse.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMIsParentCommon @ 0x14012AAD0 (RIMIsParentCommon.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouseWorker(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  char v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  _QWORD **v10; // r14
  _QWORD *i; // rdi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8

  v4 = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      81,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      a1);
  }
  if ( *(_DWORD *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2442);
  *a2 = 0LL;
  v10 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 136);
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v12 = (__int64)(i + 7);
    if ( !*((_BYTE *)i - 5) && *(_DWORD *)((v12 & -(__int64)(i != (_QWORD *)16)) + 0x30) == 2 )
    {
      v13 = *(_DWORD *)((v12 & -(__int64)(i != (_QWORD *)16)) + 0xA8);
      if ( (v13 & 0x2000) == 0
        && (v13 & 0x400) == 0
        && (*(_DWORD *)((v12 & -(__int64)(i != (_QWORD *)16)) + 0xB8) & 0x80u) != 0
        && (*(_BYTE *)((v12 & -(__int64)(i != (_QWORD *)16)) + 0x914) & 1) != 0 )
      {
        v14 = *(_QWORD *)((v12 & -(__int64)(i != (_QWORD *)16)) + 0x1B8);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v12 & -(__int64)(i != (_QWORD *)16),
                             v14,
                             *(_WORD *)(v14 + 110),
                             *(_WORD *)(v14 + 112)) )
        {
          RawInputManagerDeviceObjectReference(i - 2);
          *a2 = i - 2;
          return 1;
        }
      }
    }
  }
  return v4;
}
