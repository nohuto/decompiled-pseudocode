/*
 * XREFs of ?GetFromPointerType@@YA?AW4CompositionInputType@@K@Z @ 0x140070368
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

__int64 __fastcall GetFromPointerType(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  char v4; // bp
  char v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v3 = 0;
  v4 = a1;
  v5 = 1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 == 3 )
      {
        v3 = 4;
        goto LABEL_3;
      }
      if ( a1 == 4 )
        goto LABEL_2;
      if ( a1 != 5 )
        goto LABEL_3;
    }
    v3 = 3;
    goto LABEL_3;
  }
LABEL_2:
  v3 = 1;
LABEL_3:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      2,
      24,
      (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
      v4,
      v3);
  }
  return v3;
}
