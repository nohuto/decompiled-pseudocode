/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1401CBB80
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1401CBBB0 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(struct tagPROCESSINFO *a1)
{
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 230) )
    {
      TraceLoggingProcessUsageOnTerminationEvent(a1);
      *((_DWORD *)a1 + 230) = 0;
    }
  }
}
