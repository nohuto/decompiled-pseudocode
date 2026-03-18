/*
 * XREFs of ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x140053800
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall ShouldCallWndProcHook(const struct tagTHREADINFO *a1, int a2, unsigned int a3, struct tagWND *a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( ((*((_DWORD *)a1 + 178) | *(_DWORD *)(**((_QWORD **)a1 + 62) + 16LL)) & a2) == 0 )
    return 0;
  if ( a3 == 60 )
  {
    if ( a4 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a4 + 5) + 18LL) & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 81LL);
      if ( (*(_BYTE *)(*((_QWORD *)a4 + 5) + 18LL) & 4) != 0 )
        return 0;
    }
  }
  else if ( a3 >= 0x400 )
  {
    return !a4 || (*((_DWORD *)a4 + 96) & 0x40) == 0;
  }
  if ( _bittest16(&MessageTable[v5], 0xEu) )
    return 0;
  return !a4 || (*((_DWORD *)a4 + 96) & 0x40) == 0;
}
