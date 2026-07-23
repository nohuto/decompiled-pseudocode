/*
 * XREFs of EtwpGetFlagExtension @ 0x140AB1FF0
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x140AB0700 (EtwpUpdatePerProcessTracing.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140AB0CE0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140AB0E14 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpCheckForStackTracingExtension @ 0x140AB1F2C (EtwpCheckForStackTracingExtension.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall EtwpGetFlagExtension(__int64 a1, __int16 a2)
{
  int v2; // eax
  unsigned __int16 v3; // r9
  unsigned __int16 *v4; // r8

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  if ( v2 < 0 )
  {
    v4 = (unsigned __int16 *)((unsigned __int16)v2 + a1 + 4);
    while ( v3 < *(_WORD *)((unsigned __int16)v2 + a1 + 2) )
    {
      if ( v4[1] == a2 )
        return v4;
      ++v3;
      v4 += 2 * *v4;
    }
  }
  return 0LL;
}
