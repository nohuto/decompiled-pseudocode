/*
 * XREFs of ?ReportPenKey@@YAXIE@Z @ 0x140259668
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1402D2298 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 */

void __fastcall ReportPenKey(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int CurrentWin32kSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (a1 & 8) != 0 )
  {
    v2 = a2;
    v3 = a1;
    if ( (unsigned __int8)(a2 + 127) <= 2u )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
      ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, &CurrentWin32kSessionId, 0, 0);
      TraceLoggingPenHotkey(v3, v2);
    }
  }
}
