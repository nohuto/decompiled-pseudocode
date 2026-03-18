/*
 * XREFs of ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x1400A004C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

__int64 __fastcall GetFromPointerType(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // bp
  char v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v2 = 0;
  v3 = a1;
  v4 = 1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 == 3 )
      {
        v2 = 4;
        goto LABEL_3;
      }
      if ( a1 == 4 )
        goto LABEL_2;
      if ( a1 != 5 )
        goto LABEL_3;
    }
    v2 = 3;
    goto LABEL_3;
  }
LABEL_2:
  v2 = 1;
LABEL_3:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      24,
      (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
      v3,
      v2);
  }
  return v2;
}
