/*
 * XREFs of EtwpGetEnableInfoIndex @ 0x140475ED0
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpGetEnableInfoIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  for ( *a3 = 0; ; *a3 = v3 )
  {
    if ( (unsigned int)v3 >= 0x10 )
      return 0;
    if ( *(unsigned __int16 *)(32LL * (unsigned int)v3 + a1 + 134) == a2 && *(_DWORD *)(32 * (v3 + 4) + a1) )
      break;
    v3 = (unsigned int)(v3 + 1);
  }
  return 1;
}
