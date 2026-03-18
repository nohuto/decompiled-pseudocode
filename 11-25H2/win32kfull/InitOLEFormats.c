/*
 * XREFs of InitOLEFormats @ 0x1403EDCD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitOLEFormats(__int64 a1, __int64 a2)
{
  char v2; // bl
  bool v3; // di
  unsigned int i; // ebx
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v2 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v2 = 0;
  }
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v3;
    LOBYTE(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      13,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x15 )
      return 1LL;
    if ( !(unsigned __int16)UserAddAtomEx(off_14034C840[i], 1LL, 2LL) )
      break;
  }
  return 0LL;
}
