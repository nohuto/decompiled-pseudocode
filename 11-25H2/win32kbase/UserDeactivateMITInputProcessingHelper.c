/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1402189B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x140216EDC (UninitializeInputSensorsOnSharedThread.c)
 */

__int64 __fastcall UserDeactivateMITInputProcessingHelper(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  char v3; // bl
  bool v4; // r8
  __int64 result; // rax
  int v6; // edx

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( (_BYTE)a2 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      19,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  result = UninitializeInputSensorsOnSharedThread((__int64)v2, a2);
  LOBYTE(v6) = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) != 0)
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( (_BYTE)v6 || v3 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v6,
             v3,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             20,
             (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return result;
}
